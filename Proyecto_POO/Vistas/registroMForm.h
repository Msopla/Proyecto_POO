#pragma once

#include "../Controladores/MedicamentoController.h"

namespace ProyectoPOO {

    using namespace System;
    using namespace System::Collections::Generic;
    using namespace System::Drawing;
    using namespace System::IO;
    using namespace System::Windows::Forms;
    using namespace ProyectoPOO::Controladores;
    using namespace ProyectoPOO::Modelos;

    public ref class registroMForm : public Form
    {
    public:
        registroMForm(void)
        {
            controlador = gcnew MedicamentoController();
            medicamentosCargados = gcnew List<Medicamento^>();
            InitializeComponent();
        }

    protected:
        ~registroMForm()
        {
            if (components) {
                delete components;
            }
        }

    private:
        System::ComponentModel::Container^ components;
        MedicamentoController^ controlador;
        List<Medicamento^>^ medicamentosCargados;
        System::Windows::Forms::Label^ lblArchivo;
        System::Windows::Forms::TextBox^ txtRuta;
        System::Windows::Forms::Button^ btnExplorador;
        System::Windows::Forms::Button^ btnLeer;
        System::Windows::Forms::GroupBox^ grpMedicamentos;
        System::Windows::Forms::DataGridView^ dgvMedicamentos;
        System::Windows::Forms::DataGridViewTextBoxColumn^ colNombre;
        System::Windows::Forms::DataGridViewTextBoxColumn^ colLote;
        System::Windows::Forms::DataGridViewTextBoxColumn^ colFecha;
        System::Windows::Forms::DataGridViewTextBoxColumn^ colPrecio;
        System::Windows::Forms::Button^ btnAgregar;
        System::Windows::Forms::Button^ btnGuardar;
        System::Windows::Forms::Button^ btnSalir;
        System::Windows::Forms::OpenFileDialog^ openFileDialogJson;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->lblArchivo = (gcnew System::Windows::Forms::Label());
            this->txtRuta = (gcnew System::Windows::Forms::TextBox());
            this->btnExplorador = (gcnew System::Windows::Forms::Button());
            this->btnLeer = (gcnew System::Windows::Forms::Button());
            this->grpMedicamentos = (gcnew System::Windows::Forms::GroupBox());
            this->dgvMedicamentos = (gcnew System::Windows::Forms::DataGridView());
            this->colNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->colLote = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->colFecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->colPrecio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->btnAgregar = (gcnew System::Windows::Forms::Button());
            this->btnGuardar = (gcnew System::Windows::Forms::Button());
            this->btnSalir = (gcnew System::Windows::Forms::Button());
            this->openFileDialogJson = (gcnew System::Windows::Forms::OpenFileDialog());
            this->grpMedicamentos->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMedicamentos))->BeginInit();
            this->SuspendLayout();
            // 
            // lblArchivo
            // 
            this->lblArchivo->AutoSize = true;
            this->lblArchivo->BackColor = System::Drawing::Color::Transparent;
            this->lblArchivo->ForeColor = System::Drawing::Color::Black;
            this->lblArchivo->Location = System::Drawing::Point(28, 47);
            this->lblArchivo->Name = L"lblArchivo";
            this->lblArchivo->Size = System::Drawing::Size(124, 15);
            this->lblArchivo->TabIndex = 6;
            this->lblArchivo->Text = L"ABRIR ARCHIVO JSON";
            // 
            // txtRuta
            // 
            this->txtRuta->BackColor = System::Drawing::Color::Black;
            this->txtRuta->ForeColor = System::Drawing::Color::White;
            this->txtRuta->Location = System::Drawing::Point(180, 43);
            this->txtRuta->Name = L"txtRuta";
            this->txtRuta->ReadOnly = true;
            this->txtRuta->Size = System::Drawing::Size(280, 23);
            this->txtRuta->TabIndex = 5;
            // 
            // btnExplorador
            // 
            this->btnExplorador->BackColor = System::Drawing::Color::DodgerBlue;
            this->btnExplorador->FlatAppearance->BorderSize = 0;
            this->btnExplorador->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnExplorador->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnExplorador->ForeColor = System::Drawing::Color::Black;
            this->btnExplorador->Location = System::Drawing::Point(475, 38);
            this->btnExplorador->Name = L"btnExplorador";
            this->btnExplorador->Size = System::Drawing::Size(140, 36);
            this->btnExplorador->TabIndex = 4;
            this->btnExplorador->Text = L"EXPLORADOR";
            this->btnExplorador->UseVisualStyleBackColor = false;
            this->btnExplorador->Click += gcnew System::EventHandler(this, &registroMForm::btnExplorador_Click);
            // 
            // btnLeer
            // 
            this->btnLeer->BackColor = System::Drawing::Color::DodgerBlue;
            this->btnLeer->FlatAppearance->BorderSize = 0;
            this->btnLeer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnLeer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnLeer->ForeColor = System::Drawing::Color::Black;
            this->btnLeer->Location = System::Drawing::Point(625, 38);
            this->btnLeer->Name = L"btnLeer";
            this->btnLeer->Size = System::Drawing::Size(85, 36);
            this->btnLeer->TabIndex = 3;
            this->btnLeer->Text = L"Leer";
            this->btnLeer->UseVisualStyleBackColor = false;
            this->btnLeer->Click += gcnew System::EventHandler(this, &registroMForm::btnLeer_Click);
            // 
            // grpMedicamentos
            // 
            this->grpMedicamentos->Controls->Add(this->dgvMedicamentos);
            this->grpMedicamentos->ForeColor = System::Drawing::Color::Black;
            this->grpMedicamentos->Location = System::Drawing::Point(28, 92);
            this->grpMedicamentos->Name = L"grpMedicamentos";
            this->grpMedicamentos->Size = System::Drawing::Size(682, 285);
            this->grpMedicamentos->TabIndex = 2;
            this->grpMedicamentos->TabStop = false;
            this->grpMedicamentos->Text = L"Editar medicamentos (use Supr para eliminar una fila)";
            this->grpMedicamentos->Enter += gcnew System::EventHandler(this, &registroMForm::grpMedicamentos_Enter);
            // 
            // dgvMedicamentos
            // 
            this->dgvMedicamentos->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dgvMedicamentos->BackgroundColor = System::Drawing::Color::White;
            this->dgvMedicamentos->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->dgvMedicamentos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dgvMedicamentos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
                this->colNombre,
                    this->colLote, this->colFecha, this->colPrecio
            });
            this->dgvMedicamentos->DefaultCellStyle->BackColor = System::Drawing::Color::White;
            this->dgvMedicamentos->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
            this->dgvMedicamentos->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::DodgerBlue;
            this->dgvMedicamentos->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::White;
            this->dgvMedicamentos->AlternatingRowsDefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(240, 245, 250);
            this->dgvMedicamentos->AlternatingRowsDefaultCellStyle->ForeColor = System::Drawing::Color::Black;
            this->dgvMedicamentos->Location = System::Drawing::Point(12, 25);
            this->dgvMedicamentos->MultiSelect = false;
            this->dgvMedicamentos->Name = L"dgvMedicamentos";
            this->dgvMedicamentos->RowHeadersVisible = false;
            this->dgvMedicamentos->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
            this->dgvMedicamentos->Size = System::Drawing::Size(657, 247);
            this->dgvMedicamentos->TabIndex = 0;
            this->dgvMedicamentos->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &registroMForm::dgvMedicamentos_CellContentClick);
            // 
            // colNombre
            // 
            this->colNombre->HeaderText = L"Nombre";
            this->colNombre->Name = L"colNombre";
            // 
            // colLote
            // 
            this->colLote->HeaderText = L"Lote";
            this->colLote->Name = L"colLote";
            // 
            // colFecha
            // 
            this->colFecha->HeaderText = L"Fecha de caducidad";
            this->colFecha->Name = L"colFecha";
            // 
            // colPrecio
            // 
            this->colPrecio->HeaderText = L"Precio";
            this->colPrecio->Name = L"colPrecio";
            // 
            // btnAgregar
            // 
            this->btnAgregar->BackColor = System::Drawing::Color::DodgerBlue;
            this->btnAgregar->Enabled = false;
            this->btnAgregar->FlatAppearance->BorderSize = 0;
            this->btnAgregar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnAgregar->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold));
            this->btnAgregar->ForeColor = System::Drawing::Color::Black;
            this->btnAgregar->Location = System::Drawing::Point(445, 394);
            this->btnAgregar->Name = L"btnAgregar";
            this->btnAgregar->Size = System::Drawing::Size(125, 36);
            this->btnAgregar->TabIndex = 2;
            this->btnAgregar->Text = L"AGREGAR";
            this->btnAgregar->UseVisualStyleBackColor = false;
            this->btnAgregar->Click += gcnew System::EventHandler(this, &registroMForm::btnAgregar_Click);
            // 
            // btnGuardar
            // 
            this->btnGuardar->BackColor = System::Drawing::Color::DodgerBlue;
            this->btnGuardar->Enabled = false;
            this->btnGuardar->FlatAppearance->BorderSize = 0;
            this->btnGuardar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnGuardar->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnGuardar->ForeColor = System::Drawing::Color::Black;
            this->btnGuardar->Location = System::Drawing::Point(585, 394);
            this->btnGuardar->Name = L"btnGuardar";
            this->btnGuardar->Size = System::Drawing::Size(125, 36);
            this->btnGuardar->TabIndex = 1;
            this->btnGuardar->Text = L"GUARDAR";
            this->btnGuardar->UseVisualStyleBackColor = false;
            this->btnGuardar->Click += gcnew System::EventHandler(this, &registroMForm::btnGuardar_Click);
            // 
            // btnSalir
            // 
            this->btnSalir->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
                static_cast<System::Int32>(static_cast<System::Byte>(28)));
            this->btnSalir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnSalir->ForeColor = System::Drawing::Color::Gainsboro;
            this->btnSalir->Location = System::Drawing::Point(48, 442);
            this->btnSalir->Name = L"btnSalir";
            this->btnSalir->Size = System::Drawing::Size(100, 32);
            this->btnSalir->TabIndex = 0;
            this->btnSalir->Text = L"Salir";
            this->btnSalir->UseVisualStyleBackColor = false;
            this->btnSalir->Click += gcnew System::EventHandler(this, &registroMForm::btnSalir_Click);
            // 
            // openFileDialogJson
            // 
            this->openFileDialogJson->DefaultExt = L"json";
            this->openFileDialogJson->Filter = L"Archivos JSON (*.json)|*.json";
            this->openFileDialogJson->Title = L"Seleccionar archivo de medicamentos";
            // 
            // registroMForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->ClientSize = System::Drawing::Size(740, 495);
            this->Controls->Add(this->btnSalir);
            this->Controls->Add(this->btnAgregar);
            this->Controls->Add(this->btnGuardar);
            this->Controls->Add(this->grpMedicamentos);
            this->Controls->Add(this->btnLeer);
            this->Controls->Add(this->btnExplorador);
            this->Controls->Add(this->txtRuta);
            this->Controls->Add(this->lblArchivo);
            this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->MaximizeBox = false;
            this->Name = L"registroMForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
            this->Text = L"Registro de medicamentos";
            this->Load += gcnew System::EventHandler(this, &registroMForm::registroMForm_Load);
            this->grpMedicamentos->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMedicamentos))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

        System::Void btnExplorador_Click(System::Object^ sender, System::EventArgs^ e)
        {
            if (openFileDialogJson->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
                txtRuta->Text = openFileDialogJson->FileName;
                dgvMedicamentos->Rows->Clear();
                medicamentosCargados->Clear();
                btnAgregar->Enabled = false;
                btnGuardar->Enabled = false;
            }
        }

        System::Void btnLeer_Click(System::Object^ sender, System::EventArgs^ e)
        {
            if (String::IsNullOrWhiteSpace(txtRuta->Text)) {
                MessageBox::Show(L"Primero seleccione un archivo JSON con el boton Explorador.",
                    L"Archivo requerido", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                return;
            }

            try {
                List<String^>^ errores;
                medicamentosCargados = controlador->LeerJson(txtRuta->Text, errores);
                dgvMedicamentos->Rows->Clear();

                for each (Medicamento^ medicamento in medicamentosCargados) {
                    dgvMedicamentos->Rows->Add(
                        medicamento->Nombre,
                        medicamento->Lote,
                        medicamento->FechaCaducidad.ToString(L"dd/MM/yyyy"),
                        medicamento->Precio.ToString(L"0.00"));
                }

                btnGuardar->Enabled = true;
                btnAgregar->Enabled = true;
                if (errores->Count > 0) {
                    String^ detalle = String::Join(Environment::NewLine, errores->ToArray());
                    MessageBox::Show(
                        String::Format(L"Se cargaron {0} registro(s) valido(s).\n\n{1}",
                            medicamentosCargados->Count, detalle),
                        L"Validacion del archivo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                }
                else {
                    MessageBox::Show(
                        String::Format(L"Se leyeron correctamente {0} medicamento(s).",
                            medicamentosCargados->Count),
                        L"Lectura completada", MessageBoxButtons::OK, MessageBoxIcon::Information);
                }
            }
            catch (Exception^ ex) {
                medicamentosCargados->Clear();
                dgvMedicamentos->Rows->Clear();
                btnAgregar->Enabled = false;
                btnGuardar->Enabled = false;
                MessageBox::Show(L"No se pudo leer el archivo: " + ex->Message,
                    L"Error de lectura", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

        System::Void btnGuardar_Click(System::Object^ sender, System::EventArgs^ e)
        {
            try {
                dgvMedicamentos->EndEdit();
                List<array<String^>^>^ filas = gcnew List<array<String^>^>();

                for each (System::Windows::Forms::DataGridViewRow^ fila in dgvMedicamentos->Rows) {
                    if (fila->IsNewRow) {
                        continue;
                    }

                    array<String^>^ valores = gcnew array<String^>(4);
                    for (int columna = 0; columna < 4; columna++) {
                        Object^ valor = fila->Cells[columna]->Value;
                        valores[columna] = valor == nullptr ? String::Empty : valor->ToString()->Trim();
                    }
                    filas->Add(valores);
                }

                List<String^>^ errores;
                List<Medicamento^>^ medicamentosEditados =
                    controlador->ValidarFilas(filas, errores);

                if (errores->Count > 0) {
                    MessageBox::Show(
                        L"Corrija los siguientes datos antes de guardar:\n\n" +
                        String::Join(Environment::NewLine, errores->ToArray()),
                        L"Datos no validos", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                    return;
                }

                controlador->GuardarEnArchivo(txtRuta->Text, medicamentosEditados);
                medicamentosCargados = medicamentosEditados;
                MessageBox::Show(
                    L"El archivo JSON fue actualizado correctamente:\n" + txtRuta->Text,
                    L"Cambios guardados", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
            catch (Exception^ ex) {
                MessageBox::Show(L"No se pudieron guardar los medicamentos: " + ex->Message,
                    L"Error al guardar", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

        System::Void btnAgregar_Click(System::Object^ sender, System::EventArgs^ e)
        {
            int indice = dgvMedicamentos->Rows->Add();
            dgvMedicamentos->CurrentCell = dgvMedicamentos->Rows[indice]->Cells[0];
            dgvMedicamentos->BeginEdit(true);
            btnGuardar->Enabled = true;
        }

        System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e)
        {
            this->Close();
        }
    private: System::Void registroMForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void dgvMedicamentos_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void grpMedicamentos_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
