#include "frmLogin.h"
/*
frmLogin: Es el nombre que le dimos para 
saber que es la ventaña de inicio de seión
*/

using namespace System;
using namespace System::Windows::Forms;
using namespace MyBusView;

void main(array <String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	frmLogin ventana;
	Application::Run(%ventana);
}