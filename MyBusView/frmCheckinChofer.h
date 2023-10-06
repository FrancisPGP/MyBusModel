#pragma once

namespace MyBusView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmCheckinChofer
	/// </summary>
	public ref class frmCheckinChofer : public System::Windows::Forms::Form
	{
	public:
		frmCheckinChofer(void)
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
		~frmCheckinChofer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ TB_FirstPass_Chofer;
	protected:

	private: System::Windows::Forms::TextBox^ TB_Edad_Chofer;
	protected:

	private: System::Windows::Forms::TextBox^ TB_DNI_Chofer;

	private: System::Windows::Forms::TextBox^ TB_Nombre_Chofer;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ TB_Licencia_Chofer;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ Registrar_Chofer;

	private: System::Windows::Forms::TextBox^ TB_SecondPass_Chofer;

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
			this->TB_FirstPass_Chofer = (gcnew System::Windows::Forms::TextBox());
			this->TB_Edad_Chofer = (gcnew System::Windows::Forms::TextBox());
			this->TB_DNI_Chofer = (gcnew System::Windows::Forms::TextBox());
			this->TB_Nombre_Chofer = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TB_Licencia_Chofer = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Registrar_Chofer = (gcnew System::Windows::Forms::Button());
			this->TB_SecondPass_Chofer = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// TB_FirstPass_Chofer
			// 
			this->TB_FirstPass_Chofer->Location = System::Drawing::Point(155, 167);
			this->TB_FirstPass_Chofer->Name = L"TB_FirstPass_Chofer";
			this->TB_FirstPass_Chofer->Size = System::Drawing::Size(119, 22);
			this->TB_FirstPass_Chofer->TabIndex = 15;
			// 
			// TB_Edad_Chofer
			// 
			this->TB_Edad_Chofer->Location = System::Drawing::Point(155, 132);
			this->TB_Edad_Chofer->Name = L"TB_Edad_Chofer";
			this->TB_Edad_Chofer->Size = System::Drawing::Size(100, 22);
			this->TB_Edad_Chofer->TabIndex = 14;
			// 
			// TB_DNI_Chofer
			// 
			this->TB_DNI_Chofer->Location = System::Drawing::Point(155, 62);
			this->TB_DNI_Chofer->Name = L"TB_DNI_Chofer";
			this->TB_DNI_Chofer->Size = System::Drawing::Size(100, 22);
			this->TB_DNI_Chofer->TabIndex = 13;
			// 
			// TB_Nombre_Chofer
			// 
			this->TB_Nombre_Chofer->Location = System::Drawing::Point(155, 27);
			this->TB_Nombre_Chofer->Name = L"TB_Nombre_Chofer";
			this->TB_Nombre_Chofer->Size = System::Drawing::Size(202, 22);
			this->TB_Nombre_Chofer->TabIndex = 12;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 170);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 16);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Contraseña:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 135);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 16);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Edad:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 16);
			this->label2->TabIndex = 9;
			this->label2->Text = L"DNI:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 16);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Nombre:";
			// 
			// TB_Licencia_Chofer
			// 
			this->TB_Licencia_Chofer->Location = System::Drawing::Point(155, 97);
			this->TB_Licencia_Chofer->Name = L"TB_Licencia_Chofer";
			this->TB_Licencia_Chofer->Size = System::Drawing::Size(119, 22);
			this->TB_Licencia_Chofer->TabIndex = 16;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 100);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(130, 16);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Numero de Licencia:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(204, 271);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// Registrar_Chofer
			// 
			this->Registrar_Chofer->Location = System::Drawing::Point(56, 271);
			this->Registrar_Chofer->Margin = System::Windows::Forms::Padding(4);
			this->Registrar_Chofer->Name = L"Registrar_Chofer";
			this->Registrar_Chofer->Size = System::Drawing::Size(100, 28);
			this->Registrar_Chofer->TabIndex = 18;
			this->Registrar_Chofer->Text = L"Registrar";
			this->Registrar_Chofer->UseVisualStyleBackColor = true;
			this->Registrar_Chofer->Click += gcnew System::EventHandler(this, &frmCheckinChofer::Registrar_Chofer_Click);
			// 
			// TB_SecondPass_Chofer
			// 
			this->TB_SecondPass_Chofer->Location = System::Drawing::Point(155, 202);
			this->TB_SecondPass_Chofer->Name = L"TB_SecondPass_Chofer";
			this->TB_SecondPass_Chofer->Size = System::Drawing::Size(119, 22);
			this->TB_SecondPass_Chofer->TabIndex = 21;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(22, 202);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 32);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Confirmar\r\nContraseña:";
			// 
			// frmCheckinChofer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(372, 334);
			this->Controls->Add(this->TB_SecondPass_Chofer);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Registrar_Chofer);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->TB_Licencia_Chofer);
			this->Controls->Add(this->TB_FirstPass_Chofer);
			this->Controls->Add(this->TB_Edad_Chofer);
			this->Controls->Add(this->TB_DNI_Chofer);
			this->Controls->Add(this->TB_Nombre_Chofer);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"frmCheckinChofer";
			this->Text = L"Registro Chofer";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Registrar_Chofer_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
};
}
