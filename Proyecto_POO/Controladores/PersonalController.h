#pragma once

#include "../Modelos/PersonalHospital.h"
#include "RutasDatos.h"

namespace ProyectoPOO {
namespace Controladores {

    using namespace System;
    using namespace System::Collections::Generic;
    using namespace System::IO;
    using namespace System::Security::Cryptography;
    using namespace System::Text;
    using namespace ProyectoPOO::Modelos;

    public ref class PersonalController
    {
    private:
        String^ rutaArchivo;

        array<Byte>^ ObtenerClave()
        {
            array<Byte>^ origen = Encoding::UTF8->GetBytes(L"ProyectoPOO2024");
            array<Byte>^ clave = gcnew array<Byte>(16);
            for (int i = 0; i < clave->Length; i++) {
                clave[i] = origen[i % origen->Length];
            }
            return clave;
        }

        String^ Encriptar(String^ texto)
        {
            RijndaelManaged^ algoritmo = gcnew RijndaelManaged();
            algoritmo->Key = ObtenerClave();
            algoritmo->Mode = CipherMode::CBC;
            algoritmo->Padding = PaddingMode::PKCS7;

            MemoryStream^ memoria = gcnew MemoryStream();
            memoria->Write(algoritmo->IV, 0, algoritmo->IV->Length);
            CryptoStream^ cifrado = gcnew CryptoStream(
                memoria,
                algoritmo->CreateEncryptor(algoritmo->Key, algoritmo->IV),
                CryptoStreamMode::Write);
            array<Byte>^ datos = Encoding::UTF8->GetBytes(texto);
            cifrado->Write(datos, 0, datos->Length);
            cifrado->FlushFinalBlock();
            String^ resultado = Convert::ToBase64String(memoria->ToArray());
            cifrado->Close();
            memoria->Close();
            delete algoritmo;
            return resultado;
        }

        String^ Desencriptar(String^ texto)
        {
            array<Byte>^ datos = Convert::FromBase64String(texto);
            if (datos->Length < 17) {
                throw gcnew FormatException(L"Registro cifrado incompleto.");
            }

            RijndaelManaged^ algoritmo = gcnew RijndaelManaged();
            algoritmo->Key = ObtenerClave();
            algoritmo->Mode = CipherMode::CBC;
            algoritmo->Padding = PaddingMode::PKCS7;
            array<Byte>^ iv = gcnew array<Byte>(16);
            Array::Copy(datos, 0, iv, 0, iv->Length);
            algoritmo->IV = iv;

            MemoryStream^ memoria = gcnew MemoryStream(datos, 16, datos->Length - 16);
            CryptoStream^ cifrado = gcnew CryptoStream(
                memoria,
                algoritmo->CreateDecryptor(algoritmo->Key, algoritmo->IV),
                CryptoStreamMode::Read);
            StreamReader^ reader = gcnew StreamReader(cifrado, Encoding::UTF8);
            String^ resultado = reader->ReadToEnd();
            reader->Close();
            cifrado->Close();
            memoria->Close();
            delete algoritmo;
            return resultado;
        }

    public:
        PersonalController()
        {
            rutaArchivo = RutasDatos::ObtenerRuta(L"personal_hospital.txt");
        }

        List<PersonalHospital^>^ ObtenerTodos()
        {
            List<PersonalHospital^>^ personal = gcnew List<PersonalHospital^>();
            if (!File::Exists(rutaArchivo)) {
                return personal;
            }

            for each (String^ linea in File::ReadAllLines(rutaArchivo, Encoding::UTF8)) {
                if (String::IsNullOrWhiteSpace(linea)) {
                    continue;
                }

                array<String^>^ datos = Desencriptar(linea)->Split(';');
                if (datos->Length != 8) {
                    continue;
                }

                PersonalHospital^ persona = gcnew PersonalHospital();
                persona->Nombre = datos[0];
                persona->Cedula = datos[1];
                persona->Telefono = datos[2];
                persona->Cargo = datos[3];
                persona->Turno = datos[4];
                persona->Zona = datos[5];
                persona->PacienteAsignado = datos[6];
                persona->IdPaciente = datos[7];
                personal->Add(persona);
            }
            return personal;
        }

        void Agregar(PersonalHospital^ persona)
        {
            if (persona == nullptr) {
                throw gcnew ArgumentNullException(L"persona");
            }

            String^ plano = persona->Nombre + L";" + persona->Cedula + L";" + persona->Telefono + L";" +
                persona->Cargo + L";" + persona->Turno + L";" + persona->Zona + L";" +
                persona->PacienteAsignado + L";" + persona->IdPaciente;

            StreamWriter^ writer = gcnew StreamWriter(rutaArchivo, true, Encoding::UTF8);
            try {
                writer->WriteLine(Encriptar(plano));
            }
            finally {
                writer->Close();
            }
        }
    };

}
}
