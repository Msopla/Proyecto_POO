#pragma once

#include "../Controladores/PacienteController.h"

namespace ProyectoPOO {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;


    public ref class pacienteForm : public System::Windows::Forms::Form
    {
    public:
        pacienteForm(void)
        {
            InitializeComponent();
            controlador = gcnew ProyectoPOO::Controladores::PacienteController();
        }

    protected:

        ~pacienteForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::TabControl^ tabControl1;
    private: System::Windows::Forms::TabPage^ tabIngresar;
    private: System::Windows::Forms::TabPage^ tabVer;
    private: System::Windows::Forms::TabPage^ tabInformacion;
    private: System::Windows::Forms::Label^ labelCedula;
    private: System::Windows::Forms::Label^ labelNombre;
    private: System::Windows::Forms::Label^ labelCorreo;
    private: System::Windows::Forms::Label^ labelMotivo;
    private: System::Windows::Forms::Label^ labelSangre;
    private: System::Windows::Forms::Label^ labelAlergias;
    private: System::Windows::Forms::Label^ labelEnfermedades;
    private: System::Windows::Forms::Label^ labelSeguro;
    private: System::Windows::Forms::Label^ labelMedico;
    private: System::Windows::Forms::TextBox^ textBoxCedula;
    private: System::Windows::Forms::TextBox^ textBoxNombre;
    private: System::Windows::Forms::TextBox^ textBoxCorreo;
    private: System::Windows::Forms::TextBox^ textBoxMotivo;
    private: System::Windows::Forms::TextBox^ textBoxAlergias;
    private: System::Windows::Forms::TextBox^ textBoxEnfermedades;
    private: System::Windows::Forms::TextBox^ textBoxSeguro;
    private: System::Windows::Forms::TextBox^ textBoxMedico;
    private: System::Windows::Forms::ComboBox^ comboBoxSangre;
    private: System::Windows::Forms::Button^ buttonAgregar;
    private: System::Windows::Forms::DataGridView^ dataGridViewPacientes;
    private: System::Windows::Forms::DataGridView^ dataGridViewInformacion;
    private: System::Windows::Forms::Label^ labelTitulo;
    private: System::Windows::Forms::Label^ labelMensaje;
    private: System::Windows::Forms::Button^ buttonAtras;
    private: ProyectoPOO::Controladores::PacienteController^ controlador;

    protected:

    private:

        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(pacienteForm::typeid));
            this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->tabIngresar = (gcnew System::Windows::Forms::TabPage());
            this->tabVer = (gcnew System::Windows::Forms::TabPage());
            this->tabInformacion = (gcnew System::Windows::Forms::TabPage());
            this->labelTitulo = (gcnew System::Windows::Forms::Label());
            this->labelCedula = (gcnew System::Windows::Forms::Label());
            this->textBoxCedula = (gcnew System::Windows::Forms::TextBox());
            this->labelNombre = (gcnew System::Windows::Forms::Label());
            this->textBoxNombre = (gcnew System::Windows::Forms::TextBox());
            this->labelCorreo = (gcnew System::Windows::Forms::Label());
            this->textBoxCorreo = (gcnew System::Windows::Forms::TextBox());
            this->labelMotivo = (gcnew System::Windows::Forms::Label());
            this->textBoxMotivo = (gcnew System::Windows::Forms::TextBox());
            this->labelSangre = (gcnew System::Windows::Forms::Label());
            this->comboBoxSangre = (gcnew System::Windows::Forms::ComboBox());
            this->labelAlergias = (gcnew System::Windows::Forms::Label());
            this->textBoxAlergias = (gcnew System::Windows::Forms::TextBox());
            this->labelEnfermedades = (gcnew System::Windows::Forms::Label());
            this->textBoxEnfermedades = (gcnew System::Windows::Forms::TextBox());
            this->labelSeguro = (gcnew System::Windows::Forms::Label());
            this->textBoxSeguro = (gcnew System::Windows::Forms::TextBox());
            this->labelMedico = (gcnew System::Windows::Forms::Label());
            this->textBoxMedico = (gcnew System::Windows::Forms::TextBox());
            this->buttonAgregar = (gcnew System::Windows::Forms::Button());
            this->labelMensaje = (gcnew System::Windows::Forms::Label());
            this->dataGridViewPacientes = (gcnew System::Windows::Forms::DataGridView());
            this->dataGridViewInformacion = (gcnew System::Windows::Forms::DataGridView());
            this->buttonAtras = (gcnew System::Windows::Forms::Button());
            this->tabControl1->SuspendLayout();
            this->tabIngresar->SuspendLayout();
            this->tabVer->SuspendLayout();
            this->tabInformacion->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPacientes))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewInformacion))->BeginInit();
            this->SuspendLayout();
            // 
            // tabControl1
            // 
            this->tabControl1->Controls->Add(this->tabIngresar);
            this->tabControl1->Controls->Add(this->tabVer);
            this->tabControl1->Controls->Add(this->tabInformacion);
            this->tabControl1->Location = System::Drawing::Point(0, 0);
            this->tabControl1->Name = L"tabControl1";
            this->tabControl1->SelectedIndex = 0;
            this->tabControl1->Size = System::Drawing::Size(714, 525);
            this->tabControl1->TabIndex = 0;
            // 
            // tabIngresar
            // 
            this->tabIngresar->BackColor = System::Drawing::SystemColors::ButtonShadow;
            this->tabIngresar->Controls->Add(this->labelMensaje);
            this->tabIngresar->Controls->Add(this->buttonAgregar);
            this->tabIngresar->Controls->Add(this->textBoxMedico);
            this->tabIngresar->Controls->Add(this->labelMedico);
            this->tabIngresar->Controls->Add(this->textBoxSeguro);
            this->tabIngresar->Controls->Add(this->labelSeguro);
            this->tabIngresar->Controls->Add(this->textBoxEnfermedades);
            this->tabIngresar->Controls->Add(this->labelEnfermedades);
            this->tabIngresar->Controls->Add(this->textBoxAlergias);
            this->tabIngresar->Controls->Add(this->labelAlergias);
            this->tabIngresar->Controls->Add(this->comboBoxSangre);
            this->tabIngresar->Controls->Add(this->labelSangre);
            this->tabIngresar->Controls->Add(this->textBoxMotivo);
            this->tabIngresar->Controls->Add(this->labelMotivo);
            this->tabIngresar->Controls->Add(this->textBoxCorreo);
            this->tabIngresar->Controls->Add(this->labelCorreo);
            this->tabIngresar->Controls->Add(this->textBoxNombre);
            this->tabIngresar->Controls->Add(this->labelNombre);
            this->tabIngresar->Controls->Add(this->textBoxCedula);
            this->tabIngresar->Controls->Add(this->labelCedula);
            this->tabIngresar->Controls->Add(this->labelTitulo);
            this->tabIngresar->Location = System::Drawing::Point(4, 25);
            this->tabIngresar->Name = L"tabIngresar";
            this->tabIngresar->Padding = System::Windows::Forms::Padding(3);
            this->tabIngresar->Size = System::Drawing::Size(706, 496);
            this->tabIngresar->TabIndex = 0;
            this->tabIngresar->Text = L"Ingresar Paciente";
            // 
            // tabVer
            // 
            this->tabVer->BackColor = System::Drawing::SystemColors::ButtonShadow;
            this->tabVer->Controls->Add(this->dataGridViewPacientes);
            this->tabVer->Location = System::Drawing::Point(4, 25);
            this->tabVer->Name = L"tabVer";
            this->tabVer->Padding = System::Windows::Forms::Padding(3);
            this->tabVer->Size = System::Drawing::Size(706, 496);
            this->tabVer->TabIndex = 1;
            this->tabVer->Text = L"Ver Pacientes";
            // 
            // tabInformacion
            // 
            this->tabInformacion->BackColor = System::Drawing::SystemColors::ButtonShadow;
            this->tabInformacion->Controls->Add(this->dataGridViewInformacion);
            this->tabInformacion->Location = System::Drawing::Point(4, 25);
            this->tabInformacion->Name = L"tabInformacion";
            this->tabInformacion->Padding = System::Windows::Forms::Padding(3);
            this->tabInformacion->Size = System::Drawing::Size(706, 496);
            this->tabInformacion->TabIndex = 2;
            this->tabInformacion->Text = L"Informacion";
            // 
            // labelTitulo
            // 
            this->labelTitulo->AutoSize = true;
            this->labelTitulo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelTitulo->Location = System::Drawing::Point(120, 10);
            this->labelTitulo->Name = L"labelTitulo";
            this->labelTitulo->Size = System::Drawing::Size(420, 32);
            this->labelTitulo->TabIndex = 0;
            this->labelTitulo->Text = L"Ingresar Nuevo Paciente";
            // 
            // labelCedula
            // 
            this->labelCedula->AutoSize = true;
            this->labelCedula->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelCedula->Location = System::Drawing::Point(15, 55);
            this->labelCedula->Name = L"labelCedula";
            this->labelCedula->Size = System::Drawing::Size(58, 19);
            this->labelCedula->TabIndex = 1;
            this->labelCedula->Text = L"Cedula:";
            // 
            // textBoxCedula
            // 
            this->textBoxCedula->Location = System::Drawing::Point(110, 53);
            this->textBoxCedula->Name = L"textBoxCedula";
            this->textBoxCedula->Size = System::Drawing::Size(140, 22);
            this->textBoxCedula->TabIndex = 2;
            // 
            // labelNombre
            // 
            this->labelNombre->AutoSize = true;
            this->labelNombre->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelNombre->Location = System::Drawing::Point(15, 90);
            this->labelNombre->Name = L"labelNombre";
            this->labelNombre->Size = System::Drawing::Size(62, 19);
            this->labelNombre->TabIndex = 3;
            this->labelNombre->Text = L"Nombre:";
            // 
            // textBoxNombre
            // 
            this->textBoxNombre->Location = System::Drawing::Point(110, 88);
            this->textBoxNombre->Name = L"textBoxNombre";
            this->textBoxNombre->Size = System::Drawing::Size(140, 22);
            this->textBoxNombre->TabIndex = 4;
            // 
            // labelCorreo
            // 
            this->labelCorreo->AutoSize = true;
            this->labelCorreo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelCorreo->Location = System::Drawing::Point(15, 125);
            this->labelCorreo->Name = L"labelCorreo";
            this->labelCorreo->Size = System::Drawing::Size(57, 19);
            this->labelCorreo->TabIndex = 5;
            this->labelCorreo->Text = L"Correo:";
            // 
            // textBoxCorreo
            // 
            this->textBoxCorreo->Location = System::Drawing::Point(110, 123);
            this->textBoxCorreo->Name = L"textBoxCorreo";
            this->textBoxCorreo->Size = System::Drawing::Size(140, 22);
            this->textBoxCorreo->TabIndex = 6;
            // 
            // labelMotivo
            // 
            this->labelMotivo->AutoSize = true;
            this->labelMotivo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelMotivo->Location = System::Drawing::Point(15, 160);
            this->labelMotivo->Name = L"labelMotivo";
            this->labelMotivo->Size = System::Drawing::Size(56, 19);
            this->labelMotivo->TabIndex = 7;
            this->labelMotivo->Text = L"Motivo:";
            // 
            // textBoxMotivo
            // 
            this->textBoxMotivo->Location = System::Drawing::Point(110, 158);
            this->textBoxMotivo->Name = L"textBoxMotivo";
            this->textBoxMotivo->Size = System::Drawing::Size(140, 22);
            this->textBoxMotivo->TabIndex = 8;
            // 
            // labelSangre
            // 
            this->labelSangre->AutoSize = true;
            this->labelSangre->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelSangre->Location = System::Drawing::Point(420, 55);
            this->labelSangre->Name = L"labelSangre";
            this->labelSangre->Size = System::Drawing::Size(57, 19);
            this->labelSangre->TabIndex = 9;
            this->labelSangre->Text = L"Sangre:";
            // 
            // comboBoxSangre
            // 
            this->comboBoxSangre->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->comboBoxSangre->FormattingEnabled = true;
            this->comboBoxSangre->Items->AddRange(gcnew cli::array< System::Object^  >(8) { L"O+", L"O-", L"A+", L"A-", L"B+", L"B-", L"AB+", L"AB-" });
            this->comboBoxSangre->Location = System::Drawing::Point(510, 53);
            this->comboBoxSangre->Name = L"comboBoxSangre";
            this->comboBoxSangre->Size = System::Drawing::Size(150, 21);
            this->comboBoxSangre->TabIndex = 10;
            // 
            // labelAlergias
            // 
            this->labelAlergias->AutoSize = true;
            this->labelAlergias->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelAlergias->Location = System::Drawing::Point(420, 90);
            this->labelAlergias->Name = L"labelAlergias";
            this->labelAlergias->Size = System::Drawing::Size(63, 19);
            this->labelAlergias->TabIndex = 11;
            this->labelAlergias->Text = L"Alergias:";
            // 
            // textBoxAlergias
            // 
            this->textBoxAlergias->Location = System::Drawing::Point(510, 88);
            this->textBoxAlergias->Name = L"textBoxAlergias";
            this->textBoxAlergias->Size = System::Drawing::Size(150, 22);
            this->textBoxAlergias->TabIndex = 12;
            // 
            // labelEnfermedades
            // 
            this->labelEnfermedades->AutoSize = true;
            this->labelEnfermedades->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelEnfermedades->Location = System::Drawing::Point(420, 125);
            this->labelEnfermedades->Name = L"labelEnfermedades";
            this->labelEnfermedades->Size = System::Drawing::Size(72, 19);
            this->labelEnfermedades->TabIndex = 13;
            this->labelEnfermedades->Text = L"Enferm.:";
            // 
            // textBoxEnfermedades
            // 
            this->textBoxEnfermedades->Location = System::Drawing::Point(510, 123);
            this->textBoxEnfermedades->Name = L"textBoxEnfermedades";
            this->textBoxEnfermedades->Size = System::Drawing::Size(150, 22);
            this->textBoxEnfermedades->TabIndex = 14;
            // 
            // labelSeguro
            // 
            this->labelSeguro->AutoSize = true;
            this->labelSeguro->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelSeguro->Location = System::Drawing::Point(420, 160);
            this->labelSeguro->Name = L"labelSeguro";
            this->labelSeguro->Size = System::Drawing::Size(56, 19);
            this->labelSeguro->TabIndex = 15;
            this->labelSeguro->Text = L"Seguro:";
            // 
            // textBoxSeguro
            // 
            this->textBoxSeguro->Location = System::Drawing::Point(510, 158);
            this->textBoxSeguro->Name = L"textBoxSeguro";
            this->textBoxSeguro->Size = System::Drawing::Size(150, 22);
            this->textBoxSeguro->TabIndex = 16;
            // 
            // labelMedico
            // 
            this->labelMedico->AutoSize = true;
            this->labelMedico->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelMedico->Location = System::Drawing::Point(420, 195);
            this->labelMedico->Name = L"labelMedico";
            this->labelMedico->Size = System::Drawing::Size(57, 19);
            this->labelMedico->TabIndex = 17;
            this->labelMedico->Text = L"Medico:";
            // 
            // textBoxMedico
            // 
            this->textBoxMedico->Location = System::Drawing::Point(510, 193);
            this->textBoxMedico->Name = L"textBoxMedico";
            this->textBoxMedico->Size = System::Drawing::Size(150, 22);
            this->textBoxMedico->TabIndex = 18;
            // 
            // buttonAgregar
            // 
            this->buttonAgregar->BackColor = System::Drawing::SystemColors::MenuHighlight;
            this->buttonAgregar->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonAgregar->Location = System::Drawing::Point(280, 250);
            this->buttonAgregar->Name = L"buttonAgregar";
            this->buttonAgregar->Size = System::Drawing::Size(150, 40);
            this->buttonAgregar->TabIndex = 19;
            this->buttonAgregar->Text = L"Agregar Paciente";
            this->buttonAgregar->UseVisualStyleBackColor = false;
            this->buttonAgregar->Click += gcnew System::EventHandler(this, &pacienteForm::buttonAgregar_Click);
            // 
            // labelMensaje
            // 
            this->labelMensaje->AutoSize = true;
            this->labelMensaje->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelMensaje->ForeColor = System::Drawing::Color::Green;
            this->labelMensaje->Location = System::Drawing::Point(200, 310);
            this->labelMensaje->Name = L"labelMensaje";
            this->labelMensaje->Size = System::Drawing::Size(0, 19);
            this->labelMensaje->TabIndex = 20;
            // 
            // dataGridViewPacientes
            // 
            this->dataGridViewPacientes->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dataGridViewPacientes->BackgroundColor = System::Drawing::SystemColors::ButtonShadow;
            this->dataGridViewPacientes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridViewPacientes->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dataGridViewPacientes->Location = System::Drawing::Point(3, 3);
            this->dataGridViewPacientes->Name = L"dataGridViewPacientes";
            this->dataGridViewPacientes->RowHeadersVisible = false;
            this->dataGridViewPacientes->RowTemplate->Height = 24;
            this->dataGridViewPacientes->Size = System::Drawing::Size(700, 490);
            this->dataGridViewPacientes->TabIndex = 0;
            // 
            // dataGridViewInformacion
            // 
            this->dataGridViewInformacion->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dataGridViewInformacion->BackgroundColor = System::Drawing::SystemColors::ButtonShadow;
            this->dataGridViewInformacion->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridViewInformacion->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dataGridViewInformacion->Location = System::Drawing::Point(3, 3);
            this->dataGridViewInformacion->Name = L"dataGridViewInformacion";
            this->dataGridViewInformacion->RowHeadersVisible = false;
            this->dataGridViewInformacion->RowTemplate->Height = 24;
            this->dataGridViewInformacion->Size = System::Drawing::Size(700, 490);
            this->dataGridViewInformacion->TabIndex = 0;
            // 
            // buttonAtras
            // 
            this->buttonAtras->BackColor = System::Drawing::SystemColors::MenuHighlight;
            this->buttonAtras->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonAtras->Location = System::Drawing::Point(12, 478);
            this->buttonAtras->Name = L"buttonAtras";
            this->buttonAtras->Size = System::Drawing::Size(100, 35);
            this->buttonAtras->TabIndex = 1;
            this->buttonAtras->Text = L"Atras";
            this->buttonAtras->UseVisualStyleBackColor = false;
            this->buttonAtras->Click += gcnew System::EventHandler(this, &pacienteForm::buttonAtras_Click);
            // 
            // pacienteForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));

            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(714, 525);
            this->Controls->Add(this->buttonAtras);
            this->Controls->Add(this->tabControl1);
            this->Name = L"pacienteForm";
            this->Text = L"pacienteForm";
            this->Load += gcnew System::EventHandler(this, &pacienteForm::pacienteForm_Load);
            this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &pacienteForm::pacienteForm_FormClosing);
            this->tabControl1->ResumeLayout(false);
            this->tabIngresar->ResumeLayout(false);
            this->tabIngresar->PerformLayout();
            this->tabVer->ResumeLayout(false);
            this->tabInformacion->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPacientes))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewInformacion))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void buttonAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
        // Validar campos vacíos
        if (this->textBoxCedula->Text->Trim()->Length == 0 ||
            this->textBoxNombre->Text->Trim()->Length == 0 ||
            this->textBoxCorreo->Text->Trim()->Length == 0 ||
            this->textBoxMotivo->Text->Trim()->Length == 0 ||
            this->comboBoxSangre->SelectedIndex == -1 ||
            this->textBoxAlergias->Text->Trim()->Length == 0 ||
            this->textBoxEnfermedades->Text->Trim()->Length == 0 ||
            this->textBoxSeguro->Text->Trim()->Length == 0 ||
            this->textBoxMedico->Text->Trim()->Length == 0) {
            this->labelMensaje->ForeColor = System::Drawing::Color::Red;
            this->labelMensaje->Text = L"Por favor, complete todos los campos";
            return;
        }

        // Generar ID automático
        ProyectoPOO::Modelos::Paciente^ paciente = gcnew ProyectoPOO::Modelos::Paciente();
        paciente->Cedula = this->textBoxCedula->Text->Trim();
        paciente->Nombre = this->textBoxNombre->Text->Trim();
        paciente->Correo = this->textBoxCorreo->Text->Trim();
        paciente->Motivo = this->textBoxMotivo->Text->Trim();
        paciente->TipoSangre = this->comboBoxSangre->SelectedItem->ToString();
        paciente->Alergias = this->textBoxAlergias->Text->Trim();
        paciente->Enfermedades = this->textBoxEnfermedades->Text->Trim();
        paciente->SeguroMedico = this->textBoxSeguro->Text->Trim();
        paciente->MedicoTratante = this->textBoxMedico->Text->Trim();

        try {
            controlador->Agregar(paciente);
        }
        catch (System::Exception^ ex) {
            this->labelMensaje->ForeColor = System::Drawing::Color::Red;
            this->labelMensaje->Text = ex->Message;
            return;
        }

        // Mostrar mensaje de exito
        this->labelMensaje->ForeColor = System::Drawing::Color::Green;
        this->labelMensaje->Text = L"Paciente #" + paciente->Id + L" guardado exitosamente";

        // Limpiar campos
        this->textBoxCedula->Clear();
        this->textBoxNombre->Clear();
        this->textBoxCorreo->Clear();
        this->textBoxMotivo->Clear();
        this->textBoxAlergias->Clear();
        this->textBoxEnfermedades->Clear();
        this->textBoxSeguro->Clear();
        this->textBoxMedico->Clear();
        this->comboBoxSangre->SelectedIndex = -1;
        this->textBoxCedula->Focus();

        // Actualizar los DataGridViews
        ActualizarGridPacientes();
        ActualizarGridInformacion();
    }
    private: System::Void pacienteForm_Load(System::Object^ sender, System::EventArgs^ e) {
        // Inicializar la lista de pacientes
        controlador->Recargar();

        // Configurar columnas del DataGridView Ver Pacientes
        this->dataGridViewPacientes->ColumnCount = 6;
        this->dataGridViewPacientes->Columns[0]->Name = L"ID";
        this->dataGridViewPacientes->Columns[1]->Name = L"Cedula";
        this->dataGridViewPacientes->Columns[2]->Name = L"Nombre";
        this->dataGridViewPacientes->Columns[3]->Name = L"Correo";
        this->dataGridViewPacientes->Columns[4]->Name = L"Motivo";
        this->dataGridViewPacientes->Columns[5]->Name = L"Estado";

        // Configurar columnas del DataGridView Información
        this->dataGridViewInformacion->ColumnCount = 10;
        this->dataGridViewInformacion->Columns[0]->Name = L"ID";
        this->dataGridViewInformacion->Columns[1]->Name = L"Nombre";
        this->dataGridViewInformacion->Columns[2]->Name = L"Tipo Sangre";
        this->dataGridViewInformacion->Columns[3]->Name = L"Alergias";
        this->dataGridViewInformacion->Columns[4]->Name = L"Enfermedades";
        this->dataGridViewInformacion->Columns[5]->Name = L"Seguro Medico";
        this->dataGridViewInformacion->Columns[6]->Name = L"Medico Tratante";
        this->dataGridViewInformacion->Columns[7]->Name = L"Cedula";
        this->dataGridViewInformacion->Columns[8]->Name = L"Correo";
        this->dataGridViewInformacion->Columns[9]->Name = L"Estado";

        // Actualizar los grids con los datos cargados
        ActualizarGridPacientes();
        ActualizarGridInformacion();
    }
    private: System::Void ActualizarGridPacientes() {
        this->dataGridViewPacientes->Rows->Clear();

        for each (ProyectoPOO::Modelos::Paciente^ paciente in controlador->ObtenerTodos()) {
            array<System::String^>^ row = gcnew array<System::String^>(6);
            row[0] = paciente->Id;
            row[1] = paciente->Cedula;
            row[2] = paciente->Nombre;
            row[3] = paciente->Correo;
            row[4] = paciente->Motivo;
            row[5] = paciente->Estado;

            this->dataGridViewPacientes->Rows->Add(row);
        }
    }
    private: System::Void ActualizarGridInformacion() {
        this->dataGridViewInformacion->Rows->Clear();

        for each (ProyectoPOO::Modelos::Paciente^ paciente in controlador->ObtenerTodos()) {
            array<System::String^>^ row = gcnew array<System::String^>(10);
            row[0] = paciente->Id;
            row[1] = paciente->Nombre;
            row[2] = paciente->TipoSangre;
            row[3] = paciente->Alergias;
            row[4] = paciente->Enfermedades;
            row[5] = paciente->SeguroMedico;
            row[6] = paciente->MedicoTratante;
            row[7] = paciente->Cedula;
            row[8] = paciente->Correo;
            row[9] = paciente->Estado;

            this->dataGridViewInformacion->Rows->Add(row);
        }
    }
    private: System::Void buttonAtras_Click(System::Object^ sender, System::EventArgs^ e) {
        // Cerrar el formulario y volver a MenuForm
        this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
        this->Close();
    }
    private: System::Void pacienteForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
        controlador->GuardarCambios();
    }
    };
}
