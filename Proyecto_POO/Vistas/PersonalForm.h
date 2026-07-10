#pragma once

#include "../Controladores/PersonalController.h"

namespace ProyectoPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Security::Cryptography;
	using namespace System::Text;

	/// <summary>
	/// Resumen de PersonalForm
	/// </summary>
	public ref class PersonalForm : public System::Windows::Forms::Form
	{
	public:
		PersonalForm(void)
		{
			InitializeComponent();
			controlador = gcnew ProyectoPOO::Controladores::PersonalController();
		}

	protected:
		~PersonalForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: ProyectoPOO::Controladores::PersonalController^ controlador;

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabAgregar;
	private: System::Windows::Forms::TabPage^ tabInformacion;
	private: System::Windows::Forms::TabPage^ tabAsignacion;

	private: System::Windows::Forms::Label^ lblNombre;
	private: System::Windows::Forms::Label^ lblCedula;
	private: System::Windows::Forms::Label^ lblTelefono;
	private: System::Windows::Forms::Label^ lblCargo;
	private: System::Windows::Forms::Label^ lblTurno;
	private: System::Windows::Forms::Label^ lblZona;
	private: System::Windows::Forms::Label^ lblPaciente;
	private: System::Windows::Forms::Label^ lblIdPaciente;

	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::TextBox^ txtCedula;
	private: System::Windows::Forms::TextBox^ txtTelefono;
	private: System::Windows::Forms::TextBox^ txtCargo;
	private: System::Windows::Forms::TextBox^ txtPaciente;
	private: System::Windows::Forms::TextBox^ txtIdPaciente;

	private: System::Windows::Forms::ComboBox^ cmbTurno;
	private: System::Windows::Forms::ComboBox^ cmbZona;

	private: System::Windows::Forms::Button^ btnGuardar;
	private: System::Windows::Forms::Button^ btnLimpiar;
	private: System::Windows::Forms::Button^ btnRegresar;

	private: System::Windows::Forms::DataGridView^ dgvInformacion;
	private: System::Windows::Forms::DataGridView^ dgvAsignacion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn13;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabAgregar = (gcnew System::Windows::Forms::TabPage());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->lblCedula = (gcnew System::Windows::Forms::Label());
			this->txtCedula = (gcnew System::Windows::Forms::TextBox());
			this->lblTelefono = (gcnew System::Windows::Forms::Label());
			this->txtTelefono = (gcnew System::Windows::Forms::TextBox());
			this->lblCargo = (gcnew System::Windows::Forms::Label());
			this->txtCargo = (gcnew System::Windows::Forms::TextBox());
			this->lblTurno = (gcnew System::Windows::Forms::Label());
			this->cmbTurno = (gcnew System::Windows::Forms::ComboBox());
			this->lblZona = (gcnew System::Windows::Forms::Label());
			this->cmbZona = (gcnew System::Windows::Forms::ComboBox());
			this->lblPaciente = (gcnew System::Windows::Forms::Label());
			this->txtPaciente = (gcnew System::Windows::Forms::TextBox());
			this->lblIdPaciente = (gcnew System::Windows::Forms::Label());
			this->txtIdPaciente = (gcnew System::Windows::Forms::TextBox());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->tabInformacion = (gcnew System::Windows::Forms::TabPage());
			this->dgvInformacion = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabAsignacion = (gcnew System::Windows::Forms::TabPage());
			this->dgvAsignacion = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnRegresar = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabAgregar->SuspendLayout();
			this->tabInformacion->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvInformacion))->BeginInit();
			this->tabAsignacion->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAsignacion))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(289, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(185, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bienvenido";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabAgregar);
			this->tabControl1->Controls->Add(this->tabInformacion);
			this->tabControl1->Controls->Add(this->tabAsignacion);
			this->tabControl1->Location = System::Drawing::Point(35, 100);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(725, 285);
			this->tabControl1->TabIndex = 1;
			// 
			// tabAgregar
			// 
			this->tabAgregar->Controls->Add(this->lblNombre);
			this->tabAgregar->Controls->Add(this->txtNombre);
			this->tabAgregar->Controls->Add(this->lblCedula);
			this->tabAgregar->Controls->Add(this->txtCedula);
			this->tabAgregar->Controls->Add(this->lblTelefono);
			this->tabAgregar->Controls->Add(this->txtTelefono);
			this->tabAgregar->Controls->Add(this->lblCargo);
			this->tabAgregar->Controls->Add(this->txtCargo);
			this->tabAgregar->Controls->Add(this->lblTurno);
			this->tabAgregar->Controls->Add(this->cmbTurno);
			this->tabAgregar->Controls->Add(this->lblZona);
			this->tabAgregar->Controls->Add(this->cmbZona);
			this->tabAgregar->Controls->Add(this->lblPaciente);
			this->tabAgregar->Controls->Add(this->txtPaciente);
			this->tabAgregar->Controls->Add(this->lblIdPaciente);
			this->tabAgregar->Controls->Add(this->txtIdPaciente);
			this->tabAgregar->Controls->Add(this->btnGuardar);
			this->tabAgregar->Controls->Add(this->btnLimpiar);
			this->tabAgregar->Location = System::Drawing::Point(4, 22);
			this->tabAgregar->Name = L"tabAgregar";
			this->tabAgregar->Size = System::Drawing::Size(717, 259);
			this->tabAgregar->TabIndex = 0;
			this->tabAgregar->Text = L"Agregar personal";
			this->tabAgregar->UseVisualStyleBackColor = true;
			// 
			// lblNombre
			// 
			this->lblNombre->Location = System::Drawing::Point(30, 25);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(100, 25);
			this->lblNombre->TabIndex = 0;
			this->lblNombre->Text = L"Nombre:";
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(150, 25);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(190, 20);
			this->txtNombre->TabIndex = 1;
			// 
			// lblCedula
			// 
			this->lblCedula->Location = System::Drawing::Point(30, 60);
			this->lblCedula->Name = L"lblCedula";
			this->lblCedula->Size = System::Drawing::Size(100, 25);
			this->lblCedula->TabIndex = 2;
			this->lblCedula->Text = L"Cédula:";
			// 
			// txtCedula
			// 
			this->txtCedula->Location = System::Drawing::Point(150, 60);
			this->txtCedula->Name = L"txtCedula";
			this->txtCedula->Size = System::Drawing::Size(190, 20);
			this->txtCedula->TabIndex = 3;
			// 
			// lblTelefono
			// 
			this->lblTelefono->Location = System::Drawing::Point(30, 95);
			this->lblTelefono->Name = L"lblTelefono";
			this->lblTelefono->Size = System::Drawing::Size(100, 25);
			this->lblTelefono->TabIndex = 4;
			this->lblTelefono->Text = L"Teléfono:";
			// 
			// txtTelefono
			// 
			this->txtTelefono->Location = System::Drawing::Point(150, 95);
			this->txtTelefono->Name = L"txtTelefono";
			this->txtTelefono->Size = System::Drawing::Size(190, 20);
			this->txtTelefono->TabIndex = 5;
			// 
			// lblCargo
			// 
			this->lblCargo->Location = System::Drawing::Point(30, 130);
			this->lblCargo->Name = L"lblCargo";
			this->lblCargo->Size = System::Drawing::Size(100, 25);
			this->lblCargo->TabIndex = 6;
			this->lblCargo->Text = L"Cargo:";
			// 
			// txtCargo
			// 
			this->txtCargo->Location = System::Drawing::Point(150, 130);
			this->txtCargo->Name = L"txtCargo";
			this->txtCargo->Size = System::Drawing::Size(190, 20);
			this->txtCargo->TabIndex = 7;
			// 
			// lblTurno
			// 
			this->lblTurno->Location = System::Drawing::Point(370, 25);
			this->lblTurno->Name = L"lblTurno";
			this->lblTurno->Size = System::Drawing::Size(120, 25);
			this->lblTurno->TabIndex = 8;
			this->lblTurno->Text = L"Turno:";
			// 
			// cmbTurno
			// 
			this->cmbTurno->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbTurno->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Mañana", L"Tarde", L"Noche" });
			this->cmbTurno->Location = System::Drawing::Point(520, 25);
			this->cmbTurno->Name = L"cmbTurno";
			this->cmbTurno->Size = System::Drawing::Size(160, 21);
			this->cmbTurno->TabIndex = 9;
			// 
			// lblZona
			// 
			this->lblZona->Location = System::Drawing::Point(370, 60);
			this->lblZona->Name = L"lblZona";
			this->lblZona->Size = System::Drawing::Size(120, 25);
			this->lblZona->TabIndex = 10;
			this->lblZona->Text = L"Zona:";
			// 
			// cmbZona
			// 
			this->cmbZona->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbZona->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Norte", L"Sur", L"Este", L"Emergencias" });
			this->cmbZona->Location = System::Drawing::Point(520, 60);
			this->cmbZona->Name = L"cmbZona";
			this->cmbZona->Size = System::Drawing::Size(160, 21);
			this->cmbZona->TabIndex = 11;
			// 
			// lblPaciente
			// 
			this->lblPaciente->Location = System::Drawing::Point(370, 95);
			this->lblPaciente->Name = L"lblPaciente";
			this->lblPaciente->Size = System::Drawing::Size(140, 25);
			this->lblPaciente->TabIndex = 12;
			this->lblPaciente->Text = L"Paciente asignado:";
			// 
			// txtPaciente
			// 
			this->txtPaciente->Location = System::Drawing::Point(520, 95);
			this->txtPaciente->Name = L"txtPaciente";
			this->txtPaciente->Size = System::Drawing::Size(160, 20);
			this->txtPaciente->TabIndex = 13;
			// 
			// lblIdPaciente
			// 
			this->lblIdPaciente->Location = System::Drawing::Point(370, 130);
			this->lblIdPaciente->Name = L"lblIdPaciente";
			this->lblIdPaciente->Size = System::Drawing::Size(120, 25);
			this->lblIdPaciente->TabIndex = 14;
			this->lblIdPaciente->Text = L"ID paciente:";
			// 
			// txtIdPaciente
			// 
			this->txtIdPaciente->Location = System::Drawing::Point(520, 130);
			this->txtIdPaciente->Name = L"txtIdPaciente";
			this->txtIdPaciente->Size = System::Drawing::Size(160, 20);
			this->txtIdPaciente->TabIndex = 15;
			// 
			// btnGuardar
			// 
			this->btnGuardar->Location = System::Drawing::Point(370, 190);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(120, 35);
			this->btnGuardar->TabIndex = 16;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->Click += gcnew System::EventHandler(this, &PersonalForm::btnGuardar_Click);
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->Location = System::Drawing::Point(540, 190);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(120, 35);
			this->btnLimpiar->TabIndex = 17;
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->Click += gcnew System::EventHandler(this, &PersonalForm::btnLimpiar_Click);
			// 
			// tabInformacion
			// 
			this->tabInformacion->Controls->Add(this->dgvInformacion);
			this->tabInformacion->Location = System::Drawing::Point(4, 22);
			this->tabInformacion->Name = L"tabInformacion";
			this->tabInformacion->Size = System::Drawing::Size(717, 259);
			this->tabInformacion->TabIndex = 1;
			this->tabInformacion->Text = L"Información personal";
			this->tabInformacion->UseVisualStyleBackColor = true;
			// 
			// dgvInformacion
			// 
			this->dgvInformacion->AllowUserToAddRows = false;
			this->dgvInformacion->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvInformacion->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8
			});
			this->dgvInformacion->Location = System::Drawing::Point(15, 20);
			this->dgvInformacion->Name = L"dgvInformacion";
			this->dgvInformacion->ReadOnly = true;
			this->dgvInformacion->Size = System::Drawing::Size(690, 220);
			this->dgvInformacion->TabIndex = 0;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Cédula";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Teléfono";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Cargo";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Turno";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Zona";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Paciente asignado";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"ID paciente";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			// 
			// tabAsignacion
			// 
			this->tabAsignacion->Controls->Add(this->dgvAsignacion);
			this->tabAsignacion->Location = System::Drawing::Point(4, 22);
			this->tabAsignacion->Name = L"tabAsignacion";
			this->tabAsignacion->Size = System::Drawing::Size(717, 259);
			this->tabAsignacion->TabIndex = 2;
			this->tabAsignacion->Text = L"Asignación";
			this->tabAsignacion->UseVisualStyleBackColor = true;
			// 
			// dgvAsignacion
			// 
			this->dgvAsignacion->AllowUserToAddRows = false;
			this->dgvAsignacion->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvAsignacion->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn9,
					this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12, this->dataGridViewTextBoxColumn13
			});
			this->dgvAsignacion->Location = System::Drawing::Point(15, 20);
			this->dgvAsignacion->Name = L"dgvAsignacion";
			this->dgvAsignacion->ReadOnly = true;
			this->dgvAsignacion->Size = System::Drawing::Size(690, 220);
			this->dgvAsignacion->TabIndex = 0;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Personal";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"Cargo";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"Zona asignada";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"Paciente asignado";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"ID paciente";
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			this->dataGridViewTextBoxColumn13->ReadOnly = true;
			// 
			// btnRegresar
			// 
			this->btnRegresar->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnRegresar->Location = System::Drawing::Point(35, 400);
			this->btnRegresar->Name = L"btnRegresar";
			this->btnRegresar->Size = System::Drawing::Size(110, 35);
			this->btnRegresar->TabIndex = 0;
			this->btnRegresar->Text = L"Regresar";
			this->btnRegresar->UseVisualStyleBackColor = false;
			this->btnRegresar->Click += gcnew System::EventHandler(this, &PersonalForm::btnRegresar_Click);
			// 
			// PersonalForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(791, 447);
			this->Controls->Add(this->btnRegresar);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"PersonalForm";
			this->Text = L"PersonalForm";
			this->Load += gcnew System::EventHandler(this, &PersonalForm::PersonalForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabAgregar->ResumeLayout(false);
			this->tabAgregar->PerformLayout();
			this->tabInformacion->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvInformacion))->EndInit();
			this->tabAsignacion->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAsignacion))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	
#pragma endregion

	private: System::Void PersonalForm_Load(System::Object^ sender, System::EventArgs^ e) {
		CargarPersonal();
	}

	private: System::Void btnGuardar_Click(System::Object^ sender, System::EventArgs^ e) {

		if (txtNombre->Text == "" || txtCedula->Text == "" || txtTelefono->Text == "" ||
			txtCargo->Text == "" || cmbTurno->Text == "" || cmbZona->Text == "" ||
			txtPaciente->Text == "" || txtIdPaciente->Text == "") {

			MessageBox::Show("Complete todos los campos.", "Aviso",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			try {
				ProyectoPOO::Modelos::PersonalHospital^ persona = gcnew ProyectoPOO::Modelos::PersonalHospital();
				persona->Nombre = txtNombre->Text->Trim();
				persona->Cedula = txtCedula->Text->Trim();
				persona->Telefono = txtTelefono->Text->Trim();
				persona->Cargo = txtCargo->Text->Trim();
				persona->Turno = cmbTurno->Text;
				persona->Zona = cmbZona->Text;
				persona->PacienteAsignado = txtPaciente->Text->Trim();
				persona->IdPaciente = txtIdPaciente->Text->Trim();
				controlador->Agregar(persona);

				dgvInformacion->Rows->Add(
					persona->Nombre,
					persona->Cedula,
					persona->Telefono,
					persona->Cargo,
					persona->Turno,
					persona->Zona,
					persona->PacienteAsignado,
					persona->IdPaciente
				);

				dgvAsignacion->Rows->Add(
					persona->Nombre,
					persona->Cargo,
					persona->Zona,
					persona->PacienteAsignado,
					persona->IdPaciente
				);

				MessageBox::Show("Personal guardado correctamente.", "Registro exitoso",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				LimpiarCampos();
			}
			catch (UnauthorizedAccessException^ ex) {
				MessageBox::Show("Acceso denegado al guardar el archivo: " + ex->Message, "Error de permisos",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			catch (DirectoryNotFoundException^ ex) {
				MessageBox::Show("No se encontró la ruta del archivo: " + ex->Message, "Error de ruta",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			catch (IOException^ ex) {
				MessageBox::Show("Error de entrada/salida al guardar: " + ex->Message, "Error de E/S",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error inesperado: " + ex->Message, "Error",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}

	private: System::Void btnLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
		LimpiarCampos();
	}

	private: System::Void btnRegresar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void LimpiarCampos() {
		txtNombre->Clear();
		txtCedula->Clear();
		txtTelefono->Clear();
		txtCargo->Clear();
		txtPaciente->Clear();
		txtIdPaciente->Clear();
		cmbTurno->SelectedIndex = -1;
		cmbZona->SelectedIndex = -1;
	}

	private: System::Void CargarPersonal() {
		try {
			dgvInformacion->Rows->Clear();
			dgvAsignacion->Rows->Clear();
			for each (ProyectoPOO::Modelos::PersonalHospital^ persona in controlador->ObtenerTodos()) {
				dgvInformacion->Rows->Add(
					persona->Nombre, persona->Cedula, persona->Telefono, persona->Cargo,
					persona->Turno, persona->Zona, persona->PacienteAsignado, persona->IdPaciente);
				dgvAsignacion->Rows->Add(
					persona->Nombre, persona->Cargo, persona->Zona,
					persona->PacienteAsignado, persona->IdPaciente);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("No se pudo cargar el personal: " + ex->Message,
				"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	};
}
