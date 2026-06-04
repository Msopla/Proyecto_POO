#include "MenuForm.h"
#include "mainForm.h"

System::Void ProyectoPOO::MenuForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	mainForm^ main = gcnew mainForm();
	this->Hide();
	main->ShowDialog();
	this->Close();
}
