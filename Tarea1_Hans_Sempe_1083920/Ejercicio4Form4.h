#pragma once
#include<iostream>
#include<windows.system.threading.h>
#include<sstream>


namespace Tarea1HansSempe1083920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Resumen de Ejercicio4Form4
	/// </summary>
	public ref class Ejercicio4Form4 : public System::Windows::Forms::Form
	{
	public:
		Ejercicio4Form4(void)
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
		~Ejercicio4Form4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtBasoO;
	private: System::Windows::Forms::TextBox^ txtBaseD;
	protected:

	protected:

	private: System::Windows::Forms::TextBox^ txtNumC;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnConvertir;
	private: System::Windows::Forms::Label^ respuestaBase;




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
			this->txtBasoO = (gcnew System::Windows::Forms::TextBox());
			this->txtBaseD = (gcnew System::Windows::Forms::TextBox());
			this->txtNumC = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnConvertir = (gcnew System::Windows::Forms::Button());
			this->respuestaBase = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtBasoO
			// 
			this->txtBasoO->Location = System::Drawing::Point(144, 15);
			this->txtBasoO->Name = L"txtBasoO";
			this->txtBasoO->Size = System::Drawing::Size(100, 20);
			this->txtBasoO->TabIndex = 0;
			// 
			// txtBaseD
			// 
			this->txtBaseD->Location = System::Drawing::Point(144, 67);
			this->txtBaseD->Name = L"txtBaseD";
			this->txtBaseD->Size = System::Drawing::Size(100, 20);
			this->txtBaseD->TabIndex = 1;
			// 
			// txtNumC
			// 
			this->txtNumC->Location = System::Drawing::Point(144, 41);
			this->txtNumC->Name = L"txtNumC";
			this->txtNumC->Size = System::Drawing::Size(100, 20);
			this->txtNumC->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(22, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 15);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Base original";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(22, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 15);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Base destino";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(22, 43);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 15);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Número a comvertir";
			// 
			// btnConvertir
			// 
			this->btnConvertir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConvertir->Location = System::Drawing::Point(57, 102);
			this->btnConvertir->Name = L"btnConvertir";
			this->btnConvertir->Size = System::Drawing::Size(137, 23);
			this->btnConvertir->TabIndex = 6;
			this->btnConvertir->Text = L"Convertir";
			this->btnConvertir->UseVisualStyleBackColor = true;
			this->btnConvertir->Click += gcnew System::EventHandler(this, &Ejercicio4Form4::button1_Click);
			// 
			// respuestaBase
			// 
			this->respuestaBase->AutoSize = true;
			this->respuestaBase->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->respuestaBase->ForeColor = System::Drawing::SystemColors::Highlight;
			this->respuestaBase->Location = System::Drawing::Point(89, 145);
			this->respuestaBase->Name = L"respuestaBase";
			this->respuestaBase->Size = System::Drawing::Size(83, 16);
			this->respuestaBase->TabIndex = 7;
			this->respuestaBase->Text = L"Respuesta";
			// 
			// Ejercicio4Form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(259, 181);
			this->Controls->Add(this->respuestaBase);
			this->Controls->Add(this->btnConvertir);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtNumC);
			this->Controls->Add(this->txtBaseD);
			this->Controls->Add(this->txtBasoO);
			this->Name = L"Ejercicio4Form4";
			this->Text = L"Ejercicio4Form4";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		 
	    int Abase10(int x, int y, int z) {

			int xd;
			int cont;
			int resi;

			if (x == 10)
			{
				xd = y;
				return ANuevaBase(xd, z);
			}
			else if (x == 2) 
			{
				while (y != 0) {

					resi = y % 10;
					y = y / 10;
					cont++;
					xd = xd + std::pow(2, cont - 1) * resi;
				}
				return ANuevaBase(xd, z);
			}
			else if (x == 3)
			{
				while (y != 0) {

					resi = y % 10;
					y = y / 10;
					cont++;
					xd = xd + std::pow(3, cont - 1) * resi;
				}
				return ANuevaBase(xd, z);
			}
			else if (x == 4)
			{
				while (y != 0) {

					resi = y % 10;
					y = y / 10;
					cont++;
					xd = xd + std::pow(4, cont - 1) * resi;
				}
				return ANuevaBase(xd, z);
			}
			else if (x == 5)
			{
				while (y != 0) {

					resi = y % 10;
					y = y / 10;
					cont++;
					xd = xd + std::pow(5, cont - 1) * resi;
				}
				return ANuevaBase(xd, z);
			}
			else if (x == 6)
			{
				while (y != 0) {

					resi = y % 10;
					y = y / 10;
					cont++;
					xd = xd + std::pow(6, cont - 1) * resi;
				}
				return ANuevaBase(xd, z);
			}
			else if (x == 7)
			{
				while (y != 0) {

					resi = y % 10;
					y = y / 10;
					cont++;
					xd = xd + std::pow(7, cont - 1) * resi;
				}
				return ANuevaBase(xd, z);
			}
			else if (x == 8)
			{
				while (y != 0) {

					resi = y % 10;
					y = y / 10;
					cont++;
					xd = xd + std::pow(8, cont - 1) * resi;
				}
				return ANuevaBase(xd, z);
			}
			else if (x == 9)
			{
				while (y != 0) {

					resi = y % 10;
					y = y / 10;
					cont++;
					xd = xd + std::pow(9, cont - 1) * resi;
				}
				return ANuevaBase(xd, z);
			}
		}

        int ANuevaBase(int num, int x) {
			int first;

			if (x == 10)
			{
				return num;
			}
			else if (x == 2)
			{
				return binario(num, 2, 1);
			}
			else if (x == 3)
			{
				return Base3(num, 3, 1);
			}
			else if (x == 4)
			{
				return Base4(num, 4, 1);
			}
			else if (x == 5)
			{
				return Base5(num, 5, 1);
			}
			else if (x == 6)
			{
				return Base6(num, 6, 1);
			}
			else if (x == 7)
			{
				return Base7(num, 7, 1);
			}
			else if (x == 8)
			{
				return Base8(num, 8, 1);
			}
			else if (x == 9)
			{
				return Base9(num, 9, 1);
			}
	    }

		int binario(int a, int b, int c) {
			if (a==0) 
			{
				return (0);
			}
			else
			{
				return ((a % 2) * c) + (binario(a / 2, 2, c * 10));
			}
		}	
		int Base3(int a, int b, int c) {
			if (a == 0)
			{
				return (0);
			}
			else
			{
				return ((a % 3) * c) + (Base3(a / 3, 3, c * 10));
			}
			return 0;
		}
		int Base4(int a, int b, int c) {
			if (a == 0)
			{
				return (0);
			}
			else
			{
				return ((a % 4) * c) + (Base4(a / 4, 4, c * 10));
			}
			return 0;
		}
		int Base5(int a, int b, int c) {
			if (a == 0)
			{
				return (0);
			}
			else
			{
				return ((a % 5) * c) + (Base5(a / 5, 5, c * 10));
			}
			return 0;
		}
		int Base6(int a, int b, int c) {
			if (a == 0)
			{
				return (0);
			}
			else
			{
				return ((a % 6) * c) + (Base6(a / 6, 6, c * 10));
			}
			return 0;
		}
		int Base7(int a, int b, int c) {
			if (a == 0)
			{
				return (0);
			}
			else
			{
				return ((a % 7) * c) + (Base7(a / 7, 7, c * 10));
			}
			return 0;
		}
		int Base8(int a, int b, int c) {
			if (a == 0)
			{
				return (0);
			}
			else
			{
				return ((a % 8) * c) + (Base8(a / 8, 8, c * 10));
			}
			return 0;
		}
		int Base9(int a, int b, int c) {
			if (a == 0)
			{
				return (0);
			}
			else
			{
				return ((a % 9) * c) + (Base9(a / 9, 9, c * 10));
			}
			return 0;
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		try 
		{	
			respuestaBase->Text = "" + Abase10(Convert::ToInt32(txtBasoO->Text), Convert::ToInt32(txtNumC->Text), Convert::ToInt32(txtBaseD->Text));
			MessageBox::Show("La conversion fue exitosa", "operación Exitosa", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Error en el programa" + e->Message, "Fallo en la operacion", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}

};
}
