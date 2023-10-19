#pragma once

namespace MyBusView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MyBusModel;
	using namespace MyBusController;
	using namespace System::Collections::Generic;

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

	protected:

	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editarToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dgvTransport;


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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Transp_Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Transp_Tipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Transp_Empresa;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Transp_Matricula;
	private: System::Windows::Forms::PictureBox^ PictureBox1;
	private: System::Windows::Forms::Button^ button_Picture_1;



	










































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
			this->dgvTransport = (gcnew System::Windows::Forms::DataGridView());
			this->Transp_Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Transp_Tipo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Transp_Empresa = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Transp_Matricula = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->PictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button_Picture_1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTransport))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(837, 30);
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
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(73, 26);
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
			// dgvTransport
			// 
			this->dgvTransport->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvTransport->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Transp_Id,
					this->Transp_Tipo, this->Transp_Empresa, this->Transp_Matricula
			});
			this->dgvTransport->Location = System::Drawing::Point(38, 226);
			this->dgvTransport->Name = L"dgvTransport";
			this->dgvTransport->RowHeadersWidth = 51;
			this->dgvTransport->RowTemplate->Height = 24;
			this->dgvTransport->Size = System::Drawing::Size(442, 192);
			this->dgvTransport->TabIndex = 1;
			this->dgvTransport->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmTransportes::dgvTransport_CellClick);
			this->dgvTransport->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmTransportes::dgvTransport_CellContentClick);
			// 
			// Transp_Id
			// 
			this->Transp_Id->FillWeight = 59.57447F;
			this->Transp_Id->HeaderText = L"ID";
			this->Transp_Id->MinimumWidth = 6;
			this->Transp_Id->Name = L"Transp_Id";
			this->Transp_Id->Width = 35;
			// 
			// Transp_Tipo
			// 
			this->Transp_Tipo->FillWeight = 87.38197F;
			this->Transp_Tipo->HeaderText = L"Tipo";
			this->Transp_Tipo->MinimumWidth = 6;
			this->Transp_Tipo->Name = L"Transp_Tipo";
			this->Transp_Tipo->Width = 60;
			// 
			// Transp_Empresa
			// 
			this->Transp_Empresa->FillWeight = 130.1627F;
			this->Transp_Empresa->HeaderText = L"Empresa";
			this->Transp_Empresa->MinimumWidth = 6;
			this->Transp_Empresa->Name = L"Transp_Empresa";
			this->Transp_Empresa->Width = 125;
			// 
			// Transp_Matricula
			// 
			this->Transp_Matricula->FillWeight = 122.8809F;
			this->Transp_Matricula->HeaderText = L"Matrícula";
			this->Transp_Matricula->MinimumWidth = 6;
			this->Transp_Matricula->Name = L"Transp_Matricula";
			this->Transp_Matricula->Width = 65;
			// 
			// button_Agre_Transp
			// 
			this->button_Agre_Transp->Location = System::Drawing::Point(39, 181);
			this->button_Agre_Transp->Name = L"button_Agre_Transp";
			this->button_Agre_Transp->Size = System::Drawing::Size(75, 26);
			this->button_Agre_Transp->TabIndex = 2;
			this->button_Agre_Transp->Text = L"Agregar";
			this->button_Agre_Transp->UseVisualStyleBackColor = true;
			this->button_Agre_Transp->Click += gcnew System::EventHandler(this, &frmTransportes::button_Agre_Transp_Click);
			// 
			// button_Modi_Transp
			// 
			this->button_Modi_Transp->Location = System::Drawing::Point(230, 181);
			this->button_Modi_Transp->Name = L"button_Modi_Transp";
			this->button_Modi_Transp->Size = System::Drawing::Size(75, 26);
			this->button_Modi_Transp->TabIndex = 3;
			this->button_Modi_Transp->Text = L"Modificar";
			this->button_Modi_Transp->UseVisualStyleBackColor = true;
			this->button_Modi_Transp->Click += gcnew System::EventHandler(this, &frmTransportes::button_Modi_Transp_Click);
			// 
			// button_Elim_Transp
			// 
			this->button_Elim_Transp->Location = System::Drawing::Point(405, 181);
			this->button_Elim_Transp->Name = L"button_Elim_Transp";
			this->button_Elim_Transp->Size = System::Drawing::Size(75, 26);
			this->button_Elim_Transp->TabIndex = 4;
			this->button_Elim_Transp->Text = L"Eliminar";
			this->button_Elim_Transp->UseVisualStyleBackColor = true;
			this->button_Elim_Transp->Click += gcnew System::EventHandler(this, &frmTransportes::button_Elim_Transp_Click);
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
			this->TB_ID_Transp->Size = System::Drawing::Size(122, 22);
			this->TB_ID_Transp->TabIndex = 9;
			// 
			// TB_Tipo_Transp
			// 
			this->TB_Tipo_Transp->Location = System::Drawing::Point(230, 66);
			this->TB_Tipo_Transp->Name = L"TB_Tipo_Transp";
			this->TB_Tipo_Transp->Size = System::Drawing::Size(122, 22);
			this->TB_Tipo_Transp->TabIndex = 10;
			// 
			// TB_Empresa_Transp
			// 
			this->TB_Empresa_Transp->Location = System::Drawing::Point(230, 96);
			this->TB_Empresa_Transp->Name = L"TB_Empresa_Transp";
			this->TB_Empresa_Transp->Size = System::Drawing::Size(122, 22);
			this->TB_Empresa_Transp->TabIndex = 11;
			// 
			// TB_Matricula_Transp
			// 
			this->TB_Matricula_Transp->Location = System::Drawing::Point(230, 126);
			this->TB_Matricula_Transp->Name = L"TB_Matricula_Transp";
			this->TB_Matricula_Transp->Size = System::Drawing::Size(122, 22);
			this->TB_Matricula_Transp->TabIndex = 12;
			// 
			// PictureBox1
			// 
			this->PictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->PictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PictureBox1->Location = System::Drawing::Point(525, 43);
			this->PictureBox1->Name = L"PictureBox1";
			this->PictureBox1->Size = System::Drawing::Size(155, 164);
			this->PictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PictureBox1->TabIndex = 13;
			this->PictureBox1->TabStop = false;
			// 
			// button_Picture_1
			// 
			this->button_Picture_1->Location = System::Drawing::Point(548, 213);
			this->button_Picture_1->Name = L"button_Picture_1";
			this->button_Picture_1->Size = System::Drawing::Size(111, 26);
			this->button_Picture_1->TabIndex = 14;
			this->button_Picture_1->Text = L"Actualizar Foto";
			this->button_Picture_1->UseVisualStyleBackColor = true;
			this->button_Picture_1->Click += gcnew System::EventHandler(this, &frmTransportes::button_Picture_1_Click);
			// 
			// frmTransportes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(837, 468);
			this->Controls->Add(this->button_Picture_1);
			this->Controls->Add(this->PictureBox1);
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
			this->Controls->Add(this->dgvTransport);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmTransportes";
			this->Text = L"Transportes";
			this->Load += gcnew System::EventHandler(this, &frmTransportes::frmTransportes_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTransport))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBox1))->EndInit();
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

		//Contenidos de dgvs (No entendí lo que dijo el profe)
		//AGREGUÉ using namespace MyBusModel; para poder usar la clase Vehicule
		Vehicule^ Transporte = gcnew Vehicule();
		//Atributos de Vehicule: Id,Type,Company,License_Plate
		Transporte->Id = Transp_ID;
		Transporte->Type = Transp_Tipo;
		Transporte->Company = Transp_Empresa;
		Transporte->License_Plate = Transp_Matricula;

		/*Transporte=robot*/
		Controller::AddVehicule(Transporte);
		ShowTransports();
		//Antes quí estaba el dgv
	}
		   void ShowTransports() {
			   List<Vehicule^>^ transports = Controller::QueryAllTransports();
			   dgvTransport->Rows->Clear();
			   for (int i = 0; i < transports->Count; i++) {
				   Vehicule^ Transporte = transports[i];
				   //dgvTransport es el nombre de nuestra tabla
				   dgvTransport->Rows->Add(gcnew array<String^>{
					   "" + Transporte->Id,
						   Transporte->Type,
						   Transporte->Company,
						   Transporte->License_Plate
				   });
				   //"" + Transporte->Id, porque no es de tipo String
			   }
		   }

private: System::Void frmTransportes_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowTransports();
}
private: System::Void button_Elim_Transp_Click(System::Object^ sender, System::EventArgs^ e) {
	int transportId = Int32::Parse(TB_ID_Transp->Text);
	Controller::DeleteTransport(transportId);
	ShowTransports();
}
private: System::Void dgvTransport_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	//No funcionó como creimos y cambiamos por dgvTransport_CellClick
}
private: System::Void button_Modi_Transp_Click(System::Object^ sender, System::EventArgs^ e) {
	int Transp_ID = Int32::Parse(TB_ID_Transp->Text);
	String^ Transp_Tipo = TB_Tipo_Transp->Text;
	String^ Transp_Empresa = TB_Empresa_Transp->Text;
	String^ Transp_Matricula = TB_Matricula_Transp->Text;

	Vehicule^ Transporte = gcnew Vehicule();
	Transporte->Id = Transp_ID;
	Transporte->Type = Transp_Tipo;
	Transporte->Company = Transp_Empresa;
	Transporte->License_Plate = Transp_Matricula;

	/*Transporte=robot*/
	Controller::UpdateTransport(Transporte);
	ShowTransports();
}
private: System::Void dgvTransport_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int transportId = Int32::Parse(dgvTransport->Rows[dgvTransport->SelectedCells[0]->RowIndex]
		->Cells[0]->Value->ToString());
	Vehicule^ Transporte = Controller::QueryTransportById(transportId);
	TB_ID_Transp->Text = "" + Transporte->Id;
	TB_Tipo_Transp->Text = Transporte->Type;
	TB_Empresa_Transp->Text = Transporte->Company;
	TB_Matricula_Transp->Text = Transporte->License_Plate;
}
private: System::Void button_Picture_1_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ opfd = gcnew OpenFileDialog();
	opfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (opfd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		PictureBox1->Image = gcnew Bitmap(opfd->FileName);
	}
}
};
}
