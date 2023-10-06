#pragma once
#include "frmTransportes.h"

namespace MyBusView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmPrincipal
	/// </summary>
	public ref class frmPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->IsMdiContainer = true;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ miCuentaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ historialDeViajesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ transporteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ administradoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;



	protected:


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
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->transporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->administradoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->miCuentaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historialDeViajesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->transporteToolStripMenuItem,
					this->administradoresToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// transporteToolStripMenuItem
			// 
			this->transporteToolStripMenuItem->Name = L"transporteToolStripMenuItem";
			this->transporteToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->transporteToolStripMenuItem->Text = L"Transportes";
			this->transporteToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::transporteToolStripMenuItem_Click);
			// 
			// administradoresToolStripMenuItem
			// 
			this->administradoresToolStripMenuItem->Name = L"administradoresToolStripMenuItem";
			this->administradoresToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->administradoresToolStripMenuItem->Text = L"Administradores";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->mantenimientoToolStripMenuItem,
					this->miCuentaToolStripMenuItem, this->historialDeViajesToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(523, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// miCuentaToolStripMenuItem
			// 
			this->miCuentaToolStripMenuItem->Name = L"miCuentaToolStripMenuItem";
			this->miCuentaToolStripMenuItem->Size = System::Drawing::Size(90, 24);
			this->miCuentaToolStripMenuItem->Text = L"Mi Cuenta";
			// 
			// historialDeViajesToolStripMenuItem
			// 
			this->historialDeViajesToolStripMenuItem->Name = L"historialDeViajesToolStripMenuItem";
			this->historialDeViajesToolStripMenuItem->Size = System::Drawing::Size(141, 24);
			this->historialDeViajesToolStripMenuItem->Text = L"Historial de viajes";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::salirToolStripMenuItem_Click);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(523, 437);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmPrincipal";
			this->Text = L"Bienvenido a My Bus";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void transporteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmTransportes^ ManTransportes = gcnew frmTransportes();
		ManTransportes->MdiParent = this;
		ManTransportes->Show();
	}
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
};
}
