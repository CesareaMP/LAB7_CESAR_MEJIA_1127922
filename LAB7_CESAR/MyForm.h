#pragma once
#include <msclr/marshal_cppstd.h>
#include "Rectangulo.h"
#include "Cuadrados.h"
#include "Triangulo.h";
namespace LAB7CESAR {

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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::MaskedTextBox^ txtAltura;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::MaskedTextBox^ txtBase;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lblperimetro;
	private: System::Windows::Forms::Label^ lblarea;
	private: System::Windows::Forms::MaskedTextBox^ txtColor;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::MaskedTextBox^ txtTipo;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::MaskedTextBox^ txtId;


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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->txtId = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtColor = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtTipo = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblperimetro = (gcnew System::Windows::Forms::Label());
			this->lblarea = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->txtAltura = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtBase = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(826, 520);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(818, 491);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Ejercicio1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->txtId);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->txtColor);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->txtTipo);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->lblperimetro);
			this->tabPage2->Controls->Add(this->lblarea);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->comboBox1);
			this->tabPage2->Controls->Add(this->txtAltura);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->txtBase);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(818, 491);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Ejercicio2";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &MyForm::tabPage2_Click);
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(161, 37);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(100, 22);
			this->txtId->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(46, 40);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 16);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Ingrese el id";
			// 
			// txtColor
			// 
			this->txtColor->Location = System::Drawing::Point(161, 138);
			this->txtColor->Name = L"txtColor";
			this->txtColor->Size = System::Drawing::Size(100, 22);
			this->txtColor->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(46, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 16);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Ingrese el color";
			// 
			// txtTipo
			// 
			this->txtTipo->Location = System::Drawing::Point(161, 89);
			this->txtTipo->Name = L"txtTipo";
			this->txtTipo->Size = System::Drawing::Size(100, 22);
			this->txtTipo->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(46, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Ingrese el tipo";
			// 
			// lblperimetro
			// 
			this->lblperimetro->AutoSize = true;
			this->lblperimetro->Location = System::Drawing::Point(46, 413);
			this->lblperimetro->Name = L"lblperimetro";
			this->lblperimetro->Size = System::Drawing::Size(0, 16);
			this->lblperimetro->TabIndex = 7;
			// 
			// lblarea
			// 
			this->lblarea->AutoSize = true;
			this->lblarea->Location = System::Drawing::Point(46, 374);
			this->lblarea->Name = L"lblarea";
			this->lblarea->Size = System::Drawing::Size(0, 16);
			this->lblarea->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(282, 216);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 83);
			this->button1->TabIndex = 5;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Triangulo", L"Rectangulo", L"Cuadrado" });
			this->comboBox1->Location = System::Drawing::Point(49, 299);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(212, 24);
			this->comboBox1->TabIndex = 4;
			// 
			// txtAltura
			// 
			this->txtAltura->Location = System::Drawing::Point(161, 243);
			this->txtAltura->Name = L"txtAltura";
			this->txtAltura->Size = System::Drawing::Size(100, 22);
			this->txtAltura->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 249);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Ingrese la altura";
			// 
			// txtBase
			// 
			this->txtBase->Location = System::Drawing::Point(161, 191);
			this->txtBase->Name = L"txtBase";
			this->txtBase->Size = System::Drawing::Size(100, 22);
			this->txtBase->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 197);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese la base";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(850, 544);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int id = int::Parse(txtId->Text);
		string tipo = msclr::interop::marshal_as<std::string>(txtTipo->Text);
		string color = msclr::interop::marshal_as<std::string>(txtColor->Text);
		double base = double::Parse(txtBase->Text);
		double altura = double::Parse(txtAltura->Text);

		if (comboBox1->SelectedItem == "Triangulo")//Rectangulo 	Cuadrado		
		{
			Triangulos trian = Triangulos(id, tipo, color, 3, base, altura, base, altura);
			lblarea->Text = "El area del triangulo: " + trian.calcular_area().ToString();
			lblperimetro->Text = "El perimetro del triangulo: " + trian.calcular_perimetro().ToString();
		}
		else if (comboBox1->SelectedItem == "Rectangulo")//Rectangulo 	Cuadrado		
		{
			Rectangulos rect = Rectangulos(id, tipo, color, 4, base, altura);
			lblarea->Text = "El area del rectangulos: " + rect.calcular_area().ToString();
			lblperimetro->Text = "El perimetro del rectangulos: " + rect.calcular_perimetro().ToString();
		}
		else if (comboBox1->SelectedItem == "Cuadrado")//Rectangulo 	Cuadrado		
		{
			Cuadrados cuad = Cuadrados(id, tipo, color, 4, base, altura);
			lblarea->Text = "El area del cuadrado: " + cuad.calcular_area().ToString();
			lblperimetro->Text = "El perimetro del cuadrado: " + cuad.calcular_perimetro().ToString();
		}
		else
		{
			MessageBox::Show("No se ha seleccionado ningun poligono");
		}
		txtId->Text = "";
		txtTipo->Text = "";
		txtColor->Text = "";
		txtBase->Text = "";
		txtAltura->Text = "";
	}
	catch (Exception ^e)
	{
		MessageBox::Show("Debe ingresar todos los campos");
	}
}
};
}
