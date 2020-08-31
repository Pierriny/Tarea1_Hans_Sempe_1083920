#include "Ejercicio1Form.h"
#include "Ejercicio2Form.h"
#include "Ejercicio3Form.h"
#include "Ejercicio4Form4.h"
#pragma once

namespace Tarea1HansSempe1083920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
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
	private: System::Windows::Forms::Button^ btnEjercicio4;

	private: System::Windows::Forms::Button^ btnEjercicio3;

	private: System::Windows::Forms::Button^ btnEjercicio2;

	private: System::Windows::Forms::Button^ btnEjercicio1;
	private: System::Windows::Forms::Button^ btnSalir;

	private: System::Windows::Forms::Label^ label5;

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
			this->btnEjercicio4 = (gcnew System::Windows::Forms::Button());
			this->btnEjercicio3 = (gcnew System::Windows::Forms::Button());
			this->btnEjercicio2 = (gcnew System::Windows::Forms::Button());
			this->btnEjercicio1 = (gcnew System::Windows::Forms::Button());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ejercicio 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(106, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ejercicio 2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(204, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ejercicio 3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(295, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Ejercicio 4";
			// 
			// btnEjercicio4
			// 
			this->btnEjercicio4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEjercicio4->Location = System::Drawing::Point(298, 72);
			this->btnEjercicio4->Name = L"btnEjercicio4";
			this->btnEjercicio4->Size = System::Drawing::Size(75, 23);
			this->btnEjercicio4->TabIndex = 4;
			this->btnEjercicio4->Text = L"OK";
			this->btnEjercicio4->UseVisualStyleBackColor = true;
			this->btnEjercicio4->Click += gcnew System::EventHandler(this, &MyForm::btnEjercicio4_Click);
			// 
			// btnEjercicio3
			// 
			this->btnEjercicio3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEjercicio3->Location = System::Drawing::Point(207, 72);
			this->btnEjercicio3->Name = L"btnEjercicio3";
			this->btnEjercicio3->Size = System::Drawing::Size(75, 23);
			this->btnEjercicio3->TabIndex = 5;
			this->btnEjercicio3->Text = L"OK";
			this->btnEjercicio3->UseVisualStyleBackColor = true;
			this->btnEjercicio3->Click += gcnew System::EventHandler(this, &MyForm::btnEjercicio3_Click);
			// 
			// btnEjercicio2
			// 
			this->btnEjercicio2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEjercicio2->Location = System::Drawing::Point(109, 72);
			this->btnEjercicio2->Name = L"btnEjercicio2";
			this->btnEjercicio2->Size = System::Drawing::Size(75, 23);
			this->btnEjercicio2->TabIndex = 6;
			this->btnEjercicio2->Text = L"OK";
			this->btnEjercicio2->UseVisualStyleBackColor = true;
			this->btnEjercicio2->Click += gcnew System::EventHandler(this, &MyForm::btnEjercicio2_Click);
			// 
			// btnEjercicio1
			// 
			this->btnEjercicio1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEjercicio1->Location = System::Drawing::Point(12, 72);
			this->btnEjercicio1->Name = L"btnEjercicio1";
			this->btnEjercicio1->Size = System::Drawing::Size(75, 23);
			this->btnEjercicio1->TabIndex = 7;
			this->btnEjercicio1->Text = L"OK";
			this->btnEjercicio1->UseVisualStyleBackColor = true;
			this->btnEjercicio1->Click += gcnew System::EventHandler(this, &MyForm::btnEjercicio1_Click);
			// 
			// btnSalir
			// 
			this->btnSalir->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSalir->Location = System::Drawing::Point(392, 72);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(75, 23);
			this->btnSalir->TabIndex = 9;
			this->btnSalir->Text = L"OK";
			this->btnSalir->UseVisualStyleBackColor = true;
			this->btnSalir->Click += gcnew System::EventHandler(this, &MyForm::btnSalir_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(412, 40);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Salir";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 126);
			this->Controls->Add(this->btnSalir);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnEjercicio1);
			this->Controls->Add(this->btnEjercicio2);
			this->Controls->Add(this->btnEjercicio3);
			this->Controls->Add(this->btnEjercicio4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Menu de Opciones";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	private: System::Void btnEjercicio1_Click(System::Object^ sender, System::EventArgs^ e) {

		Ejercicio1Form^  miNuevaVentana = gcnew Ejercicio1Form();
		miNuevaVentana->ShowDialog();
	}

	private: System::Void btnEjercicio2_Click(System::Object^ sender, System::EventArgs^ e) {

		Ejercicio2Form^ miNuevaVentana = gcnew Ejercicio2Form();
		miNuevaVentana->ShowDialog();
	}

	private: System::Void btnEjercicio3_Click(System::Object^ sender, System::EventArgs^ e) {

		Ejercicio3Form^ miNuevaVentana = gcnew Ejercicio3Form();
		miNuevaVentana->ShowDialog();
	}

	private: System::Void btnEjercicio4_Click(System::Object^ sender, System::EventArgs^ e) {

		Ejercicio4Form4^ miNuevaVentana = gcnew Ejercicio4Form4();
		miNuevaVentana->ShowDialog();
	}

	private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Ha salido de su programa con exito", "Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
};
}
