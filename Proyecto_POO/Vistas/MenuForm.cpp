#include "MenuForm.h"

System::Void ProyectoPOO::MenuForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
	this->Close();
}
