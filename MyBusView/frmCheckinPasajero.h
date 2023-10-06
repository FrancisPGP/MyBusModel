#pragma once

namespace MyBusView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmCheckinPasajero
	/// </summary>
	public ref class frmCheckinPasajero : public System::Windows::Forms::Form
	{
	public:
		frmCheckinPasajero(void)
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
		~frmCheckinPasajero()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ TB_Nombre_RegPsj;
	private: System::Windows::Forms::TextBox^ TB_DNI_RegPsj;
	private: System::Windows::Forms::TextBox^ TB_Edad_RegPsj;
	private: System::Windows::Forms::TextBox^ TB_FirstPass_RegPsj;
	private: System::Windows::Forms::Button^ Cancelar_Pasajero;





	private: System::Windows::Forms::Button^ Registrar_Pasajero;
	private: System::Windows::Forms::TextBox^ TB_SecondPass_RegPsj;


	private: System::Windows::Forms::Label^ label6;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->TB_Nombre_RegPsj = (gcnew System::Windows::Forms::TextBox());
			this->TB_DNI_RegPsj = (gcnew System::Windows::Forms::TextBox());
			this->TB_Edad_RegPsj = (gcnew System::Windows::Forms::TextBox());
			this->TB_FirstPass_RegPsj = (gcnew System::Windows::Forms::TextBox());
			this->Cancelar_Pasajero = (gcnew System::Windows::Forms::Button());
			this->Registrar_Pasajero = (gcnew System::Windows::Forms::Button());
			this->TB_SecondPass_RegPsj = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"DNI:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Edad:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 135);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Contraseña:";
			// 
			// TB_Nombre_RegPsj
			// 
			this->TB_Nombre_RegPsj->Location = System::Drawing::Point(150, 27);
			this->TB_Nombre_RegPsj->Name = L"TB_Nombre_RegPsj";
			this->TB_Nombre_RegPsj->Size = System::Drawing::Size(119, 22);
			this->TB_Nombre_RegPsj->TabIndex = 4;
			// 
			// TB_DNI_RegPsj
			// 
			this->TB_DNI_RegPsj->Location = System::Drawing::Point(150, 62);
			this->TB_DNI_RegPsj->Name = L"TB_DNI_RegPsj";
			this->TB_DNI_RegPsj->Size = System::Drawing::Size(100, 22);
			this->TB_DNI_RegPsj->TabIndex = 5;
			// 
			// TB_Edad_RegPsj
			// 
			this->TB_Edad_RegPsj->Location = System::Drawing::Point(150, 97);
			this->TB_Edad_RegPsj->Name = L"TB_Edad_RegPsj";
			this->TB_Edad_RegPsj->Size = System::Drawing::Size(100, 22);
			this->TB_Edad_RegPsj->TabIndex = 6;
			// 
			// TB_FirstPass_RegPsj
			// 
			this->TB_FirstPass_RegPsj->Location = System::Drawing::Point(150, 132);
			this->TB_FirstPass_RegPsj->Name = L"TB_FirstPass_RegPsj";
			this->TB_FirstPass_RegPsj->Size = System::Drawing::Size(119, 22);
			this->TB_FirstPass_RegPsj->TabIndex = 7;
			// 
			// Cancelar_Pasajero
			// 
			this->Cancelar_Pasajero->Location = System::Drawing::Point(193, 231);
			this->Cancelar_Pasajero->Margin = System::Windows::Forms::Padding(4);
			this->Cancelar_Pasajero->Name = L"Cancelar_Pasajero";
			this->Cancelar_Pasajero->Size = System::Drawing::Size(100, 28);
			this->Cancelar_Pasajero->TabIndex = 9;
			this->Cancelar_Pasajero->Text = L"Cancelar";
			this->Cancelar_Pasajero->UseVisualStyleBackColor = true;
			// 
			// Registrar_Pasajero
			// 
			this->Registrar_Pasajero->Location = System::Drawing::Point(45, 231);
			this->Registrar_Pasajero->Margin = System::Windows::Forms::Padding(4);
			this->Registrar_Pasajero->Name = L"Registrar_Pasajero";
			this->Registrar_Pasajero->Size = System::Drawing::Size(100, 28);
			this->Registrar_Pasajero->TabIndex = 8;
			this->Registrar_Pasajero->Text = L"Registrar";
			this->Registrar_Pasajero->UseVisualStyleBackColor = true;
			this->Registrar_Pasajero->Click += gcnew System::EventHandler(this, &frmCheckinPasajero::Registrar_Pasajero_Click);
			// 
			// TB_SecondPass_RegPsj
			// 
			this->TB_SecondPass_RegPsj->Location = System::Drawing::Point(150, 167);
			this->TB_SecondPass_RegPsj->Name = L"TB_SecondPass_RegPsj";
			this->TB_SecondPass_RegPsj->Size = System::Drawing::Size(119, 22);
			this->TB_SecondPass_RegPsj->TabIndex = 23;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(22, 167);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 32);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Confirmar\r\nContraseña:";
			// 
			// frmCheckinPasajero
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(327, 303);
			this->Controls->Add(this->TB_SecondPass_RegPsj);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Cancelar_Pasajero);
			this->Controls->Add(this->Registrar_Pasajero);
			this->Controls->Add(this->TB_FirstPass_RegPsj);
			this->Controls->Add(this->TB_Edad_RegPsj);
			this->Controls->Add(this->TB_DNI_RegPsj);
			this->Controls->Add(this->TB_Nombre_RegPsj);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"frmCheckinPasajero";
			this->Text = L"Registro Pasajero";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Registrar_Pasajero_Click(System::Object^ sender, System::EventArgs^ e) {
		/*String^ RegPsj_Nombre = TB_Nombre_RegPsj->Text;
		String^ RegPsj_DNI = TB_DNI_RegPsj->Text;
		String^ RegPsj_Edad = TB_Edad_RegPsj->Text;
		String^ RegPsj_FirstPass = TB_FirstPass_RegPsj->Text;
		String^ RegPsj_SecondPass = TB_SecondPass_RegPsj->Text;*/
		//this->Hide();
		//frmLogin^ VentUser = gcnew frmLogin();
		//VentUser->Show();
	}
};
}
