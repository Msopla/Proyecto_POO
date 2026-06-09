#pragma once

namespace ProyectoPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class BloquearForm : public System::Windows::Forms::Form
	{
	public:
		BloquearForm(void)
		{
			InitializeComponent();
		}

	protected:
		~BloquearForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::ComponentModel::Container^ components;

		System::Windows::Forms::TabControl^ tabControl1;
		System::Windows::Forms::TabPage^ tabAgregar;
		System::Windows::Forms::TabPage^ tabBuscar;
		System::Windows::Forms::TabPage^ tabBloquear;

		// AGREGAR USUARIO
		System::Windows::Forms::Label^ lblTituloAgregar;
		System::Windows::Forms::Label^ lblUsuario;
		System::Windows::Forms::Label^ lblNumeroID;
		System::Windows::Forms::Label^ lblPais;
		System::Windows::Forms::Label^ lblContrasena;
		System::Windows::Forms::Label^ lblFoto;

		System::Windows::Forms::TextBox^ txtUsuario;
		System::Windows::Forms::TextBox^ txtNumeroID;
		System::Windows::Forms::TextBox^ txtPais;
		System::Windows::Forms::TextBox^ txtContrasena;

		System::Windows::Forms::PictureBox^ pictureFotoAgregar;

		System::Windows::Forms::Button^ btnGuardarAgregar;
		System::Windows::Forms::Button^ btnSalirAgregar;

		// BUSCAR USUARIO
		System::Windows::Forms::Label^ lblTituloBuscar;
		System::Windows::Forms::Label^ lblBuscarUsuario;

		System::Windows::Forms::TextBox^ txtBuscarUsuario;

		System::Windows::Forms::Button^ btnBuscar;
		System::Windows::Forms::Button^ btnCerrarBuscar;

		System::Windows::Forms::DataGridView^ dgvUsuarios;

		// BLOQUEAR USUARIO
		System::Windows::Forms::Label^ lblTituloBloquear;
		System::Windows::Forms::Label^ lblBuscarCedula;
		System::Windows::Forms::Label^ lblNumeroUsuario;
		System::Windows::Forms::Label^ lblNombreBloquear;
		System::Windows::Forms::Label^ lblIdBloquear;
		System::Windows::Forms::Label^ lblCorreoBloquear;

		System::Windows::Forms::TextBox^ txtBuscarCedula;

		System::Windows::Forms::Panel^ panelUsuario;
		System::Windows::Forms::PictureBox^ pictureFotoBloquear;
		System::Windows::Forms::CheckBox^ chkBloquearUsuario;

		System::Windows::Forms::Button^ btnEliminarUsuario;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
		   System::Windows::Forms::Button^ btnCerrarBloquear;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabAgregar = (gcnew System::Windows::Forms::TabPage());
			this->lblTituloAgregar = (gcnew System::Windows::Forms::Label());
			this->lblUsuario = (gcnew System::Windows::Forms::Label());
			this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->lblNumeroID = (gcnew System::Windows::Forms::Label());
			this->txtNumeroID = (gcnew System::Windows::Forms::TextBox());
			this->lblPais = (gcnew System::Windows::Forms::Label());
			this->txtPais = (gcnew System::Windows::Forms::TextBox());
			this->lblContrasena = (gcnew System::Windows::Forms::Label());
			this->txtContrasena = (gcnew System::Windows::Forms::TextBox());
			this->lblFoto = (gcnew System::Windows::Forms::Label());
			this->pictureFotoAgregar = (gcnew System::Windows::Forms::PictureBox());
			this->btnSalirAgregar = (gcnew System::Windows::Forms::Button());
			this->btnGuardarAgregar = (gcnew System::Windows::Forms::Button());
			this->tabBuscar = (gcnew System::Windows::Forms::TabPage());
			this->lblTituloBuscar = (gcnew System::Windows::Forms::Label());
			this->lblBuscarUsuario = (gcnew System::Windows::Forms::Label());
			this->txtBuscarUsuario = (gcnew System::Windows::Forms::TextBox());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->dgvUsuarios = (gcnew System::Windows::Forms::DataGridView());
			this->btnCerrarBuscar = (gcnew System::Windows::Forms::Button());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabBloquear = (gcnew System::Windows::Forms::TabPage());
			this->lblTituloBloquear = (gcnew System::Windows::Forms::Label());
			this->lblBuscarCedula = (gcnew System::Windows::Forms::Label());
			this->txtBuscarCedula = (gcnew System::Windows::Forms::TextBox());
			this->panelUsuario = (gcnew System::Windows::Forms::Panel());
			this->lblNumeroUsuario = (gcnew System::Windows::Forms::Label());
			this->lblNombreBloquear = (gcnew System::Windows::Forms::Label());
			this->lblIdBloquear = (gcnew System::Windows::Forms::Label());
			this->lblCorreoBloquear = (gcnew System::Windows::Forms::Label());
			this->chkBloquearUsuario = (gcnew System::Windows::Forms::CheckBox());
			this->pictureFotoBloquear = (gcnew System::Windows::Forms::PictureBox());
			this->btnCerrarBloquear = (gcnew System::Windows::Forms::Button());
			this->btnEliminarUsuario = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabAgregar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFotoAgregar))->BeginInit();
			this->tabBuscar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUsuarios))->BeginInit();
			this->tabBloquear->SuspendLayout();
			this->panelUsuario->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFotoBloquear))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabAgregar);
			this->tabControl1->Controls->Add(this->tabBuscar);
			this->tabControl1->Controls->Add(this->tabBloquear);
			this->tabControl1->Location = System::Drawing::Point(20, 20);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(800, 430);
			this->tabControl1->TabIndex = 0;
			// 
			// tabAgregar
			// 
			this->tabAgregar->BackColor = System::Drawing::Color::White;
			this->tabAgregar->Controls->Add(this->lblTituloAgregar);
			this->tabAgregar->Controls->Add(this->lblUsuario);
			this->tabAgregar->Controls->Add(this->txtUsuario);
			this->tabAgregar->Controls->Add(this->lblNumeroID);
			this->tabAgregar->Controls->Add(this->txtNumeroID);
			this->tabAgregar->Controls->Add(this->lblPais);
			this->tabAgregar->Controls->Add(this->txtPais);
			this->tabAgregar->Controls->Add(this->lblContrasena);
			this->tabAgregar->Controls->Add(this->txtContrasena);
			this->tabAgregar->Controls->Add(this->lblFoto);
			this->tabAgregar->Controls->Add(this->pictureFotoAgregar);
			this->tabAgregar->Controls->Add(this->btnSalirAgregar);
			this->tabAgregar->Controls->Add(this->btnGuardarAgregar);
			this->tabAgregar->Location = System::Drawing::Point(4, 22);
			this->tabAgregar->Name = L"tabAgregar";
			this->tabAgregar->Size = System::Drawing::Size(792, 404);
			this->tabAgregar->TabIndex = 0;
			this->tabAgregar->Text = L"Agregar usuario";
			// 
			// lblTituloAgregar
			// 
			this->lblTituloAgregar->AutoSize = true;
			this->lblTituloAgregar->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->lblTituloAgregar->Location = System::Drawing::Point(20, 20);
			this->lblTituloAgregar->Name = L"lblTituloAgregar";
			this->lblTituloAgregar->Size = System::Drawing::Size(142, 22);
			this->lblTituloAgregar->TabIndex = 0;
			this->lblTituloAgregar->Text = L"Gestión usuario";
			// 
			// lblUsuario
			// 
			this->lblUsuario->AutoSize = true;
			this->lblUsuario->Location = System::Drawing::Point(40, 80);
			this->lblUsuario->Name = L"lblUsuario";
			this->lblUsuario->Size = System::Drawing::Size(81, 13);
			this->lblUsuario->TabIndex = 1;
			this->lblUsuario->Text = L"Ingrese Usuario";
			// 
			// txtUsuario
			// 
			this->txtUsuario->Location = System::Drawing::Point(40, 105);
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->Size = System::Drawing::Size(180, 20);
			this->txtUsuario->TabIndex = 2;
			// 
			// lblNumeroID
			// 
			this->lblNumeroID->AutoSize = true;
			this->lblNumeroID->Location = System::Drawing::Point(40, 145);
			this->lblNumeroID->Name = L"lblNumeroID";
			this->lblNumeroID->Size = System::Drawing::Size(58, 13);
			this->lblNumeroID->TabIndex = 3;
			this->lblNumeroID->Text = L"Número ID";
			// 
			// txtNumeroID
			// 
			this->txtNumeroID->Location = System::Drawing::Point(40, 170);
			this->txtNumeroID->Name = L"txtNumeroID";
			this->txtNumeroID->Size = System::Drawing::Size(180, 20);
			this->txtNumeroID->TabIndex = 4;
			// 
			// lblPais
			// 
			this->lblPais->AutoSize = true;
			this->lblPais->Location = System::Drawing::Point(40, 210);
			this->lblPais->Name = L"lblPais";
			this->lblPais->Size = System::Drawing::Size(29, 13);
			this->lblPais->TabIndex = 5;
			this->lblPais->Text = L"País";
			// 
			// txtPais
			// 
			this->txtPais->Location = System::Drawing::Point(40, 235);
			this->txtPais->Name = L"txtPais";
			this->txtPais->Size = System::Drawing::Size(180, 20);
			this->txtPais->TabIndex = 6;
			// 
			// lblContrasena
			// 
			this->lblContrasena->AutoSize = true;
			this->lblContrasena->Location = System::Drawing::Point(40, 275);
			this->lblContrasena->Name = L"lblContrasena";
			this->lblContrasena->Size = System::Drawing::Size(61, 13);
			this->lblContrasena->TabIndex = 7;
			this->lblContrasena->Text = L"Contraseña";
			// 
			// txtContrasena
			// 
			this->txtContrasena->Location = System::Drawing::Point(40, 300);
			this->txtContrasena->Name = L"txtContrasena";
			this->txtContrasena->PasswordChar = '*';
			this->txtContrasena->Size = System::Drawing::Size(180, 20);
			this->txtContrasena->TabIndex = 8;
			// 
			// lblFoto
			// 
			this->lblFoto->AutoSize = true;
			this->lblFoto->Location = System::Drawing::Point(505, 85);
			this->lblFoto->Name = L"lblFoto";
			this->lblFoto->Size = System::Drawing::Size(66, 13);
			this->lblFoto->TabIndex = 9;
			this->lblFoto->Text = L"Ingrese Foto";
			// 
			// pictureFotoAgregar
			// 
			this->pictureFotoAgregar->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureFotoAgregar->Location = System::Drawing::Point(480, 125);
			this->pictureFotoAgregar->Name = L"pictureFotoAgregar";
			this->pictureFotoAgregar->Size = System::Drawing::Size(150, 150);
			this->pictureFotoAgregar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureFotoAgregar->TabIndex = 10;
			this->pictureFotoAgregar->TabStop = false;
			// 
			// btnSalirAgregar
			// 
			this->btnSalirAgregar->BackColor = System::Drawing::Color::DodgerBlue;
			this->btnSalirAgregar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSalirAgregar->ForeColor = System::Drawing::Color::White;
			this->btnSalirAgregar->Location = System::Drawing::Point(430, 335);
			this->btnSalirAgregar->Name = L"btnSalirAgregar";
			this->btnSalirAgregar->Size = System::Drawing::Size(120, 35);
			this->btnSalirAgregar->TabIndex = 11;
			this->btnSalirAgregar->Text = L"Salir";
			this->btnSalirAgregar->UseVisualStyleBackColor = false;
			this->btnSalirAgregar->Click += gcnew System::EventHandler(this, &BloquearForm::btnSalir_Click);
			// 
			// btnGuardarAgregar
			// 
			this->btnGuardarAgregar->BackColor = System::Drawing::Color::DodgerBlue;
			this->btnGuardarAgregar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGuardarAgregar->ForeColor = System::Drawing::Color::White;
			this->btnGuardarAgregar->Location = System::Drawing::Point(580, 335);
			this->btnGuardarAgregar->Name = L"btnGuardarAgregar";
			this->btnGuardarAgregar->Size = System::Drawing::Size(120, 35);
			this->btnGuardarAgregar->TabIndex = 12;
			this->btnGuardarAgregar->Text = L"Guardar";
			this->btnGuardarAgregar->UseVisualStyleBackColor = false;
			this->btnGuardarAgregar->Click += gcnew System::EventHandler(this, &BloquearForm::btnGuardarAgregar_Click);
			// 
			// tabBuscar
			// 
			this->tabBuscar->BackColor = System::Drawing::Color::White;
			this->tabBuscar->Controls->Add(this->lblTituloBuscar);
			this->tabBuscar->Controls->Add(this->lblBuscarUsuario);
			this->tabBuscar->Controls->Add(this->txtBuscarUsuario);
			this->tabBuscar->Controls->Add(this->btnBuscar);
			this->tabBuscar->Controls->Add(this->dgvUsuarios);
			this->tabBuscar->Controls->Add(this->btnCerrarBuscar);
			this->tabBuscar->Location = System::Drawing::Point(4, 22);
			this->tabBuscar->Name = L"tabBuscar";
			this->tabBuscar->Size = System::Drawing::Size(792, 404);
			this->tabBuscar->TabIndex = 1;
			this->tabBuscar->Text = L"Buscar usuario";
			this->tabBuscar->Click += gcnew System::EventHandler(this, &BloquearForm::tabBuscar_Click);
			// 
			// lblTituloBuscar
			// 
			this->lblTituloBuscar->AutoSize = true;
			this->lblTituloBuscar->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->lblTituloBuscar->Location = System::Drawing::Point(20, 20);
			this->lblTituloBuscar->Name = L"lblTituloBuscar";
			this->lblTituloBuscar->Size = System::Drawing::Size(138, 22);
			this->lblTituloBuscar->TabIndex = 0;
			this->lblTituloBuscar->Text = L"Buscar Usuario";
			// 
			// lblBuscarUsuario
			// 
			this->lblBuscarUsuario->AutoSize = true;
			this->lblBuscarUsuario->Location = System::Drawing::Point(60, 80);
			this->lblBuscarUsuario->Name = L"lblBuscarUsuario";
			this->lblBuscarUsuario->Size = System::Drawing::Size(79, 13);
			this->lblBuscarUsuario->TabIndex = 1;
			this->lblBuscarUsuario->Text = L"Buscar Usuario";
			// 
			// txtBuscarUsuario
			// 
			this->txtBuscarUsuario->Location = System::Drawing::Point(180, 75);
			this->txtBuscarUsuario->Name = L"txtBuscarUsuario";
			this->txtBuscarUsuario->Size = System::Drawing::Size(180, 20);
			this->txtBuscarUsuario->TabIndex = 2;
			// 
			// btnBuscar
			// 
			this->btnBuscar->BackColor = System::Drawing::Color::DodgerBlue;
			this->btnBuscar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBuscar->ForeColor = System::Drawing::Color::White;
			this->btnBuscar->Location = System::Drawing::Point(410, 72);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(120, 35);
			this->btnBuscar->TabIndex = 3;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = false;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &BloquearForm::btnBuscar_Click);
			// 
			// dgvUsuarios
			// 
			this->dgvUsuarios->AllowUserToAddRows = false;
			this->dgvUsuarios->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5
			});
			this->dgvUsuarios->Location = System::Drawing::Point(160, 150);
			this->dgvUsuarios->Name = L"dgvUsuarios";
			this->dgvUsuarios->ReadOnly = true;
			this->dgvUsuarios->Size = System::Drawing::Size(500, 150);
			this->dgvUsuarios->TabIndex = 4;
			// 
			// btnCerrarBuscar
			// 
			this->btnCerrarBuscar->BackColor = System::Drawing::Color::DodgerBlue;
			this->btnCerrarBuscar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCerrarBuscar->ForeColor = System::Drawing::Color::White;
			this->btnCerrarBuscar->Location = System::Drawing::Point(60, 340);
			this->btnCerrarBuscar->Name = L"btnCerrarBuscar";
			this->btnCerrarBuscar->Size = System::Drawing::Size(120, 40);
			this->btnCerrarBuscar->TabIndex = 5;
			this->btnCerrarBuscar->Text = L"Cerrar";
			this->btnCerrarBuscar->UseVisualStyleBackColor = false;
			this->btnCerrarBuscar->Click += gcnew System::EventHandler(this, &BloquearForm::btnSalir_Click);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			// 
			// tabBloquear
			// 
			this->tabBloquear->BackColor = System::Drawing::Color::White;
			this->tabBloquear->Controls->Add(this->lblTituloBloquear);
			this->tabBloquear->Controls->Add(this->lblBuscarCedula);
			this->tabBloquear->Controls->Add(this->txtBuscarCedula);
			this->tabBloquear->Controls->Add(this->panelUsuario);
			this->tabBloquear->Controls->Add(this->pictureFotoBloquear);
			this->tabBloquear->Controls->Add(this->btnCerrarBloquear);
			this->tabBloquear->Controls->Add(this->btnEliminarUsuario);
			this->tabBloquear->Location = System::Drawing::Point(4, 22);
			this->tabBloquear->Name = L"tabBloquear";
			this->tabBloquear->Size = System::Drawing::Size(792, 404);
			this->tabBloquear->TabIndex = 2;
			this->tabBloquear->Text = L"Bloquear usuario";
			// 
			// lblTituloBloquear
			// 
			this->lblTituloBloquear->AutoSize = true;
			this->lblTituloBloquear->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->lblTituloBloquear->Location = System::Drawing::Point(20, 20);
			this->lblTituloBloquear->Name = L"lblTituloBloquear";
			this->lblTituloBloquear->Size = System::Drawing::Size(174, 22);
			this->lblTituloBloquear->TabIndex = 0;
			this->lblTituloBloquear->Text = L"Bloqueo de usuario";
			// 
			// lblBuscarCedula
			// 
			this->lblBuscarCedula->AutoSize = true;
			this->lblBuscarCedula->Location = System::Drawing::Point(60, 80);
			this->lblBuscarCedula->Name = L"lblBuscarCedula";
			this->lblBuscarCedula->Size = System::Drawing::Size(94, 13);
			this->lblBuscarCedula->TabIndex = 1;
			this->lblBuscarCedula->Text = L"Buscar por Cédula";
			// 
			// txtBuscarCedula
			// 
			this->txtBuscarCedula->Location = System::Drawing::Point(190, 75);
			this->txtBuscarCedula->Name = L"txtBuscarCedula";
			this->txtBuscarCedula->Size = System::Drawing::Size(180, 20);
			this->txtBuscarCedula->TabIndex = 2;
			// 
			// panelUsuario
			// 
			this->panelUsuario->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelUsuario->Controls->Add(this->lblNumeroUsuario);
			this->panelUsuario->Controls->Add(this->lblNombreBloquear);
			this->panelUsuario->Controls->Add(this->lblIdBloquear);
			this->panelUsuario->Controls->Add(this->lblCorreoBloquear);
			this->panelUsuario->Controls->Add(this->chkBloquearUsuario);
			this->panelUsuario->Location = System::Drawing::Point(60, 125);
			this->panelUsuario->Name = L"panelUsuario";
			this->panelUsuario->Size = System::Drawing::Size(290, 190);
			this->panelUsuario->TabIndex = 3;
			// 
			// lblNumeroUsuario
			// 
			this->lblNumeroUsuario->AutoSize = true;
			this->lblNumeroUsuario->Location = System::Drawing::Point(10, 10);
			this->lblNumeroUsuario->Name = L"lblNumeroUsuario";
			this->lblNumeroUsuario->Size = System::Drawing::Size(48, 13);
			this->lblNumeroUsuario->TabIndex = 0;
			this->lblNumeroUsuario->Text = L"#usuario";
			// 
			// lblNombreBloquear
			// 
			this->lblNombreBloquear->AutoSize = true;
			this->lblNombreBloquear->Font = (gcnew System::Drawing::Font(L"Arial", 12));
			this->lblNombreBloquear->Location = System::Drawing::Point(120, 50);
			this->lblNombreBloquear->Name = L"lblNombreBloquear";
			this->lblNombreBloquear->Size = System::Drawing::Size(64, 18);
			this->lblNombreBloquear->TabIndex = 1;
			this->lblNombreBloquear->Text = L"Nombre";
			// 
			// lblIdBloquear
			// 
			this->lblIdBloquear->AutoSize = true;
			this->lblIdBloquear->Font = (gcnew System::Drawing::Font(L"Arial", 12));
			this->lblIdBloquear->Location = System::Drawing::Point(140, 75);
			this->lblIdBloquear->Name = L"lblIdBloquear";
			this->lblIdBloquear->Size = System::Drawing::Size(20, 18);
			this->lblIdBloquear->TabIndex = 2;
			this->lblIdBloquear->Text = L"Id";
			// 
			// lblCorreoBloquear
			// 
			this->lblCorreoBloquear->AutoSize = true;
			this->lblCorreoBloquear->Font = (gcnew System::Drawing::Font(L"Arial", 12));
			this->lblCorreoBloquear->Location = System::Drawing::Point(125, 100);
			this->lblCorreoBloquear->Name = L"lblCorreoBloquear";
			this->lblCorreoBloquear->Size = System::Drawing::Size(57, 18);
			this->lblCorreoBloquear->TabIndex = 3;
			this->lblCorreoBloquear->Text = L"Correo";
			// 
			// chkBloquearUsuario
			// 
			this->chkBloquearUsuario->AutoSize = true;
			this->chkBloquearUsuario->Location = System::Drawing::Point(145, 145);
			this->chkBloquearUsuario->Name = L"chkBloquearUsuario";
			this->chkBloquearUsuario->Size = System::Drawing::Size(105, 17);
			this->chkBloquearUsuario->TabIndex = 4;
			this->chkBloquearUsuario->Text = L"Bloquear usuario";
			// 
			// pictureFotoBloquear
			// 
			this->pictureFotoBloquear->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureFotoBloquear->Location = System::Drawing::Point(470, 145);
			this->pictureFotoBloquear->Name = L"pictureFotoBloquear";
			this->pictureFotoBloquear->Size = System::Drawing::Size(120, 120);
			this->pictureFotoBloquear->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureFotoBloquear->TabIndex = 4;
			this->pictureFotoBloquear->TabStop = false;
			// 
			// btnCerrarBloquear
			// 
			this->btnCerrarBloquear->BackColor = System::Drawing::Color::DodgerBlue;
			this->btnCerrarBloquear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCerrarBloquear->ForeColor = System::Drawing::Color::White;
			this->btnCerrarBloquear->Location = System::Drawing::Point(40, 350);
			this->btnCerrarBloquear->Name = L"btnCerrarBloquear";
			this->btnCerrarBloquear->Size = System::Drawing::Size(120, 40);
			this->btnCerrarBloquear->TabIndex = 5;
			this->btnCerrarBloquear->Text = L"Cerrar";
			this->btnCerrarBloquear->UseVisualStyleBackColor = false;
			this->btnCerrarBloquear->Click += gcnew System::EventHandler(this, &BloquearForm::btnSalir_Click);
			// 
			// btnEliminarUsuario
			// 
			this->btnEliminarUsuario->BackColor = System::Drawing::Color::LightCoral;
			this->btnEliminarUsuario->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEliminarUsuario->ForeColor = System::Drawing::Color::White;
			this->btnEliminarUsuario->Location = System::Drawing::Point(610, 350);
			this->btnEliminarUsuario->Name = L"btnEliminarUsuario";
			this->btnEliminarUsuario->Size = System::Drawing::Size(140, 40);
			this->btnEliminarUsuario->TabIndex = 6;
			this->btnEliminarUsuario->Text = L"Eliminar Usuario";
			this->btnEliminarUsuario->UseVisualStyleBackColor = false;
			this->btnEliminarUsuario->Click += gcnew System::EventHandler(this, &BloquearForm::btnEliminarUsuario_Click);
			// 
			// BloquearForm
			// 
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(850, 500);
			this->Controls->Add(this->tabControl1);
			this->Name = L"BloquearForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Gestión de Usuarios";
			this->Load += gcnew System::EventHandler(this, &BloquearForm::BloquearForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabAgregar->ResumeLayout(false);
			this->tabAgregar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFotoAgregar))->EndInit();
			this->tabBuscar->ResumeLayout(false);
			this->tabBuscar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUsuarios))->EndInit();
			this->tabBloquear->ResumeLayout(false);
			this->tabBloquear->PerformLayout();
			this->panelUsuario->ResumeLayout(false);
			this->panelUsuario->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFotoBloquear))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion

	private:

		System::Void btnGuardarAgregar_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (txtUsuario->Text == "" || txtNumeroID->Text == "" || txtPais->Text == "" || txtContrasena->Text == "")
			{
				MessageBox::Show("Debe llenar todos los campos.", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			dgvUsuarios->Rows->Add(
				txtUsuario->Text,
				txtNumeroID->Text,
				txtPais->Text,
				txtContrasena->Text,
				"Activo"
			);

			MessageBox::Show("Usuario guardado correctamente.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);

			txtUsuario->Clear();
			txtNumeroID->Clear();
			txtPais->Clear();
			txtContrasena->Clear();
		}

		System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e)
		{
			String^ usuarioBuscado = txtBuscarUsuario->Text;

			if (usuarioBuscado == "")
			{
				MessageBox::Show("Ingrese el usuario que desea buscar.", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			bool encontrado = false;

			for each (DataGridViewRow ^ fila in dgvUsuarios->Rows)
			{
				if (fila->Cells[0]->Value != nullptr &&
					fila->Cells[0]->Value->ToString()->ToLower() == usuarioBuscado->ToLower())
				{
					fila->Selected = true;
					encontrado = true;

					MessageBox::Show("Usuario encontrado.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
					break;
				}
			}

			if (!encontrado)
			{
				MessageBox::Show("Usuario no encontrado.", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}

		System::Void btnEliminarUsuario_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (chkBloquearUsuario->Checked == false)
			{
				MessageBox::Show("Debe marcar la opción Bloquear usuario.", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			MessageBox::Show("Usuario bloqueado correctamente.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->Close();
		}
	private: System::Void tabBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void BloquearForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}