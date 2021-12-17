#pragma once
#include "Sport.h"
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cliext/vector>

namespace coursework3 {
	using namespace System::IO;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Tabl : public System::Windows::Forms::Form
	{
	public:
		Tabl(void)
		{
			InitializeComponent();

		}
	protected:
		~Tabl()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ListBox^ Names;
	private: System::Windows::Forms::TextBox^ CountryBox;
	private: System::Windows::Forms::TextBox^ TeamBox;
	private: System::Windows::Forms::TextBox^ TypeBox;
	private: System::Windows::Forms::TextBox^ DataBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ NameBox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ addButton;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ delButton;
	private: System::Windows::Forms::RichTextBox^ InfoBox;
	private: System::Windows::Forms::Button^ saveButton;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;


		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Требуемый метод для поддержки конструктора — не изменяйте 
		   /// содержимое этого метода с помощью редактора кода.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->Names = (gcnew System::Windows::Forms::ListBox());
			   this->CountryBox = (gcnew System::Windows::Forms::TextBox());
			   this->TeamBox = (gcnew System::Windows::Forms::TextBox());
			   this->TypeBox = (gcnew System::Windows::Forms::TextBox());
			   this->DataBox = (gcnew System::Windows::Forms::TextBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->addButton = (gcnew System::Windows::Forms::Button());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->delButton = (gcnew System::Windows::Forms::Button());
			   this->InfoBox = (gcnew System::Windows::Forms::RichTextBox());
			   this->saveButton = (gcnew System::Windows::Forms::Button());
			   this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->NameBox = (gcnew System::Windows::Forms::TextBox());
			   this->groupBox1->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // Names
			   // 
			   this->Names->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->Names->FormattingEnabled = true;
			   this->Names->ItemHeight = 17;
			   this->Names->Location = System::Drawing::Point(9, 57);
			   this->Names->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->Names->Name = L"Names";
			   this->Names->Size = System::Drawing::Size(152, 378);
			   this->Names->TabIndex = 0;
			   this->Names->SelectedIndexChanged += gcnew System::EventHandler(this, &Tabl::Names_SelectedIndexChanged);
			   // 
			   // CountryBox
			   // 
			   this->CountryBox->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->CountryBox->Location = System::Drawing::Point(215, 323);
			   this->CountryBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->CountryBox->Name = L"CountryBox";
			   this->CountryBox->Size = System::Drawing::Size(178, 25);
			   this->CountryBox->TabIndex = 1;
			   this->CountryBox->TextChanged += gcnew System::EventHandler(this, &Tabl::CountryBox_TextChanged);
			   // 
			   // TeamBox
			   // 
			   this->TeamBox->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->TeamBox->Location = System::Drawing::Point(215, 254);
			   this->TeamBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->TeamBox->Name = L"TeamBox";
			   this->TeamBox->Size = System::Drawing::Size(178, 25);
			   this->TeamBox->TabIndex = 1;
			   this->TeamBox->TextChanged += gcnew System::EventHandler(this, &Tabl::TeamBox_TextChanged);
			   // 
			   // TypeBox
			   // 
			   this->TypeBox->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->TypeBox->Location = System::Drawing::Point(215, 184);
			   this->TypeBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->TypeBox->Name = L"TypeBox";
			   this->TypeBox->Size = System::Drawing::Size(178, 25);
			   this->TypeBox->TabIndex = 1;
			   this->TypeBox->TextChanged += gcnew System::EventHandler(this, &Tabl::TypeBox_TextChanged);
			   // 
			   // DataBox
			   // 
			   this->DataBox->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->DataBox->Location = System::Drawing::Point(215, 119);
			   this->DataBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->DataBox->Name = L"DataBox";
			   this->DataBox->Size = System::Drawing::Size(178, 25);
			   this->DataBox->TabIndex = 1;
			   this->DataBox->TextChanged += gcnew System::EventHandler(this, &Tabl::DataBox_TextChanged);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label1->Location = System::Drawing::Point(212, 95);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(111, 17);
			   this->label1->TabIndex = 2;
			   this->label1->Text = L"Дата рождения";
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label7->Location = System::Drawing::Point(212, 34);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(35, 17);
			   this->label7->TabIndex = 2;
			   this->label7->Text = L"Ім\'я";
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label6->Location = System::Drawing::Point(462, 33);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(135, 17);
			   this->label6->TabIndex = 2;
			   this->label6->Text = L"Рекорды и заслуги";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label2->Location = System::Drawing::Point(212, 160);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(84, 17);
			   this->label2->TabIndex = 2;
			   this->label2->Text = L"Вид спорта";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label3->Location = System::Drawing::Point(212, 230);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(67, 17);
			   this->label3->TabIndex = 2;
			   this->label3->Text = L"Команда";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label4->Location = System::Drawing::Point(212, 299);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(55, 17);
			   this->label4->TabIndex = 2;
			   this->label4->Text = L"Страна";
			   // 
			   // addButton
			   // 
			   this->addButton->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->addButton->Location = System::Drawing::Point(9, 449);
			   this->addButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->addButton->Name = L"addButton";
			   this->addButton->Size = System::Drawing::Size(155, 32);
			   this->addButton->TabIndex = 1;
			   this->addButton->Text = L"Добавить";
			   this->addButton->UseVisualStyleBackColor = true;
			   this->addButton->Click += gcnew System::EventHandler(this, &Tabl::addButton_Click);
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label5->Location = System::Drawing::Point(6, 33);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(93, 17);
			   this->label5->TabIndex = 2;
			   this->label5->Text = L"Спортсмены";
			   // 
			   // delButton
			   // 
			   this->delButton->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->delButton->Location = System::Drawing::Point(170, 449);
			   this->delButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->delButton->Name = L"delButton";
			   this->delButton->Size = System::Drawing::Size(155, 32);
			   this->delButton->TabIndex = 2;
			   this->delButton->Text = L"Удалить";
			   this->delButton->UseVisualStyleBackColor = true;
			   this->delButton->Click += gcnew System::EventHandler(this, &Tabl::delButton_Click);
			   // 
			   // InfoBox
			   // 
			   this->InfoBox->Location = System::Drawing::Point(465, 57);
			   this->InfoBox->Name = L"InfoBox";
			   this->InfoBox->Size = System::Drawing::Size(217, 291);
			   this->InfoBox->TabIndex = 3;
			   this->InfoBox->Text = L"";
			   this->InfoBox->TextChanged += gcnew System::EventHandler(this, &Tabl::InfoBox_TextChanged);
			   // 
			   // saveButton
			   // 
			   this->saveButton->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->saveButton->Location = System::Drawing::Point(527, 449);
			   this->saveButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->saveButton->Name = L"saveButton";
			   this->saveButton->Size = System::Drawing::Size(155, 32);
			   this->saveButton->TabIndex = 2;
			   this->saveButton->Text = L"Сохранить";
			   this->saveButton->UseVisualStyleBackColor = true;
			   this->saveButton->Click += gcnew System::EventHandler(this, &Tabl::saveButton_Click);
			   // 
			   // groupBox1
			   // 
			   this->groupBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			   this->groupBox1->Controls->Add(this->button1);
			   this->groupBox1->Controls->Add(this->NameBox);
			   this->groupBox1->Controls->Add(this->saveButton);
			   this->groupBox1->Controls->Add(this->InfoBox);
			   this->groupBox1->Controls->Add(this->delButton);
			   this->groupBox1->Controls->Add(this->label5);
			   this->groupBox1->Controls->Add(this->addButton);
			   this->groupBox1->Controls->Add(this->label4);
			   this->groupBox1->Controls->Add(this->label3);
			   this->groupBox1->Controls->Add(this->label2);
			   this->groupBox1->Controls->Add(this->label6);
			   this->groupBox1->Controls->Add(this->label7);
			   this->groupBox1->Controls->Add(this->label1);
			   this->groupBox1->Controls->Add(this->DataBox);
			   this->groupBox1->Controls->Add(this->TypeBox);
			   this->groupBox1->Controls->Add(this->TeamBox);
			   this->groupBox1->Controls->Add(this->CountryBox);
			   this->groupBox1->Controls->Add(this->Names);
			   this->groupBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->groupBox1->ForeColor = System::Drawing::Color::Black;
			   this->groupBox1->Location = System::Drawing::Point(3, 1);
			   this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->groupBox1->Name = L"groupBox1";
			   this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->groupBox1->Size = System::Drawing::Size(700, 493);
			   this->groupBox1->TabIndex = 0;
			   this->groupBox1->TabStop = false;
			   this->groupBox1->Text = L"Информация";
			   // 
			   // button1
			   // 
			   this->button1->Location = System::Drawing::Point(331, 449);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(155, 32);
			   this->button1->TabIndex = 5;
			   this->button1->Text = L"Обновить";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &Tabl::refrashbutton_Click);
			   // 
			   // NameBox
			   // 
			   this->NameBox->Location = System::Drawing::Point(215, 57);
			   this->NameBox->Name = L"NameBox";
			   this->NameBox->Size = System::Drawing::Size(178, 25);
			   this->NameBox->TabIndex = 4;
			   this->NameBox->TextChanged += gcnew System::EventHandler(this, &Tabl::NameBox_TextChanged);
			   // 
			   // Tabl
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			   this->BackColor = System::Drawing::SystemColors::Control;
			   this->ClientSize = System::Drawing::Size(705, 496);
			   this->Controls->Add(this->groupBox1);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			   this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->MaximizeBox = false;
			   this->Name = L"Tabl";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"Sport";
			   this->Load += gcnew System::EventHandler(this, &Tabl::Tabl_Load);
			   this->groupBox1->ResumeLayout(false);
			   this->groupBox1->PerformLayout();
			   this->ResumeLayout(false);

		   }
#pragma endregion


	cliext::vector<SPORT^> SP;

	private: System::Void Tabl_Load(System::Object^ sender, System::EventArgs^ e) {

		int i = 0;
		StreamReader^ file = File::OpenText("data.txt");
		while (!file->EndOfStream) {
			SP.push_back(gcnew SPORT());
			SP[i]->setName(file->ReadLine());
			SP[i]->setData(file->ReadLine());
			SP[i]->setType(file->ReadLine());
			SP[i]->setTeam(file->ReadLine());
			SP[i]->setCountry(file->ReadLine());
			SP[i]->setInfo(file->ReadLine());
			i++;
		}
		file->Close();

		for (auto i = 0; i < SP.size(); ++i)
			Names->Items->Insert(i, SP[i]->getName());
	}

	private: System::Void Names_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		int index = Names->SelectedIndex;
		if (index != -1) {
			NameBox->Text = SP[index]->getName();
			DataBox->Text = SP[index]->getData();
			TypeBox->Text = SP[index]->getType();
			TeamBox->Text = SP[index]->getTeam();
			CountryBox->Text = SP[index]->getCountry();
			InfoBox->Text = SP[index]->getInfo();
		}
	}

	private: System::Void NameBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (Names->SelectedIndex != -1)
			SP[Names->SelectedIndex]->setName(NameBox->Text);

	}
	private: System::Void DataBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (Names->SelectedIndex != -1)
			SP[Names->SelectedIndex]->setData(DataBox->Text);
	}
	private: System::Void TypeBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (Names->SelectedIndex != -1)
			SP[Names->SelectedIndex]->setType(TypeBox->Text);
	}
	private: System::Void TeamBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (Names->SelectedIndex != -1)
			SP[Names->SelectedIndex]->setTeam(TeamBox->Text);
	}
	private: System::Void CountryBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (Names->SelectedIndex != -1)
			SP[Names->SelectedIndex]->setCountry(CountryBox->Text);
	}
	private: System::Void InfoBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (Names->SelectedIndex != -1)
			SP[Names->SelectedIndex]->setInfo(InfoBox->Text);
	}
	private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
		SP.push_back(gcnew SPORT("Ім'я", "", "", "", "", ""));
		Names->Items->Insert(SP.size() - 1, SP[SP.size() - 1]->getName());
	}
	private: System::Void delButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Names->SelectedIndex != -1) {
			SP.erase(SP.begin() + Names->SelectedIndex);
			Names->Items->RemoveAt(Names->SelectedIndex);
		}
	};

	private: System::Void saveButton_Click(System::Object^ sender, System::EventArgs^ e) {
		StreamWriter^ sw = gcnew StreamWriter("data.txt", false);
		for (auto i = 0; i < SP.size(); ++i) {
			sw->WriteLine(SP[i]->getName());
			sw->WriteLine(SP[i]->getData());
			sw->WriteLine(SP[i]->getType());
			sw->WriteLine(SP[i]->getTeam());
			sw->WriteLine(SP[i]->getCountry());
			sw->WriteLine(SP[i]->getInfo());
		}
		sw->Close();
		MessageBox::Show(this, "Збережено", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void refrashbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		Names->Items->Clear();
		for (auto i = 0; i < SP.size(); ++i)
			Names->Items->Insert(i, SP[i]->getName());
	}
};
}



