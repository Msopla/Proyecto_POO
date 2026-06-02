#pragma once

#include "pacienteForm.h"
#include "seguridadForm.h"
#include "PersonalForm.h"

namespace ProyectoPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuForm
	/// </summary>
	public ref class MenuForm : public System::Windows::Forms::Form
	{
	public:
		MenuForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ Paciente;
	private: System::Windows::Forms::Button^ seguridad;
	private: System::Windows::Forms::Button^ Personal;



	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->Paciente = (gcnew System::Windows::Forms::Button());
			this->seguridad = (gcnew System::Windows::Forms::Button());
			this->Personal = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(256, 95);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(225, 90);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Menu";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(47, 218);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(157, 136);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MenuForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(292, 218);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(174, 136);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(530, 218);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(166, 135);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// Paciente
			// 
			this->Paciente->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Paciente->Location = System::Drawing::Point(47, 390);
			this->Paciente->Name = L"Paciente";
			this->Paciente->Size = System::Drawing::Size(157, 55);
			this->Paciente->TabIndex = 4;
			this->Paciente->Text = L"Paciente";
			this->Paciente->UseVisualStyleBackColor = true;
			this->Paciente->Click += gcnew System::EventHandler(this, &MenuForm::Paciente_Click);
			// 
			// seguridad
			// 
			this->seguridad->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seguridad->Location = System::Drawing::Point(292, 392);
			this->seguridad->Name = L"seguridad";
			this->seguridad->Size = System::Drawing::Size(173, 53);
			this->seguridad->TabIndex = 5;
			this->seguridad->Text = L"Seguridad";
			this->seguridad->UseVisualStyleBackColor = true;
			this->seguridad->Click += gcnew System::EventHandler(this, &MenuForm::seguridad_Click);
			// 
			// Personal
			// 
			this->Personal->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Personal->Location = System::Drawing::Point(530, 392);
			this->Personal->Name = L"Personal";
			this->Personal->Size = System::Drawing::Size(166, 53);
			this->Personal->TabIndex = 6;
			this->Personal->Text = L"Personal";
			this->Personal->UseVisualStyleBackColor = true;
			this->Personal->Click += gcnew System::EventHandler(this, &MenuForm::Personal_Click);
			// 
			// MenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->ClientSize = System::Drawing::Size(768, 522);
			this->Controls->Add(this->Personal);
			this->Controls->Add(this->seguridad);
			this->Controls->Add(this->Paciente);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MenuForm";
			this->Text = L"MenuForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Paciente_Click(System::Object^ sender, System::EventArgs^ e) {
		pacienteForm^ paciente = gcnew pacienteForm();
		paciente->ShowDialog();
	}
	private: System::Void seguridad_Click(System::Object^ sender, System::EventArgs^ e) {
		seguridadForm^ seguridad = gcnew seguridadForm();
		seguridad->ShowDialog();
	}
	private: System::Void Personal_Click(System::Object^ sender, System::EventArgs^ e) {
		PersonalForm^ personal = gcnew PersonalForm();
		personal->ShowDialog();
	}
	};
}
