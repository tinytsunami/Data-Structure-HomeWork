#pragma once
#include <stack>
#define BLOCK_SIZE 30

//base variable
int **graphic;
int countV;
int countE;
int rangeW;
int infinity;
int i, j;

//save1 path
std::stack<int> *save1;
std::stack<int> **save2;

namespace shortest_paths {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^  tabPage2;
	protected:
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::DataGridView^  dataGridView2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage ());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView ());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl ());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage ());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox ());
			this->label1 = (gcnew System::Windows::Forms::Label ());
			this->button1 = (gcnew System::Windows::Forms::Button ());
			this->panel1 = (gcnew System::Windows::Forms::Panel ());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox ());
			this->label9 = (gcnew System::Windows::Forms::Label ());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown ());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox ());
			this->label4 = (gcnew System::Windows::Forms::Label ());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown ());
			this->label5 = (gcnew System::Windows::Forms::Label ());
			this->button2 = (gcnew System::Windows::Forms::Button ());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown ());
			this->label2 = (gcnew System::Windows::Forms::Label ());
			this->panel2 = (gcnew System::Windows::Forms::Panel ());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox ());
			this->label7 = (gcnew System::Windows::Forms::Label ());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown ());
			this->button3 = (gcnew System::Windows::Forms::Button ());
			this->label6 = (gcnew System::Windows::Forms::Label ());
			this->panel3 = (gcnew System::Windows::Forms::Panel ());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox ());
			this->button4 = (gcnew System::Windows::Forms::Button ());
			this->label8 = (gcnew System::Windows::Forms::Label ());
			this->panel4 = (gcnew System::Windows::Forms::Panel ());
			this->button5 = (gcnew System::Windows::Forms::Button ());
			this->label3 = (gcnew System::Windows::Forms::Label ());
			this->panel5 = (gcnew System::Windows::Forms::Panel ());
			this->button6 = (gcnew System::Windows::Forms::Button ());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage ());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView ());
			this->tabPage2->SuspendLayout ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit ();
			this->tabControl1->SuspendLayout ();
			this->tabPage1->SuspendLayout ();
			this->panel1->SuspendLayout ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit ();
			this->panel2->SuspendLayout ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit ();
			this->panel3->SuspendLayout ();
			this->panel4->SuspendLayout ();
			this->panel5->SuspendLayout ();
			this->tabPage3->SuspendLayout ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit ();
			this->SuspendLayout ();
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add (this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point (4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding (4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding (4);
			this->tabPage2->Size = System::Drawing::Size (421, 459);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"圖";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
																							  | System::Windows::Forms::AnchorStyles::Left)
																							 | System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point (7, 7);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size (406, 446);
			this->dataGridView1->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
																							| System::Windows::Forms::AnchorStyles::Left)
																						   | System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add (this->tabPage1);
			this->tabControl1->Controls->Add (this->tabPage2);
			this->tabControl1->Controls->Add (this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point (13, 13);
			this->tabControl1->Margin = System::Windows::Forms::Padding (4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size (429, 485);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add (this->textBox1);
			this->tabPage1->Location = System::Drawing::Point (4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding (4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding (4);
			this->tabPage1->Size = System::Drawing::Size (421, 459);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"控制台";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
																						 | System::Windows::Forms::AnchorStyles::Left)
																						| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point (7, 7);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size (407, 445);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font (L"微軟正黑體", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
															   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point (452, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size (134, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"產生圖                             ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point (131, 95);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size (120, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"生成圖";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler (this, &MyForm::button1_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add (this->checkBox4);
			this->panel1->Controls->Add (this->label9);
			this->panel1->Controls->Add (this->numericUpDown3);
			this->panel1->Controls->Add (this->checkBox1);
			this->panel1->Controls->Add (this->label4);
			this->panel1->Controls->Add (this->numericUpDown1);
			this->panel1->Controls->Add (this->label5);
			this->panel1->Controls->Add (this->button2);
			this->panel1->Controls->Add (this->numericUpDown2);
			this->panel1->Controls->Add (this->button1);
			this->panel1->Location = System::Drawing::Point (449, 55);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size (262, 133);
			this->panel1->TabIndex = 7;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point (64, 99);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size (48, 16);
			this->checkBox4->TabIndex = 19;
			this->checkBox4->Text = L"方向";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font (L"微軟正黑體", 9.75F));
			this->label9->Location = System::Drawing::Point (7, 10);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size (60, 17);
			this->label9->TabIndex = 18;
			this->label9->Text = L"點的數量";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point (86, 11);
			this->numericUpDown3->Maximum = System::Decimal (gcnew cli::array< System::Int32 > (4) { 100000, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size (120, 22);
			this->numericUpDown3->TabIndex = 17;
			this->numericUpDown3->Value = System::Decimal (gcnew cli::array< System::Int32 > (4) { 10, 0, 0, 0 });
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler (this, &MyForm::numericUpDown3_ValueChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point (10, 99);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size (48, 16);
			this->checkBox1->TabIndex = 16;
			this->checkBox1->Text = L"輸出";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font (L"微軟正黑體", 9.75F));
			this->label4->Location = System::Drawing::Point (7, 66);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size (60, 17);
			this->label4->TabIndex = 15;
			this->label4->Text = L"權重範圍";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point (86, 67);
			this->numericUpDown1->Maximum = System::Decimal (gcnew cli::array< System::Int32 > (4) { 2147483647, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal (gcnew cli::array< System::Int32 > (4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size (120, 22);
			this->numericUpDown1->TabIndex = 14;
			this->numericUpDown1->Value = System::Decimal (gcnew cli::array< System::Int32 > (4) { 100, 0, 0, 0 });
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font (L"微軟正黑體", 9.75F));
			this->label5->Location = System::Drawing::Point (7, 41);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size (73, 17);
			this->label5->TabIndex = 13;
			this->label5->Text = L"定義無限大";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point (212, 39);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size (39, 23);
			this->button2->TabIndex = 17;
			this->button2->Text = L"MAX";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler (this, &MyForm::button2_Click);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point (86, 39);
			this->numericUpDown2->Maximum = System::Decimal (gcnew cli::array< System::Int32 > (4) { 2147483647, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal (gcnew cli::array< System::Int32 > (4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size (120, 22);
			this->numericUpDown2->TabIndex = 12;
			this->numericUpDown2->Value = System::Decimal (gcnew cli::array< System::Int32 > (4) { 2147483647, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font (L"微軟正黑體", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
															   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point (452, 191);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size (135, 17);
			this->label2->TabIndex = 18;
			this->label2->Text = L"單一起點                         ";
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel2->Controls->Add (this->checkBox2);
			this->panel2->Controls->Add (this->label7);
			this->panel2->Controls->Add (this->numericUpDown4);
			this->panel2->Controls->Add (this->button3);
			this->panel2->Location = System::Drawing::Point (449, 211);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size (262, 67);
			this->panel2->TabIndex = 19;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Location = System::Drawing::Point (10, 42);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size (72, 16);
			this->checkBox2->TabIndex = 17;
			this->checkBox2->Text = L"紀錄路徑";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font (L"微軟正黑體", 9.75F));
			this->label7->Location = System::Drawing::Point (7, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size (60, 17);
			this->label7->TabIndex = 13;
			this->label7->Text = L"選擇起點";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point (86, 10);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size (120, 22);
			this->numericUpDown4->TabIndex = 12;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point (131, 38);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size (120, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"開始運行";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler (this, &MyForm::button3_Click);
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font (L"微軟正黑體", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
															   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->label6->Location = System::Drawing::Point (452, 281);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size (135, 17);
			this->label6->TabIndex = 20;
			this->label6->Text = L"任意兩點                         ";
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel3->Controls->Add (this->checkBox3);
			this->panel3->Controls->Add (this->button4);
			this->panel3->Location = System::Drawing::Point (449, 301);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size (262, 30);
			this->panel3->TabIndex = 21;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Location = System::Drawing::Point (10, 7);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size (72, 16);
			this->checkBox3->TabIndex = 17;
			this->checkBox3->Text = L"紀錄路徑";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point (131, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size (120, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"開始運行";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler (this, &MyForm::button4_Click);
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font (L"微軟正黑體", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
															   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->label8->Location = System::Drawing::Point (452, 334);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size (129, 17);
			this->label8->TabIndex = 22;
			this->label8->Text = L"遞移封閉                       ";
			// 
			// panel4
			// 
			this->panel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel4->Controls->Add (this->button5);
			this->panel4->Location = System::Drawing::Point (449, 354);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size (262, 30);
			this->panel4->TabIndex = 23;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point (3, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size (120, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"開始運行";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler (this, &MyForm::button5_Click);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font (L"微軟正黑體", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
															   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point (452, 387);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size (128, 17);
			this->label3->TabIndex = 24;
			this->label3->Text = L"主控台                           ";
			// 
			// panel5
			// 
			this->panel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel5->Controls->Add (this->button6);
			this->panel5->Location = System::Drawing::Point (449, 407);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size (262, 30);
			this->panel5->TabIndex = 25;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point (3, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size (120, 23);
			this->button6->TabIndex = 5;
			this->button6->Text = L"清除全部";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler (this, &MyForm::button6_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add (this->dataGridView2);
			this->tabPage3->Location = System::Drawing::Point (4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding (3);
			this->tabPage3->Size = System::Drawing::Size (421, 459);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"遞移封閉";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
																							  | System::Windows::Forms::AnchorStyles::Left)
																							 | System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Location = System::Drawing::Point (7, 6);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size (406, 446);
			this->dataGridView2->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF (6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size (719, 511);
			this->Controls->Add (this->label3);
			this->Controls->Add (this->panel5);
			this->Controls->Add (this->label8);
			this->Controls->Add (this->panel4);
			this->Controls->Add (this->label6);
			this->Controls->Add (this->panel3);
			this->Controls->Add (this->label2);
			this->Controls->Add (this->panel2);
			this->Controls->Add (this->label1);
			this->Controls->Add (this->panel1);
			this->Controls->Add (this->tabControl1);
			this->MinimumSize = System::Drawing::Size (735, 550);
			this->Name = L"MyForm";
			this->Text = L"最短路徑 Shortest Paths By Yang-Yu";
			this->tabPage2->ResumeLayout (false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit ();
			this->tabControl1->ResumeLayout (false);
			this->tabPage1->ResumeLayout (false);
			this->tabPage1->PerformLayout ();
			this->panel1->ResumeLayout (false);
			this->panel1->PerformLayout ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit ();
			this->panel2->ResumeLayout (false);
			this->panel2->PerformLayout ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit ();
			this->panel3->ResumeLayout (false);
			this->panel3->PerformLayout ();
			this->panel4->ResumeLayout (false);
			this->panel5->ResumeLayout (false);
			this->tabPage3->ResumeLayout (false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit ();
			this->ResumeLayout (false);
			this->PerformLayout ();

		}
#pragma endregion
	// have path?
	private: bool havePath (int weight)
	{
		return (weight < infinity);
	}
	// control start over count of V...
	private: System::Void numericUpDown3_ValueChanged (System::Object^  sender, System::EventArgs^  e)
	{
		numericUpDown4->Maximum = numericUpDown3->Value;
	}
	// inf. to max
	private: System::Void button2_Click (System::Object^  sender, System::EventArgs^  e)
	{
		numericUpDown2->Value = 2147483647;
	}
	// clear console
	private: System::Void button6_Click (System::Object^  sender, System::EventArgs^  e)
	{
		textBox1->Clear ();
	}
	// create graphic
	private: System::Void button1_Click (System::Object^  sender, System::EventArgs^  e)
	{
		// Clear varible
		if (graphic)
		{
			for (i = 0; i < countV; i++)
				delete[] graphic[i];
			delete[] graphic;
		}

		// Change tabControl index
		if (checkBox1->Checked)
			tabControl1->SelectedIndex = 1;

		// Varibale initalize
		countV = System::Convert::ToInt32 (numericUpDown3->Value);
		rangeW = System::Convert::ToInt32 (numericUpDown1->Value);
		infinity = System::Convert::ToInt32 (numericUpDown2->Value);

		// Initialize graphic
		graphic = new int*[countV];
		for (i = 0; i < countV; i++)
			graphic[i] = new int[countV];

		// Create graphic
		Random r;
		for (i = 0; i < countV; i++)
			for (j = 0; j < countV; j++)
				if (i == j)
					graphic[i][i] = infinity;
				else
				{
					int rand = 1 + r.Next () % rangeW;
					graphic[i][j] = rand > infinity ? infinity : rand;
					if (!checkBox4->Checked)
						graphic[j][i] = graphic[i][j];
				}
		// Show Graphic
		if (checkBox1->Checked)
		{
			// Graphic DataGridView initalize
			dataGridView1->RowCount = countV;
			dataGridView1->ColumnCount = countV;
			for (i = 0; i < countV; i++)
			{
				dataGridView1->Rows[i]->Height = BLOCK_SIZE;
				dataGridView1->Columns[i]->Width = BLOCK_SIZE;
			}
			dataGridView1->ClearSelection ();
			// Show on DataGridView
			for (i = 0; i < countV; i++)
				for (j = 0; j < countV; j++)
					if (graphic[i][j] == infinity)
						dataGridView1->Rows[i]->Cells[j]->Value = "∞";
					else
						dataGridView1->Rows[i]->Cells[j]->Value = graphic[i][j];
		}
		textBox1->AppendText ("圖生成完成\r\n\r\n");
	}
	// find shortest path (one to all)
	private: System::Void button3_Click (System::Object^  sender, System::EventArgs^  e)
	{
		tabControl1->SelectedIndex = 0;
		if (graphic)
		{
			//define
			int start = System::Convert::ToInt32 (numericUpDown4->Value);
			int *distance = new int[countV];
			int *select = new int[countV];
			//save path variable
			if (checkBox2->Checked)
			{
				if (save1)
					delete[] save1;
				save1 = new std::stack<int>[countV];
			}

			//initialize
			for (i = 0; i < countV; i++)
			{
				distance[i] = graphic[start][i];
				select[i] = true;
			}
			distance[start] = 0;
			select[start] = false;

			//process
			for (j = 0; j < countV; j++)
			{
				//find min edge
				int min, min_wight = infinity;
				for (i = 0; i < countV; i++)
					if (select[i] && distance[i] < min_wight)
					{
						min = i;
						min_wight = distance[i];
					}

				// no answer
				if (min_wight == infinity)
					break;

				//add next point
				for (i = 0; i < countV; i++)
				{
					// path (direct)
					int a_path = distance[i];
					// path (to min-point and trans. to target)
					int b_path = 0;
					if (distance[min] < infinity && graphic[min][i] < infinity)
						b_path = distance[min] + graphic[min][i];
					else
						b_path = infinity;
					// get min
					if (b_path < a_path)
					{
						distance[i] = b_path;
						//save1 path (mid.)
						if (checkBox2->Checked)
							save1[i].push (min);
					}
					else
						distance[i] = a_path;
				}
				select[min] = false;
			}

			//output answer
			textBox1->AppendText ("最短路徑……\r\n");
			for (i = 0; i < countV; i++)
				if (start != i)
				{
					//output result(weight)
					textBox1->AppendText ("由" + start + "到" + i + "需要：");
					if (distance[i] == infinity)
						textBox1->AppendText ("∞\r\n");
					else
					{
						textBox1->AppendText (distance[i] + "\r\n");
						//output path(for all)
						if (checkBox2->Checked)
						{
							//from start
							textBox1->AppendText ("（" + start + "->");
							while (!save1[i].empty ())
							{
								textBox1->AppendText (save1[i].top () + "->");
								save1[i].pop ();
							}
							//to end
							textBox1->AppendText (i + "）\r\n\r\n");
						}
					}
				}
			textBox1->AppendText ("\r\n");
		}
		else
			textBox1->AppendText ("尚未生成圖，請重新生成後再試\r\n\r\n");
	}
	// find shortest path (all to all)
	private: System::Void button4_Click (System::Object^  sender, System::EventArgs^  e)
	{
		tabControl1->SelectedIndex = 0;
		if (graphic)
		{
			//define
			int **distance = new int*[countV];
			//save path variable
			if (checkBox3->Checked)
			{
				if (save2)
					for (i = 0; i < countV; i++)
						delete[] save2[i];
				save2 = new std::stack<int>* [countV];
				for (i = 0; i < countV; i++)
					save2[i] = new std::stack<int>[countV];
			}
			//initialize
			for (i = 0; i < countV; i++)
				distance[i] = new int[countV];
			//copy graphic to distance
			for (i = 0; i < countV; i++)
				for (j = 0; j < countV; j++)
					distance[i][j] = graphic[i][j];
			//process
			for (int k = 0; k < countV; k++)
				for (i = 0; i < countV; i++)
					for (j = 0; j < countV; j++)
					{
						// i to j (driect)
						int a_path = distance[i][j];
						// i to k, k to j
						int b_path = 0;
						if (distance[i][k] < infinity && distance[k][j] < infinity)
							b_path = distance[i][k] + distance[k][j];
						else
							b_path = infinity;
						// get min
						if (b_path < a_path)
						{
							distance[i][j] = b_path;
							if (checkBox3->Checked)
								save2[i][j].push (k);
						}
						else
							distance[i][j] = a_path;
					}
			//output answer
			textBox1->AppendText ("最短路徑配對……\r\n");
			for (i = 0; i < countV; i++)
				for (j = 0; j < countV; j++)
					if(i != j)
					{
						//output result(weight)
						textBox1->AppendText ("由" + i + "到" + j + "需要：");
						if (distance[i][j] == infinity)
							textBox1->AppendText ("∞\r\n");
						else
						{
							textBox1->AppendText (distance[i][j] + "\r\n");
							//output path(for all)
							if (checkBox3->Checked)
							{
								//from start
								textBox1->AppendText ("（" + i + "->");
								while (!save2[i][j].empty ())
								{
									textBox1->AppendText (save2[i][j].top () + "->");
									save2[i][j].pop ();
								}
								//to end
								textBox1->AppendText (j + "）\r\n\r\n");
							}
						}
					}
			textBox1->AppendText ("\r\n");
		}
		else
			textBox1->AppendText ("尚未生成圖，請重新生成後再試\r\n\r\n");
	}
	// find tar. clo.
	private: System::Void button5_Click (System::Object^  sender, System::EventArgs^  e)
	{
		tabControl1->SelectedIndex = 2;
		if (graphic)
		{
			//define
			bool **connect = new bool*[countV];
			//initialize
			for (i = 0; i < countV; i++)
				connect[i] = new bool[countV];
			//copy graphic to distance
			for (i = 0; i < countV; i++)
				for (j = 0; j < countV; j++)
					connect[i][j] = havePath(graphic[i][j]);
			//process
			for (int k = 0; k < countV; k++)
				for (i = 0; i < countV; i++)
					for (j = 0; j < countV; j++)
					{
						int a_path = connect[i][j];
						int b_path = connect[i][k] && connect[k][j];
						connect[i][j] = a_path || b_path;
					}
			//output answer
			dataGridView2->RowCount = countV;
			dataGridView2->ColumnCount = countV;
			for (i = 0; i < countV; i++)
			{
				dataGridView2->Rows[i]->Height = BLOCK_SIZE;
				dataGridView2->Columns[i]->Width = BLOCK_SIZE;
			}
			dataGridView2->ClearSelection ();
			// Show on DataGridView
			for (i = 0; i < countV; i++)
				for (j = 0; j < countV; j++)
					dataGridView2->Rows[i]->Cells[j]->Value = connect[i][j] ? "O" : "X";
			textBox1->AppendText ("完成遞移封閉問題……\r\n");
		}
		else
			textBox1->AppendText ("尚未生成圖，請重新生成後再試\r\n\r\n");
	}
};
}
