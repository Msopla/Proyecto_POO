#pragma once

#include "MenuForm.h"

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
			this->usuarios = gcnew System::Collections::Generic::List<System::Collections::Generic::Dictionary<System::String^, System::String^>^>();
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
	private: System::Collections::Generic::List<System::Collections::Generic::Dictionary<System::String^, System::String^>^>^ usuarios;

	private:

		System::ComponentModel::Container ^components;

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
			this->labelTitulo->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTitulo->Location = System::Drawing::Point(200, 30);
			this->labelTitulo->Name = L"labelTitulo";
			this->labelTitulo->Size = System::Drawing::Size(276, 46);
			this->labelTitulo->TabIndex = 0;
			this->labelTitulo->Text = L"Iniciar Sesion";
			// 
			// labelUsuario
			// 
			this->labelUsuario->AutoSize = true;
			this->labelUsuario->Font = (gcnew System::Drawing::Font(L"times new roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelUsuario->Location = System::Drawing::Point(150, 130);
			this->labelUsuario->Name = L"labelUsuario";
			this->labelUsuario->Size = System::Drawing::Size(65, 18);
			this->labelUsuario->TabIndex = 1;
			this->labelUsuario->Text = L"Usuario:";
			// 
			// textBoxUsuario
			// 
			this->textBoxUsuario->Font = (gcnew System::Drawing::Font(L"times new roman", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxUsuario->Location = System::Drawing::Point(250, 128);
			this->textBoxUsuario->Name = L"textBoxUsuario";
			this->textBoxUsuario->Size = System::Drawing::Size(250, 24);
			this->textBoxUsuario->TabIndex = 2;
			// 
			// labelContrasena
			// 
			this->labelContrasena->AutoSize = true;
			this->labelContrasena->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelContrasena->Location = System::Drawing::Point(150, 180);
			this->labelContrasena->Name = L"labelContrasena";
			this->labelContrasena->Size = System::Drawing::Size(85, 18);
			this->labelContrasena->TabIndex = 3;
			this->labelContrasena->Text = L"Contrasena:";
			// 
			// textBoxContrasena
			// 
			this->textBoxContrasena->Font = (gcnew System::Drawing::Font(L"Arial", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxContrasena->Location = System::Drawing::Point(250, 178);
			this->textBoxContrasena->Name = L"textBoxContrasena";
			this->textBoxContrasena->Size = System::Drawing::Size(250, 24);
			this->textBoxContrasena->TabIndex = 4;
			this->textBoxContrasena->UseSystemPasswordChar = true;
			// 
			// buttonLogin
			// 
			this->buttonLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Byte>(0), static_cast<System::Byte>(102), 
				static_cast<System::Byte>(204));
			this->buttonLogin->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonLogin->ForeColor = System::Drawing::Color::White;
			this->buttonLogin->Location = System::Drawing::Point(200, 260);
			this->buttonLogin->Name = L"buttonLogin";
			this->buttonLogin->Size = System::Drawing::Size(130, 45);
			this->buttonLogin->TabIndex = 5;
			this->buttonLogin->Text = L"Iniciar Sesion";
			this->buttonLogin->UseVisualStyleBackColor = false;
			this->buttonLogin->Click += gcnew System::EventHandler(this, &LoginForm::buttonLogin_Click);
			// 
			// buttonRegistrar
			// 
			this->buttonRegistrar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Byte>(0), static_cast<System::Byte>(153), 
				static_cast<System::Byte>(76));
			this->buttonRegistrar->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRegistrar->ForeColor = System::Drawing::Color::White;
			this->buttonRegistrar->Location = System::Drawing::Point(370, 260);
			this->buttonRegistrar->Name = L"buttonRegistrar";
			this->buttonRegistrar->Size = System::Drawing::Size(130, 45);
			this->buttonRegistrar->TabIndex = 6;
			this->buttonRegistrar->Text = L"Registrarse";
			this->buttonRegistrar->UseVisualStyleBackColor = false;
			this->buttonRegistrar->Click += gcnew System::EventHandler(this, &LoginForm::buttonRegistrar_Click);
			// 
			// labelMensaje
			// 
			this->labelMensaje->AutoSize = true;
			this->labelMensaje->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMensaje->ForeColor = System::Drawing::Color::Red;
			this->labelMensaje->Location = System::Drawing::Point(200, 330);
			this->labelMensaje->Name = L"labelMensaje";
			this->labelMensaje->Size = System::Drawing::Size(0, 16);
			this->labelMensaje->TabIndex = 7;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Byte>(240), static_cast<System::Byte>(240), 
				static_cast<System::Byte>(240));
			this->ClientSize = System::Drawing::Size(676, 402);
			this->Controls->Add(this->labelMensaje);
			this->Controls->Add(this->buttonRegistrar);
			this->Controls->Add(this->buttonLogin);
			this->Controls->Add(this->textBoxContrasena);
			this->Controls->Add(this->labelContrasena);
			this->Controls->Add(this->textBoxUsuario);
			this->Controls->Add(this->labelUsuario);
			this->Controls->Add(this->labelTitulo);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ usuario = this->textBoxUsuario->Text;
		String^ contrasena = this->textBoxContrasena->Text;

		// Validar campos vacios
		if (usuario->Length == 0 || contrasena->Length == 0) {
			this->labelMensaje->ForeColor = System::Drawing::Color::Red;
			this->labelMensaje->Text = L"Completa usuario y contrasena";
			return;
		}

		// Buscar usuario en la lista
		bool usuarioEncontrado = false;
		for each (auto user in this->usuarios) {
			if (user[L"usuario"] == usuario && user[L"contrasena"] == contrasena) {
				usuarioEncontrado = true;
				break;
			}
		}

		// Validar contra admin predeterminado
		if ((usuario == L"admin" && contrasena == L"1234") || usuarioEncontrado) {
			this->labelMensaje->ForeColor = System::Drawing::Color::Green;
			this->labelMensaje->Text = L"Inicio de sesion exitoso!";

			// Abrir MenuForm
			MenuForm^ menu = gcnew MenuForm();
			menu->ShowDialog();

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
		String^ usuario = this->textBoxUsuario->Text;
		String^ contrasena = this->textBoxContrasena->Text;

		// Validar campos vacios
		if (usuario->Length == 0 || contrasena->Length == 0) {
			this->labelMensaje->ForeColor = System::Drawing::Color::Red;
			this->labelMensaje->Text = L"Completa usuario y contrasena";
			return;
		}

		// Validar longitud minima de contrasena
		if (contrasena->Length < 4) {
			this->labelMensaje->ForeColor = System::Drawing::Color::Red;
			this->labelMensaje->Text = L"Contrasena debe tener minimo 4 caracteres";
			return;
		}

		// Verificar si el usuario ya existe
		for each (auto user in this->usuarios) {
			if (user[L"usuario"] == usuario) {
				this->labelMensaje->ForeColor = System::Drawing::Color::Red;
				this->labelMensaje->Text = L"El usuario ya existe";
				return;
			}
		}

		// Crear nuevo usuario
		auto nuevoUsuario = gcnew System::Collections::Generic::Dictionary<System::String^, System::String^>();
		nuevoUsuario[L"usuario"] = usuario;
		nuevoUsuario[L"contrasena"] = contrasena;
		this->usuarios->Add(nuevoUsuario);

		// Mostrar mensaje de exito
		this->labelMensaje->ForeColor = System::Drawing::Color::Green;
		this->labelMensaje->Text = L"Registro exitoso! Ahora inicia sesion";

		// Limpiar campos
		this->textBoxUsuario->Clear();
		this->textBoxContrasena->Clear();
		this->textBoxUsuario->Focus();
	}
	};
}
