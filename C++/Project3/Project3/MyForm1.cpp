#include "MyForm1.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main1(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Project3::MyForm1);
}

