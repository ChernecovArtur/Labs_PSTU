#pragma once
#include <cmath>


namespace Calc1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

		}

	protected:

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

	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;

	protected:
	protected:

	private:

	System::ComponentModel::Container^ components;

	#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->tabControl1->Location = System::Drawing::Point(9, 10);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(578, 414);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->numericUpDown3);
			this->tabPage1->Controls->Add(this->numericUpDown2);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->numericUpDown1);
			this->tabPage1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->tabPage1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->tabPage1->Size = System::Drawing::Size(570, 388);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Кредитный калькулятор";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(15, 17);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(136, 31);
			this->button7->TabIndex = 13;
			this->button7->Text = L"Доп. информация";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label5->Font = (gcnew System::Drawing::Font(L"a_LCDNova", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(440, 309);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 27);
			this->label5->TabIndex = 12;
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(3, 307);
			this->label4->Name = L"label4";
			this->label4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label4->Size = System::Drawing::Size(413, 29);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Ежемесячный платеж по кредиту составит: ";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Location = System::Drawing::Point(152, 189);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(8, 8);
			this->button3->TabIndex = 10;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(440, 17);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 31);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(152, 252);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(281, 37);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Расчитать платеж по кредиту";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(15, 189);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(235, 29);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Срок кредитования, мес";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->numericUpDown3->Font = (gcnew System::Drawing::Font(L"a_LCDNova", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown3->Location = System::Drawing::Point(375, 184);
			this->numericUpDown3->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(158, 34);
			this->numericUpDown3->TabIndex = 5;
			this->numericUpDown3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown3->UpDownAlign = System::Windows::Forms::LeftRightAlignment::Left;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->numericUpDown2->DecimalPlaces = 2;
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"a_LCDNova", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown2->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericUpDown2->Location = System::Drawing::Point(375, 121);
			this->numericUpDown2->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->numericUpDown2->Size = System::Drawing::Size(159, 34);
			this->numericUpDown2->TabIndex = 4;
			this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown2->UpDownAlign = System::Windows::Forms::LeftRightAlignment::Left;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(27, 126);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label2->Size = System::Drawing::Size(218, 29);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Процентная ставка, %";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 68);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(238, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Сумма кредита, тыс. руб";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"a_LCDNova", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown1->Location = System::Drawing::Point(375, 68);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(160, 34);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown1->UpDownAlign = System::Windows::Forms::LeftRightAlignment::Left;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->numericUpDown6);
			this->tabPage2->Controls->Add(this->numericUpDown5);
			this->tabPage2->Controls->Add(this->numericUpDown4);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(570, 388);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Калькулятор вкладов";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(8, 5);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(132, 28);
			this->button6->TabIndex = 15;
			this->button6->Text = L"Доп. информация";
			this->button6->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(421, 299);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(121, 31);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Очистить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"a_LCDNova", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(500, 351);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(118, 27);
			this->label12->TabIndex = 13;
			this->label12->Text = L"                 .";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Font = (gcnew System::Drawing::Font(L"a_LCDNova", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown6->Location = System::Drawing::Point(421, 144);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1316134912, 2328, 0, 0 });
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(121, 34);
			this->numericUpDown6->TabIndex = 12;
			this->numericUpDown6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown6->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown6_ValueChanged);
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->DecimalPlaces = 2;
			this->numericUpDown5->Font = (gcnew System::Drawing::Font(L"a_LCDNova", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown5->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericUpDown5->Location = System::Drawing::Point(420, 92);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(122, 34);
			this->numericUpDown5->TabIndex = 11;
			this->numericUpDown5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown5_ValueChanged);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Font = (gcnew System::Drawing::Font(L"a_LCDNova", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown4->Location = System::Drawing::Point(420, 42);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(122, 34);
			this->numericUpDown4->TabIndex = 10;
			this->numericUpDown4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown4_ValueChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(3, 351);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(500, 25);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Сумма денежных средств по окончании срока вклада, тыс:";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(10, 300);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(375, 30);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Расчитать итоговую сумму";
			this->button4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(7, 218);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(339, 25);
			this->label10->TabIndex = 7;
			this->label10->Text = L" Число                   Месяц                   Год";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"a_LCDNova", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(294, 246);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(64, 34);
			this->textBox3->TabIndex = 6;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"a_LCDNova", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(128, 247);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(122, 34);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"a_LCDNova", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 247);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(64, 34);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged_2);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(5, 182);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(227, 25);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Дата поступления вклада:";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(5, 144);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(380, 25);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Количество дней начисления процентов, дн:";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(5, 95);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(273, 25);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Годовая процентная ставка, %:";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(5, 45);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(353, 25);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Первоначальная сумма вклада, тыс. руб:";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(598, 435);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор кредитов и вкладов";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			this->ResumeLayout(false);

		}
	#pragma endregion
	// Калькулятор кредитов
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	};
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		// Перевод данных, введенных пользователем, в тип double
		double num1 = System::Convert::ToDouble(numericUpDown1->Text);
		double num2 = System::Convert::ToDouble(numericUpDown2->Text);
		double num3 = System::Convert::ToDouble(numericUpDown3->Text);

		int k = 0;
		double summ_mes = 0;
		double p = 1;

		// Проверка на корректность вода
		if (!check_input_numericUpDown1()) 
		{

			MessageBox::Show("Данные о сумме кредита введены некорректно.");
			k++;
		}

		if (!check_input_numericUpDown2()) 
		{

			MessageBox::Show("Данные о кредитной ставке введены некорректно.");
			k++;
		}

		if (!check_input_numericUpDown3()) 
		{

			MessageBox::Show("Данные о сроке кредитования введены некорректно.");
			k++;
		}


		// Подсчет ежемесячного платежа по кредиту в случае корректного вводаданных
		if (k == 0) 
		{
			// Подсчет с помощью дополнительных переменных
			for (int i = 0; i < num3; i++) p = p * (1 + num2);
			
			double q = p - 1;
			double r = num2 / q;
			double s = num2 + r;
			summ_mes = num1 * s;

			summ_mes = (int)summ_mes; // Перевод переменной типа double к переменной типа string
			label5->Text = summ_mes.ToString();
		}
	}

	// Очистка введенных данных
	private: System::Void button2_Click(System::Object ^ sender, System::EventArgs ^ e) {
		numericUpDown1->Text = "0";
		numericUpDown2->Text = "0";
		numericUpDown3->Text = "0";
		label5->Text = "0";
	}

	// Функции проверки введенных данных на корректность
	bool check_input_numericUpDown1() 
	{
		double num1 = System::Convert::ToDouble(numericUpDown1->Text);
		if (num1 == 0) return false;
		else return true;
	}

	bool check_input_numericUpDown2() 
	{
		double num2 = System::Convert::ToDouble(numericUpDown2->Text);
		if (num2 == 0) return false;
		else return true;
	}

	bool check_input_numericUpDown3() 
	{
		double num3 = System::Convert::ToDouble(numericUpDown3->Text);
		if (num3 == 0) return false;
		else return true;
	}


	// Калькулытор вкладов
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	// Очистка введенных данных
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		numericUpDown4->Text = "0";
		numericUpDown5->Text = "0";
		numericUpDown6->Text = "0";

		textBox1->Text = "0";
		textBox2->Text = "----";
		textBox3->Text = "0";
	}

	private: System::Void numericUpDown4_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void numericUpDown5_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void numericUpDown6_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged_2(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	// Функции проверки введенных данных на корректность
	bool check_input_numericUpDown4() 
	{
		double num4 = System::Convert::ToDouble(numericUpDown4->Text);
		if (num4 == 0) return false;
		else return true;
	}

	bool check_input_numericUpDown5() 
	{
		double num5 = System::Convert::ToDouble(numericUpDown5->Text);
		if (num5 == 0) return false;
		else return true;
	}

	bool check_input_numericUpDown6() 
	{
		double num6 = System::Convert::ToDouble(numericUpDown6->Text);
		if (num6 == 0) return false;
		else return true;
	}

	bool check_input_textbox1() 
	{
		double num7 = System::Convert::ToDouble(textBox1->Text);
		if ((num7 < 1) && (num7 > 31)) return false;
		else return true;
	}

	bool check_input_textbox2() 
	{
		double num8 = System::Convert::ToDouble(textBox2->Text);
		if ((num8 < 1) && (num8 > 12)) return false;
		else return true;
	}

	bool check_input_textbox3() 
	{
		double num9 = System::Convert::ToDouble(textBox3->Text);
		if (num9 == 0) return false;
		else return true;
	}


	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Подсчет ежемесячного платежа расчитан, что кредит является кредитом аннуитентного типа.");
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Расчет итоговой суммы по вкладу основан на формуле расчета с учетом ежемесячной капитализации процентов.");
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		int b = 0;
		if (!check_input_numericUpDown4()) 
		{
			MessageBox::Show("Некорректная первоначальная сумма вклада.");
			b++;
		}

		if (!check_input_numericUpDown5()) 
		{
			MessageBox::Show("Некорректная процентная ставка по вкладу.");
			b++;
		}

		if (!check_input_numericUpDown6()) 
		{
			MessageBox::Show("Некорректный период вклада.");
			b++;
		}

		if (!check_input_textbox1()) 
		{
			MessageBox::Show("Некорректное число.");
			b++;
		}

		if (!check_input_textbox2()) 
		{
			MessageBox::Show("Некорректный номер месяца.");
			b++;
		}

		if (!check_input_textbox3()) 
		{
			MessageBox::Show("Некорректный год.");
			b++;
		}


		double num4 = System::Convert::ToDouble(numericUpDown4->Text);
		double num5 = System::Convert::ToDouble(numericUpDown5->Text);
		double num6 = System::Convert::ToDouble(numericUpDown6->Text);
		double num7 = System::Convert::ToDouble(textBox1->Text);
		double num8 = System::Convert::ToDouble(textBox2->Text);
		double num9 = System::Convert::ToDouble(textBox3->Text);
		int num10 = System::Convert::ToInt64(textBox3->Text);
		
		double year; // Количетсов дней в году, в котором внесен вклад

		if (b == 0) 
		{
			// Подсчет с помощью дополнительных переменных
			if ((num10 % 4 == 0) && (num10 % 100 == 0) && (num10 % 400 == 0))
				year = 366;
			else 
				year = 365;

			double f = num5 * num6;
			double l = year * 100;
			double g = f / l;
			double h = num4 * (1 + g);

			int summ_vklad = (int)h; // Округление числа
			label12->Text = summ_vklad.ToString();

		}
	}
};
	
