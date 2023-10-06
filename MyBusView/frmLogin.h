#pragma once
#include "frmPrincipal.h"
#include "frmCheckinPasajero.h"
#include "frmCheckinChofer.h"

namespace MyBusView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmLogin
	/// </summary>
	public ref class frmLogin : public System::Windows::Forms::Form
	{
	public:
		frmLogin(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	protected:
	private: System::Windows::Forms::Button^ button_Chofer;
	private: System::Windows::Forms::Button^ button_Pasajero;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ TB_Pass_Login;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TB_User_Login;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button_Ingresar;
	private: System::Windows::Forms::Button^ button_UserSalir;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button_Chofer = (gcnew System::Windows::Forms::Button());
			this->button_Pasajero = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TB_Pass_Login = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TB_User_Login = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_Ingresar = (gcnew System::Windows::Forms::Button());
			this->button_UserSalir = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(159, 196);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(15, 16);
			this->label4->TabIndex = 17;
			this->label4->Text = L"o";
			// 
			// button_Chofer
			// 
			this->button_Chofer->Location = System::Drawing::Point(187, 193);
			this->button_Chofer->Name = L"button_Chofer";
			this->button_Chofer->Size = System::Drawing::Size(75, 23);
			this->button_Chofer->TabIndex = 16;
			this->button_Chofer->Text = L"Chofer";
			this->button_Chofer->UseVisualStyleBackColor = true;
			this->button_Chofer->Click += gcnew System::EventHandler(this, &frmLogin::button_Chofer_Click);
			// 
			// button_Pasajero
			// 
			this->button_Pasajero->Location = System::Drawing::Point(68, 193);
			this->button_Pasajero->Name = L"button_Pasajero";
			this->button_Pasajero->Size = System::Drawing::Size(75, 23);
			this->button_Pasajero->TabIndex = 15;
			this->button_Pasajero->Text = L"Pasajero";
			this->button_Pasajero->UseVisualStyleBackColor = true;
			this->button_Pasajero->Click += gcnew System::EventHandler(this, &frmLogin::button_Pasajero_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(48, 174);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(236, 16);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Si no tiene una cuenta, registrate como";
			// 
			// TB_Pass_Login
			// 
			this->TB_Pass_Login->Location = System::Drawing::Point(162, 88);
			this->TB_Pass_Login->Name = L"TB_Pass_Login";
			this->TB_Pass_Login->Size = System::Drawing::Size(100, 22);
			this->TB_Pass_Login->TabIndex = 13;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(64, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 16);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Contraseña:";
			// 
			// TB_User_Login
			// 
			this->TB_User_Login->Location = System::Drawing::Point(162, 43);
			this->TB_User_Login->Name = L"TB_User_Login";
			this->TB_User_Login->Size = System::Drawing::Size(100, 22);
			this->TB_User_Login->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(64, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 16);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Usuario:";
			// 
			// button_Ingresar
			// 
			this->button_Ingresar->Location = System::Drawing::Point(132, 130);
			this->button_Ingresar->Name = L"button_Ingresar";
			this->button_Ingresar->Size = System::Drawing::Size(75, 23);
			this->button_Ingresar->TabIndex = 9;
			this->button_Ingresar->Text = L"Ingresar";
			this->button_Ingresar->UseVisualStyleBackColor = true;
			this->button_Ingresar->Click += gcnew System::EventHandler(this, &frmLogin::button_Ingresar_Click);
			// 
			// button_UserSalir
			// 
			this->button_UserSalir->Location = System::Drawing::Point(132, 248);
			this->button_UserSalir->Name = L"button_UserSalir";
			this->button_UserSalir->Size = System::Drawing::Size(75, 23);
			this->button_UserSalir->TabIndex = 18;
			this->button_UserSalir->Text = L"Salir";
			this->button_UserSalir->UseVisualStyleBackColor = true;
			this->button_UserSalir->Click += gcnew System::EventHandler(this, &frmLogin::button_UserSalir_Click);
			// 
			// frmLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(325, 296);
			this->Controls->Add(this->button_UserSalir);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button_Chofer);
			this->Controls->Add(this->button_Pasajero);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TB_Pass_Login);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->TB_User_Login);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_Ingresar);
			this->Name = L"frmLogin";
			this->Text = L"frmLogin";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_Ingresar_Click(System::Object^ sender, System::EventArgs^ e) {
		//int password_valido;
		String^ UserName = TB_User_Login->Text;
		String^ Password = TB_Pass_Login->Text;
		if (UserName=="hayazi" && Password=="hayazi") {
			//Mostrar ventana principal:
			frmPrincipal^ VentPrincipal = gcnew frmPrincipal();
			//VentPrincipal->MdiParent = this;
			VentPrincipal->Show();
			/*Cerrar ventana anterior*/
			this->Hide();
		}
		else {
			MessageBox::Show("Usuario y/o password incorrectos");
		}
	}
	private: System::Void button_Pasajero_Click(System::Object^ sender, System::EventArgs^ e) {
		frmCheckinPasajero^ boton_Pasajero = gcnew frmCheckinPasajero();
		boton_Pasajero->Show();
		this->Hide();
	}
	private: System::Void button_Chofer_Click(System::Object^ sender, System::EventArgs^ e) {
		frmCheckinChofer^ boton_Chofer = gcnew frmCheckinChofer();
		boton_Chofer->Show();
		this->Hide();
	}
	private: System::Void button_UserSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
};
}
