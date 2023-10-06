#pragma once

namespace MyBusView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmTransportes
	/// </summary>
	public ref class frmTransportes : public System::Windows::Forms::Form
	{
	public:
		frmTransportes(void)
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
		~frmTransportes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editarToolStripMenuItem;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button_Agre_Transp;
	private: System::Windows::Forms::Button^ button_Modi_Transp;
	private: System::Windows::Forms::Button^ button_Elim_Transp;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ TB_ID_Transp;
	private: System::Windows::Forms::TextBox^ TB_Tipo_Transp;
	private: System::Windows::Forms::TextBox^ TB_Empresa_Transp;
	private: System::Windows::Forms::TextBox^ TB_Matricula_Transp;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ TB_Condition_Transp;
	private: System::Windows::Forms::TextBox^ TB_HoraFin;


	private: System::Windows::Forms::TextBox^ TB_HoraInicio;



















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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button_Agre_Transp = (gcnew System::Windows::Forms::Button());
			this->button_Modi_Transp = (gcnew System::Windows::Forms::Button());
			this->button_Elim_Transp = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->TB_ID_Transp = (gcnew System::Windows::Forms::TextBox());
			this->TB_Tipo_Transp = (gcnew System::Windows::Forms::TextBox());
			this->TB_Empresa_Transp = (gcnew System::Windows::Forms::TextBox());
			this->TB_Matricula_Transp = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TB_Condition_Transp = (gcnew System::Windows::Forms::TextBox());
			this->TB_HoraFin = (gcnew System::Windows::Forms::TextBox());
			this->TB_HoraInicio = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(398, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->nuevoToolStripMenuItem,
					this->editarToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			// 
			// editarToolStripMenuItem
			// 
			this->editarToolStripMenuItem->Name = L"editarToolStripMenuItem";
			this->editarToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->editarToolStripMenuItem->Text = L"Editar";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(27, 243);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(351, 122);
			this->dataGridView1->TabIndex = 1;
			// 
			// button_Agre_Transp
			// 
			this->button_Agre_Transp->Location = System::Drawing::Point(44, 217);
			this->button_Agre_Transp->Margin = System::Windows::Forms::Padding(2);
			this->button_Agre_Transp->Name = L"button_Agre_Transp";
			this->button_Agre_Transp->Size = System::Drawing::Size(56, 21);
			this->button_Agre_Transp->TabIndex = 2;
			this->button_Agre_Transp->Text = L"Agregar";
			this->button_Agre_Transp->UseVisualStyleBackColor = true;
			this->button_Agre_Transp->Click += gcnew System::EventHandler(this, &frmTransportes::button_Agre_Transp_Click);
			// 
			// button_Modi_Transp
			// 
			this->button_Modi_Transp->Location = System::Drawing::Point(183, 217);
			this->button_Modi_Transp->Margin = System::Windows::Forms::Padding(2);
			this->button_Modi_Transp->Name = L"button_Modi_Transp";
			this->button_Modi_Transp->Size = System::Drawing::Size(56, 21);
			this->button_Modi_Transp->TabIndex = 3;
			this->button_Modi_Transp->Text = L"Modificar";
			this->button_Modi_Transp->UseVisualStyleBackColor = true;
			// 
			// button_Elim_Transp
			// 
			this->button_Elim_Transp->Location = System::Drawing::Point(311, 217);
			this->button_Elim_Transp->Margin = System::Windows::Forms::Padding(2);
			this->button_Elim_Transp->Name = L"button_Elim_Transp";
			this->button_Elim_Transp->Size = System::Drawing::Size(56, 21);
			this->button_Elim_Transp->TabIndex = 4;
			this->button_Elim_Transp->Text = L"Eliminar";
			this->button_Elim_Transp->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(59, 32);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(59, 56);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Tipo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(59, 80);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Empresa";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(59, 105);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Matrícula";
			// 
			// TB_ID_Transp
			// 
			this->TB_ID_Transp->Location = System::Drawing::Point(172, 29);
			this->TB_ID_Transp->Margin = System::Windows::Forms::Padding(2);
			this->TB_ID_Transp->Name = L"TB_ID_Transp";
			this->TB_ID_Transp->Size = System::Drawing::Size(76, 20);
			this->TB_ID_Transp->TabIndex = 9;
			// 
			// TB_Tipo_Transp
			// 
			this->TB_Tipo_Transp->Location = System::Drawing::Point(172, 54);
			this->TB_Tipo_Transp->Margin = System::Windows::Forms::Padding(2);
			this->TB_Tipo_Transp->Name = L"TB_Tipo_Transp";
			this->TB_Tipo_Transp->Size = System::Drawing::Size(76, 20);
			this->TB_Tipo_Transp->TabIndex = 10;
			// 
			// TB_Empresa_Transp
			// 
			this->TB_Empresa_Transp->Location = System::Drawing::Point(172, 78);
			this->TB_Empresa_Transp->Margin = System::Windows::Forms::Padding(2);
			this->TB_Empresa_Transp->Name = L"TB_Empresa_Transp";
			this->TB_Empresa_Transp->Size = System::Drawing::Size(76, 20);
			this->TB_Empresa_Transp->TabIndex = 11;
			this->TB_Empresa_Transp->TextChanged += gcnew System::EventHandler(this, &frmTransportes::TB_Empresa_Transp_TextChanged);
			// 
			// TB_Matricula_Transp
			// 
			this->TB_Matricula_Transp->Location = System::Drawing::Point(172, 102);
			this->TB_Matricula_Transp->Margin = System::Windows::Forms::Padding(2);
			this->TB_Matricula_Transp->Name = L"TB_Matricula_Transp";
			this->TB_Matricula_Transp->Size = System::Drawing::Size(76, 20);
			this->TB_Matricula_Transp->TabIndex = 12;
			this->TB_Matricula_Transp->TextChanged += gcnew System::EventHandler(this, &frmTransportes::TB_Matricula_Transp_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(59, 131);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Condición";
			this->label5->Click += gcnew System::EventHandler(this, &frmTransportes::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(59, 156);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Hora de inicio";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(59, 178);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(59, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Hora de fin\r\n";
			this->label7->Click += gcnew System::EventHandler(this, &frmTransportes::label7_Click_1);
			// 
			// TB_Condition_Transp
			// 
			this->TB_Condition_Transp->Location = System::Drawing::Point(172, 128);
			this->TB_Condition_Transp->Name = L"TB_Condition_Transp";
			this->TB_Condition_Transp->Size = System::Drawing::Size(76, 20);
			this->TB_Condition_Transp->TabIndex = 16;
			// 
			// TB_HoraFin
			// 
			this->TB_HoraFin->Location = System::Drawing::Point(172, 178);
			this->TB_HoraFin->Name = L"TB_HoraFin";
			this->TB_HoraFin->Size = System::Drawing::Size(76, 20);
			this->TB_HoraFin->TabIndex = 17;
			// 
			// TB_HoraInicio
			// 
			this->TB_HoraInicio->Location = System::Drawing::Point(172, 152);
			this->TB_HoraInicio->Name = L"TB_HoraInicio";
			this->TB_HoraInicio->Size = System::Drawing::Size(76, 20);
			this->TB_HoraInicio->TabIndex = 18;
			// 
			// frmTransportes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(398, 386);
			this->Controls->Add(this->TB_HoraInicio);
			this->Controls->Add(this->TB_HoraFin);
			this->Controls->Add(this->TB_Condition_Transp);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->TB_Matricula_Transp);
			this->Controls->Add(this->TB_Empresa_Transp);
			this->Controls->Add(this->TB_Tipo_Transp);
			this->Controls->Add(this->TB_ID_Transp);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_Elim_Transp);
			this->Controls->Add(this->button_Modi_Transp);
			this->Controls->Add(this->button_Agre_Transp);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"frmTransportes";
			this->Text = L"Transportes";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_Agre_Transp_Click(System::Object^ sender, System::EventArgs^ e) {
		//int Transp_ID = TB_ID_Transp->Text; No hacemos eso porque lo queremos convertir en texto (caracteres)
		int Transp_ID = Int32::Parse(TB_ID_Transp->Text);
		String^ Transp_Tipo = TB_Tipo_Transp->Text;
		String^ Transp_Empresa = TB_Empresa_Transp->Text;
		String^ Transp_Matricula = TB_Matricula_Transp->Text;
		String^ Transp_Condition = TB_Condition_Transp->Text;
		String^ Transp_HoraInicio = TB_HoraInicio->Text;
		String^ Transp_HoraFin = TB_HoraFin->Text;
	}
private: System::Void TB_Empresa_Transp_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TB_Matricula_Transp_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
