#pragma once
#include "Sport.h"

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
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListBox^ Names;
	private: System::Windows::Forms::TextBox^ DataBox;
	private: System::Windows::Forms::TextBox^ TypeBox;
	private: System::Windows::Forms::TextBox^ teamBox;
	private: System::Windows::Forms::TextBox^ countryBox;

	private: System::Windows::Forms::Button^ search;

	protected:

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->DataBox = (gcnew System::Windows::Forms::TextBox());
			this->TypeBox = (gcnew System::Windows::Forms::TextBox());
			this->teamBox = (gcnew System::Windows::Forms::TextBox());
			this->countryBox = (gcnew System::Windows::Forms::TextBox());
			this->Names = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->search = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox1->Controls->Add(this->DataBox);
			this->groupBox1->Controls->Add(this->TypeBox);
			this->groupBox1->Controls->Add(this->teamBox);
			this->groupBox1->Controls->Add(this->countryBox);
			this->groupBox1->Controls->Add(this->Names);
			this->groupBox1->ForeColor = System::Drawing::Color::Black;
			this->groupBox1->Location = System::Drawing::Point(2, 5);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(363, 407);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Информация";
			// 
			// DataBox
			// 
			this->DataBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DataBox->Location = System::Drawing::Point(138, 30);
			this->DataBox->Margin = System::Windows::Forms::Padding(2);
			this->DataBox->Name = L"DataBox";
			this->DataBox->Size = System::Drawing::Size(100, 23);
			this->DataBox->TabIndex = 1;
			this->DataBox->TextChanged += gcnew System::EventHandler(this, &Tabl::DataBox_TextChanged);
			// 
			// TypeBox
			// 
			this->TypeBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TypeBox->Location = System::Drawing::Point(138, 66);
			this->TypeBox->Margin = System::Windows::Forms::Padding(2);
			this->TypeBox->Name = L"TypeBox";
			this->TypeBox->Size = System::Drawing::Size(100, 23);
			this->TypeBox->TabIndex = 1;
			// 
			// teamBox
			// 
			this->teamBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->teamBox->Location = System::Drawing::Point(138, 104);
			this->teamBox->Margin = System::Windows::Forms::Padding(2);
			this->teamBox->Name = L"teamBox";
			this->teamBox->Size = System::Drawing::Size(100, 23);
			this->teamBox->TabIndex = 1;
			// 
			// countryBox
			// 
			this->countryBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->countryBox->Location = System::Drawing::Point(138, 143);
			this->countryBox->Margin = System::Windows::Forms::Padding(2);
			this->countryBox->Name = L"countryBox";
			this->countryBox->Size = System::Drawing::Size(100, 23);
			this->countryBox->TabIndex = 1;
			// 
			// Names
			// 
			this->Names->FormattingEnabled = true;
			this->Names->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Шевченко", L"Брюх", L"Колобылин", L"Бабенко", L"Алексеев",
					L"Гура", L"Чирин", L""
			});
			this->Names->Location = System::Drawing::Point(9, 30);
			this->Names->Margin = System::Windows::Forms::Padding(2);
			this->Names->Name = L"Names";
			this->Names->Size = System::Drawing::Size(115, 355);
			this->Names->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(394, 24);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 26);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(394, 68);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 26);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Изменить";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// search
			// 
			this->search->Location = System::Drawing::Point(550, 24);
			this->search->Margin = System::Windows::Forms::Padding(2);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(116, 26);
			this->search->TabIndex = 2;
			this->search->Text = L"Поиск";
			this->search->UseVisualStyleBackColor = true;
			// 
			// Tabl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(679, 430);
			this->Controls->Add(this->search);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Tabl";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sport";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		
		DATA sp = { "Шевченко", "16.07.2003", "Программ", "ХПИ", "Украина" };

		private: System::Void DataBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			DataBox->Text = Convert::ToString(sp.getData());
		}
	};
}
