#pragma once
#include "Sport.h"
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <array>


void WriteInFile();

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
	
		}

	protected:
		~Tabl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ addButton;


	private: System::Windows::Forms::ListBox^ Names;
	private: System::Windows::Forms::TextBox^ DataBox;
	private: System::Windows::Forms::TextBox^ TypeBox;
	private: System::Windows::Forms::TextBox^ TeamBox;
	private: System::Windows::Forms::TextBox^ CountryBox;





	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ saveButton;

	private: System::Windows::Forms::Button^ delButton;




	protected:

	private:
		array< SPORT^ >^ SP = gcnew array< SPORT^ >(5);
	private: System::Windows::Forms::RichTextBox^ InfoBox;

	private: System::Windows::Forms::Label^ label6;

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->InfoBox = (gcnew System::Windows::Forms::RichTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->DataBox = (gcnew System::Windows::Forms::TextBox());
			this->TypeBox = (gcnew System::Windows::Forms::TextBox());
			this->TeamBox = (gcnew System::Windows::Forms::TextBox());
			this->CountryBox = (gcnew System::Windows::Forms::TextBox());
			this->Names = (gcnew System::Windows::Forms::ListBox());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->delButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox1->Controls->Add(this->InfoBox);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->DataBox);
			this->groupBox1->Controls->Add(this->TypeBox);
			this->groupBox1->Controls->Add(this->TeamBox);
			this->groupBox1->Controls->Add(this->CountryBox);
			this->groupBox1->Controls->Add(this->Names);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::Color::Black;
			this->groupBox1->Location = System::Drawing::Point(3, 6);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(713, 501);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Информация";
			// 
			// InfoBox
			// 
			this->InfoBox->Location = System::Drawing::Point(466, 78);
			this->InfoBox->Name = L"InfoBox";
			this->InfoBox->Size = System::Drawing::Size(217, 388);
			this->InfoBox->TabIndex = 3;
			this->InfoBox->Text = L"";
			this->InfoBox->TextChanged += gcnew System::EventHandler(this, &Tabl::InfoBox_TextChanged);
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
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(463, 54);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(135, 17);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Рекорды и заслуги";
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
			this->TypeBox->TextChanged += gcnew System::EventHandler(this, &Tabl::TypeBox_TextChanged);
			// 
			// TeamBox
			// 
			this->TeamBox->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TeamBox->Location = System::Drawing::Point(220, 213);
			this->TeamBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TeamBox->Name = L"TeamBox";
			this->TeamBox->Size = System::Drawing::Size(178, 25);
			this->TeamBox->TabIndex = 1;
			this->TeamBox->TextChanged += gcnew System::EventHandler(this, &Tabl::TeamBox_TextChanged);
			// 
			// CountryBox
			// 
			this->CountryBox->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CountryBox->Location = System::Drawing::Point(220, 282);
			this->CountryBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->CountryBox->Name = L"CountryBox";
			this->CountryBox->Size = System::Drawing::Size(178, 25);
			this->CountryBox->TabIndex = 1;
			this->CountryBox->TextChanged += gcnew System::EventHandler(this, &Tabl::CountryBox_TextChanged);
			// 
			// Names
			// 
			this->Names->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Names->FormattingEnabled = true;
			this->Names->ItemHeight = 17;
			this->Names->Location = System::Drawing::Point(9, 54);
			this->Names->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Names->Name = L"Names";
			this->Names->Size = System::Drawing::Size(152, 412);
			this->Names->TabIndex = 0;
			this->Names->SelectedIndexChanged += gcnew System::EventHandler(this, &Tabl::Names_SelectedIndexChanged);
			// 
			// addButton
			// 
			this->addButton->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addButton->Location = System::Drawing::Point(738, 11);
			this->addButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(155, 32);
			this->addButton->TabIndex = 1;
			this->addButton->Text = L"Добавить";
			this->addButton->UseVisualStyleBackColor = true;
			// 
			// saveButton
			// 
			this->saveButton->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->saveButton->Location = System::Drawing::Point(738, 119);
			this->saveButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(155, 32);
			this->saveButton->TabIndex = 2;
			this->saveButton->Text = L"Сохранить";
			this->saveButton->UseVisualStyleBackColor = true;
			// 
			// delButton
			// 
			this->delButton->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->delButton->Location = System::Drawing::Point(738, 64);
			this->delButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->delButton->Name = L"delButton";
			this->delButton->Size = System::Drawing::Size(155, 32);
			this->delButton->TabIndex = 2;
			this->delButton->Text = L"Удалить";
			this->delButton->UseVisualStyleBackColor = true;
			// 
			// Tabl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(905, 512);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->delButton);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Tabl";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sport";
			this->Load += gcnew System::EventHandler(this, &Tabl::Tabl_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		
	

	private: System::Void Tabl_Load(System::Object^ sender, System::EventArgs^ e) {
		SP[0] = gcnew SPORT("Дмитрий", "16.07.2003", "Спорт1", "Команда1", "Старна1", "Рекорд1; \nРекорд2; \nРекорд3;");
		SP[1] = gcnew SPORT("Алексей", "7.08.2003", "Спорт2", "Команда2", "Старна2");
		SP[2] = gcnew SPORT("Илья", "11.03.2003", "Спорт3", "Команда3", "Старна3");
		SP[3] = gcnew SPORT("Саньок", "22.11.2003", "Спорт4", "Команда4", "Старна4");
		SP[4] = gcnew SPORT("Игорь", "11.03.2003", "Спорт5", "Команда5", "Старна5");
		Names->Items->Insert(0, SP[0]->getName());
		Names->Items->Insert(1, SP[1]->getName());
		Names->Items->Insert(2, SP[2]->getName());
		Names->Items->Insert(3, SP[3]->getName());
		Names->Items->Insert(4, SP[4]->getName());
	}

	private: System::Void Names_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		int index = Names->SelectedIndex;
		DataBox->Text = SP[index]->getData();
		TypeBox->Text = SP[index]->getType();
		TeamBox->Text = SP[index]->getTeam();
		CountryBox->Text = SP[index]->getCountry();
		InfoBox->Text = SP[index]->getInfo();
	}

	private: System::Void DataBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		int index = Names->SelectedIndex;
		SP[index]->setData(DataBox->Text);

	}
	private: System::Void TypeBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		int index = Names->SelectedIndex;
		SP[index]->setType(TypeBox->Text);
	}
	private: System::Void TeamBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		int index = Names->SelectedIndex;
		SP[index]->setTeam(TeamBox->Text);
	}
	private: System::Void CountryBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		int index = Names->SelectedIndex;
		SP[index]->setCountry(CountryBox->Text);
	}
	private: System::Void InfoBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		int index = Names->SelectedIndex;
		SP[index]->setInfo(InfoBox->Text);
	}
};
}



