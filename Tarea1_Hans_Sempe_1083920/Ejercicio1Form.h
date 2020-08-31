#pragma once

namespace Tarea1HansSempe1083920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Ejercicio1Form
	/// </summary>
	public ref class Ejercicio1Form : public System::Windows::Forms::Form
	{
	public:
		Ejercicio1Form(void)
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
		~Ejercicio1Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn1;
	protected:

	protected:
	private: System::Windows::Forms::TextBox^ txtNum1;
	private: System::Windows::Forms::TextBox^ txtNum2;
	private: System::Windows::Forms::Label^ answer1;
	private: System::Windows::Forms::Label^ label1;



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
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->txtNum1 = (gcnew System::Windows::Forms::TextBox());
			this->txtNum2 = (gcnew System::Windows::Forms::TextBox());
			this->answer1 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(130, 42);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(75, 23);
			this->btn1->TabIndex = 0;
			this->btn1->Text = L"Aceptar";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &Ejercicio1Form::btn_Click);
			// 
			// txtNum1
			// 
			this->txtNum1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNum1->Location = System::Drawing::Point(19, 19);
			this->txtNum1->Name = L"txtNum1";
			this->txtNum1->Size = System::Drawing::Size(100, 22);
			this->txtNum1->TabIndex = 1;
			// 
			// txtNum2
			// 
			this->txtNum2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNum2->Location = System::Drawing::Point(19, 68);
			this->txtNum2->Name = L"txtNum2";
			this->txtNum2->Size = System::Drawing::Size(100, 22);
			this->txtNum2->TabIndex = 2;
			// 
			// answer1
			// 
			this->answer1->AutoSize = true;
			this->answer1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->answer1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->answer1->Location = System::Drawing::Point(27, 111);
			this->answer1->Name = L"answer1";
			this->answer1->Size = System::Drawing::Size(82, 17);
			this->answer1->TabIndex = 3;
			this->answer1->Text = L"Respuesta:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(62, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"X";
			// 
			// Ejercicio1Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(223, 148);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->answer1);
			this->Controls->Add(this->txtNum2);
			this->Controls->Add(this->txtNum1);
			this->Controls->Add(this->btn1);
			this->Name = L"Ejercicio1Form";
			this->Text = L"Ejercicio1Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion




	private: System::Void btn_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			answer1->Text = "" + multi(Convert::ToInt32(txtNum1->Text), Convert::ToInt32(txtNum2->Text));

			MessageBox::Show("La suma de este laboratorio ha sido exitosa", "Suma Exitosa", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Error en el programa" + e->Message, "Fallo en la operacion", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		   int multi(int op1, int op2)
		   {
			   if (op2 = 1)
			   {
				   return op1;
			   }
			   else if (op2 = 0)
			   {
				   return 0;
			   }
			   else
			   {
				   return op1 = op1 + multi(op1, op2 - 1);			   
			   }
		   }
};
}
