#pragma once
#include "../Lab-Tables/TScanTable.h"
#include "../Lab-Tables/TSortTable.h"
#include "../Lab-Tables/TListHash.h"
#include "../Lab-Tables/THashTable.h"
#include "../Lab-Tables/TTreeTable.h"
#include "../Lab-Tables/TArrayHash.h"
#include <msclr\marshal_cppstd.h>

namespace FormTables {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	TScanTable *scanTable = nullptr;
	TSortTable *insertSortTable = nullptr;
	TSortTable* quickSortTable = nullptr;
	TArrayHash *arrayHashTable = nullptr;
	TListHash *listHashTable = nullptr;
	TTreeTable *treeTable = nullptr;

	int startRecordCount = 0;
	int keyRange = 0;
	const int tableSize = 1000;
	const int step = 7;



	/// <summary>
	/// Сводка для TableForm
	/// </summary>
	public ref class TableForm : public System::Windows::Forms::Form
	{
		Random^ random;
	public:
		TableForm(void)
		{
			InitializeComponent();
			srand(NULL);
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~TableForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ scanTable_RadioButton;
	protected:

	protected:

	private: System::Windows::Forms::DataGridView^ dataGrid;
	private: System::Windows::Forms::RadioButton^ insertSortTable_RadioButton;

	private: System::Windows::Forms::RadioButton^ quickSortTable_RadioButton;
	private: System::Windows::Forms::RadioButton^ arrayHashTable_RadioButton;
	private: System::Windows::Forms::RadioButton^ listHashTable_RadioButton;
	private: System::Windows::Forms::RadioButton^ treeTable_RadioButton;
	private: System::Windows::Forms::RadioButton^ balanceTreeTable_RadioButton;








	private: System::Windows::Forms::Button^ Generate_Button;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ keyRange_TextBox;


	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ recordQuant_TextBox;

	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ count_TextBox;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ключ;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Значение;






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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->scanTable_RadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->dataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->Ключ = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Значение = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->insertSortTable_RadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->quickSortTable_RadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->arrayHashTable_RadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->listHashTable_RadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->treeTable_RadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->balanceTreeTable_RadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->Generate_Button = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->keyRange_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->recordQuant_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->count_TextBox = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// scanTable_RadioButton
			// 
			this->scanTable_RadioButton->AutoSize = true;
			this->scanTable_RadioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->scanTable_RadioButton->Location = System::Drawing::Point(493, 463);
			this->scanTable_RadioButton->Margin = System::Windows::Forms::Padding(4);
			this->scanTable_RadioButton->Name = L"scanTable_RadioButton";
			this->scanTable_RadioButton->Size = System::Drawing::Size(566, 29);
			this->scanTable_RadioButton->TabIndex = 0;
			this->scanTable_RadioButton->TabStop = true;
			this->scanTable_RadioButton->Text = L"Неупорядоченная таблица ----------------------------------------";
			this->scanTable_RadioButton->UseVisualStyleBackColor = true;
			this->scanTable_RadioButton->CheckedChanged += gcnew System::EventHandler(this, &TableForm::scanTable_RadioButton_CheckedChanged);
			// 
			// dataGrid
			// 
			this->dataGrid->AllowUserToAddRows = false;
			this->dataGrid->AllowUserToDeleteRows = false;
			this->dataGrid->AllowUserToResizeColumns = false;
			this->dataGrid->AllowUserToResizeRows = false;
			this->dataGrid->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGrid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Ключ, this->Значение });
			this->dataGrid->Location = System::Drawing::Point(35, 122);
			this->dataGrid->Margin = System::Windows::Forms::Padding(4);
			this->dataGrid->Name = L"dataGrid";
			this->dataGrid->ReadOnly = true;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGrid->RowHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGrid->RowHeadersVisible = false;
			this->dataGrid->RowHeadersWidth = 51;
			this->dataGrid->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->dataGrid->RowTemplate->ReadOnly = true;
			this->dataGrid->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGrid->Size = System::Drawing::Size(360, 560);
			this->dataGrid->TabIndex = 2;
			// 
			// Ключ
			// 
			this->Ключ->HeaderText = L"Ключ";
			this->Ключ->MinimumWidth = 6;
			this->Ключ->Name = L"Ключ";
			this->Ключ->ReadOnly = true;
			this->Ключ->Width = 135;
			// 
			// Значение
			// 
			this->Значение->HeaderText = L"Значение";
			this->Значение->MinimumWidth = 6;
			this->Значение->Name = L"Значение";
			this->Значение->ReadOnly = true;
			this->Значение->Width = 135;
			// 
			// insertSortTable_RadioButton
			// 
			this->insertSortTable_RadioButton->AutoSize = true;
			this->insertSortTable_RadioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->insertSortTable_RadioButton->Location = System::Drawing::Point(493, 500);
			this->insertSortTable_RadioButton->Margin = System::Windows::Forms::Padding(4);
			this->insertSortTable_RadioButton->Name = L"insertSortTable_RadioButton";
			this->insertSortTable_RadioButton->Size = System::Drawing::Size(569, 29);
			this->insertSortTable_RadioButton->TabIndex = 3;
			this->insertSortTable_RadioButton->TabStop = true;
			this->insertSortTable_RadioButton->Text = L"Упорядоченная таблица (Сортировка вставками) ----------";
			this->insertSortTable_RadioButton->UseVisualStyleBackColor = true;
			this->insertSortTable_RadioButton->CheckedChanged += gcnew System::EventHandler(this, &TableForm::insertSortTable_RadioButton_CheckedChanged);
			// 
			// quickSortTable_RadioButton
			// 
			this->quickSortTable_RadioButton->AutoSize = true;
			this->quickSortTable_RadioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->quickSortTable_RadioButton->Location = System::Drawing::Point(493, 537);
			this->quickSortTable_RadioButton->Margin = System::Windows::Forms::Padding(4);
			this->quickSortTable_RadioButton->Name = L"quickSortTable_RadioButton";
			this->quickSortTable_RadioButton->Size = System::Drawing::Size(637, 29);
			this->quickSortTable_RadioButton->TabIndex = 4;
			this->quickSortTable_RadioButton->TabStop = true;
			this->quickSortTable_RadioButton->Text = L"Упорядоченная таблица (Быстрая сортировка) -----------------------";
			this->quickSortTable_RadioButton->UseVisualStyleBackColor = true;
			this->quickSortTable_RadioButton->CheckedChanged += gcnew System::EventHandler(this, &TableForm::quickSortTable_RadioButton_CheckedChanged);
			// 
			// arrayHashTable_RadioButton
			// 
			this->arrayHashTable_RadioButton->AutoSize = true;
			this->arrayHashTable_RadioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->arrayHashTable_RadioButton->Location = System::Drawing::Point(493, 574);
			this->arrayHashTable_RadioButton->Margin = System::Windows::Forms::Padding(4);
			this->arrayHashTable_RadioButton->Name = L"arrayHashTable_RadioButton";
			this->arrayHashTable_RadioButton->Size = System::Drawing::Size(602, 29);
			this->arrayHashTable_RadioButton->TabIndex = 5;
			this->arrayHashTable_RadioButton->TabStop = true;
			this->arrayHashTable_RadioButton->Text = L"Хэш-таблица (С заданным шагом) ----------------------------------";
			this->arrayHashTable_RadioButton->UseVisualStyleBackColor = true;
			this->arrayHashTable_RadioButton->CheckedChanged += gcnew System::EventHandler(this, &TableForm::arrayHashTable_RadioButton_CheckedChanged);
			// 
			// listHashTable_RadioButton
			// 
			this->listHashTable_RadioButton->AutoSize = true;
			this->listHashTable_RadioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->listHashTable_RadioButton->Location = System::Drawing::Point(493, 610);
			this->listHashTable_RadioButton->Margin = System::Windows::Forms::Padding(4);
			this->listHashTable_RadioButton->Name = L"listHashTable_RadioButton";
			this->listHashTable_RadioButton->Size = System::Drawing::Size(607, 29);
			this->listHashTable_RadioButton->TabIndex = 6;
			this->listHashTable_RadioButton->TabStop = true;
			this->listHashTable_RadioButton->Text = L"Хэш-таблица (Метод цепочек) ----------------------------------------";
			this->listHashTable_RadioButton->UseVisualStyleBackColor = true;
			this->listHashTable_RadioButton->CheckedChanged += gcnew System::EventHandler(this, &TableForm::listHashTable_RadioButton_CheckedChanged);
			// 
			// treeTable_RadioButton
			// 
			this->treeTable_RadioButton->AutoSize = true;
			this->treeTable_RadioButton->BackColor = System::Drawing::SystemColors::Control;
			this->treeTable_RadioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->treeTable_RadioButton->Location = System::Drawing::Point(493, 647);
			this->treeTable_RadioButton->Margin = System::Windows::Forms::Padding(4);
			this->treeTable_RadioButton->Name = L"treeTable_RadioButton";
			this->treeTable_RadioButton->Size = System::Drawing::Size(591, 29);
			this->treeTable_RadioButton->TabIndex = 7;
			this->treeTable_RadioButton->TabStop = true;
			this->treeTable_RadioButton->Text = L"Несбалансированное дерево -----------------------------------------";
			this->treeTable_RadioButton->UseVisualStyleBackColor = false;
			this->treeTable_RadioButton->CheckedChanged += gcnew System::EventHandler(this, &TableForm::treeTable_RadioButton_CheckedChanged);
			// 
			// balanceTreeTable_RadioButton
			// 
			this->balanceTreeTable_RadioButton->AutoSize = true;
			this->balanceTreeTable_RadioButton->Enabled = false;
			this->balanceTreeTable_RadioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->balanceTreeTable_RadioButton->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->balanceTreeTable_RadioButton->Location = System::Drawing::Point(493, 684);
			this->balanceTreeTable_RadioButton->Margin = System::Windows::Forms::Padding(4);
			this->balanceTreeTable_RadioButton->Name = L"balanceTreeTable_RadioButton";
			this->balanceTreeTable_RadioButton->Size = System::Drawing::Size(598, 29);
			this->balanceTreeTable_RadioButton->TabIndex = 8;
			this->balanceTreeTable_RadioButton->TabStop = true;
			this->balanceTreeTable_RadioButton->Text = L"Сбалансированное дерево ---------------------------------------------";
			this->balanceTreeTable_RadioButton->UseVisualStyleBackColor = true;
			// 
			// Generate_Button
			// 
			this->Generate_Button->BackColor = System::Drawing::Color::CornflowerBlue;
			this->Generate_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Generate_Button->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->Generate_Button->Location = System::Drawing::Point(996, 18);
			this->Generate_Button->Margin = System::Windows::Forms::Padding(4);
			this->Generate_Button->Name = L"Generate_Button";
			this->Generate_Button->Size = System::Drawing::Size(233, 70);
			this->Generate_Button->TabIndex = 9;
			this->Generate_Button->Text = L"Сгенерировать таблицы";
			this->Generate_Button->UseVisualStyleBackColor = false;
			this->Generate_Button->Click += gcnew System::EventHandler(this, &TableForm::Generate_Button_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label2->Location = System::Drawing::Point(37, 38);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(246, 34);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Диапазон ключей:";
			// 
			// keyRange_TextBox
			// 
			this->keyRange_TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->keyRange_TextBox->Location = System::Drawing::Point(307, 34);
			this->keyRange_TextBox->Margin = System::Windows::Forms::Padding(4);
			this->keyRange_TextBox->Multiline = true;
			this->keyRange_TextBox->Name = L"keyRange_TextBox";
			this->keyRange_TextBox->Size = System::Drawing::Size(144, 35);
			this->keyRange_TextBox->TabIndex = 11;
			this->keyRange_TextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label3->Location = System::Drawing::Point(497, 38);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(278, 34);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Количество записей:";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(1051, 463);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(139, 35);
			this->textBox3->TabIndex = 15;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(1051, 500);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(139, 35);
			this->textBox4->TabIndex = 16;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(1051, 537);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(139, 35);
			this->textBox5->TabIndex = 17;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(1051, 574);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(139, 35);
			this->textBox6->TabIndex = 18;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(1051, 610);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(139, 35);
			this->textBox7->TabIndex = 19;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(1051, 647);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(139, 35);
			this->textBox8->TabIndex = 20;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox9->Location = System::Drawing::Point(1051, 684);
			this->textBox9->Margin = System::Windows::Forms::Padding(4);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(139, 35);
			this->textBox9->TabIndex = 21;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label5->Location = System::Drawing::Point(487, 410);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(322, 34);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Отображаемая таблица:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(992, 410);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(224, 34);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Эффективность:";
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox10->Location = System::Drawing::Point(565, 134);
			this->textBox10->Margin = System::Windows::Forms::Padding(4);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(116, 35);
			this->textBox10->TabIndex = 25;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label4->Location = System::Drawing::Point(469, 134);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 34);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Ключ:";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button2->Location = System::Drawing::Point(712, 128);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(175, 50);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Поиск";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label6->Location = System::Drawing::Point(915, 138);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(150, 34);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Результат:";
			// 
			// recordQuant_TextBox
			// 
			this->recordQuant_TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->recordQuant_TextBox->Location = System::Drawing::Point(801, 34);
			this->recordQuant_TextBox->Margin = System::Windows::Forms::Padding(4);
			this->recordQuant_TextBox->Multiline = true;
			this->recordQuant_TextBox->Name = L"recordQuant_TextBox";
			this->recordQuant_TextBox->Size = System::Drawing::Size(144, 35);
			this->recordQuant_TextBox->TabIndex = 29;
			this->recordQuant_TextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox11->Enabled = false;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox11->Location = System::Drawing::Point(1083, 138);
			this->textBox11->Margin = System::Windows::Forms::Padding(4);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(108, 35);
			this->textBox11->TabIndex = 30;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox12->Enabled = false;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox12->Location = System::Drawing::Point(1083, 229);
			this->textBox12->Margin = System::Windows::Forms::Padding(4);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(108, 35);
			this->textBox12->TabIndex = 35;
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label7->Location = System::Drawing::Point(915, 229);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(150, 34);
			this->label7->TabIndex = 34;
			this->label7->Text = L"Результат:";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button3->Location = System::Drawing::Point(712, 219);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(175, 50);
			this->button3->TabIndex = 33;
			this->button3->Text = L"Удалить";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox13->Location = System::Drawing::Point(565, 225);
			this->textBox13->Margin = System::Windows::Forms::Padding(4);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(116, 35);
			this->textBox13->TabIndex = 32;
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label8->Location = System::Drawing::Point(469, 222);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(88, 34);
			this->label8->TabIndex = 31;
			this->label8->Text = L"Ключ:";
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox14->Enabled = false;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox14->Location = System::Drawing::Point(1083, 322);
			this->textBox14->Margin = System::Windows::Forms::Padding(4);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(108, 35);
			this->textBox14->TabIndex = 40;
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label9->Location = System::Drawing::Point(915, 322);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(150, 34);
			this->label9->TabIndex = 39;
			this->label9->Text = L"Результат:";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button4->Location = System::Drawing::Point(712, 313);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(175, 50);
			this->button4->TabIndex = 38;
			this->button4->Text = L"Добавить";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox15->Location = System::Drawing::Point(565, 298);
			this->textBox15->Margin = System::Windows::Forms::Padding(4);
			this->textBox15->Multiline = true;
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(116, 35);
			this->textBox15->TabIndex = 37;
			this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label10->Location = System::Drawing::Point(469, 298);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(88, 34);
			this->label10->TabIndex = 36;
			this->label10->Text = L"Ключ:";
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox16->Location = System::Drawing::Point(565, 341);
			this->textBox16->Margin = System::Windows::Forms::Padding(4);
			this->textBox16->Multiline = true;
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(116, 35);
			this->textBox16->TabIndex = 42;
			this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label11->Location = System::Drawing::Point(415, 341);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(142, 34);
			this->label11->TabIndex = 41;
			this->label11->Text = L"Значение:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label12->Location = System::Drawing::Point(21, 698);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(278, 34);
			this->label12->TabIndex = 43;
			this->label12->Text = L"Количество записей:";
			// 
			// count_TextBox
			// 
			this->count_TextBox->BackColor = System::Drawing::SystemColors::ControlDark;
			this->count_TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->count_TextBox->Location = System::Drawing::Point(317, 697);
			this->count_TextBox->Margin = System::Windows::Forms::Padding(4);
			this->count_TextBox->Multiline = true;
			this->count_TextBox->Name = L"count_TextBox";
			this->count_TextBox->ReadOnly = true;
			this->count_TextBox->Size = System::Drawing::Size(128, 35);
			this->count_TextBox->TabIndex = 44;
			this->count_TextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// TableForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1269, 761);
			this->Controls->Add(this->count_TextBox);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->recordQuant_TextBox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->keyRange_TextBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Generate_Button);
			this->Controls->Add(this->balanceTreeTable_RadioButton);
			this->Controls->Add(this->treeTable_RadioButton);
			this->Controls->Add(this->listHashTable_RadioButton);
			this->Controls->Add(this->arrayHashTable_RadioButton);
			this->Controls->Add(this->quickSortTable_RadioButton);
			this->Controls->Add(this->insertSortTable_RadioButton);
			this->Controls->Add(this->dataGrid);
			this->Controls->Add(this->scanTable_RadioButton);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"TableForm";
			this->Text = L"Таблицы";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

















private: System::Void Generate_Button_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//try
	//{
		keyRange = Convert::ToInt32(keyRange_TextBox->Text);
		startRecordCount = Convert::ToInt32(recordQuant_TextBox->Text);
		Start();
		

	//}
	//catch (...) {}
}





	   void Start()
	   {
		   RecreateAllTables();


		   for (int i = 0; i < startRecordCount; i++)
		   {
			   TKey key = rand() % (keyRange + 1);
			   TValue value = "Record ";
			   value += msclr::interop::marshal_as<std::string>(key.ToString());
			   TRecord newRecord(key, value);

			   scanTable->Insert(newRecord);
			   insertSortTable->Insert(newRecord);
			   quickSortTable->Insert(newRecord);
			   arrayHashTable->Insert(newRecord);
			   listHashTable->Insert(newRecord);
			   treeTable->Insert(newRecord);
		   }
		   scanTable_RadioButton->Checked = true;
		   ShowDataTable(scanTable);

	   }


	   void ShowDataTable(TTable *table)
	   {
		   dataGrid->Rows->Clear();
		   for (table->Reset(); !table->IsEnd(); table->GoNext())
		   {
			   TRecord record = table->GetCurrentRecord();
			   System::String^ value = gcnew String(record.value.c_str());
			   
			   dataGrid->Rows->Add(record.key, value);
		   }
		   count_TextBox->Text = dataGrid->Rows->Count.ToString();
	   }


	   void RecreateAllTables()
	   {
		   if (scanTable != nullptr) scanTable->TArrayTable::~TArrayTable();
		   scanTable = new TScanTable(tableSize);

		   if (insertSortTable != nullptr) insertSortTable->TArrayTable::~TArrayTable();
		   insertSortTable = new TSortTable(*scanTable, SortType::Selection);

		   if (quickSortTable != nullptr) quickSortTable->TArrayTable::~TArrayTable();
		   quickSortTable = new TSortTable(*scanTable, SortType::Quick);

		   if (arrayHashTable != nullptr) arrayHashTable->~TArrayHash();
		   arrayHashTable = new TArrayHash(tableSize, step);

		   if (listHashTable != nullptr) listHashTable->~TListHash();
		   listHashTable = new TListHash(tableSize);

		   if (treeTable != nullptr) treeTable->~TTreeTable();
		   treeTable = new TTreeTable();


	   }




private: System::Void scanTable_RadioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	if (scanTable == nullptr) return;
	ShowDataTable(scanTable);
}
private: System::Void insertSortTable_RadioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	if (insertSortTable == nullptr) return;
	ShowDataTable(insertSortTable);
}
private: System::Void quickSortTable_RadioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (quickSortTable == nullptr) return;
	ShowDataTable(quickSortTable);
}
private: System::Void arrayHashTable_RadioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (arrayHashTable == nullptr) return;
	ShowDataTable(arrayHashTable);
}
private: System::Void listHashTable_RadioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	if (listHashTable == nullptr) return;
	ShowDataTable(listHashTable);
}
private: System::Void treeTable_RadioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (treeTable == nullptr) return;
	ShowDataTable(treeTable);
}
};
}
