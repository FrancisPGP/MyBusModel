#include "frmLogin.h"
/*
frmLogin: Es el nombre que le dimos para 
saber que es la venta�a de inicio de sei�n
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