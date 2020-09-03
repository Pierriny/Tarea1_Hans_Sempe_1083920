#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <fstream>

namespace Tarea1HansSempe1083920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Resumen de Ejercicio2Form
	/// </summary>
	public ref class Ejercicio2Form : public System::Windows::Forms::Form
	{
	public:
		Ejercicio2Form(void)
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
		~Ejercicio2Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txtArchivo;

	private: System::Windows::Forms::Label^ label2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtArchivo = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(568, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"El archivo de texto debe estar ubicado en la carpeta Tarea1_Hans_Sempe_1083920 ";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(482, 65);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// txtArchivo
			// 
			this->txtArchivo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtArchivo->Location = System::Drawing::Point(12, 65);
			this->txtArchivo->Name = L"txtArchivo";
			this->txtArchivo->Size = System::Drawing::Size(464, 22);
			this->txtArchivo->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(268, 15);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Ingrese el nombre de su archivo (incluya el .txt):";
			// 
			// Ejercicio2Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(587, 259);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtArchivo);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Ejercicio2Form";
			this->Text = L"Ejercicio2Form";
			this->Load += gcnew System::EventHandler(this, &Ejercicio2Form::Ejercicio2Form_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion







		void lectura() {
			ifstream archivo;
			string texto;


		}

		void escribir(string xd) {
			ofstream archivo;

			archivo.open("Ejercicio4.txt", ios::out); //abirendo el archivo

			if (archivo.fail()) {
				"no se pudo abrir el archivo";
				exit(1);

			}

			archivo<<xd;


		}












		//ignorar lo de abajo 

	private: System::Void Ejercicio2Form_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
