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
			this->menuStrip1->Size = System::Drawing::Size(530, 28);
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
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(135, 26);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			// 
			// editarToolStripMenuItem
			// 
			this->editarToolStripMenuItem->Name = L"editarToolStripMenuItem";
			this->editarToolStripMenuItem->Size = System::Drawing::Size(135, 26);
			this->editarToolStripMenuItem->Text = L"Editar";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(24, 213);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(468, 150);
			this->dataGridView1->TabIndex = 1;
			// 
			// button_Agre_Transp
			// 
			this->button_Agre_Transp->Location = System::Drawing::Point(47, 181);
			this->button_Agre_Transp->Name = L"button_Agre_Transp";
			this->button_Agre_Transp->Size = System::Drawing::Size(75, 26);
			this->button_Agre_Transp->TabIndex = 2;
			this->button_Agre_Transp->Text = L"Agregar";
			this->button_Agre_Transp->UseVisualStyleBackColor = true;
			this->button_Agre_Transp->Click += gcnew System::EventHandler(this, &frmTransportes::button_Agre_Transp_Click);
			// 
			// button_Modi_Transp
			// 
			this->button_Modi_Transp->Location = System::Drawing::Point(232, 181);
			this->button_Modi_Transp->Name = L"button_Modi_Transp";
			this->button_Modi_Transp->Size = System::Drawing::Size(75, 26);
			this->button_Modi_Transp->TabIndex = 3;
			this->button_Modi_Transp->Text = L"Modificar";
			this->button_Modi_Transp->UseVisualStyleBackColor = true;
			// 
			// button_Elim_Transp
			// 
			this->button_Elim_Transp->Location = System::Drawing::Point(402, 181);
			this->button_Elim_Transp->Name = L"button_Elim_Transp";
			this->button_Elim_Transp->Size = System::Drawing::Size(75, 26);
			this->button_Elim_Transp->TabIndex = 4;
			this->button_Elim_Transp->Text = L"Eliminar";
			this->button_Elim_Transp->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(79, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 16);
			this->label1->TabIndex = 5;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(79, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Tipo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(79, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Empresa";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(79, 129);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Matrícula";
			// 
			// TB_ID_Transp
			// 
			this->TB_ID_Transp->Location = System::Drawing::Point(230, 36);
			this->TB_ID_Transp->Name = L"TB_ID_Transp";
			this->TB_ID_Transp->Size = System::Drawing::Size(100, 22);
			this->TB_ID_Transp->TabIndex = 9;
			// 
			// TB_Tipo_Transp
			// 
			this->TB_Tipo_Transp->Location = System::Drawing::Point(230, 66);
			this->TB_Tipo_Transp->Name = L"TB_Tipo_Transp";
			this->TB_Tipo_Transp->Size = System::Drawing::Size(100, 22);
			this->TB_Tipo_Transp->TabIndex = 10;
			// 
			// TB_Empresa_Transp
			// 
			this->TB_Empresa_Transp->Location = System::Drawing::Point(230, 96);
			this->TB_Empresa_Transp->Name = L"TB_Empresa_Transp";
			this->TB_Empresa_Transp->Size = System::Drawing::Size(100, 22);
			this->TB_Empresa_Transp->TabIndex = 11;
			// 
			// TB_Matricula_Transp
			// 
			this->TB_Matricula_Transp->Location = System::Drawing::Point(230, 126);
			this->TB_Matricula_Transp->Name = L"TB_Matricula_Transp";
			this->TB_Matricula_Transp->Size = System::Drawing::Size(100, 22);
			this->TB_Matricula_Transp->TabIndex = 12;
			// 
			// frmTransportes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(530, 436);
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
	}
};
}
