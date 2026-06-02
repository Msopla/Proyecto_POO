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
			
		}

	protected:
		
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxUsuario;
	private: System::Windows::Forms::TextBox^ textBoxContrasena;
	private: System::Windows::Forms::Button^ buttonLogin;
	private: System::Windows::Forms::Label^ labelUsuario;
	private: System::Windows::Forms::Label^ labelContrasena;
	private: System::Windows::Forms::Label^ labelMensaje;

	private:
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxUsuario = (gcnew System::Windows::Forms::TextBox());
			this->textBoxContrasena = (gcnew System::Windows::Forms::TextBox());
			this->buttonLogin = (gcnew System::Windows::Forms::Button());
			this->labelUsuario = (gcnew System::Windows::Forms::Label());
			this->labelContrasena = (gcnew System::Windows::Forms::Label());
			this->labelMensaje = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(349, 197);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(295, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(238, 46);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Iniciar Sesion";
			// 
			// textBoxUsuario
			// 
			this->textBoxUsuario->Location = System::Drawing::Point(270, 175);
			this->textBoxUsuario->Name = L"textBoxUsuario";
			this->textBoxUsuario->Size = System::Drawing::Size(300, 22);
			this->textBoxUsuario->TabIndex = 3;
			// 
			// textBoxContrasena
			// 
			this->textBoxContrasena->Location = System::Drawing::Point(270, 249);
			this->textBoxContrasena->Name = L"textBoxContrasena";
			this->textBoxContrasena->Size = System::Drawing::Size(300, 22);
			this->textBoxContrasena->TabIndex = 5;
			this->textBoxContrasena->UseSystemPasswordChar = true;
			// 
			// buttonLogin
			// 
			this->buttonLogin->BackColor = System::Drawing::SystemColors::GrayText;
			this->buttonLogin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonLogin->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonLogin->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonLogin->Location = System::Drawing::Point(345, 320);
			this->buttonLogin->Name = L"buttonLogin";
			this->buttonLogin->Size = System::Drawing::Size(150, 40);
			this->buttonLogin->TabIndex = 6;
			this->buttonLogin->Text = L"Iniciar Sesion";
			this->buttonLogin->UseVisualStyleBackColor = false;
			this->buttonLogin->Click += gcnew System::EventHandler(this, &LoginForm::buttonLogin_Click);
			// 
			// labelUsuario
			// 
			this->labelUsuario->AutoSize = true;
			this->labelUsuario->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelUsuario->Location = System::Drawing::Point(174, 171);
			this->labelUsuario->Name = L"labelUsuario";
			this->labelUsuario->Size = System::Drawing::Size(90, 26);
			this->labelUsuario->TabIndex = 2;
			this->labelUsuario->Text = L"Usuario:";
			// 
			// labelContrasena
			// 
			this->labelContrasena->AutoSize = true;
			this->labelContrasena->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelContrasena->Location = System::Drawing::Point(142, 245);
			this->labelContrasena->Name = L"labelContrasena";
			this->labelContrasena->Size = System::Drawing::Size(122, 26);
			this->labelContrasena->TabIndex = 4;
			this->labelContrasena->Text = L"Contraseña:";
			this->labelContrasena->Click += gcnew System::EventHandler(this, &LoginForm::labelContrasena_Click);
			// 
			// labelMensaje
			// 
			this->labelMensaje->AutoSize = true;
			this->labelMensaje->ForeColor = System::Drawing::Color::Red;
			this->labelMensaje->Location = System::Drawing::Point(270, 370);
			this->labelMensaje->Name = L"labelMensaje";
			this->labelMensaje->Size = System::Drawing::Size(0, 16);
			this->labelMensaje->TabIndex = 7;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(844, 508);
			this->Controls->Add(this->labelMensaje);
			this->Controls->Add(this->buttonLogin);
			this->Controls->Add(this->textBoxContrasena);
			this->Controls->Add(this->labelContrasena);
			this->Controls->Add(this->textBoxUsuario);
			this->Controls->Add(this->labelUsuario);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ usuario = this->textBoxUsuario->Text;
		String^ contrasena = this->textBoxContrasena->Text;

		// Validar credenciales
		if (usuario == L"admin" && contrasena == L"1234") {
			this->labelMensaje->ForeColor = System::Drawing::Color::Green;
			this->labelMensaje->Text = L"¡Inicio de sesión exitoso!";

			// Abrir MenuForm
			MenuForm^ menu = gcnew MenuForm();
			menu->ShowDialog();

			this->Close();
		}
		else {
			this->labelMensaje->ForeColor = System::Drawing::Color::Red;
			this->labelMensaje->Text = L"Usuario o contraseña incorrectos";
			this->textBoxUsuario->Clear();
			this->textBoxContrasena->Clear();
			this->textBoxUsuario->Focus();
		}
	}
	private: System::Void labelContrasena_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
