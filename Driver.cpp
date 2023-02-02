#include "Driver.h"
using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SREProj::Driver form;
	form.Show();
	Application::Run(% form);
}
