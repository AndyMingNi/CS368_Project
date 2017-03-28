#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main() {
	Application::EnableVisualStyles();
	Project1::MyForm form;
	Application::Run(%form);
}