#pragma once
#include "Vector.h"
#include <iostream>
namespace Parcial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	Vector v1;
	int pos=0;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtTamano;
	private: System::Windows::Forms::TextBox^  txtNumero;
	private: System::Windows::Forms::TextBox^  txtPos;
	private: System::Windows::Forms::TextBox^  txtNeg;
	private: System::Windows::Forms::Button^  btnDefinir;
	private: System::Windows::Forms::Button^  btnIngresar;
	private: System::Windows::Forms::Button^  btnCalcular;
	private: System::Windows::Forms::DataGridView^  Grilla_Vector;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtTamano = (gcnew System::Windows::Forms::TextBox());
			this->txtNumero = (gcnew System::Windows::Forms::TextBox());
			this->txtPos = (gcnew System::Windows::Forms::TextBox());
			this->txtNeg = (gcnew System::Windows::Forms::TextBox());
			this->btnDefinir = (gcnew System::Windows::Forms::Button());
			this->btnIngresar = (gcnew System::Windows::Forms::Button());
			this->btnCalcular = (gcnew System::Windows::Forms::Button());
			this->Grilla_Vector = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Grilla_Vector))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tamano";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Numero";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(471, 218);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Par";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(471, 291);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Impar";
			// 
			// txtTamano
			// 
			this->txtTamano->Location = System::Drawing::Point(140, 51);
			this->txtTamano->Name = L"txtTamano";
			this->txtTamano->Size = System::Drawing::Size(148, 22);
			this->txtTamano->TabIndex = 4;
			// 
			// txtNumero
			// 
			this->txtNumero->Location = System::Drawing::Point(140, 115);
			this->txtNumero->Name = L"txtNumero";
			this->txtNumero->Size = System::Drawing::Size(148, 22);
			this->txtNumero->TabIndex = 5;
			// 
			// txtPos
			// 
			this->txtPos->Location = System::Drawing::Point(523, 218);
			this->txtPos->Name = L"txtPos";
			this->txtPos->Size = System::Drawing::Size(148, 22);
			this->txtPos->TabIndex = 6;
			// 
			// txtNeg
			// 
			this->txtNeg->Location = System::Drawing::Point(523, 286);
			this->txtNeg->Name = L"txtNeg";
			this->txtNeg->Size = System::Drawing::Size(148, 22);
			this->txtNeg->TabIndex = 7;
			// 
			// btnDefinir
			// 
			this->btnDefinir->Location = System::Drawing::Point(341, 50);
			this->btnDefinir->Name = L"btnDefinir";
			this->btnDefinir->Size = System::Drawing::Size(105, 33);
			this->btnDefinir->TabIndex = 8;
			this->btnDefinir->Text = L"Definir";
			this->btnDefinir->UseVisualStyleBackColor = true;
			this->btnDefinir->Click += gcnew System::EventHandler(this, &Form1::btnDefinir_Click);
			// 
			// btnIngresar
			// 
			this->btnIngresar->Location = System::Drawing::Point(341, 115);
			this->btnIngresar->Name = L"btnIngresar";
			this->btnIngresar->Size = System::Drawing::Size(105, 33);
			this->btnIngresar->TabIndex = 9;
			this->btnIngresar->Text = L"Ingresar";
			this->btnIngresar->UseVisualStyleBackColor = true;
			this->btnIngresar->Click += gcnew System::EventHandler(this, &Form1::btnIngresar_Click);
			// 
			// btnCalcular
			// 
			this->btnCalcular->Location = System::Drawing::Point(542, 158);
			this->btnCalcular->Name = L"btnCalcular";
			this->btnCalcular->Size = System::Drawing::Size(105, 33);
			this->btnCalcular->TabIndex = 10;
			this->btnCalcular->Text = L"Calcular";
			this->btnCalcular->UseVisualStyleBackColor = true;
			this->btnCalcular->Click += gcnew System::EventHandler(this, &Form1::btnCalcular_Click);
			// 
			// Grilla_Vector
			// 
			this->Grilla_Vector->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Grilla_Vector->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) {this->Column1});
			this->Grilla_Vector->Location = System::Drawing::Point(39, 203);
			this->Grilla_Vector->Name = L"Grilla_Vector";
			this->Grilla_Vector->RowTemplate->Height = 24;
			this->Grilla_Vector->Size = System::Drawing::Size(396, 263);
			this->Grilla_Vector->TabIndex = 11;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Vector";
			this->Column1->Name = L"Column1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(722, 490);
			this->Controls->Add(this->Grilla_Vector);
			this->Controls->Add(this->btnCalcular);
			this->Controls->Add(this->btnIngresar);
			this->Controls->Add(this->btnDefinir);
			this->Controls->Add(this->txtNeg);
			this->Controls->Add(this->txtPos);
			this->Controls->Add(this->txtNumero);
			this->Controls->Add(this->txtTamano);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Grilla_Vector))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnDefinir_Click(System::Object^  sender, System::EventArgs^  e) {
		     int tam;
			 tam=System::Convert::ToInt32(txtTamano->Text);
			 v1.Set_Tamano(tam);
			 Grilla_Vector->RowCount=v1.Get_Tamano();
			 pos=0;
			 }
private: System::Void btnIngresar_Click(System::Object^  sender, System::EventArgs^  e) {
			 int elemento;
			 elemento=System::Convert::ToInt32(txtNumero->Text);
			 if (v1.Ingresar_Vector(elemento,pos)) {
				pos++;
				Grilla_Vector->ColumnCount=1;
				Grilla_Vector->RowCount=v1.Get_Tamano();
				int i=0; 
				double numero;
				for (i=0;i<v1.Get_Tamano();i++)
				{
				numero=v1.Get_Vector(i);
				Grilla_Vector->Rows[i]->Cells[0]->Value=System::Convert::ToInt32(numero);
				}
			 }
		 }
private: System::Void btnCalcular_Click(System::Object^  sender, System::EventArgs^  e) {
			 int imp;
			 int par;
			 par=v1.Pares_vector();
			 imp=v1.Impares_vector();
			 txtPos->Text=System::Convert::ToString(par);
			 txtNeg->Text=System::Convert::ToString(imp);
			 
		 }
};
}

