#include "frmLogin.h"
/*
frmLogin: Es el nombre que le dimos para 
saber que es la venta�a de inicio de sei�n
*/

using namespace System;
using namespace System::Windows::Forms;

namespace MyBusView {
	/*Esto es para las imagenes*/
	[STAThreadAttribute]
	void main(array <String^>^ args) {
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);

		frmLogin ventana;
		Application::Run(% ventana);
	}
}