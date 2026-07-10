#pragma once

#include "../Controladores/PacienteController.h"

namespace ProyectoPOO {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class UsuariosForm : public System::Windows::Forms::Form
    {
    public:
        UsuariosForm(void)
        {
            InitializeComponent();
            controlador = gcnew ProyectoPOO::Controladores::PacienteController();
        }

    protected:
        ~UsuariosForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Label^ labelTitulo;
    private: System::Windows::Forms::Label^ labelCedula;
    private: System::Windows::Forms::TextBox^ textBoxCedula;
    private: System::Windows::Forms::Button^ buttonBuscar;
    private: System::Windows::Forms::Button^ buttonAtras;
    private: System::Windows::Forms::Label^ labelMensaje;
    private: System::Windows::Forms::Panel^ panelResultado;
    private: System::Windows::Forms::Label^ labelResultadoTitulo;
    private: System::Windows::Forms::Label^ labelResultadoDatos;
    private: ProyectoPOO::Controladores::PacienteController^ controlador;

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->labelTitulo = (gcnew System::Windows::Forms::Label());
            this->labelCedula = (gcnew System::Windows::Forms::Label());
            this->textBoxCedula = (gcnew System::Windows::Forms::TextBox());
            this->buttonBuscar = (gcnew System::Windows::Forms::Button());
            this->buttonAtras = (gcnew System::Windows::Forms::Button());
            this->labelMensaje = (gcnew System::Windows::Forms::Label());
            this->panelResultado = (gcnew System::Windows::Forms::Panel());
            this->labelResultadoTitulo = (gcnew System::Windows::Forms::Label());
            this->labelResultadoDatos = (gcnew System::Windows::Forms::Label());
            this->panelResultado->SuspendLayout();
            this->SuspendLayout();
            //
            // labelTitulo
            //
            this->labelTitulo->AutoSize = true;
            this->labelTitulo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelTitulo->Location = System::Drawing::Point(214, 35);
            this->labelTitulo->Name = L"labelTitulo";
            this->labelTitulo->Size = System::Drawing::Size(321, 40);
            this->labelTitulo->TabIndex = 0;
            this->labelTitulo->Text = L"Buscar paciente";
            //
            // labelCedula
            //
            this->labelCedula->AutoSize = true;
            this->labelCedula->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelCedula->Location = System::Drawing::Point(100, 121);
            this->labelCedula->Name = L"labelCedula";
            this->labelCedula->Size = System::Drawing::Size(77, 23);
            this->labelCedula->TabIndex = 1;
            this->labelCedula->Text = L"Cedula:";
            //
            // textBoxCedula
            //
            this->textBoxCedula->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxCedula->Location = System::Drawing::Point(190, 118);
            this->textBoxCedula->Name = L"textBoxCedula";
            this->textBoxCedula->Size = System::Drawing::Size(245, 30);
            this->textBoxCedula->TabIndex = 2;
            this->textBoxCedula->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &UsuariosForm::textBoxCedula_KeyDown);
            //
            // buttonBuscar
            //
            this->buttonBuscar->BackColor = System::Drawing::SystemColors::MenuHighlight;
            this->buttonBuscar->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonBuscar->ForeColor = System::Drawing::Color::White;
            this->buttonBuscar->Location = System::Drawing::Point(455, 113);
            this->buttonBuscar->Name = L"buttonBuscar";
            this->buttonBuscar->Size = System::Drawing::Size(125, 38);
            this->buttonBuscar->TabIndex = 3;
            this->buttonBuscar->Text = L"Buscar";
            this->buttonBuscar->UseVisualStyleBackColor = false;
            this->buttonBuscar->Click += gcnew System::EventHandler(this, &UsuariosForm::buttonBuscar_Click);
            //
            // buttonAtras
            //
            this->buttonAtras->BackColor = System::Drawing::SystemColors::MenuHighlight;
            this->buttonAtras->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonAtras->ForeColor = System::Drawing::Color::White;
            this->buttonAtras->Location = System::Drawing::Point(45, 432);
            this->buttonAtras->Name = L"buttonAtras";
            this->buttonAtras->Size = System::Drawing::Size(120, 38);
            this->buttonAtras->TabIndex = 7;
            this->buttonAtras->Text = L"Atras";
            this->buttonAtras->UseVisualStyleBackColor = false;
            this->buttonAtras->Click += gcnew System::EventHandler(this, &UsuariosForm::buttonAtras_Click);
            //
            // labelMensaje
            //
            this->labelMensaje->AutoSize = true;
            this->labelMensaje->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelMensaje->ForeColor = System::Drawing::Color::Red;
            this->labelMensaje->Location = System::Drawing::Point(190, 166);
            this->labelMensaje->Name = L"labelMensaje";
            this->labelMensaje->Size = System::Drawing::Size(0, 19);
            this->labelMensaje->TabIndex = 4;
            //
            // panelResultado
            //
            this->panelResultado->BackColor = System::Drawing::Color::WhiteSmoke;
            this->panelResultado->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panelResultado->Controls->Add(this->labelResultadoDatos);
            this->panelResultado->Controls->Add(this->labelResultadoTitulo);
            this->panelResultado->Location = System::Drawing::Point(70, 205);
            this->panelResultado->Name = L"panelResultado";
            this->panelResultado->Size = System::Drawing::Size(590, 190);
            this->panelResultado->TabIndex = 5;
            //
            // labelResultadoTitulo
            //
            this->labelResultadoTitulo->AutoSize = true;
            this->labelResultadoTitulo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelResultadoTitulo->Location = System::Drawing::Point(20, 18);
            this->labelResultadoTitulo->Name = L"labelResultadoTitulo";
            this->labelResultadoTitulo->Size = System::Drawing::Size(227, 26);
            this->labelResultadoTitulo->TabIndex = 0;
            this->labelResultadoTitulo->Text = L"Resultado de busqueda";
            //
            // labelResultadoDatos
            //
            this->labelResultadoDatos->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelResultadoDatos->Location = System::Drawing::Point(24, 58);
            this->labelResultadoDatos->Name = L"labelResultadoDatos";
            this->labelResultadoDatos->Size = System::Drawing::Size(540, 120);
            this->labelResultadoDatos->TabIndex = 1;
            this->labelResultadoDatos->Text = L"Ingrese una cedula y presione Buscar.";
            //
            // UsuariosForm
            //
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->BackColor = System::Drawing::SystemColors::ButtonShadow;
            this->ClientSize = System::Drawing::Size(714, 525);
            this->Controls->Add(this->panelResultado);
            this->Controls->Add(this->labelMensaje);
            this->Controls->Add(this->buttonAtras);
            this->Controls->Add(this->buttonBuscar);
            this->Controls->Add(this->textBoxCedula);
            this->Controls->Add(this->labelCedula);
            this->Controls->Add(this->labelTitulo);
            this->Name = L"UsuariosForm";
            this->Text = L"Buscar paciente";
            this->Load += gcnew System::EventHandler(this, &UsuariosForm::UsuariosForm_Load);
            this->panelResultado->ResumeLayout(false);
            this->panelResultado->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();
        }
#pragma endregion

    private: System::Void UsuariosForm_Load(System::Object^ sender, System::EventArgs^ e) {
        controlador->Recargar();
    }

    private: System::Void buttonBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
        BuscarPacientePorCedula();
    }

    private: System::Void textBoxCedula_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
        if (e->KeyCode == System::Windows::Forms::Keys::Enter) {
            BuscarPacientePorCedula();
            e->SuppressKeyPress = true;
        }
    }

    private: System::Void buttonAtras_Click(System::Object^ sender, System::EventArgs^ e) {
        this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
        this->Close();
    }

    private: System::Void BuscarPacientePorCedula() {
        System::String^ cedula = this->textBoxCedula->Text->Trim();
        if (cedula->Length == 0) {
            this->labelMensaje->ForeColor = System::Drawing::Color::Red;
            this->labelMensaje->Text = L"Ingrese la cedula del paciente";
            LimpiarResultado();
            return;
        }

        ProyectoPOO::Modelos::Paciente^ paciente = controlador->BuscarPorCedula(cedula);
        if (paciente != nullptr) {
            MostrarPaciente(paciente);
            return;
        }

        this->labelMensaje->ForeColor = System::Drawing::Color::Red;
        this->labelMensaje->Text = L"No se encontro un paciente con esa cedula";
        LimpiarResultado();
    }

    private: System::Void MostrarPaciente(ProyectoPOO::Modelos::Paciente^ paciente) {
        this->labelMensaje->ForeColor = System::Drawing::Color::Green;
        this->labelMensaje->Text = L"Paciente encontrado";
        this->labelResultadoTitulo->Text = L"Paciente: " + paciente->Nombre;
        this->labelResultadoDatos->Text =
            L"ID: " + paciente->Id +
            L"    Cedula: " + paciente->Cedula +
            L"    Estado: " + paciente->Estado + System::Environment::NewLine +
            L"Correo: " + paciente->Correo +
            L"    Tipo de sangre: " + paciente->TipoSangre + System::Environment::NewLine +
            L"Motivo: " + paciente->Motivo + System::Environment::NewLine +
            L"Alergias: " + paciente->Alergias +
            L"    Enfermedades: " + paciente->Enfermedades + System::Environment::NewLine +
            L"Seguro: " + paciente->SeguroMedico +
            L"    Medico: " + paciente->MedicoTratante;
    }

    private: System::Void LimpiarResultado() {
        this->labelResultadoTitulo->Text = L"Resultado de busqueda";
        this->labelResultadoDatos->Text = L"Ingrese una cedula y presione Buscar.";
    }

    };
}
