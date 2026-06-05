#pragma once

namespace ProyectoPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	public ref class seguridadForm : public System::Windows::Forms::Form
	{
	public:
		seguridadForm(void)
		{
			InitializeComponent();
		}

	protected:
		~seguridadForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabAgregar;
	private: System::Windows::Forms::TabPage^ tabInformacion;
	private: System::Windows::Forms::TabPage^ tabLugar;

	private: System::Windows::Forms::Label^ lblNombre;
	private: System::Windows::Forms::Label^ lblCedula;
	private: System::Windows::Forms::Label^ lblTelefono;
	private: System::Windows::Forms::Label^ lblTurno;
	private: System::Windows::Forms::Label^ lblLugar;

	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::TextBox^ txtCedula;
	private: System::Windows::Forms::TextBox^ txtTelefono;

	private: System::Windows::Forms::ComboBox^ cmbTurno;
	private: System::Windows::Forms::ComboBox^ cmbLugar;

	private: System::Windows::Forms::Button^ btnGuardar;
	private: System::Windows::Forms::Button^ btnLimpiar;
	private: System::Windows::Forms::Button^ btnRegresar;

	private: System::Windows::Forms::DataGridView^ dgvInformacion;
	private: System::Windows::Forms::DataGridView^ dgvLugar;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());

			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabAgregar = (gcnew System::Windows::Forms::TabPage());
			this->tabInformacion = (gcnew System::Windows::Forms::TabPage());
			this->tabLugar = (gcnew System::Windows::Forms::TabPage());

			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->lblCedula = (gcnew System::Windows::Forms::Label());
			this->lblTelefono = (gcnew System::Windows::Forms::Label());
			this->lblTurno = (gcnew System::Windows::Forms::Label());
			this->lblLugar = (gcnew System::Windows::Forms::Label());

			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtCedula = (gcnew System::Windows::Forms::TextBox());
			this->txtTelefono = (gcnew System::Windows::Forms::TextBox());

			this->cmbTurno = (gcnew System::Windows::Forms::ComboBox());
			this->cmbLugar = (gcnew System::Windows::Forms::ComboBox());

			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->btnRegresar = (gcnew System::Windows::Forms::Button());

			this->dgvInformacion = (gcnew System::Windows::Forms::DataGridView());
			this->dgvLugar = (gcnew System::Windows::Forms::DataGridView());

			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvInformacion))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLugar))->BeginInit();

			this->SuspendLayout();

			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(280, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(194, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Seguridad";

			// 
			// tabControl1
			// 
			this->tabControl1->Location = System::Drawing::Point(35, 110);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(700, 280);
			this->tabControl1->TabIndex = 1;

			// 
			// tabAgregar
			// 
			this->tabAgregar->Text = L"Agregar información";
			this->tabAgregar->UseVisualStyleBackColor = true;

			// 
			// tabInformacion
			// 
			this->tabInformacion->Text = L"Ver información";
			this->tabInformacion->UseVisualStyleBackColor = true;

			// 
			// tabLugar
			// 
			this->tabLugar->Text = L"Lugar de trabajo";
			this->tabLugar->UseVisualStyleBackColor = true;

			this->tabControl1->Controls->Add(this->tabAgregar);
			this->tabControl1->Controls->Add(this->tabInformacion);
			this->tabControl1->Controls->Add(this->tabLugar);

			// 
			// lblNombre
			// 
			this->lblNombre->Text = L"Nombre:";
			this->lblNombre->Location = System::Drawing::Point(40, 35);
			this->lblNombre->Size = System::Drawing::Size(80, 25);

			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(140, 35);
			this->txtNombre->Size = System::Drawing::Size(190, 25);

			// 
			// lblCedula
			// 
			this->lblCedula->Text = L"Cédula:";
			this->lblCedula->Location = System::Drawing::Point(40, 80);
			this->lblCedula->Size = System::Drawing::Size(80, 25);

			// 
			// txtCedula
			// 
			this->txtCedula->Location = System::Drawing::Point(140, 80);
			this->txtCedula->Size = System::Drawing::Size(190, 25);

			// 
			// lblTelefono
			// 
			this->lblTelefono->Text = L"Teléfono:";
			this->lblTelefono->Location = System::Drawing::Point(40, 125);
			this->lblTelefono->Size = System::Drawing::Size(80, 25);

			// 
			// txtTelefono
			// 
			this->txtTelefono->Location = System::Drawing::Point(140, 125);
			this->txtTelefono->Size = System::Drawing::Size(190, 25);

			// 
			// lblTurno
			// 
			this->lblTurno->Text = L"Turno:";
			this->lblTurno->Location = System::Drawing::Point(380, 35);
			this->lblTurno->Size = System::Drawing::Size(80, 25);

			// 
			// cmbTurno
			// 
			this->cmbTurno->Location = System::Drawing::Point(480, 35);
			this->cmbTurno->Size = System::Drawing::Size(160, 25);
			this->cmbTurno->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbTurno->Items->Add(L"Mañana");
			this->cmbTurno->Items->Add(L"Tarde");
			this->cmbTurno->Items->Add(L"Noche");

			// 
			// lblLugar
			// 
			this->lblLugar->Text = L"Lugar:";
			this->lblLugar->Location = System::Drawing::Point(380, 80);
			this->lblLugar->Size = System::Drawing::Size(80, 25);

			// 
			// cmbLugar
			// 
			this->cmbLugar->Location = System::Drawing::Point(480, 80);
			this->cmbLugar->Size = System::Drawing::Size(160, 25);
			this->cmbLugar->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbLugar->Items->Add(L"Puerta Norte");
			this->cmbLugar->Items->Add(L"Puerta Sur");
			this->cmbLugar->Items->Add(L"Emergencias");
			this->cmbLugar->Items->Add(L"Puerta Este");

			// 
			// btnGuardar
			// 
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->Location = System::Drawing::Point(380, 140);
			this->btnGuardar->Size = System::Drawing::Size(110, 35);
			this->btnGuardar->Click += gcnew System::EventHandler(this, &seguridadForm::btnGuardar_Click);

			// 
			// btnLimpiar
			// 
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->Location = System::Drawing::Point(530, 140);
			this->btnLimpiar->Size = System::Drawing::Size(110, 35);
			this->btnLimpiar->Click += gcnew System::EventHandler(this, &seguridadForm::btnLimpiar_Click);

			// Agregar controles a tabAgregar
			this->tabAgregar->Controls->Add(this->lblNombre);
			this->tabAgregar->Controls->Add(this->txtNombre);
			this->tabAgregar->Controls->Add(this->lblCedula);
			this->tabAgregar->Controls->Add(this->txtCedula);
			this->tabAgregar->Controls->Add(this->lblTelefono);
			this->tabAgregar->Controls->Add(this->txtTelefono);
			this->tabAgregar->Controls->Add(this->lblTurno);
			this->tabAgregar->Controls->Add(this->cmbTurno);
			this->tabAgregar->Controls->Add(this->lblLugar);
			this->tabAgregar->Controls->Add(this->cmbLugar);
			this->tabAgregar->Controls->Add(this->btnGuardar);
			this->tabAgregar->Controls->Add(this->btnLimpiar);

			// 
			// dgvInformacion
			// 
			this->dgvInformacion->Location = System::Drawing::Point(20, 20);
			this->dgvInformacion->Size = System::Drawing::Size(650, 220);
			this->dgvInformacion->Columns->Add(L"Nombre", L"Nombre");
			this->dgvInformacion->Columns->Add(L"Cedula", L"Cédula");
			this->dgvInformacion->Columns->Add(L"Telefono", L"Teléfono");
			this->dgvInformacion->Columns->Add(L"Turno", L"Turno");
			this->dgvInformacion->Columns->Add(L"Lugar", L"Lugar");
			this->dgvInformacion->AllowUserToAddRows = false;
			this->dgvInformacion->ReadOnly = true;
			this->dgvInformacion->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;

			this->tabInformacion->Controls->Add(this->dgvInformacion);

			// 
			// dgvLugar
			// 
			this->dgvLugar->Location = System::Drawing::Point(20, 20);
			this->dgvLugar->Size = System::Drawing::Size(650, 220);
			this->dgvLugar->Columns->Add(L"Empleado", L"Empleado");
			this->dgvLugar->Columns->Add(L"LugarTrabajo", L"Lugar de trabajo");
			this->dgvLugar->Columns->Add(L"Turno", L"Turno");
			this->dgvLugar->AllowUserToAddRows = false;
			this->dgvLugar->ReadOnly = true;
			this->dgvLugar->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;

			this->tabLugar->Controls->Add(this->dgvLugar);

			// 
			// btnRegresar
			// 
			this->btnRegresar->Text = L"Regresar";
			this->btnRegresar->Location = System::Drawing::Point(35, 410);
			this->btnRegresar->Size = System::Drawing::Size(110, 35);
			this->btnRegresar->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnRegresar->UseVisualStyleBackColor = false;
			this->btnRegresar->Click += gcnew System::EventHandler(this, &seguridadForm::btnRegresar_Click);

			// 
			// seguridadForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(766, 462);
			this->Controls->Add(this->btnRegresar);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"seguridadForm";
			this->Text = L"seguridadForm";
			this->Load += gcnew System::EventHandler(this, &seguridadForm::seguridadForm_Load);

			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvInformacion))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLugar))->EndInit();

			this->ResumeLayout(false);
			this->PerformLayout();
		}

#pragma endregion

	private: System::Void seguridadForm_Load(System::Object^ sender, System::EventArgs^ e) {
		CargarEmpleados();
	}

	private: System::Void btnGuardar_Click(System::Object^ sender, System::EventArgs^ e) {

		if (txtNombre->Text == "" || txtCedula->Text == "" || txtTelefono->Text == "" ||
			cmbTurno->Text == "" || cmbLugar->Text == "") {

			MessageBox::Show("Complete todos los campos.", "Aviso",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {

			dgvInformacion->Rows->Add(
				txtNombre->Text,
				txtCedula->Text,
				txtTelefono->Text,
				cmbTurno->Text,
				cmbLugar->Text
			);

			dgvLugar->Rows->Add(
				txtNombre->Text,
				cmbLugar->Text,
				cmbTurno->Text
			);

			StreamWriter^ archivo = gcnew StreamWriter("empleados_seguridad.txt", true);

			archivo->WriteLine(
				txtNombre->Text + ";" +
				txtCedula->Text + ";" +
				txtTelefono->Text + ";" +
				cmbTurno->Text + ";" +
				cmbLugar->Text
			);

			archivo->Close();

			MessageBox::Show("Empleado guardado correctamente.", "Registro exitoso",
				MessageBoxButtons::OK, MessageBoxIcon::Information);

			LimpiarCampos();
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
		cmbTurno->SelectedIndex = -1;
		cmbLugar->SelectedIndex = -1;
	}

	private: System::Void CargarEmpleados() {

		if (File::Exists("empleados_seguridad.txt")) {

			array<String^>^ lineas = File::ReadAllLines("empleados_seguridad.txt");

			for each (String ^ linea in lineas) {

				array<String^>^ datos = linea->Split(';');

				if (datos->Length == 5) {

					dgvInformacion->Rows->Add(
						datos[0],
						datos[1],
						datos[2],
						datos[3],
						datos[4]
					);

					dgvLugar->Rows->Add(
						datos[0],
						datos[4],
						datos[3]
					);
				}
			}
		}
	}
	};
}