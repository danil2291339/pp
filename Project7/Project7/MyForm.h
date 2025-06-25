#pragma once

namespace Project7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(187, 320);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(239, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Шрфит";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(345, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Начертание";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(224, 56);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(45, 17);
			this->radioButton1->TabIndex = 3;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Arial";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(224, 79);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(58, 17);
			this->radioButton2->TabIndex = 4;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Courier";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(224, 102);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(115, 17);
			this->radioButton3->TabIndex = 5;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Times New Roman";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(348, 57);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(91, 17);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"Полужирный";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(348, 79);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(62, 17);
			this->checkBox2->TabIndex = 7;
			this->checkBox2->Text = L"Курсив";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(348, 102);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(99, 17);
			this->checkBox3->TabIndex = 8;
			this->checkBox3->Text = L"Подчеркнутый";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(221, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 23);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Размер шрифта";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"10", L"12", L"14", L"16" });
			this->comboBox1->Location = System::Drawing::Point(324, 139);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 10;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(258, 203);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(226, 23);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Имя файла для загрузки строк\r\n";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"1.txt" });
			this->comboBox2->Location = System::Drawing::Point(261, 229);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(149, 21);
			this->comboBox2->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(270, 256);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Добавить в сипсок";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(498, 344);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Font = gcnew System::Drawing::Font("Arial", textBox1->Font->Size, textBox1->Font->Style);
	}

	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked == true)
			textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, textBox1->Font->Style | FontStyle::Bold);
		else
		{
			textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, textBox1->Font->Style & FontStyle::Regular);
		}
		if (checkBox2->Checked == true)
			textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, textBox1->Font->Style | FontStyle::Italic);
		if (checkBox3->Checked == true)
			textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, textBox1->Font->Style | FontStyle::Underline);
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedIndex == 0) textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, 10, textBox1->Font->Style);
		if (comboBox1->SelectedIndex == 1) textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, 12, textBox1->Font->Style);
		if (comboBox1->SelectedIndex == 2) textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, 14, textBox1->Font->Style);
		if (comboBox1->SelectedIndex == 3) textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, 16, textBox1->Font->Style);
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox2->SelectedIndex == 0)
		{
			System::IO::StreamReader^ sr = gcnew System::IO::StreamReader("G:\!sp\text_redact\1.txt");
			System::String^ text = sr->ReadToEnd();
			textBox1->Text = textBox1->Text + text;
			sr->Close();
		}
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox2->Checked == true)
			textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, textBox1->Font->Style | FontStyle::Italic);
		else
		{
			textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, textBox1->Font->Style & FontStyle::Regular);
		}
		if (checkBox1->Checked == true)
			textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, textBox1->Font->Style | FontStyle::Bold);
		if (checkBox3->Checked == true)
			textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, textBox1->Font->Style | FontStyle::Underline);
	}
	private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox3->Checked == true)
			textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, textBox1->Font->Style | FontStyle::Underline);
		else
		{
			textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, textBox1->Font->Style & FontStyle::Regular);
		}
		if (checkBox2->Checked == true)
			textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, textBox1->Font->Style | FontStyle::Italic);
		if (checkBox1->Checked == true)
			textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, textBox1->Font->Style | FontStyle::Bold);
	}
};
}
