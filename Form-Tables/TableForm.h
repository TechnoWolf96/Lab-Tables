#pragma once

namespace FormTables {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для TableForm
	/// </summary>
	public ref class TableForm : public System::Windows::Forms::Form
	{
	public:
		TableForm(void)
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
		~TableForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ radioButton1;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;

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
	private: System::Windows::Forms::TextBox^ textBox2;
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
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(370, 376);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(437, 24);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Неупорядоченная таблица ----------------------------------------";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(26, 99);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(270, 492);
			this->dataGridView1->TabIndex = 2;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(370, 406);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(459, 24);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Упорядоченная таблица (Сортировка вставками) ----------";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->Location = System::Drawing::Point(370, 436);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(506, 24);
			this->radioButton3->TabIndex = 4;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Упорядоченная таблица (Быстрая сортировка) -----------------------";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton4->Location = System::Drawing::Point(370, 466);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(462, 24);
			this->radioButton4->TabIndex = 5;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Хэш-таблица (С заданным шагом) ----------------------------------";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton5->Location = System::Drawing::Point(370, 496);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(464, 24);
			this->radioButton5->TabIndex = 6;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Хэш-таблица (Метод цепочек) ----------------------------------------";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->BackColor = System::Drawing::SystemColors::Control;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton6->Location = System::Drawing::Point(370, 526);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(460, 24);
			this->radioButton6->TabIndex = 7;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Несбалансированное дерево -----------------------------------------";
			this->radioButton6->UseVisualStyleBackColor = false;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Enabled = false;
			this->radioButton7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton7->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->radioButton7->Location = System::Drawing::Point(370, 556);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(462, 24);
			this->radioButton7->TabIndex = 8;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Сбалансированное дерево ---------------------------------------------";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button1->Location = System::Drawing::Point(747, 15);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 57);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Сгенерировать таблицы";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label2->Location = System::Drawing::Point(28, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(196, 26);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Диапазон ключей:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(230, 28);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(109, 29);
			this->textBox1->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label3->Location = System::Drawing::Point(373, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(222, 26);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Количество записей:";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox3->Location = System::Drawing::Point(788, 376);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(105, 29);
			this->textBox3->TabIndex = 15;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox4->Location = System::Drawing::Point(788, 406);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(105, 29);
			this->textBox4->TabIndex = 16;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox5->Location = System::Drawing::Point(788, 436);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(105, 29);
			this->textBox5->TabIndex = 17;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox6->Location = System::Drawing::Point(788, 466);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(105, 29);
			this->textBox6->TabIndex = 18;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox7->Location = System::Drawing::Point(788, 496);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(105, 29);
			this->textBox7->TabIndex = 19;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox8->Location = System::Drawing::Point(788, 526);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(105, 29);
			this->textBox8->TabIndex = 20;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox9->Location = System::Drawing::Point(788, 556);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(105, 29);
			this->textBox9->TabIndex = 21;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label5->Location = System::Drawing::Point(365, 333);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(256, 26);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Отображаемая таблица:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(744, 333);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 26);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Эффективность:";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(424, 109);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(88, 29);
			this->textBox10->TabIndex = 25;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label4->Location = System::Drawing::Point(348, 112);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 26);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Ключ:";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button2->Location = System::Drawing::Point(534, 104);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(131, 41);
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
			this->label6->Location = System::Drawing::Point(686, 112);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(120, 26);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Результат:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(601, 28);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(109, 29);
			this->textBox2->TabIndex = 29;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox11->Location = System::Drawing::Point(812, 112);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(82, 29);
			this->textBox11->TabIndex = 30;
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox12->Location = System::Drawing::Point(812, 186);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(82, 29);
			this->textBox12->TabIndex = 35;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label7->Location = System::Drawing::Point(686, 186);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(120, 26);
			this->label7->TabIndex = 34;
			this->label7->Text = L"Результат:";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button3->Location = System::Drawing::Point(534, 178);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(131, 41);
			this->button3->TabIndex = 33;
			this->button3->Text = L"Удалить";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(424, 183);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(88, 29);
			this->textBox13->TabIndex = 32;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label8->Location = System::Drawing::Point(348, 186);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(70, 26);
			this->label8->TabIndex = 31;
			this->label8->Text = L"Ключ:";
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox14->Location = System::Drawing::Point(812, 262);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(82, 29);
			this->textBox14->TabIndex = 40;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label9->Location = System::Drawing::Point(686, 262);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(120, 26);
			this->label9->TabIndex = 39;
			this->label9->Text = L"Результат:";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button4->Location = System::Drawing::Point(534, 254);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(131, 41);
			this->button4->TabIndex = 38;
			this->button4->Text = L"Добавить";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(424, 242);
			this->textBox15->Multiline = true;
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(88, 29);
			this->textBox15->TabIndex = 37;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label10->Location = System::Drawing::Point(348, 245);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(70, 26);
			this->label10->TabIndex = 36;
			this->label10->Text = L"Ключ:";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(424, 277);
			this->textBox16->Multiline = true;
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(88, 29);
			this->textBox16->TabIndex = 42;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label11->Location = System::Drawing::Point(312, 280);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(113, 26);
			this->label11->TabIndex = 41;
			this->label11->Text = L"Значение:";
			// 
			// TableForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(952, 618);
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
			this->Controls->Add(this->textBox2);
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
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton7);
			this->Controls->Add(this->radioButton6);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->radioButton1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"TableForm";
			this->Text = L"Таблицы";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion











};
}
