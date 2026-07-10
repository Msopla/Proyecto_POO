#pragma once

#include "MenuForm.h"
#include "UsuariosForm.h"
#include "../Controladores/AutenticacionController.h"

namespace ProyectoPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			this->controlador = gcnew ProyectoPOO::Controladores::AutenticacionController();
		}

	protected:

		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ labelTitulo;
	private: System::Windows::Forms::Label^ labelUsuario;
	private: System::Windows::Forms::Label^ labelContrasena;
	private: System::Windows::Forms::TextBox^ textBoxUsuario;
	private: System::Windows::Forms::TextBox^ textBoxContrasena;
	private: System::Windows::Forms::Button^ buttonLogin;
	private: System::Windows::Forms::Button^ buttonRegistrar;
	private: System::Windows::Forms::Label^ labelMensaje;
	private: ProyectoPOO::Controladores::AutenticacionController^ controlador;

	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code


		void InitializeComponent(void)
		{
			this->labelTitulo = (gcnew System::Windows::Forms::Label());
			this->labelUsuario = (gcnew System::Windows::Forms::Label());
			this->labelContrasena = (gcnew System::Windows::Forms::Label());
			this->textBoxUsuario = (gcnew System::Windows::Forms::TextBox());
			this->textBoxContrasena = (gcnew System::Windows::Forms::TextBox());
			this->buttonLogin = (gcnew System::Windows::Forms::Button());
			this->buttonRegistrar = (gcnew System::Windows::Forms::Button());
			this->labelMensaje = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labelTitulo
			// 
			this->labelTitulo->AutoSize = true;
			this->labelTitulo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTitulo->Location = System::Drawing::Point(267, 37);
			this->labelTitulo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelTitulo->Name = L"labelTitulo";
			this->labelTitulo->Size = System::Drawing::Size(275, 46);
			this->labelTitulo->TabIndex = 0;
			this->labelTitulo->Text = L"Iniciar Sesion";
			// 
			// labelUsuario
			// 
			this->labelUsuario->AutoSize = true;
			this->labelUsuario->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelUsuario->Location = System::Drawing::Point(200, 160);
			this->labelUsuario->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelUsuario->Name = L"labelUsuario";
			this->labelUsuario->Size = System::Drawing::Size(78, 22);
			this->labelUsuario->TabIndex = 1;
			this->labelUsuario->Text = L"Usuario:";
			// 
			// labelContrasena
			// 
			this->labelContrasena->AutoSize = true;
			this->labelContrasena->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelContrasena->Location = System::Drawing::Point(200, 222);
			this->labelContrasena->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelContrasena->Name = L"labelContrasena";
			this->labelContrasena->Size = System::Drawing::Size(117, 23);
			this->labelContrasena->TabIndex = 3;
			this->labelContrasena->Text = L"Contrasena:";
			// 
			// textBoxUsuario
			// 
			this->textBoxUsuario->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxUsuario->Location = System::Drawing::Point(333, 158);
			this->textBoxUsuario->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxUsuario->Name = L"textBoxUsuario";
			this->textBoxUsuario->Size = System::Drawing::Size(332, 29);
			this->textBoxUsuario->TabIndex = 2;
			// 
			// textBoxContrasena
			// 
			this->textBoxContrasena->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxContrasena->Location = System::Drawing::Point(333, 219);
			this->textBoxContrasena->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxContrasena->Name = L"textBoxContrasena";
			this->textBoxContrasena->Size = System::Drawing::Size(332, 29);
			this->textBoxContrasena->TabIndex = 4;
			this->textBoxContrasena->UseSystemPasswordChar = true;
			// 
			// buttonLogin
			// 
			this->buttonLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->buttonLogin->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonLogin->ForeColor = System::Drawing::Color::White;
			this->buttonLogin->Location = System::Drawing::Point(267, 320);
			this->buttonLogin->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonLogin->Name = L"buttonLogin";
			this->buttonLogin->Size = System::Drawing::Size(173, 55);
			this->buttonLogin->TabIndex = 5;
			this->buttonLogin->Text = L"Iniciar Sesion";
			this->buttonLogin->UseVisualStyleBackColor = false;
			this->buttonLogin->Click += gcnew System::EventHandler(this, &LoginForm::buttonLogin_Click);
			// 
			// buttonRegistrar
			// 
			this->buttonRegistrar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->buttonRegistrar->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRegistrar->ForeColor = System::Drawing::Color::White;
			this->buttonRegistrar->Location = System::Drawing::Point(493, 320);
			this->buttonRegistrar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonRegistrar->Name = L"buttonRegistrar";
			this->buttonRegistrar->Size = System::Drawing::Size(173, 55);
			this->buttonRegistrar->TabIndex = 6;
			this->buttonRegistrar->Text = L"Registrarse";
			this->buttonRegistrar->UseVisualStyleBackColor = false;
			this->buttonRegistrar->Click += gcnew System::EventHandler(this, &LoginForm::buttonRegistrar_Click);
			// 
			// labelMensaje
			// 
			this->labelMensaje->AutoSize = true;
			this->labelMensaje->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMensaje->ForeColor = System::Drawing::Color::Red;
			this->labelMensaje->Location = System::Drawing::Point(267, 406);
			this->labelMensaje->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelMensaje->Name = L"labelMensaje";
			this->labelMensaje->Size = System::Drawing::Size(0, 19);
			this->labelMensaje->TabIndex = 7;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->ClientSize = System::Drawing::Size(901, 495);
			this->Controls->Add(this->labelMensaje);
			this->Controls->Add(this->buttonRegistrar);
			this->Controls->Add(this->buttonLogin);
			this->Controls->Add(this->textBoxContrasena);
			this->Controls->Add(this->labelContrasena);
			this->Controls->Add(this->textBoxUsuario);
			this->Controls->Add(this->labelUsuario);
			this->Controls->Add(this->labelTitulo);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ usuario = this->textBoxUsuario->Text->Trim();
		String^ contrasena = this->textBoxContrasena->Text->Trim();

		// Validar campos vacios
		if (usuario->Length == 0 || contrasena->Length == 0) {
			this->labelMensaje->ForeColor = System::Drawing::Color::Red;
			this->labelMensaje->Text = L"Completa usuario y contrasena";
			return;
		}

		ProyectoPOO::Modelos::Usuario^ usuarioAutenticado = controlador->Autenticar(usuario, contrasena);
		if (usuarioAutenticado != nullptr && usuarioAutenticado->Rol == L"Administrador") {
			this->labelMensaje->ForeColor = System::Drawing::Color::Green;
			this->labelMensaje->Text = L"Inicio de sesion exitoso!";

			MenuForm^ menu = gcnew MenuForm();
			menu->ShowDialog();

			this->Close();
		}
		else if (usuarioAutenticado != nullptr) {
			this->labelMensaje->ForeColor = System::Drawing::Color::Green;
			this->labelMensaje->Text = L"Inicio de sesion exitoso!";

			UsuariosForm^ usuarios = gcnew UsuariosForm();
			usuarios->ShowDialog();

			this->Close();
		}
		else {
			this->labelMensaje->ForeColor = System::Drawing::Color::Red;
			this->labelMensaje->Text = L"Usuario o contrasena incorrectos";
			this->textBoxUsuario->Clear();
			this->textBoxContrasena->Clear();
			this->textBoxUsuario->Focus();
		}
	}
	private: System::Void buttonRegistrar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ usuario = this->textBoxUsuario->Text->Trim();
		String^ contrasena = this->textBoxContrasena->Text->Trim();
		String^ error = controlador->Registrar(usuario, contrasena);
		if (error != nullptr) {
			this->labelMensaje->ForeColor = System::Drawing::Color::Red;
			this->labelMensaje->Text = error;
			return;
		}

		// Enviar los usuarios registrados a la busqueda de pacientes
		this->labelMensaje->ForeColor = System::Drawing::Color::Green;
		this->labelMensaje->Text = L"Registro exitoso!";

		UsuariosForm^ usuarios = gcnew UsuariosForm();
		usuarios->ShowDialog();

		this->Close();
	}
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
