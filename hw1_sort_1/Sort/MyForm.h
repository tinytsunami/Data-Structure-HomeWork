#pragma once
#include <ctime>
#include <cmath>
#include <fstream>
#include "Algorithms.h"

//any is global...(lazy...)
int upBound, underBound;
int count;
int originData[110000];
int tmpData[110000];
int *sortData;
int stepNum = 1;
int addNum = 0;
bool showData = false;
bool checkSorted = true;
bool drawChart = true;

namespace CppWinForm1
{

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
		MyForm (void)
		{
			InitializeComponent ();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm ()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button_sort;
			 System::Windows::Forms::TabControl^  tabControl;
			 System::Windows::Forms::Button^  button_getData;
			 System::Windows::Forms::Label^  label_count;
			 System::Windows::Forms::DataVisualization::Charting::Chart^  chart;
			 System::Windows::Forms::Label^  label2;
			 System::Windows::Forms::Label^  label3;
			 System::Windows::Forms::Label^  label4;
			 System::Windows::Forms::NumericUpDown^  numericUpDown_upBound;
			 System::Windows::Forms::NumericUpDown^  numericUpDown_count;
			 System::Windows::Forms::NumericUpDown^  numericUpDown_underBound;
			 System::Windows::Forms::TabPage^  tabPage1;
			 System::Windows::Forms::Label^  label1;
			 System::Windows::Forms::TextBox^  console;
			 System::Windows::Forms::TabPage^  tabPage_originData;
			 System::Windows::Forms::Label^  label6;
			 System::Windows::Forms::Label^  label5;
			 System::Windows::Forms::TextBox^  sortData_textBox;
			 System::Windows::Forms::TextBox^  originData_textBox;
			 System::Windows::Forms::CheckedListBox^  algorithmBox;
			 System::Windows::Forms::Button^  button1;
			 System::Windows::Forms::Button^  button2;
			 System::Windows::Forms::TabPage^  tabPage2;
			 System::Windows::Forms::Label^  label24;
			 System::Windows::Forms::Label^  label25;
			 System::Windows::Forms::Label^  label22;
			 System::Windows::Forms::Label^  label21;
			 System::Windows::Forms::Label^  label20;
			 System::Windows::Forms::Label^  label19;
			 System::Windows::Forms::Label^  label18;
			 System::Windows::Forms::Label^  label17;
			 System::Windows::Forms::Label^  label16;
			 System::Windows::Forms::Label^  label15;
			 System::Windows::Forms::Label^  label14;
			 System::Windows::Forms::Label^  label13;
			 System::Windows::Forms::Label^  label12;
			 System::Windows::Forms::Label^  label11;
			 System::Windows::Forms::Label^  label10;
			 System::Windows::Forms::Label^  label9;
			 System::Windows::Forms::Label^  label7;
			 System::Windows::Forms::Label^  label8;
			 System::Windows::Forms::LinkLabel^  linkLabel1;
			 System::Windows::Forms::Button^  button3;
			 System::Windows::Forms::Button^  button5;
			 System::Windows::Forms::Button^  button4;
			 System::Windows::Forms::CheckBox^  checkBox1;
			 System::Windows::Forms::CheckBox^  checkSortedBox;
			 System::Windows::Forms::CheckBox^  checkBox3;

			 System::Windows::Forms::NumericUpDown^  stepBox;
			 System::Windows::Forms::NumericUpDown^  addBox;
			 System::Windows::Forms::Label^  label26;
			 System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::NumericUpDown^  searchDataBox;


	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
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
		void InitializeComponent (void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea ());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend ());
			System::Windows::Forms::DataVisualization::Charting::Title^  title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title ());
			this->button_sort = (gcnew System::Windows::Forms::Button ());
			this->tabControl = (gcnew System::Windows::Forms::TabControl ());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage ());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox ());
			this->button4 = (gcnew System::Windows::Forms::Button ());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox ());
			this->checkSortedBox = (gcnew System::Windows::Forms::CheckBox ());
			this->label1 = (gcnew System::Windows::Forms::Label ());
			this->algorithmBox = (gcnew System::Windows::Forms::CheckedListBox ());
			this->console = (gcnew System::Windows::Forms::TextBox ());
			this->tabPage_originData = (gcnew System::Windows::Forms::TabPage ());
			this->label6 = (gcnew System::Windows::Forms::Label ());
			this->label5 = (gcnew System::Windows::Forms::Label ());
			this->sortData_textBox = (gcnew System::Windows::Forms::TextBox ());
			this->originData_textBox = (gcnew System::Windows::Forms::TextBox ());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage ());
			this->button8 = (gcnew System::Windows::Forms::Button ());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox ());
			this->searchDataBox = (gcnew System::Windows::Forms::NumericUpDown ());
			this->label23 = (gcnew System::Windows::Forms::Label ());
			this->button7 = (gcnew System::Windows::Forms::Button ());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage ());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel ());
			this->label24 = (gcnew System::Windows::Forms::Label ());
			this->label25 = (gcnew System::Windows::Forms::Label ());
			this->label22 = (gcnew System::Windows::Forms::Label ());
			this->label21 = (gcnew System::Windows::Forms::Label ());
			this->label20 = (gcnew System::Windows::Forms::Label ());
			this->label19 = (gcnew System::Windows::Forms::Label ());
			this->label18 = (gcnew System::Windows::Forms::Label ());
			this->label17 = (gcnew System::Windows::Forms::Label ());
			this->label16 = (gcnew System::Windows::Forms::Label ());
			this->label15 = (gcnew System::Windows::Forms::Label ());
			this->label14 = (gcnew System::Windows::Forms::Label ());
			this->label13 = (gcnew System::Windows::Forms::Label ());
			this->label12 = (gcnew System::Windows::Forms::Label ());
			this->label11 = (gcnew System::Windows::Forms::Label ());
			this->label10 = (gcnew System::Windows::Forms::Label ());
			this->label9 = (gcnew System::Windows::Forms::Label ());
			this->label7 = (gcnew System::Windows::Forms::Label ());
			this->label8 = (gcnew System::Windows::Forms::Label ());
			this->stepBox = (gcnew System::Windows::Forms::NumericUpDown ());
			this->addBox = (gcnew System::Windows::Forms::NumericUpDown ());
			this->label26 = (gcnew System::Windows::Forms::Label ());
			this->label28 = (gcnew System::Windows::Forms::Label ());
			this->button_getData = (gcnew System::Windows::Forms::Button ());
			this->label_count = (gcnew System::Windows::Forms::Label ());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart ());
			this->label2 = (gcnew System::Windows::Forms::Label ());
			this->label3 = (gcnew System::Windows::Forms::Label ());
			this->label4 = (gcnew System::Windows::Forms::Label ());
			this->numericUpDown_upBound = (gcnew System::Windows::Forms::NumericUpDown ());
			this->numericUpDown_count = (gcnew System::Windows::Forms::NumericUpDown ());
			this->numericUpDown_underBound = (gcnew System::Windows::Forms::NumericUpDown ());
			this->button1 = (gcnew System::Windows::Forms::Button ());
			this->button2 = (gcnew System::Windows::Forms::Button ());
			this->button3 = (gcnew System::Windows::Forms::Button ());
			this->button5 = (gcnew System::Windows::Forms::Button ());
			this->tabControl->SuspendLayout ();
			this->tabPage1->SuspendLayout ();
			this->tabPage_originData->SuspendLayout ();
			this->tabPage3->SuspendLayout ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->searchDataBox))->BeginInit ();
			this->tabPage2->SuspendLayout ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stepBox))->BeginInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addBox))->BeginInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_upBound))->BeginInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_count))->BeginInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_underBound))->BeginInit ();
			this->SuspendLayout ();
			// 
			// button_sort
			// 
			this->button_sort->Location = System::Drawing::Point (182, 212);
			this->button_sort->Name = L"button_sort";
			this->button_sort->Size = System::Drawing::Size (177, 23);
			this->button_sort->TabIndex = 0;
			this->button_sort->Text = L"Sort";
			this->button_sort->Click += gcnew System::EventHandler (this, &MyForm::button_sort_Click);
			// 
			// tabControl
			// 
			this->tabControl->Controls->Add (this->tabPage1);
			this->tabControl->Controls->Add (this->tabPage_originData);
			this->tabControl->Controls->Add (this->tabPage3);
			this->tabControl->Controls->Add (this->tabPage2);
			this->tabControl->Location = System::Drawing::Point (12, 137);
			this->tabControl->Name = L"tabControl";
			this->tabControl->SelectedIndex = 0;
			this->tabControl->Size = System::Drawing::Size (373, 267);
			this->tabControl->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add (this->checkBox3);
			this->tabPage1->Controls->Add (this->button4);
			this->tabPage1->Controls->Add (this->checkBox1);
			this->tabPage1->Controls->Add (this->checkSortedBox);
			this->tabPage1->Controls->Add (this->label1);
			this->tabPage1->Controls->Add (this->algorithmBox);
			this->tabPage1->Controls->Add (this->console);
			this->tabPage1->Controls->Add (this->button_sort);
			this->tabPage1->Location = System::Drawing::Point (4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding (3);
			this->tabPage1->Size = System::Drawing::Size (365, 241);
			this->tabPage1->TabIndex = 2;
			this->tabPage1->Text = L"Console";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Location = System::Drawing::Point (185, 146);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size (78, 16);
			this->checkBox3->TabIndex = 34;
			this->checkBox3->Text = L"Draw Chart";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler (this, &MyForm::checkBox3_CheckedChanged);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point (6, 212);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size (170, 23);
			this->button4->TabIndex = 24;
			this->button4->Text = L"Clear";
			this->button4->Click += gcnew System::EventHandler (this, &MyForm::button4_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point (185, 168);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size (177, 16);
			this->checkBox1->TabIndex = 22;
			this->checkBox1->Text = L"Dont show output (and generate)";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler (this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkSortedBox
			// 
			this->checkSortedBox->AutoSize = true;
			this->checkSortedBox->Checked = true;
			this->checkSortedBox->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkSortedBox->Location = System::Drawing::Point (185, 190);
			this->checkSortedBox->Name = L"checkSortedBox";
			this->checkSortedBox->Size = System::Drawing::Size (146, 16);
			this->checkSortedBox->TabIndex = 18;
			this->checkSortedBox->Text = L"Check Sorted (last of sort)";
			this->checkSortedBox->UseVisualStyleBackColor = true;
			this->checkSortedBox->CheckedChanged += gcnew System::EventHandler (this, &MyForm::ProgressiveCheck_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point (182, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size (74, 17);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Algorithms";
			// 
			// algorithmBox
			// 
			this->algorithmBox->CheckOnClick = true;
			this->algorithmBox->FormattingEnabled = true;
			this->algorithmBox->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->algorithmBox->Items->AddRange (gcnew cli::array< System::Object^  > (17)
			{
				L"Bubble sort", L"Selection sort", L"Insertion sort",
					L"Cocktail sort", L"Bucket sort", L"Counting sort", L"Merge sort", L"Binary search tree", L"Comb sort", L"Radix sort", L"Gnome sort",
					L"Odd-even sort", L"Shell sort", L"Quick sort", L"Heap sort", L"Stooge sort (Inefficient)", L"Bogo sort (Unstable)"
			});
			this->algorithmBox->Location = System::Drawing::Point (182, 27);
			this->algorithmBox->Name = L"algorithmBox";
			this->algorithmBox->Size = System::Drawing::Size (177, 106);
			this->algorithmBox->TabIndex = 20;
			// 
			// console
			// 
			this->console->Location = System::Drawing::Point (6, 6);
			this->console->Multiline = true;
			this->console->Name = L"console";
			this->console->ReadOnly = true;
			this->console->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->console->Size = System::Drawing::Size (170, 200);
			this->console->TabIndex = 19;
			// 
			// tabPage_originData
			// 
			this->tabPage_originData->Controls->Add (this->label6);
			this->tabPage_originData->Controls->Add (this->label5);
			this->tabPage_originData->Controls->Add (this->sortData_textBox);
			this->tabPage_originData->Controls->Add (this->originData_textBox);
			this->tabPage_originData->Location = System::Drawing::Point (4, 22);
			this->tabPage_originData->Name = L"tabPage_originData";
			this->tabPage_originData->Padding = System::Windows::Forms::Padding (3);
			this->tabPage_originData->Size = System::Drawing::Size (365, 241);
			this->tabPage_originData->TabIndex = 0;
			this->tabPage_originData->Text = L"Data";
			this->tabPage_originData->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10));
			this->label6->Location = System::Drawing::Point (183, 11);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size (84, 17);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Sorted Data";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10));
			this->label5->Location = System::Drawing::Point (6, 11);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size (80, 17);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Origin Data";
			// 
			// sortData_textBox
			// 
			this->sortData_textBox->Location = System::Drawing::Point (187, 32);
			this->sortData_textBox->Multiline = true;
			this->sortData_textBox->Name = L"sortData_textBox";
			this->sortData_textBox->ReadOnly = true;
			this->sortData_textBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->sortData_textBox->Size = System::Drawing::Size (172, 203);
			this->sortData_textBox->TabIndex = 8;
			// 
			// originData_textBox
			// 
			this->originData_textBox->Location = System::Drawing::Point (6, 32);
			this->originData_textBox->Multiline = true;
			this->originData_textBox->Name = L"originData_textBox";
			this->originData_textBox->ReadOnly = true;
			this->originData_textBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->originData_textBox->Size = System::Drawing::Size (172, 203);
			this->originData_textBox->TabIndex = 7;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add (this->button8);
			this->tabPage3->Controls->Add (this->textBox1);
			this->tabPage3->Controls->Add (this->searchDataBox);
			this->tabPage3->Controls->Add (this->label23);
			this->tabPage3->Controls->Add (this->button7);
			this->tabPage3->Location = System::Drawing::Point (4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding (3);
			this->tabPage3->Size = System::Drawing::Size (365, 241);
			this->tabPage3->TabIndex = 4;
			this->tabPage3->Text = L"Search";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point (24, 146);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size (108, 23);
			this->button8->TabIndex = 35;
			this->button8->Text = L"Clear";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler (this, &MyForm::button8_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point (161, 23);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size (181, 195);
			this->textBox1->TabIndex = 34;
			// 
			// searchDataBox
			// 
			this->searchDataBox->Location = System::Drawing::Point (24, 89);
			this->searchDataBox->Maximum = System::Decimal (gcnew cli::array< System::Int32 > (4) { 65536, 0, 0, 0 });
			this->searchDataBox->Name = L"searchDataBox";
			this->searchDataBox->Size = System::Drawing::Size (108, 22);
			this->searchDataBox->TabIndex = 33;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(136)));
			this->label23->Location = System::Drawing::Point (20, 65);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size (118, 20);
			this->label23->TabIndex = 1;
			this->label23->Text = L"Binary search";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point (24, 117);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size (108, 23);
			this->button7->TabIndex = 0;
			this->button7->Text = L"Search";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler (this, &MyForm::button7_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add (this->linkLabel1);
			this->tabPage2->Controls->Add (this->label24);
			this->tabPage2->Controls->Add (this->label25);
			this->tabPage2->Controls->Add (this->label22);
			this->tabPage2->Controls->Add (this->label21);
			this->tabPage2->Controls->Add (this->label20);
			this->tabPage2->Controls->Add (this->label19);
			this->tabPage2->Controls->Add (this->label18);
			this->tabPage2->Controls->Add (this->label17);
			this->tabPage2->Controls->Add (this->label16);
			this->tabPage2->Controls->Add (this->label15);
			this->tabPage2->Controls->Add (this->label14);
			this->tabPage2->Controls->Add (this->label13);
			this->tabPage2->Controls->Add (this->label12);
			this->tabPage2->Controls->Add (this->label11);
			this->tabPage2->Controls->Add (this->label10);
			this->tabPage2->Controls->Add (this->label9);
			this->tabPage2->Controls->Add (this->label7);
			this->tabPage2->Controls->Add (this->label8);
			this->tabPage2->Location = System::Drawing::Point (4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding (3);
			this->tabPage2->Size = System::Drawing::Size (365, 241);
			this->tabPage2->TabIndex = 3;
			this->tabPage2->Text = L"About";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																   static_cast<System::Byte>(136)));
			this->linkLabel1->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->linkLabel1->Location = System::Drawing::Point (115, 122);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size (182, 16);
			this->linkLabel1->TabIndex = 20;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"https://github.com/tinytsunami";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler (this, &MyForm::linkLabel1_LinkClicked);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(136)));
			this->label24->Location = System::Drawing::Point (115, 105);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size (31, 16);
			this->label24->TabIndex = 19;
			this->label24->Text = L"MIT";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(136)));
			this->label25->Location = System::Drawing::Point (30, 105);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size (58, 16);
			this->label25->TabIndex = 18;
			this->label25->Text = L"License.";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(136)));
			this->label22->Location = System::Drawing::Point (30, 122);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size (49, 16);
			this->label22->TabIndex = 16;
			this->label22->Text = L"Github.";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(136)));
			this->label21->Location = System::Drawing::Point (115, 88);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size (32, 16);
			this->label21->TabIndex = 15;
			this->label21->Text = L"v1.0";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(136)));
			this->label20->Location = System::Drawing::Point (30, 88);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size (57, 16);
			this->label20->TabIndex = 14;
			this->label20->Text = L"Version.";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10));
			this->label19->Location = System::Drawing::Point (114, 170);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size (120, 17);
			this->label19->TabIndex = 13;
			this->label19->Text = L"資料結構與演算法";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
																System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->label18->Location = System::Drawing::Point (20, 149);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size (116, 20);
			this->label18->TabIndex = 12;
			this->label18->Text = L" About Class ";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
																System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->label17->Location = System::Drawing::Point (20, 16);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size (139, 20);
			this->label17->TabIndex = 11;
			this->label17->Text = L" About Program ";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(136)));
			this->label16->Location = System::Drawing::Point (115, 71);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size (146, 16);
			this->label16->TabIndex = 10;
			this->label16->Text = L"z27619273@gmail.com";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(136)));
			this->label15->Location = System::Drawing::Point (30, 71);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size (49, 16);
			this->label15->TabIndex = 9;
			this->label15->Text = L"E-mail.";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(136)));
			this->label14->Location = System::Drawing::Point (115, 54);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size (64, 16);
			this->label14->TabIndex = 8;
			this->label14->Text = L"04360783";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(136)));
			this->label13->Location = System::Drawing::Point (30, 54);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size (72, 16);
			this->label13->TabIndex = 7;
			this->label13->Text = L"Student ID.";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10));
			this->label12->Location = System::Drawing::Point (114, 188);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size (205, 17);
			this->label12->TabIndex = 6;
			this->label12->Text = L"Data Structures and Algorithms";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10));
			this->label11->Location = System::Drawing::Point (29, 170);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size (46, 17);
			this->label11->TabIndex = 5;
			this->label11->Text = L"Class.";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10));
			this->label10->Location = System::Drawing::Point (114, 206);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size (50, 17);
			this->label10->TabIndex = 4;
			this->label10->Text = L"徐熊健";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(136)));
			this->label9->Location = System::Drawing::Point (115, 37);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size (108, 16);
			this->label9->TabIndex = 3;
			this->label9->Text = L"沈郁翔 Yang-Yu";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10));
			this->label7->Location = System::Drawing::Point (29, 206);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size (65, 17);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Teacher.";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(136)));
			this->label8->Location = System::Drawing::Point (30, 37);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size (49, 16);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Author.";
			// 
			// stepBox
			// 
			this->stepBox->Location = System::Drawing::Point (254, 104);
			this->stepBox->Minimum = System::Decimal (gcnew cli::array< System::Int32 > (4) { 1, 0, 0, 0 });
			this->stepBox->Name = L"stepBox";
			this->stepBox->Size = System::Drawing::Size (50, 22);
			this->stepBox->TabIndex = 32;
			this->stepBox->Value = System::Decimal (gcnew cli::array< System::Int32 > (4) { 20, 0, 0, 0 });
			// 
			// addBox
			// 
			this->addBox->Location = System::Drawing::Point (177, 104);
			this->addBox->Maximum = System::Decimal (gcnew cli::array< System::Int32 > (4) { 1000, 0, 0, 0 });
			this->addBox->Name = L"addBox";
			this->addBox->Size = System::Drawing::Size (51, 22);
			this->addBox->TabIndex = 31;
			this->addBox->Value = System::Decimal (gcnew cli::array< System::Int32 > (4) { 200, 0, 0, 0 });
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9));
			this->label26->Location = System::Drawing::Point (234, 107);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size (13, 15);
			this->label26->TabIndex = 30;
			this->label26->Text = L"x";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(136)));
			this->label28->Location = System::Drawing::Point (154, 107);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size (14, 15);
			this->label28->TabIndex = 29;
			this->label28->Text = L"+";
			// 
			// button_getData
			// 
			this->button_getData->Location = System::Drawing::Point (310, 104);
			this->button_getData->Name = L"button_getData";
			this->button_getData->Size = System::Drawing::Size (70, 22);
			this->button_getData->TabIndex = 3;
			this->button_getData->Text = L"Generate";
			this->button_getData->UseVisualStyleBackColor = true;
			this->button_getData->Click += gcnew System::EventHandler (this, &MyForm::button3_Click);
			// 
			// label_count
			// 
			this->label_count->AutoSize = true;
			this->label_count->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	static_cast<System::Byte>(136)));
			this->label_count->Location = System::Drawing::Point (20, 106);
			this->label_count->Name = L"label_count";
			this->label_count->Size = System::Drawing::Size (52, 20);
			this->label_count->TabIndex = 5;
			this->label_count->Text = L"Count";
			// 
			// chart
			// 
			chartArea1->AxisX->Title = L"Count of Data";
			chartArea1->AxisY->Title = L"Time";
			chartArea1->Name = L"ChartArea1";
			this->chart->ChartAreas->Add (chartArea1);
			legend1->Name = L"Legend1";
			this->chart->Legends->Add (legend1);
			this->chart->Location = System::Drawing::Point (394, 12);
			this->chart->MaximumSize = System::Drawing::Size (538, 393);
			this->chart->MinimumSize = System::Drawing::Size (538, 393);
			this->chart->Name = L"chart";
			this->chart->Size = System::Drawing::Size (538, 393);
			this->chart->TabIndex = 6;
			this->chart->Text = L"chart1";
			title1->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
														 static_cast<System::Byte>(0)));
			title1->Name = L"Title1";
			title1->Text = L"Effectiveness Chart";
			this->chart->Titles->Add (title1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font (L"微軟正黑體", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
															   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point (7, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size (378, 26);
			this->label2->TabIndex = 9;
			this->label2->Text = L" Data Generate                                           ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point (20, 50);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size (82, 20);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Up-Bound";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(136)));
			this->label4->Location = System::Drawing::Point (20, 78);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size (105, 20);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Under-Bound";
			// 
			// numericUpDown_upBound
			// 
			this->numericUpDown_upBound->Location = System::Drawing::Point (136, 48);
			this->numericUpDown_upBound->Maximum = System::Decimal (gcnew cli::array< System::Int32 > (4) { 65536, 0, 0, 0 });
			this->numericUpDown_upBound->Name = L"numericUpDown_upBound";
			this->numericUpDown_upBound->Size = System::Drawing::Size (92, 22);
			this->numericUpDown_upBound->TabIndex = 15;
			this->numericUpDown_upBound->Value = System::Decimal (gcnew cli::array< System::Int32 > (4) { 20000, 0, 0, 0 });
			this->numericUpDown_upBound->ValueChanged += gcnew System::EventHandler (this, &MyForm::numericUpDown_upBound_ValueChanged);
			// 
			// numericUpDown_count
			// 
			this->numericUpDown_count->Location = System::Drawing::Point (82, 104);
			this->numericUpDown_count->Maximum = System::Decimal (gcnew cli::array< System::Int32 > (4) { 10000, 0, 0, 0 });
			this->numericUpDown_count->Name = L"numericUpDown_count";
			this->numericUpDown_count->Size = System::Drawing::Size (66, 22);
			this->numericUpDown_count->TabIndex = 16;
			this->numericUpDown_count->Value = System::Decimal (gcnew cli::array< System::Int32 > (4) { 2000, 0, 0, 0 });
			// 
			// numericUpDown_underBound
			// 
			this->numericUpDown_underBound->Location = System::Drawing::Point (136, 76);
			this->numericUpDown_underBound->Maximum = System::Decimal (gcnew cli::array< System::Int32 > (4) { 65536, 0, 0, 0 });
			this->numericUpDown_underBound->Name = L"numericUpDown_underBound";
			this->numericUpDown_underBound->Size = System::Drawing::Size (92, 22);
			this->numericUpDown_underBound->TabIndex = 17;
			this->numericUpDown_underBound->ValueChanged += gcnew System::EventHandler (this, &MyForm::numericUpDown_underBound_ValueChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point (234, 48);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size (70, 22);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Random";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler (this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point (310, 48);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size (70, 22);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Maximum";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler (this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point (234, 76);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size (70, 22);
			this->button3->TabIndex = 20;
			this->button3->Text = L"Best";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler (this, &MyForm::button3_Click_1);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point (310, 76);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size (70, 22);
			this->button5->TabIndex = 22;
			this->button5->Text = L"Worst";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler (this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF (6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size (944, 416);
			this->Controls->Add (this->button5);
			this->Controls->Add (this->button3);
			this->Controls->Add (this->stepBox);
			this->Controls->Add (this->button2);
			this->Controls->Add (this->addBox);
			this->Controls->Add (this->button1);
			this->Controls->Add (this->label26);
			this->Controls->Add (this->numericUpDown_underBound);
			this->Controls->Add (this->label28);
			this->Controls->Add (this->numericUpDown_count);
			this->Controls->Add (this->numericUpDown_upBound);
			this->Controls->Add (this->label4);
			this->Controls->Add (this->label3);
			this->Controls->Add (this->label2);
			this->Controls->Add (this->chart);
			this->Controls->Add (this->label_count);
			this->Controls->Add (this->button_getData);
			this->Controls->Add (this->tabControl);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size (960, 455);
			this->MinimumSize = System::Drawing::Size (960, 455);
			this->Name = L"MyForm";
			this->Text = L"Sort By Yang-Yu";
			this->tabControl->ResumeLayout (false);
			this->tabPage1->ResumeLayout (false);
			this->tabPage1->PerformLayout ();
			this->tabPage_originData->ResumeLayout (false);
			this->tabPage_originData->PerformLayout ();
			this->tabPage3->ResumeLayout (false);
			this->tabPage3->PerformLayout ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->searchDataBox))->EndInit ();
			this->tabPage2->ResumeLayout (false);
			this->tabPage2->PerformLayout ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stepBox))->EndInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addBox))->EndInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_upBound))->EndInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_count))->EndInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_underBound))->EndInit ();
			this->ResumeLayout (false);
			this->PerformLayout ();

		}
#pragma endregion
	private:
		////////////////////////////////////////////////////////////
		/* Generate												  */
		////////////////////////////////////////////////////////////
		void generateInit ()
		{
			tabControl->SelectedIndex = 0;
			console->AppendText ("Clear Origin Data...\r\n\r\n");
			originData_textBox->Text = "";
		}
		void generateConsoleMessage (System::String^ type)
		{
			console->AppendText ("[Data Generate]\r\n");
			console->AppendText ("Type: " + type + "\r\n");
			console->AppendText ("Count: " + System::Convert::ToString (count + addNum * stepNum) + "\r\n");
			console->AppendText ("Range: {x | x < " + numericUpDown_upBound->Value + ", x > " + numericUpDown_underBound->Value + "}\r\n\r\n");
		}
		void showGenerateData ()
		{
			originData_textBox->Clear ();
			if (showData == true)
			{
				int size = (count + addNum*stepNum);
				for (int i = 0; i < size; i++)
				{
					originData_textBox->AppendText (System::Convert::ToString (originData[i]));
					if (i != size - 1)
						originData_textBox->AppendText (", ");
				}
			}
			console->AppendText ("Finished.\r\n\r\n");
		}
		void generateData ()
		{
			Random rand;
			int size = (count + addNum*stepNum);
			for (int i = 0; i < size; i++)
				originData[i] = (rand.Next () % (upBound - underBound)) + underBound;
		}
		//generate normal data
		System::Void button3_Click (System::Object^  sender, System::EventArgs^  e)
		{
			this->generateInit ();
			upBound = System::Convert::ToInt32 (numericUpDown_upBound->Value);
			underBound = System::Convert::ToInt32 (numericUpDown_underBound->Value);
			count = System::Convert::ToInt32 (numericUpDown_count->Value);
			addNum = System::Convert::ToInt32 (addBox->Value);
			stepNum = System::Convert::ToInt32 (stepBox->Value);

			this->generateConsoleMessage ("Normal");
			this->generateData ();
			this->showGenerateData ();
		}
		//generate random data
		System::Void button1_Click (System::Object^  sender, System::EventArgs^  e)
		{
			Random rand;
			this->generateInit ();
			underBound = rand.Next () % 35537;
			upBound = underBound + (rand.Next () % (35537 - underBound));
			count = rand.Next () % 10000;
			addNum = rand.Next () % 1000;
			stepNum = rand.Next () % 100;

			numericUpDown_upBound->Value = upBound;
			numericUpDown_underBound->Value = underBound;
			numericUpDown_count->Value = count;
			stepBox->Value = stepNum;
			addBox->Value = addNum;

			this->generateConsoleMessage ("Random");
			this->generateData ();
			this->showGenerateData ();
		}
		//generate maximum data
		System::Void button2_Click (System::Object^  sender, System::EventArgs^  e)
		{
			this->generateInit ();
			upBound = 65536;
			underBound = 0;
			count = 10000;
			addNum = 1000;
			stepNum = 100;

			numericUpDown_upBound->Value = upBound;
			numericUpDown_underBound->Value = underBound;
			numericUpDown_count->Value = count;
			stepBox->Value = stepNum;
			addBox->Value = addNum;

			this->generateConsoleMessage ("Maximum");
			this->generateData ();
			this->showGenerateData ();
		}
		//generate best data
		System::Void button3_Click_1 (System::Object^  sender, System::EventArgs^  e)
		{
			this->generateInit ();
			upBound = System::Convert::ToInt32 (numericUpDown_upBound->Value);
			underBound = System::Convert::ToInt32 (numericUpDown_underBound->Value);
			count = System::Convert::ToInt32 (numericUpDown_count->Value);
			addNum = System::Convert::ToInt32 (addBox->Value);
			stepNum = System::Convert::ToInt32 (stepBox->Value);

			this->generateConsoleMessage ("Best");

			//process
			this->generateData ();
			sort (INSERTION_SORT, originData, (count + addNum*stepNum));
			sortData = nullptr;

			this->showGenerateData ();
		}
		//generate worth data
		System::Void button5_Click (System::Object^  sender, System::EventArgs^  e)
		{
			this->generateInit ();
			upBound = System::Convert::ToInt32 (numericUpDown_upBound->Value);
			underBound = System::Convert::ToInt32 (numericUpDown_underBound->Value);
			count = System::Convert::ToInt32 (numericUpDown_count->Value);
			addNum = System::Convert::ToInt32 (addBox->Value);
			stepNum = System::Convert::ToInt32 (stepBox->Value);

			this->generateConsoleMessage ("Worth");

			//process
			this->generateData ();
			sort (INSERTION_SORT, originData, (count + addNum*stepNum));
			for (int i = 0; i < count / 2; i++)
			{
				int &a = originData[i];
				int &b = originData[count - i - 1];
				a ^= b ^= a ^= b;
			}

			this->showGenerateData ();
		}

		////////////////////////////////////////////////////////////
		/* Other Tool											  */
		////////////////////////////////////////////////////////////
		//let up-bound > under-bound (value increase)
		System::Void numericUpDown_underBound_ValueChanged (System::Object^  sender, System::EventArgs^  e)
		{
			if (numericUpDown_upBound->Value < numericUpDown_underBound->Value)
				numericUpDown_upBound->Value = System::Convert::ToInt32 (numericUpDown_underBound->Value) + 1;
		}
		//let up-bound > under-bound (value reduce)
		System::Void numericUpDown_upBound_ValueChanged (System::Object^  sender, System::EventArgs^  e)
		{
			if (numericUpDown_upBound->Value < numericUpDown_underBound->Value)
				numericUpDown_underBound->Value = System::Convert::ToInt32 (numericUpDown_upBound->Value) - 1;
		}
		//my github link
		System::Void linkLabel1_LinkClicked (System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e)
		{
			System::Diagnostics::Process::Start ("https://github.com/tinytsunami");
		}
		//clear console
		System::Void button4_Click (System::Object^  sender, System::EventArgs^  e)
		{
			console->Clear ();
		}
		//check box control
		System::Void checkBox1_CheckedChanged (System::Object^  sender, System::EventArgs^  e)
		{
			showData = !checkBox1->Checked;
		}
		System::Void ProgressiveCheck_CheckedChanged (System::Object^  sender, System::EventArgs^  e)
		{
			checkSorted = checkSortedBox->Checked;
		}
		System::Void checkBox3_CheckedChanged (System::Object^  sender, System::EventArgs^  e)
		{
			drawChart = checkBox3->Checked;
		}
		////////////////////////////////////////////////////////////
		/* Sort Main											  */
		////////////////////////////////////////////////////////////
		System::Void button_sort_Click (System::Object^  sender, System::EventArgs^  e)
		{
			//clear screen
			this->chart->Series->Clear ();

			//Algorithoms
			for (int type = 0; type < ALGORITHMS_COUNT; type++)
				if (algorithmBox->GetItemChecked (type))
				{
					//get sort name
					String^ name = algorithmBox->Items[type]->ToString ();
					//add chart series
					if (drawChart)
						chart->Series->Add (name);
					//every step
					for (int step = 1; step <= stepNum; step++)
					{
						//get need count
						int dataCount = count + addNum * step;
						//copy a data to sorted
						for (int i = 0; i < dataCount; i++)
							tmpData[i] = originData[i];
						//show console and sort
						console->AppendText (name + " start(count:" + System::Convert::ToString (dataCount) + ")\r\n");

						clock_t start = clock ();
						sortData = sort (type, tmpData, dataCount);
						float time = (float)(clock () - start) / CLK_TCK;

						console->AppendText (name + " finish (" + time + "sec).\r\n\r\n");
						//draw
						if (drawChart == true)
						{
							this->chart->Series[name]->BorderWidth = 2;
							this->chart->Series[name]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
							this->chart->Series[name]->Points->AddXY (dataCount, time + 0.0001f);
						}
					}
				}
			//get all count of data
			int dataCount = count + addNum * stepNum;
			//have any sorted box is checked.
			if (sortData != nullptr)
			{
				//check every data
				if (checkSorted == true)
				{
					int index;
					for (index = 1; index < dataCount; index++)
					{
						if (sortData[index] < sortData[index - 1])
						{
							console->AppendText ("Check Failed, Sorted Error!\r\n\r\n");
							break;
						}
					}
					if (index == dataCount)
					{
						console->AppendText ("Check success.\r\n\r\n");
					}
				}
				//show the output
				if (showData == true)
				{
					sortData_textBox->Text = "";
					for (int i = 0; i < dataCount; i++)
					{
						sortData_textBox->AppendText (System::Convert::ToString (sortData[i]));
						if (i != dataCount - 1)
							sortData_textBox->AppendText (", ");
					}
					console->AppendText ("Show sorted data.\r\n\r\n");
				}
			}
			else
				console->AppendText ("[ERROR].\r\nAlgorithm is not checked.\r\n\r\n");
		}
		////////////////////////////////////////////////////////////
		/* Search       										  */
		////////////////////////////////////////////////////////////
		System::Void button7_Click (System::Object^  sender, System::EventArgs^  e)
		{
			int searchData = System::Convert::ToInt32 (this->searchDataBox->Value);
			//get all count of data
			int dataCount = count + addNum * stepNum;
			if (sortData != nullptr)
			{
				this->textBox1->AppendText ("Search Start!\r\n(last generate data)\r\n\r\n");
				this->textBox1->AppendText ("All count:" + System::Convert::ToString (dataCount) + "\r\n\r\n");
				this->textBox1->AppendText ("Search data:" + System::Convert::ToString (searchData) + "\r\n\r\n");

				int max = floor (log (dataCount) / log (2)) + 2;
				int start, end;
				start = 0;
				end = dataCount;
				int i;
				for (i = 0; i < max; i++)
				{
					int index = (end - start) / 2 + start;
					this->textBox1->AppendText ("Find data:" + System::Convert::ToString (sortData[index]));
					this->textBox1->AppendText (" (index:" + System::Convert::ToString (index) + ")\r\n\r\n");
					if (sortData[index] > searchData)
						end = index;
					else
						start = index;
					if (searchData == sortData[index])
					{
						this->textBox1->AppendText ("Found!\r\n");
						this->textBox1->AppendText ("data:" + System::Convert::ToString (sortData[index]));
						this->textBox1->AppendText (" (index:" + System::Convert::ToString (index) + ")\r\n\r\n");
						break;
					}
				}
				if (i == max)
				{
					this->textBox1->AppendText ("Cannot found!\r\n");
					this->textBox1->AppendText ("Data does not exist.\r\n\r\n");
				}
			}
			else
				this->textBox1->AppendText ("Search Failed: Unsorted.\r\n\r\n");
		}
		System::Void button8_Click (System::Object^  sender, System::EventArgs^  e)
		{
			this->textBox1->Clear ();
		}
	};
}
