#pragma once
#include "Algorithms.h"
int upBound, underBound;
int count;
int originData[10000];
int* sortData;

namespace CppWinForm1 {

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
	private: System::Windows::Forms::Button^  button_sort;
	protected:


	protected:

	private: System::Windows::Forms::TabControl^  tabControl;


	private: System::Windows::Forms::Button^  button_getData;
	private: System::Windows::Forms::Label^  label_count;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown_upBound;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown_count;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown_underBound;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::TextBox^  console;
	private: System::Windows::Forms::TabPage^  tabPage_originData;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  sortData_textBox;

	private: System::Windows::Forms::TextBox^  originData_textBox;


	private: System::Windows::Forms::CheckedListBox^  algorithmBox;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;

	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;




	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::Button^  button5;
    private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
    private: System::Windows::Forms::Button^  button6;
    private: System::Windows::Forms::Button^  button4;
    private: System::Windows::Forms::CheckBox^  checkBox2;
    private: System::Windows::Forms::CheckBox^  checkBox1;
    private: System::Windows::Forms::Label^  label23;
    private: System::Windows::Forms::NumericUpDown^  timeLimit;
    private: System::Windows::Forms::CheckBox^  timeLimitCheck;
    private: System::Windows::Forms::CheckBox^  ProgressiveCheck;


	protected:

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
            System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
            System::Windows::Forms::DataVisualization::Charting::Title^  title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
            this->button_sort = (gcnew System::Windows::Forms::Button());
            this->tabControl = (gcnew System::Windows::Forms::TabControl());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->algorithmBox = (gcnew System::Windows::Forms::CheckedListBox());
            this->console = (gcnew System::Windows::Forms::TextBox());
            this->tabPage_originData = (gcnew System::Windows::Forms::TabPage());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->sortData_textBox = (gcnew System::Windows::Forms::TextBox());
            this->originData_textBox = (gcnew System::Windows::Forms::TextBox());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->button_getData = (gcnew System::Windows::Forms::Button());
            this->label_count = (gcnew System::Windows::Forms::Label());
            this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->numericUpDown_upBound = (gcnew System::Windows::Forms::NumericUpDown());
            this->numericUpDown_count = (gcnew System::Windows::Forms::NumericUpDown());
            this->numericUpDown_underBound = (gcnew System::Windows::Forms::NumericUpDown());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->ProgressiveCheck = (gcnew System::Windows::Forms::CheckBox());
            this->timeLimitCheck = (gcnew System::Windows::Forms::CheckBox());
            this->timeLimit = (gcnew System::Windows::Forms::NumericUpDown());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
            this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
            this->tabControl->SuspendLayout();
            this->tabPage1->SuspendLayout();
            this->tabPage_originData->SuspendLayout();
            this->tabPage2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_upBound))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_count))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_underBound))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->timeLimit))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
            this->SuspendLayout();
            // 
            // button_sort
            // 
            this->button_sort->Location = System::Drawing::Point(196, 212);
            this->button_sort->Name = L"button_sort";
            this->button_sort->Size = System::Drawing::Size(163, 23);
            this->button_sort->TabIndex = 0;
            this->button_sort->Text = L"Sort";
            this->button_sort->Click += gcnew System::EventHandler(this, &MyForm::button_sort_Click);
            // 
            // tabControl
            // 
            this->tabControl->Controls->Add(this->tabPage1);
            this->tabControl->Controls->Add(this->tabPage_originData);
            this->tabControl->Controls->Add(this->tabPage2);
            this->tabControl->Location = System::Drawing::Point(12, 137);
            this->tabControl->Name = L"tabControl";
            this->tabControl->SelectedIndex = 0;
            this->tabControl->Size = System::Drawing::Size(373, 267);
            this->tabControl->TabIndex = 2;
            // 
            // tabPage1
            // 
            this->tabPage1->Controls->Add(this->numericUpDown1);
            this->tabPage1->Controls->Add(this->button6);
            this->tabPage1->Controls->Add(this->button4);
            this->tabPage1->Controls->Add(this->checkBox2);
            this->tabPage1->Controls->Add(this->checkBox1);
            this->tabPage1->Controls->Add(this->label23);
            this->tabPage1->Controls->Add(this->timeLimit);
            this->tabPage1->Controls->Add(this->timeLimitCheck);
            this->tabPage1->Controls->Add(this->ProgressiveCheck);
            this->tabPage1->Controls->Add(this->label1);
            this->tabPage1->Controls->Add(this->algorithmBox);
            this->tabPage1->Controls->Add(this->console);
            this->tabPage1->Controls->Add(this->button_sort);
            this->tabPage1->Location = System::Drawing::Point(4, 22);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Padding = System::Windows::Forms::Padding(3);
            this->tabPage1->Size = System::Drawing::Size(365, 241);
            this->tabPage1->TabIndex = 2;
            this->tabPage1->Text = L"Console";
            this->tabPage1->UseVisualStyleBackColor = true;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10));
            this->label1->Location = System::Drawing::Point(196, 6);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(82, 18);
            this->label1->TabIndex = 18;
            this->label1->Text = L"Algorithms";
            // 
            // algorithmBox
            // 
            this->algorithmBox->CheckOnClick = true;
            this->algorithmBox->FormattingEnabled = true;
            this->algorithmBox->ImeMode = System::Windows::Forms::ImeMode::Off;
            this->algorithmBox->Items->AddRange(gcnew cli::array< System::Object^  >(20)
            {
                L"Bubble sort", L"Selection sort", L"Insertion sort",
                    L"Cocktail sort", L"Bucket sort", L"Counting sort", L"Merge sort", L"Binary Tree sort", L"Pigeonhole sort", L"Radix sort", L"Gnome sort",
                    L"Library sort", L"Block sort", L"Quick sort", L"Bead sort", L"Simple Pancake sort", L"Spaghetti sort", L"Stooge sort", L"Sleep sort",
                    L"Bogo sort"
            });
            this->algorithmBox->Location = System::Drawing::Point(196, 27);
            this->algorithmBox->Name = L"algorithmBox";
            this->algorithmBox->Size = System::Drawing::Size(163, 106);
            this->algorithmBox->TabIndex = 20;
            this->algorithmBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::algorithmBox_SelectedIndexChanged);
            // 
            // console
            // 
            this->console->Location = System::Drawing::Point(6, 6);
            this->console->Multiline = true;
            this->console->Name = L"console";
            this->console->ReadOnly = true;
            this->console->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->console->Size = System::Drawing::Size(184, 127);
            this->console->TabIndex = 19;
            // 
            // tabPage_originData
            // 
            this->tabPage_originData->Controls->Add(this->label6);
            this->tabPage_originData->Controls->Add(this->label5);
            this->tabPage_originData->Controls->Add(this->sortData_textBox);
            this->tabPage_originData->Controls->Add(this->originData_textBox);
            this->tabPage_originData->Location = System::Drawing::Point(4, 22);
            this->tabPage_originData->Name = L"tabPage_originData";
            this->tabPage_originData->Padding = System::Windows::Forms::Padding(3);
            this->tabPage_originData->Size = System::Drawing::Size(365, 241);
            this->tabPage_originData->TabIndex = 0;
            this->tabPage_originData->Text = L"Data";
            this->tabPage_originData->UseVisualStyleBackColor = true;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10));
            this->label6->Location = System::Drawing::Point(183, 11);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(88, 18);
            this->label6->TabIndex = 19;
            this->label6->Text = L"Sorted Data";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10));
            this->label5->Location = System::Drawing::Point(6, 11);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(86, 18);
            this->label5->TabIndex = 18;
            this->label5->Text = L"Origin Data";
            // 
            // sortData_textBox
            // 
            this->sortData_textBox->Location = System::Drawing::Point(187, 32);
            this->sortData_textBox->Multiline = true;
            this->sortData_textBox->Name = L"sortData_textBox";
            this->sortData_textBox->ReadOnly = true;
            this->sortData_textBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->sortData_textBox->Size = System::Drawing::Size(172, 203);
            this->sortData_textBox->TabIndex = 8;
            // 
            // originData_textBox
            // 
            this->originData_textBox->Location = System::Drawing::Point(6, 32);
            this->originData_textBox->Multiline = true;
            this->originData_textBox->Name = L"originData_textBox";
            this->originData_textBox->ReadOnly = true;
            this->originData_textBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->originData_textBox->Size = System::Drawing::Size(172, 203);
            this->originData_textBox->TabIndex = 7;
            // 
            // tabPage2
            // 
            this->tabPage2->Controls->Add(this->linkLabel1);
            this->tabPage2->Controls->Add(this->label24);
            this->tabPage2->Controls->Add(this->label25);
            this->tabPage2->Controls->Add(this->label22);
            this->tabPage2->Controls->Add(this->label21);
            this->tabPage2->Controls->Add(this->label20);
            this->tabPage2->Controls->Add(this->label19);
            this->tabPage2->Controls->Add(this->label18);
            this->tabPage2->Controls->Add(this->label17);
            this->tabPage2->Controls->Add(this->label16);
            this->tabPage2->Controls->Add(this->label15);
            this->tabPage2->Controls->Add(this->label14);
            this->tabPage2->Controls->Add(this->label13);
            this->tabPage2->Controls->Add(this->label12);
            this->tabPage2->Controls->Add(this->label11);
            this->tabPage2->Controls->Add(this->label10);
            this->tabPage2->Controls->Add(this->label9);
            this->tabPage2->Controls->Add(this->label7);
            this->tabPage2->Controls->Add(this->label8);
            this->tabPage2->Location = System::Drawing::Point(4, 22);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(3);
            this->tabPage2->Size = System::Drawing::Size(365, 241);
            this->tabPage2->TabIndex = 3;
            this->tabPage2->Text = L"About";
            this->tabPage2->UseVisualStyleBackColor = true;
            // 
            // linkLabel1
            // 
            this->linkLabel1->AutoSize = true;
            this->linkLabel1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                                                                  static_cast<System::Byte>(136)));
            this->linkLabel1->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
            this->linkLabel1->Location = System::Drawing::Point(115, 122);
            this->linkLabel1->Name = L"linkLabel1";
            this->linkLabel1->Size = System::Drawing::Size(199, 17);
            this->linkLabel1->TabIndex = 20;
            this->linkLabel1->TabStop = true;
            this->linkLabel1->Text = L"https://github.com/tinytsunami";
            this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                                                               static_cast<System::Byte>(136)));
            this->label24->Location = System::Drawing::Point(115, 105);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(32, 17);
            this->label24->TabIndex = 19;
            this->label24->Text = L"MIT";
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                                                               static_cast<System::Byte>(136)));
            this->label25->Location = System::Drawing::Point(30, 105);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(55, 17);
            this->label25->TabIndex = 18;
            this->label25->Text = L"License.";
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                                                               static_cast<System::Byte>(136)));
            this->label22->Location = System::Drawing::Point(30, 122);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(53, 17);
            this->label22->TabIndex = 16;
            this->label22->Text = L"Github.";
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                                                               static_cast<System::Byte>(136)));
            this->label21->Location = System::Drawing::Point(115, 88);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(122, 17);
            this->label21->TabIndex = 15;
            this->label21->Text = L"v1.0（2016.9.15）";
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                                                               static_cast<System::Byte>(136)));
            this->label20->Location = System::Drawing::Point(30, 88);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(57, 17);
            this->label20->TabIndex = 14;
            this->label20->Text = L"Version.";
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10));
            this->label19->Location = System::Drawing::Point(114, 170);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(120, 18);
            this->label19->TabIndex = 13;
            this->label19->Text = L"資料結構與演算法";
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                                                               System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
            this->label18->Location = System::Drawing::Point(20, 149);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(110, 21);
            this->label18->TabIndex = 12;
            this->label18->Text = L" About Class ";
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                                                               System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
            this->label17->Location = System::Drawing::Point(20, 16);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(136, 21);
            this->label17->TabIndex = 11;
            this->label17->Text = L" About Program ";
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                                                               static_cast<System::Byte>(136)));
            this->label16->Location = System::Drawing::Point(115, 71);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(153, 17);
            this->label16->TabIndex = 10;
            this->label16->Text = L"z27619273@gmail.com";
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                                                               static_cast<System::Byte>(136)));
            this->label15->Location = System::Drawing::Point(30, 71);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(49, 17);
            this->label15->TabIndex = 9;
            this->label15->Text = L"E-mail.";
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                                                               static_cast<System::Byte>(136)));
            this->label14->Location = System::Drawing::Point(115, 54);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(72, 17);
            this->label14->TabIndex = 8;
            this->label14->Text = L"04360783";
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                                                               static_cast<System::Byte>(136)));
            this->label13->Location = System::Drawing::Point(30, 54);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(76, 17);
            this->label13->TabIndex = 7;
            this->label13->Text = L"Student ID.";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10));
            this->label12->Location = System::Drawing::Point(114, 188);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(219, 18);
            this->label12->TabIndex = 6;
            this->label12->Text = L"Data Structures and Algorithms";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10));
            this->label11->Location = System::Drawing::Point(29, 170);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(44, 18);
            this->label11->TabIndex = 5;
            this->label11->Text = L"Class.";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10));
            this->label10->Location = System::Drawing::Point(114, 206);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(50, 18);
            this->label10->TabIndex = 4;
            this->label10->Text = L"徐熊健";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                                                              static_cast<System::Byte>(136)));
            this->label9->Location = System::Drawing::Point(115, 37);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(126, 17);
            this->label9->TabIndex = 3;
            this->label9->Text = L"沈郁翔（Yang-Yu）";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10));
            this->label7->Location = System::Drawing::Point(29, 206);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(64, 18);
            this->label7->TabIndex = 2;
            this->label7->Text = L"Teacher.";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                                                              static_cast<System::Byte>(136)));
            this->label8->Location = System::Drawing::Point(30, 37);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(54, 17);
            this->label8->TabIndex = 1;
            this->label8->Text = L"Author.";
            // 
            // button_getData
            // 
            this->button_getData->Location = System::Drawing::Point(234, 104);
            this->button_getData->Name = L"button_getData";
            this->button_getData->Size = System::Drawing::Size(146, 22);
            this->button_getData->TabIndex = 3;
            this->button_getData->Text = L"Generate";
            this->button_getData->UseVisualStyleBackColor = true;
            this->button_getData->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // label_count
            // 
            this->label_count->AutoSize = true;
            this->label_count->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                                                                   static_cast<System::Byte>(136)));
            this->label_count->Location = System::Drawing::Point(20, 106);
            this->label_count->Name = L"label_count";
            this->label_count->Size = System::Drawing::Size(96, 20);
            this->label_count->TabIndex = 5;
            this->label_count->Text = L"Data Count";
            // 
            // chart
            // 
            chartArea1->Name = L"ChartArea1";
            this->chart->ChartAreas->Add(chartArea1);
            legend1->Name = L"Legend1";
            this->chart->Legends->Add(legend1);
            this->chart->Location = System::Drawing::Point(394, 12);
            this->chart->MaximumSize = System::Drawing::Size(538, 393);
            this->chart->MinimumSize = System::Drawing::Size(538, 393);
            this->chart->Name = L"chart";
            this->chart->Size = System::Drawing::Size(538, 393);
            this->chart->TabIndex = 6;
            this->chart->Text = L"chart1";
            title1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                                                        static_cast<System::Byte>(0)));
            title1->Name = L"Title1";
            title1->Text = L"Effectiveness Chart";
            this->chart->Titles->Add(title1);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                                                              System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
            this->label2->Location = System::Drawing::Point(7, 12);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(378, 26);
            this->label2->TabIndex = 9;
            this->label2->Text = L" Data Generate                                           ";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                                                              static_cast<System::Byte>(136)));
            this->label3->Location = System::Drawing::Point(20, 50);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(88, 20);
            this->label3->TabIndex = 12;
            this->label3->Text = L"Up-Bound";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                                                              static_cast<System::Byte>(136)));
            this->label4->Location = System::Drawing::Point(20, 78);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(113, 20);
            this->label4->TabIndex = 13;
            this->label4->Text = L"Under-Bound";
            // 
            // numericUpDown_upBound
            // 
            this->numericUpDown_upBound->Location = System::Drawing::Point(136, 48);
            this->numericUpDown_upBound->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 65536, 0, 0, 0 });
            this->numericUpDown_upBound->Name = L"numericUpDown_upBound";
            this->numericUpDown_upBound->Size = System::Drawing::Size(92, 22);
            this->numericUpDown_upBound->TabIndex = 15;
            this->numericUpDown_upBound->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
            this->numericUpDown_upBound->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown_upBound_ValueChanged);
            // 
            // numericUpDown_count
            // 
            this->numericUpDown_count->Location = System::Drawing::Point(136, 104);
            this->numericUpDown_count->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
            this->numericUpDown_count->Name = L"numericUpDown_count";
            this->numericUpDown_count->Size = System::Drawing::Size(92, 22);
            this->numericUpDown_count->TabIndex = 16;
            this->numericUpDown_count->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
            // 
            // numericUpDown_underBound
            // 
            this->numericUpDown_underBound->Location = System::Drawing::Point(136, 76);
            this->numericUpDown_underBound->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 65536, 0, 0, 0 });
            this->numericUpDown_underBound->Name = L"numericUpDown_underBound";
            this->numericUpDown_underBound->Size = System::Drawing::Size(92, 22);
            this->numericUpDown_underBound->TabIndex = 17;
            this->numericUpDown_underBound->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown_underBound_ValueChanged);
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(234, 48);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(70, 22);
            this->button1->TabIndex = 18;
            this->button1->Text = L"Random";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(310, 48);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(70, 22);
            this->button2->TabIndex = 19;
            this->button2->Text = L"Maximum";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // button3
            // 
            this->button3->Location = System::Drawing::Point(234, 76);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(70, 22);
            this->button3->TabIndex = 20;
            this->button3->Text = L"Best";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
            // 
            // button5
            // 
            this->button5->Location = System::Drawing::Point(310, 76);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(70, 22);
            this->button5->TabIndex = 22;
            this->button5->Text = L"Worst";
            this->button5->UseVisualStyleBackColor = true;
            this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
            // 
            // ProgressiveCheck
            // 
            this->ProgressiveCheck->AutoSize = true;
            this->ProgressiveCheck->Location = System::Drawing::Point(199, 190);
            this->ProgressiveCheck->Name = L"ProgressiveCheck";
            this->ProgressiveCheck->Size = System::Drawing::Size(87, 16);
            this->ProgressiveCheck->TabIndex = 18;
            this->ProgressiveCheck->Text = L"Check Sorted";
            this->ProgressiveCheck->UseVisualStyleBackColor = true;
            // 
            // timeLimitCheck
            // 
            this->timeLimitCheck->AutoSize = true;
            this->timeLimitCheck->Location = System::Drawing::Point(199, 146);
            this->timeLimitCheck->Name = L"timeLimitCheck";
            this->timeLimitCheck->Size = System::Drawing::Size(72, 16);
            this->timeLimitCheck->TabIndex = 21;
            this->timeLimitCheck->Text = L"Time limit";
            this->timeLimitCheck->UseVisualStyleBackColor = true;
            // 
            // timeLimit
            // 
            this->timeLimit->Location = System::Drawing::Point(277, 140);
            this->timeLimit->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 36000, 0, 0, 0 });
            this->timeLimit->Name = L"timeLimit";
            this->timeLimit->Size = System::Drawing::Size(64, 22);
            this->timeLimit->TabIndex = 20;
            this->timeLimit->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 8));
            this->label23->Location = System::Drawing::Point(347, 147);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(12, 15);
            this->label23->TabIndex = 20;
            this->label23->Text = L"s";
            // 
            // checkBox1
            // 
            this->checkBox1->AutoSize = true;
            this->checkBox1->Location = System::Drawing::Point(199, 168);
            this->checkBox1->Name = L"checkBox1";
            this->checkBox1->Size = System::Drawing::Size(132, 16);
            this->checkBox1->TabIndex = 22;
            this->checkBox1->Text = L"No output (sorted data)";
            this->checkBox1->UseVisualStyleBackColor = true;
            // 
            // checkBox2
            // 
            this->checkBox2->AutoSize = true;
            this->checkBox2->Location = System::Drawing::Point(6, 168);
            this->checkBox2->Name = L"checkBox2";
            this->checkBox2->Size = System::Drawing::Size(106, 16);
            this->checkBox2->TabIndex = 23;
            this->checkBox2->Text = L"Progressive count";
            this->checkBox2->UseVisualStyleBackColor = true;
            // 
            // button4
            // 
            this->button4->Location = System::Drawing::Point(6, 139);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(90, 23);
            this->button4->TabIndex = 24;
            this->button4->Text = L"Clear";
            // 
            // button6
            // 
            this->button6->Location = System::Drawing::Point(100, 139);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(90, 23);
            this->button6->TabIndex = 25;
            this->button6->Text = L"Save";
            // 
            // numericUpDown1
            // 
            this->numericUpDown1->Location = System::Drawing::Point(25, 190);
            this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 65536, 0, 0, 0 });
            this->numericUpDown1->Name = L"numericUpDown1";
            this->numericUpDown1->Size = System::Drawing::Size(92, 22);
            this->numericUpDown1->TabIndex = 23;
            this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(944, 416);
            this->Controls->Add(this->button5);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->numericUpDown_underBound);
            this->Controls->Add(this->numericUpDown_count);
            this->Controls->Add(this->numericUpDown_upBound);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->chart);
            this->Controls->Add(this->label_count);
            this->Controls->Add(this->button_getData);
            this->Controls->Add(this->tabControl);
            this->MaximizeBox = false;
            this->MaximumSize = System::Drawing::Size(960, 455);
            this->MinimumSize = System::Drawing::Size(960, 455);
            this->Name = L"MyForm";
            this->Text = L"SORT by YANG-YU";
            this->tabControl->ResumeLayout(false);
            this->tabPage1->ResumeLayout(false);
            this->tabPage1->PerformLayout();
            this->tabPage_originData->ResumeLayout(false);
            this->tabPage_originData->PerformLayout();
            this->tabPage2->ResumeLayout(false);
            this->tabPage2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_upBound))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_count))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_underBound))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->timeLimit))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
		private:
		////////////////////////////////////////////////////////////
		/* Generate												  */
		////////////////////////////////////////////////////////////
			void generateInit()
			{
				tabControl->SelectedIndex = 0;
				console->AppendText("Clear Origin Data...\r\n\r\n");
				originData_textBox->Text = "";
			}

			void generateConsoleMessage(System::String^ type)
			{
				console->AppendText("[Data Generate]\r\n");
				console->AppendText("Type: " + type + "\r\n");
				console->AppendText("Count: " + numericUpDown_count->Value + "\r\n");
				console->AppendText("Range: {x | x < " + numericUpDown_count->Value + ", x > " + numericUpDown_underBound->Value + "}\r\n\r\n");
			}

			void showGenerateData()
			{
				for (int i = 0; i < count; i++)
				{
					originData_textBox->AppendText(System::Convert::ToString(originData[i]));
					if (i != count - 1)
						originData_textBox->AppendText(", ");
				}

				console->AppendText("Finished.\r\n\r\n");
			}

			void generateData()
			{
				Random rand;
				for (int i = 0; i < count; i++)
					originData[i] = (rand.Next() % (upBound - underBound)) + underBound;
			}

			//generate normal data
			System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
			{
				this->generateInit();
				upBound = System::Convert::ToInt32(numericUpDown_upBound->Value);
				underBound = System::Convert::ToInt32(numericUpDown_underBound->Value);
				count = System::Convert::ToInt32(numericUpDown_count->Value);

				this->generateConsoleMessage("Normal");
				this->generateData();
				this->showGenerateData();
			}
			
			//generate random data
			System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
			{
				Random rand;
				this->generateInit();
				underBound = rand.Next() % 35537;
				upBound = underBound + (rand.Next() % (35537 - underBound));
				count = rand.Next() % 10000;

				numericUpDown_upBound->Value = upBound;
				numericUpDown_underBound->Value = underBound;
				numericUpDown_count->Value = count;

				this->generateConsoleMessage("Random");
				this->generateData();
				this->showGenerateData();
			}
		
			//generate maximum data
			System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
			{
				this->generateInit();
				upBound = 65536;
				underBound = 0;
				count = 10000;

				numericUpDown_upBound->Value = upBound;
				numericUpDown_underBound->Value = underBound;
				numericUpDown_count->Value = count;

				this->generateConsoleMessage("Maximum");
				this->generateData();
				this->showGenerateData();
			}

			//generate best data
			System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e)
			{
				this->generateInit();
				upBound = System::Convert::ToInt32(numericUpDown_upBound->Value);
				underBound = System::Convert::ToInt32(numericUpDown_underBound->Value);
				count = System::Convert::ToInt32(numericUpDown_count->Value);

				this->generateConsoleMessage("Best");

				//process
				this->generateData();
				sort(BUBBLE_SORT, originData, count);
				sortData = nullptr;

				this->showGenerateData();
			}

			//generate worth data
			System::Void button5_Click(System::Object^  sender, System::EventArgs^  e)
			{
				this->generateInit();
				upBound = System::Convert::ToInt32(numericUpDown_upBound->Value);
				underBound = System::Convert::ToInt32(numericUpDown_underBound->Value);
				count = System::Convert::ToInt32(numericUpDown_count->Value);

				this->generateConsoleMessage("Worth");

				//process
				this->generateData();
				sort(BUBBLE_SORT, originData, count);
				for (int i = 0; i < count / 2; i++)
				{
					int &a = originData[i];
					int &b = originData[count - i - 1];
					a ^= b ^= a ^= b;
				}

				this->showGenerateData();
			}

		////////////////////////////////////////////////////////////
		/* Other Tool											  */
		////////////////////////////////////////////////////////////
			//Let up-bound > under-bound (value increase)
			System::Void numericUpDown_underBound_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			{
				if (numericUpDown_upBound->Value < numericUpDown_underBound->Value)
					numericUpDown_upBound->Value = System::Convert::ToInt32(numericUpDown_underBound->Value) + 1;
			}
	
			//Let up-bound > under-bound (value reduce)
			System::Void numericUpDown_upBound_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			{
				if (numericUpDown_upBound->Value < numericUpDown_underBound->Value)
					numericUpDown_underBound->Value = System::Convert::ToInt32(numericUpDown_upBound->Value) - 1;
			}

			//Show the series at chart
			System::Void algorithmBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
			{
				CheckedListBox^ checkBox = (CheckedListBox^) sender;
				int index = chart->Series->IndexOf(checkBox->Text);

				if (index >= 0)
				{
					chart->Series->RemoveAt(index);
					console->AppendText("Remove " + checkBox->Text + "\r\n\r\n");
				}
				else
				{
					chart->Series->Add(checkBox->Text);
					console->AppendText("Add " + checkBox->Text + "\r\n\r\n");
				}
			}
		
			//To my github
			System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e)
			{
				System::Diagnostics::Process::Start("https://github.com/tinytsunami");
			}

		////////////////////////////////////////////////////////////
		/* Sort Main											  */
		////////////////////////////////////////////////////////////
			System::Void button_sort_Click(System::Object^  sender, System::EventArgs^  e)
			{
				//read Algorithoms to get about "type"
				for (int type = 0; type < 20; type++)
					if (algorithmBox->GetItemChecked(type))
					{
						console->AppendText(algorithmBox->CheckedItems[type]->ToString() + " start...\r\n\r\n");
						sortData = sort(type, originData, count);
						console->AppendText(algorithmBox->CheckedItems[type]->ToString() + " finish.\r\n\r\n");
					}

				//show sorted data
				if (sortData != nullptr)
				{
					sortData_textBox->Text = "";
					for (int i = 0; i < count; i++)
					{
						sortData_textBox->AppendText(System::Convert::ToString(sortData[i]));
						if (i != count - 1)
							sortData_textBox->AppendText(", ");
					}
					console->AppendText("Show sorted data.\r\n\r\n");
				}
				else
					console->AppendText("[ERROR].\r\nAlgorithm is not checked.\r\n\r\n");

				sortData = nullptr;
			}
	};
}
