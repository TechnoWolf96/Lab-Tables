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
	int tableSize = 10;
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
	private: System::Windows::Forms::TextBox^ efficiency_ScanTable;
	private: System::Windows::Forms::TextBox^ efficiency_InsertSortTable;
	private: System::Windows::Forms::TextBox^ efficiency_QuickSortTable;
	private: System::Windows::Forms::TextBox^ efficiency_ArrayHashTable;
	private: System::Windows::Forms::TextBox^ efficiency_ListHashTable;
	private: System::Windows::Forms::TextBox^ efficiency_TreeTable;
	private: System::Windows::Forms::TextBox^ efficiency_BalanceTreeTable;








	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ findKey_TextBox;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ search_Button;


	private: System::Windows::Forms::TextBox^ recordQuant_TextBox;




	private: System::Windows::Forms::Button^ delete_Button;

	private: System::Windows::Forms::TextBox^ deleteKey_TextBox;

	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::Button^ insert_Button;

	private: System::Windows::Forms::TextBox^ insertKey_TextBox;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ insertValue_TextBox;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ count_TextBox;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ключ;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Значение;
	private: System::Windows::Forms::TextBox^ tableSize_TextBox;
	private: System::Windows::Forms::Label^ label13;






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
			this->efficiency_ScanTable = (gcnew System::Windows::Forms::TextBox());
			this->efficiency_InsertSortTable = (gcnew System::Windows::Forms::TextBox());
			this->efficiency_QuickSortTable = (gcnew System::Windows::Forms::TextBox());
			this->efficiency_ArrayHashTable = (gcnew System::Windows::Forms::TextBox());
			this->efficiency_ListHashTable = (gcnew System::Windows::Forms::TextBox());
			this->efficiency_TreeTable = (gcnew System::Windows::Forms::TextBox());
			this->efficiency_BalanceTreeTable = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->findKey_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->search_Button = (gcnew System::Windows::Forms::Button());
			this->recordQuant_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->delete_Button = (gcnew System::Windows::Forms::Button());
			this->deleteKey_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->insert_Button = (gcnew System::Windows::Forms::Button());
			this->insertKey_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->insertValue_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->count_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->tableSize_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
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
			this->label2->Location = System::Drawing::Point(31, 22);
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
			this->keyRange_TextBox->Location = System::Drawing::Point(301, 18);
			this->keyRange_TextBox->Margin = System::Windows::Forms::Padding(4);
			this->keyRange_TextBox->Multiline = true;
			this->keyRange_TextBox->Name = L"keyRange_TextBox";
			this->keyRange_TextBox->Size = System::Drawing::Size(144, 35);
			this->keyRange_TextBox->TabIndex = 11;
			this->keyRange_TextBox->Text = L"100";
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
			// efficiency_ScanTable
			// 
			this->efficiency_ScanTable->BackColor = System::Drawing::SystemColors::ControlDark;
			this->efficiency_ScanTable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->efficiency_ScanTable->ForeColor = System::Drawing::SystemColors::InfoText;
			this->efficiency_ScanTable->Location = System::Drawing::Point(1051, 463);
			this->efficiency_ScanTable->Margin = System::Windows::Forms::Padding(4);
			this->efficiency_ScanTable->Multiline = true;
			this->efficiency_ScanTable->Name = L"efficiency_ScanTable";
			this->efficiency_ScanTable->ReadOnly = true;
			this->efficiency_ScanTable->Size = System::Drawing::Size(139, 35);
			this->efficiency_ScanTable->TabIndex = 15;
			this->efficiency_ScanTable->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// efficiency_InsertSortTable
			// 
			this->efficiency_InsertSortTable->BackColor = System::Drawing::SystemColors::ControlDark;
			this->efficiency_InsertSortTable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->efficiency_InsertSortTable->ForeColor = System::Drawing::SystemColors::InfoText;
			this->efficiency_InsertSortTable->Location = System::Drawing::Point(1051, 500);
			this->efficiency_InsertSortTable->Margin = System::Windows::Forms::Padding(4);
			this->efficiency_InsertSortTable->Multiline = true;
			this->efficiency_InsertSortTable->Name = L"efficiency_InsertSortTable";
			this->efficiency_InsertSortTable->ReadOnly = true;
			this->efficiency_InsertSortTable->Size = System::Drawing::Size(139, 35);
			this->efficiency_InsertSortTable->TabIndex = 16;
			this->efficiency_InsertSortTable->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// efficiency_QuickSortTable
			// 
			this->efficiency_QuickSortTable->BackColor = System::Drawing::SystemColors::ControlDark;
			this->efficiency_QuickSortTable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->efficiency_QuickSortTable->ForeColor = System::Drawing::SystemColors::InfoText;
			this->efficiency_QuickSortTable->Location = System::Drawing::Point(1051, 537);
			this->efficiency_QuickSortTable->Margin = System::Windows::Forms::Padding(4);
			this->efficiency_QuickSortTable->Multiline = true;
			this->efficiency_QuickSortTable->Name = L"efficiency_QuickSortTable";
			this->efficiency_QuickSortTable->ReadOnly = true;
			this->efficiency_QuickSortTable->Size = System::Drawing::Size(139, 35);
			this->efficiency_QuickSortTable->TabIndex = 17;
			this->efficiency_QuickSortTable->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// efficiency_ArrayHashTable
			// 
			this->efficiency_ArrayHashTable->BackColor = System::Drawing::SystemColors::ControlDark;
			this->efficiency_ArrayHashTable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->efficiency_ArrayHashTable->ForeColor = System::Drawing::SystemColors::InfoText;
			this->efficiency_ArrayHashTable->Location = System::Drawing::Point(1051, 574);
			this->efficiency_ArrayHashTable->Margin = System::Windows::Forms::Padding(4);
			this->efficiency_ArrayHashTable->Multiline = true;
			this->efficiency_ArrayHashTable->Name = L"efficiency_ArrayHashTable";
			this->efficiency_ArrayHashTable->ReadOnly = true;
			this->efficiency_ArrayHashTable->Size = System::Drawing::Size(139, 35);
			this->efficiency_ArrayHashTable->TabIndex = 18;
			this->efficiency_ArrayHashTable->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// efficiency_ListHashTable
			// 
			this->efficiency_ListHashTable->BackColor = System::Drawing::SystemColors::ControlDark;
			this->efficiency_ListHashTable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->efficiency_ListHashTable->ForeColor = System::Drawing::SystemColors::InfoText;
			this->efficiency_ListHashTable->Location = System::Drawing::Point(1051, 610);
			this->efficiency_ListHashTable->Margin = System::Windows::Forms::Padding(4);
			this->efficiency_ListHashTable->Multiline = true;
			this->efficiency_ListHashTable->Name = L"efficiency_ListHashTable";
			this->efficiency_ListHashTable->ReadOnly = true;
			this->efficiency_ListHashTable->Size = System::Drawing::Size(139, 35);
			this->efficiency_ListHashTable->TabIndex = 19;
			this->efficiency_ListHashTable->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// efficiency_TreeTable
			// 
			this->efficiency_TreeTable->BackColor = System::Drawing::SystemColors::ControlDark;
			this->efficiency_TreeTable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->efficiency_TreeTable->ForeColor = System::Drawing::SystemColors::InfoText;
			this->efficiency_TreeTable->Location = System::Drawing::Point(1051, 647);
			this->efficiency_TreeTable->Margin = System::Windows::Forms::Padding(4);
			this->efficiency_TreeTable->Multiline = true;
			this->efficiency_TreeTable->Name = L"efficiency_TreeTable";
			this->efficiency_TreeTable->ReadOnly = true;
			this->efficiency_TreeTable->Size = System::Drawing::Size(139, 35);
			this->efficiency_TreeTable->TabIndex = 20;
			this->efficiency_TreeTable->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// efficiency_BalanceTreeTable
			// 
			this->efficiency_BalanceTreeTable->BackColor = System::Drawing::SystemColors::ControlDark;
			this->efficiency_BalanceTreeTable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->efficiency_BalanceTreeTable->ForeColor = System::Drawing::SystemColors::InfoText;
			this->efficiency_BalanceTreeTable->Location = System::Drawing::Point(1051, 684);
			this->efficiency_BalanceTreeTable->Margin = System::Windows::Forms::Padding(4);
			this->efficiency_BalanceTreeTable->Multiline = true;
			this->efficiency_BalanceTreeTable->Name = L"efficiency_BalanceTreeTable";
			this->efficiency_BalanceTreeTable->ReadOnly = true;
			this->efficiency_BalanceTreeTable->Size = System::Drawing::Size(139, 35);
			this->efficiency_BalanceTreeTable->TabIndex = 21;
			this->efficiency_BalanceTreeTable->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			// findKey_TextBox
			// 
			this->findKey_TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->findKey_TextBox->Location = System::Drawing::Point(623, 132);
			this->findKey_TextBox->Margin = System::Windows::Forms::Padding(4);
			this->findKey_TextBox->Multiline = true;
			this->findKey_TextBox->Name = L"findKey_TextBox";
			this->findKey_TextBox->Size = System::Drawing::Size(152, 35);
			this->findKey_TextBox->TabIndex = 25;
			this->findKey_TextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label4->Location = System::Drawing::Point(527, 132);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 34);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Ключ:";
			// 
			// search_Button
			// 
			this->search_Button->BackColor = System::Drawing::Color::CornflowerBlue;
			this->search_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->search_Button->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->search_Button->Location = System::Drawing::Point(814, 124);
			this->search_Button->Margin = System::Windows::Forms::Padding(4);
			this->search_Button->Name = L"search_Button";
			this->search_Button->Size = System::Drawing::Size(214, 50);
			this->search_Button->TabIndex = 26;
			this->search_Button->Text = L"Поиск";
			this->search_Button->UseVisualStyleBackColor = false;
			this->search_Button->Click += gcnew System::EventHandler(this, &TableForm::search_Button_Click);
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
			this->recordQuant_TextBox->Text = L"50";
			this->recordQuant_TextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// delete_Button
			// 
			this->delete_Button->BackColor = System::Drawing::Color::CornflowerBlue;
			this->delete_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->delete_Button->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->delete_Button->Location = System::Drawing::Point(814, 215);
			this->delete_Button->Margin = System::Windows::Forms::Padding(4);
			this->delete_Button->Name = L"delete_Button";
			this->delete_Button->Size = System::Drawing::Size(214, 50);
			this->delete_Button->TabIndex = 33;
			this->delete_Button->Text = L"Удалить";
			this->delete_Button->UseVisualStyleBackColor = false;
			// 
			// deleteKey_TextBox
			// 
			this->deleteKey_TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->deleteKey_TextBox->Location = System::Drawing::Point(623, 223);
			this->deleteKey_TextBox->Margin = System::Windows::Forms::Padding(4);
			this->deleteKey_TextBox->Multiline = true;
			this->deleteKey_TextBox->Name = L"deleteKey_TextBox";
			this->deleteKey_TextBox->Size = System::Drawing::Size(152, 35);
			this->deleteKey_TextBox->TabIndex = 32;
			this->deleteKey_TextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label8->Location = System::Drawing::Point(527, 220);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(88, 34);
			this->label8->TabIndex = 31;
			this->label8->Text = L"Ключ:";
			// 
			// insert_Button
			// 
			this->insert_Button->BackColor = System::Drawing::Color::CornflowerBlue;
			this->insert_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->insert_Button->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->insert_Button->Location = System::Drawing::Point(814, 309);
			this->insert_Button->Margin = System::Windows::Forms::Padding(4);
			this->insert_Button->Name = L"insert_Button";
			this->insert_Button->Size = System::Drawing::Size(214, 50);
			this->insert_Button->TabIndex = 38;
			this->insert_Button->Text = L"Добавить";
			this->insert_Button->UseVisualStyleBackColor = false;
			// 
			// insertKey_TextBox
			// 
			this->insertKey_TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->insertKey_TextBox->Location = System::Drawing::Point(623, 296);
			this->insertKey_TextBox->Margin = System::Windows::Forms::Padding(4);
			this->insertKey_TextBox->Multiline = true;
			this->insertKey_TextBox->Name = L"insertKey_TextBox";
			this->insertKey_TextBox->Size = System::Drawing::Size(152, 35);
			this->insertKey_TextBox->TabIndex = 37;
			this->insertKey_TextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label10->Location = System::Drawing::Point(527, 296);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(88, 34);
			this->label10->TabIndex = 36;
			this->label10->Text = L"Ключ:";
			// 
			// insertValue_TextBox
			// 
			this->insertValue_TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->insertValue_TextBox->Location = System::Drawing::Point(623, 339);
			this->insertValue_TextBox->Margin = System::Windows::Forms::Padding(4);
			this->insertValue_TextBox->Multiline = true;
			this->insertValue_TextBox->Name = L"insertValue_TextBox";
			this->insertValue_TextBox->Size = System::Drawing::Size(152, 35);
			this->insertValue_TextBox->TabIndex = 42;
			this->insertValue_TextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label11->Location = System::Drawing::Point(473, 339);
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
			// tableSize_TextBox
			// 
			this->tableSize_TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->tableSize_TextBox->Location = System::Drawing::Point(301, 61);
			this->tableSize_TextBox->Margin = System::Windows::Forms::Padding(4);
			this->tableSize_TextBox->Multiline = true;
			this->tableSize_TextBox->Name = L"tableSize_TextBox";
			this->tableSize_TextBox->Size = System::Drawing::Size(144, 35);
			this->tableSize_TextBox->TabIndex = 46;
			this->tableSize_TextBox->Text = L"100";
			this->tableSize_TextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label13->Location = System::Drawing::Point(65, 62);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(212, 34);
			this->label13->TabIndex = 45;
			this->label13->Text = L"Размер таблиц:";
			// 
			// TableForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1269, 761);
			this->Controls->Add(this->tableSize_TextBox);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->count_TextBox);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->insertValue_TextBox);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->insert_Button);
			this->Controls->Add(this->insertKey_TextBox);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->delete_Button);
			this->Controls->Add(this->deleteKey_TextBox);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->recordQuant_TextBox);
			this->Controls->Add(this->search_Button);
			this->Controls->Add(this->findKey_TextBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->efficiency_BalanceTreeTable);
			this->Controls->Add(this->efficiency_TreeTable);
			this->Controls->Add(this->efficiency_ListHashTable);
			this->Controls->Add(this->efficiency_ArrayHashTable);
			this->Controls->Add(this->efficiency_QuickSortTable);
			this->Controls->Add(this->efficiency_InsertSortTable);
			this->Controls->Add(this->efficiency_ScanTable);
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
			this->Load += gcnew System::EventHandler(this, &TableForm::TableForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

















private: System::Void Generate_Button_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		keyRange = Convert::ToInt32(keyRange_TextBox->Text);
		startRecordCount = Convert::ToInt32(recordQuant_TextBox->Text);
		tableSize = Convert::ToInt32(tableSize_TextBox->Text);
		Start();
		

	}
	catch (...) {}
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
private: System::Void TableForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void search_Button_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		int searchKey = Convert::ToInt32(findKey_TextBox->Text);

		scanTable->ClearEfficiency();
		if (scanTable->Find(searchKey)) efficiency_ScanTable->BackColor = Color::Green;
		else efficiency_ScanTable->BackColor = Color::Red;
		efficiency_ScanTable->Text = scanTable->GetEfficiency().ToString();

		insertSortTable->ClearEfficiency();
		if (insertSortTable->Find(searchKey)) efficiency_InsertSortTable->BackColor = Color::Green;
		else efficiency_InsertSortTable->BackColor = Color::Red;
		efficiency_InsertSortTable->Text = insertSortTable->GetEfficiency().ToString();

		quickSortTable->ClearEfficiency();
		if (quickSortTable->Find(searchKey)) efficiency_QuickSortTable->BackColor = Color::Green;
		else efficiency_QuickSortTable->BackColor = Color::Red;
		efficiency_QuickSortTable->Text = quickSortTable->GetEfficiency().ToString();

		arrayHashTable->ClearEfficiency();
		if (arrayHashTable->Find(searchKey)) efficiency_ArrayHashTable->BackColor = Color::Green;
		else efficiency_ArrayHashTable->BackColor = Color::Red;
		efficiency_ArrayHashTable->Text = arrayHashTable->GetEfficiency().ToString();

		listHashTable->ClearEfficiency();
		if (listHashTable->Find(searchKey)) efficiency_ListHashTable->BackColor = Color::Green;
		else efficiency_ListHashTable->BackColor = Color::Red;
		efficiency_ListHashTable->Text = listHashTable->GetEfficiency().ToString();

		treeTable->ClearEfficiency();
		if (treeTable->Find(searchKey)) efficiency_TreeTable->BackColor = Color::Green;
		else efficiency_TreeTable->BackColor = Color::Red;
		efficiency_TreeTable->Text = treeTable->GetEfficiency().ToString();

	}
	catch (...) {}
}
};
}
