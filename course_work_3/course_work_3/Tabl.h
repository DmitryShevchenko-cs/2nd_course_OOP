#pragma once
#include "Sport.h"
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <array>


void WriteInFile(SPORT^ ob);

namespace coursework3 {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Tabl
	/// </summary>
	public ref class Tabl : public System::Windows::Forms::Form
	{
	public:
		Tabl(void)
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
		~Tabl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::ListBox^ Names;
	private: System::Windows::Forms::TextBox^ DataBox;
	private: System::Windows::Forms::TextBox^ TypeBox;
	private: System::Windows::Forms::TextBox^ teamBox;
	private: System::Windows::Forms::TextBox^ countryBox;

	private: System::Windows::Forms::Button^ search;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->DataBox = (gcnew System::Windows::Forms::TextBox());
			this->TypeBox = (gcnew System::Windows::Forms::TextBox());
			this->teamBox = (gcnew System::Windows::Forms::TextBox());
			this->countryBox = (gcnew System::Windows::Forms::TextBox());
			this->Names = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->search = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->DataBox);
			this->groupBox1->Controls->Add(this->TypeBox);
			this->groupBox1->Controls->Add(this->teamBox);
			this->groupBox1->Controls->Add(this->countryBox);
			this->groupBox1->Controls->Add(this->Names);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::Color::Black;
			this->groupBox1->Location = System::Drawing::Point(3, 6);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(484, 501);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Информация";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(9, 32);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 17);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Спортсмены";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(217, 258);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 17);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Страна";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(217, 189);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Команда";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(217, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Вид спорта";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(217, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Дата рождения";
			// 
			// DataBox
			// 
			this->DataBox->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DataBox->Location = System::Drawing::Point(220, 78);
			this->DataBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->DataBox->Name = L"DataBox";
			this->DataBox->Size = System::Drawing::Size(178, 25);
			this->DataBox->TabIndex = 1;
			this->DataBox->TextChanged += gcnew System::EventHandler(this, &Tabl::DataBox_TextChanged);
			// 
			// TypeBox
			// 
			this->TypeBox->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TypeBox->Location = System::Drawing::Point(220, 143);
			this->TypeBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TypeBox->Name = L"TypeBox";
			this->TypeBox->Size = System::Drawing::Size(178, 25);
			this->TypeBox->TabIndex = 1;
			// 
			// teamBox
			// 
			this->teamBox->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->teamBox->Location = System::Drawing::Point(220, 213);
			this->teamBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->teamBox->Name = L"teamBox";
			this->teamBox->Size = System::Drawing::Size(178, 25);
			this->teamBox->TabIndex = 1;
			// 
			// countryBox
			// 
			this->countryBox->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->countryBox->Location = System::Drawing::Point(220, 282);
			this->countryBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->countryBox->Name = L"countryBox";
			this->countryBox->Size = System::Drawing::Size(178, 25);
			this->countryBox->TabIndex = 1;
			// 
			// Names
			// 
			this->Names->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Names->FormattingEnabled = true;
			this->Names->ItemHeight = 17;
			this->Names->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Шевченко", L"Брюх", L"Колобылин", L"Бабенко", L"Алексеев",
					L"Гура", L"Чирин", L""
			});
			this->Names->Location = System::Drawing::Point(9, 54);
			this->Names->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Names->Name = L"Names";
			this->Names->Size = System::Drawing::Size(152, 412);
			this->Names->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(516, 405);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(155, 32);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// search
			// 
			this->search->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->search->Location = System::Drawing::Point(619, 340);
			this->search->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(155, 32);
			this->search->TabIndex = 2;
			this->search->Text = L"Поиск";
			this->search->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(619, 461);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(155, 32);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Сохранить";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(724, 405);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(155, 32);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Удалить";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// Tabl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(905, 512);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->search);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Tabl";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sport";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


		SPORT sp{"Шевченко", "16.07.2003", "Программ", "ХПИ", "Украина"};
		
		//SPORT ^sp1 = gcnew SPORT ("Шевченко", "16.07.2003", "Программ", "ХПИ", "Украина");

		private: System::Void DataBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			DataBox->Text = Convert::ToString(sp.getData());
		}

	};
}

//private: System::Void buttonRead_Click(System::Object^ sender, System::EventArgs^ e) {
//	String^ FileName = "";
//
//	if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
//		FileName = openFileDialog1->FileName;
//	StreamReader^ file = File::OpenText(FileName);
//	comboBox1->SelectedIndex = Convert::ToDouble(file->ReadLine());
//	textBoxA->Text = file->ReadLine();
//	textBoxB->Text = file->ReadLine();
//	textBoxC->Text = file->ReadLine();

