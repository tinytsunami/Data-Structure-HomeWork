#pragma once
#include "Stack.h"
#define BLOCK_WIDTH 15

namespace Maze {

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
	private: System::Windows::Forms::DataGridView^  GUIMaze;
	protected:

	protected:





	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  LoadFileMaze_LoadButton;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog;


	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::NumericUpDown^  AutoCreateMaze_HeightBox;


	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::NumericUpDown^  AutoCreateMaze_WidthBox;

	private: System::Windows::Forms::Button^  AutoCreateMaze_Button;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  LoadFileMaze_WallBox;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  LoadFileMaze_RoadBox;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  MazeStyle_TryButton;

	private: System::Windows::Forms::Button^  MazeStyle_AnswerButton;

	private: System::Windows::Forms::Button^  MazeStyle_ImportButton;

	private: System::Windows::Forms::Button^  MazeStyle_ExportButton;

	private: System::Windows::Forms::Button^  MazeStyle_RoadButton;

	private: System::Windows::Forms::Button^  MazeStyle_WallButton;

	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::TrackBar^  ResolutionMaze_Speed;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TrackBar^  AutoCreateMaze_Rate;



	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  LoadFileMaze_ExportBox;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  LoadFileMaze_ImportBox;
	private: System::Windows::Forms::ColorDialog^  colorDialog;


	private: System::Windows::Forms::Button^  ResolutionMaze_AutoButton;







	private: System::Windows::Forms::TextBox^  Console;

	private: System::Windows::Forms::Timer^  timer;
	private: System::ComponentModel::IContainer^  components;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container ());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle ());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle ());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle ());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle ());
			this->GUIMaze = (gcnew System::Windows::Forms::DataGridView ());
			this->panel1 = (gcnew System::Windows::Forms::Panel ());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox ());
			this->MazeStyle_TryButton = (gcnew System::Windows::Forms::Button ());
			this->MazeStyle_AnswerButton = (gcnew System::Windows::Forms::Button ());
			this->MazeStyle_ImportButton = (gcnew System::Windows::Forms::Button ());
			this->MazeStyle_ExportButton = (gcnew System::Windows::Forms::Button ());
			this->MazeStyle_RoadButton = (gcnew System::Windows::Forms::Button ());
			this->MazeStyle_WallButton = (gcnew System::Windows::Forms::Button ());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox ());
			this->ResolutionMaze_AutoButton = (gcnew System::Windows::Forms::Button ());
			this->ResolutionMaze_Speed = (gcnew System::Windows::Forms::TrackBar ());
			this->label9 = (gcnew System::Windows::Forms::Label ());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox ());
			this->AutoCreateMaze_Rate = (gcnew System::Windows::Forms::TrackBar ());
			this->label7 = (gcnew System::Windows::Forms::Label ());
			this->label6 = (gcnew System::Windows::Forms::Label ());
			this->AutoCreateMaze_HeightBox = (gcnew System::Windows::Forms::NumericUpDown ());
			this->label8 = (gcnew System::Windows::Forms::Label ());
			this->AutoCreateMaze_WidthBox = (gcnew System::Windows::Forms::NumericUpDown ());
			this->AutoCreateMaze_Button = (gcnew System::Windows::Forms::Button ());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox ());
			this->label4 = (gcnew System::Windows::Forms::Label ());
			this->LoadFileMaze_ExportBox = (gcnew System::Windows::Forms::TextBox ());
			this->label5 = (gcnew System::Windows::Forms::Label ());
			this->LoadFileMaze_ImportBox = (gcnew System::Windows::Forms::TextBox ());
			this->label3 = (gcnew System::Windows::Forms::Label ());
			this->LoadFileMaze_WallBox = (gcnew System::Windows::Forms::TextBox ());
			this->label2 = (gcnew System::Windows::Forms::Label ());
			this->LoadFileMaze_RoadBox = (gcnew System::Windows::Forms::TextBox ());
			this->label1 = (gcnew System::Windows::Forms::Label ());
			this->LoadFileMaze_LoadButton = (gcnew System::Windows::Forms::Button ());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl ());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage ());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage ());
			this->Console = (gcnew System::Windows::Forms::TextBox ());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog ());
			this->colorDialog = (gcnew System::Windows::Forms::ColorDialog ());
			this->timer = (gcnew System::Windows::Forms::Timer (this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GUIMaze))->BeginInit ();
			this->panel1->SuspendLayout ();
			this->groupBox4->SuspendLayout ();
			this->groupBox3->SuspendLayout ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResolutionMaze_Speed))->BeginInit ();
			this->groupBox2->SuspendLayout ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AutoCreateMaze_Rate))->BeginInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AutoCreateMaze_HeightBox))->BeginInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AutoCreateMaze_WidthBox))->BeginInit ();
			this->groupBox1->SuspendLayout ();
			this->tabControl1->SuspendLayout ();
			this->tabPage1->SuspendLayout ();
			this->tabPage2->SuspendLayout ();
			this->SuspendLayout ();
			// 
			// GUIMaze
			// 
			this->GUIMaze->AllowUserToAddRows = false;
			this->GUIMaze->AllowUserToDeleteRows = false;
			this->GUIMaze->AllowUserToResizeColumns = false;
			this->GUIMaze->AllowUserToResizeRows = false;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::Transparent;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::Transparent;
			this->GUIMaze->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle5;
			this->GUIMaze->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
																						| System::Windows::Forms::AnchorStyles::Left)
																					   | System::Windows::Forms::AnchorStyles::Right));
			this->GUIMaze->BackgroundColor = System::Drawing::SystemColors::Window;
			this->GUIMaze->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->GUIMaze->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->GUIMaze->ColumnHeadersVisible = false;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font (L"新細明體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																		 static_cast<System::Byte>(136)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::Transparent;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::Transparent;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->GUIMaze->DefaultCellStyle = dataGridViewCellStyle6;
			this->GUIMaze->EnableHeadersVisualStyles = false;
			this->GUIMaze->Location = System::Drawing::Point (6, 6);
			this->GUIMaze->MultiSelect = false;
			this->GUIMaze->Name = L"GUIMaze";
			this->GUIMaze->ReadOnly = true;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font (L"新細明體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																		 static_cast<System::Byte>(136)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::Color::Transparent;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::Color::Transparent;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->GUIMaze->RowHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->GUIMaze->RowHeadersVisible = false;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::Color::Transparent;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::Color::Transparent;
			this->GUIMaze->RowsDefaultCellStyle = dataGridViewCellStyle8;
			this->GUIMaze->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::Transparent;
			this->GUIMaze->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::Transparent;
			this->GUIMaze->RowTemplate->Height = 24;
			this->GUIMaze->RowTemplate->ReadOnly = true;
			this->GUIMaze->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->GUIMaze->ShowCellErrors = false;
			this->GUIMaze->ShowCellToolTips = false;
			this->GUIMaze->Size = System::Drawing::Size (737, 514);
			this->GUIMaze->TabIndex = 0;
			this->GUIMaze->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add (this->groupBox4);
			this->panel1->Controls->Add (this->groupBox3);
			this->panel1->Controls->Add (this->groupBox2);
			this->panel1->Controls->Add (this->groupBox1);
			this->panel1->Location = System::Drawing::Point (12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size (200, 552);
			this->panel1->TabIndex = 1;
			// 
			// groupBox4
			// 
			this->groupBox4->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->groupBox4->Controls->Add (this->MazeStyle_TryButton);
			this->groupBox4->Controls->Add (this->MazeStyle_AnswerButton);
			this->groupBox4->Controls->Add (this->MazeStyle_ImportButton);
			this->groupBox4->Controls->Add (this->MazeStyle_ExportButton);
			this->groupBox4->Controls->Add (this->MazeStyle_RoadButton);
			this->groupBox4->Controls->Add (this->MazeStyle_WallButton);
			this->groupBox4->Location = System::Drawing::Point (3, 448);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size (194, 101);
			this->groupBox4->TabIndex = 10;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"迷宮樣式";
			// 
			// MazeStyle_TryButton
			// 
			this->MazeStyle_TryButton->BackColor = System::Drawing::Color::FromArgb (static_cast<System::Int32>(static_cast<System::Byte>(45)),
																					 static_cast<System::Int32>(static_cast<System::Byte>(130)), static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->MazeStyle_TryButton->Location = System::Drawing::Point (101, 69);
			this->MazeStyle_TryButton->Name = L"MazeStyle_TryButton";
			this->MazeStyle_TryButton->Size = System::Drawing::Size (80, 23);
			this->MazeStyle_TryButton->TabIndex = 14;
			this->MazeStyle_TryButton->Text = L"嘗試路徑";
			this->MazeStyle_TryButton->UseVisualStyleBackColor = false;
			this->MazeStyle_TryButton->Click += gcnew System::EventHandler (this, &MyForm::MazeStyle_TryButton_Click);
			// 
			// MazeStyle_AnswerButton
			// 
			this->MazeStyle_AnswerButton->BackColor = System::Drawing::Color::FromArgb (static_cast<System::Int32>(static_cast<System::Byte>(15)),
																						static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->MazeStyle_AnswerButton->Location = System::Drawing::Point (15, 69);
			this->MazeStyle_AnswerButton->Name = L"MazeStyle_AnswerButton";
			this->MazeStyle_AnswerButton->Size = System::Drawing::Size (80, 23);
			this->MazeStyle_AnswerButton->TabIndex = 13;
			this->MazeStyle_AnswerButton->Text = L"最終路徑";
			this->MazeStyle_AnswerButton->UseVisualStyleBackColor = false;
			this->MazeStyle_AnswerButton->Click += gcnew System::EventHandler (this, &MyForm::MazeStyle_AnswerButton_Click);
			// 
			// MazeStyle_ImportButton
			// 
			this->MazeStyle_ImportButton->BackColor = System::Drawing::Color::FromArgb (static_cast<System::Int32>(static_cast<System::Byte>(200)),
																						static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->MazeStyle_ImportButton->Location = System::Drawing::Point (101, 45);
			this->MazeStyle_ImportButton->Name = L"MazeStyle_ImportButton";
			this->MazeStyle_ImportButton->Size = System::Drawing::Size (80, 23);
			this->MazeStyle_ImportButton->TabIndex = 12;
			this->MazeStyle_ImportButton->Text = L"入口";
			this->MazeStyle_ImportButton->UseVisualStyleBackColor = false;
			this->MazeStyle_ImportButton->Click += gcnew System::EventHandler (this, &MyForm::MazeStyle_ImportButton_Click);
			// 
			// MazeStyle_ExportButton
			// 
			this->MazeStyle_ExportButton->BackColor = System::Drawing::Color::FromArgb (static_cast<System::Int32>(static_cast<System::Byte>(255)),
																						static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->MazeStyle_ExportButton->Location = System::Drawing::Point (101, 21);
			this->MazeStyle_ExportButton->Name = L"MazeStyle_ExportButton";
			this->MazeStyle_ExportButton->Size = System::Drawing::Size (80, 23);
			this->MazeStyle_ExportButton->TabIndex = 11;
			this->MazeStyle_ExportButton->Text = L"出口";
			this->MazeStyle_ExportButton->UseVisualStyleBackColor = false;
			this->MazeStyle_ExportButton->Click += gcnew System::EventHandler (this, &MyForm::MazeStyle_ExportButton_Click);
			// 
			// MazeStyle_RoadButton
			// 
			this->MazeStyle_RoadButton->BackColor = System::Drawing::Color::White;
			this->MazeStyle_RoadButton->Location = System::Drawing::Point (15, 45);
			this->MazeStyle_RoadButton->Name = L"MazeStyle_RoadButton";
			this->MazeStyle_RoadButton->Size = System::Drawing::Size (80, 23);
			this->MazeStyle_RoadButton->TabIndex = 10;
			this->MazeStyle_RoadButton->Text = L"通路";
			this->MazeStyle_RoadButton->UseVisualStyleBackColor = false;
			this->MazeStyle_RoadButton->Click += gcnew System::EventHandler (this, &MyForm::MazeStyle_RoadButton_Click);
			// 
			// MazeStyle_WallButton
			// 
			this->MazeStyle_WallButton->BackColor = System::Drawing::Color::FromArgb (static_cast<System::Int32>(static_cast<System::Byte>(60)),
																					  static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->MazeStyle_WallButton->Location = System::Drawing::Point (15, 21);
			this->MazeStyle_WallButton->Name = L"MazeStyle_WallButton";
			this->MazeStyle_WallButton->Size = System::Drawing::Size (80, 23);
			this->MazeStyle_WallButton->TabIndex = 9;
			this->MazeStyle_WallButton->Text = L"牆壁";
			this->MazeStyle_WallButton->UseVisualStyleBackColor = false;
			this->MazeStyle_WallButton->Click += gcnew System::EventHandler (this, &MyForm::MazeStyle_WallButton_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->groupBox3->Controls->Add (this->ResolutionMaze_AutoButton);
			this->groupBox3->Controls->Add (this->ResolutionMaze_Speed);
			this->groupBox3->Controls->Add (this->label9);
			this->groupBox3->Location = System::Drawing::Point (3, 326);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size (194, 116);
			this->groupBox3->TabIndex = 9;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"破解迷宮";
			// 
			// ResolutionMaze_AutoButton
			// 
			this->ResolutionMaze_AutoButton->Location = System::Drawing::Point (101, 85);
			this->ResolutionMaze_AutoButton->Name = L"ResolutionMaze_AutoButton";
			this->ResolutionMaze_AutoButton->Size = System::Drawing::Size (80, 23);
			this->ResolutionMaze_AutoButton->TabIndex = 9;
			this->ResolutionMaze_AutoButton->Text = L"尋找出口";
			this->ResolutionMaze_AutoButton->UseVisualStyleBackColor = true;
			this->ResolutionMaze_AutoButton->Click += gcnew System::EventHandler (this, &MyForm::ResolutionMaze_AutoButton_Click);
			// 
			// ResolutionMaze_Speed
			// 
			this->ResolutionMaze_Speed->LargeChange = 1;
			this->ResolutionMaze_Speed->Location = System::Drawing::Point (15, 34);
			this->ResolutionMaze_Speed->Maximum = 100;
			this->ResolutionMaze_Speed->Minimum = 1;
			this->ResolutionMaze_Speed->Name = L"ResolutionMaze_Speed";
			this->ResolutionMaze_Speed->Size = System::Drawing::Size (166, 45);
			this->ResolutionMaze_Speed->TabIndex = 8;
			this->ResolutionMaze_Speed->TickFrequency = 10;
			this->ResolutionMaze_Speed->Value = 20;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point (13, 18);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size (53, 12);
			this->label9->TabIndex = 7;
			this->label9->Text = L"動畫速度";
			// 
			// groupBox2
			// 
			this->groupBox2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->groupBox2->Controls->Add (this->AutoCreateMaze_Rate);
			this->groupBox2->Controls->Add (this->label7);
			this->groupBox2->Controls->Add (this->label6);
			this->groupBox2->Controls->Add (this->AutoCreateMaze_HeightBox);
			this->groupBox2->Controls->Add (this->label8);
			this->groupBox2->Controls->Add (this->AutoCreateMaze_WidthBox);
			this->groupBox2->Controls->Add (this->AutoCreateMaze_Button);
			this->groupBox2->Location = System::Drawing::Point (3, 165);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size (194, 155);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"隨機產生迷宮";
			// 
			// AutoCreateMaze_Rate
			// 
			this->AutoCreateMaze_Rate->Location = System::Drawing::Point (15, 73);
			this->AutoCreateMaze_Rate->Maximum = 100;
			this->AutoCreateMaze_Rate->Minimum = 1;
			this->AutoCreateMaze_Rate->Name = L"AutoCreateMaze_Rate";
			this->AutoCreateMaze_Rate->Size = System::Drawing::Size (166, 45);
			this->AutoCreateMaze_Rate->TabIndex = 8;
			this->AutoCreateMaze_Rate->TickFrequency = 20;
			this->AutoCreateMaze_Rate->Value = 50;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point (13, 58);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size (89, 12);
			this->label7->TabIndex = 7;
			this->label7->Text = L"通路牆壁的比例";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point (99, 18);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size (53, 12);
			this->label6->TabIndex = 6;
			this->label6->Text = L"迷宮高度";
			// 
			// AutoCreateMaze_HeightBox
			// 
			this->AutoCreateMaze_HeightBox->Location = System::Drawing::Point (101, 33);
			this->AutoCreateMaze_HeightBox->Name = L"AutoCreateMaze_HeightBox";
			this->AutoCreateMaze_HeightBox->Size = System::Drawing::Size (80, 22);
			this->AutoCreateMaze_HeightBox->TabIndex = 5;
			this->AutoCreateMaze_HeightBox->Value = System::Decimal (gcnew cli::array< System::Int32 > (4) { 27, 0, 0, 0 });
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point (13, 18);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size (53, 12);
			this->label8->TabIndex = 3;
			this->label8->Text = L"迷宮寬度";
			// 
			// AutoCreateMaze_WidthBox
			// 
			this->AutoCreateMaze_WidthBox->Location = System::Drawing::Point (15, 33);
			this->AutoCreateMaze_WidthBox->Name = L"AutoCreateMaze_WidthBox";
			this->AutoCreateMaze_WidthBox->Size = System::Drawing::Size (80, 22);
			this->AutoCreateMaze_WidthBox->TabIndex = 2;
			this->AutoCreateMaze_WidthBox->Value = System::Decimal (gcnew cli::array< System::Int32 > (4) { 27, 0, 0, 0 });
			// 
			// AutoCreateMaze_Button
			// 
			this->AutoCreateMaze_Button->Location = System::Drawing::Point (101, 124);
			this->AutoCreateMaze_Button->Name = L"AutoCreateMaze_Button";
			this->AutoCreateMaze_Button->Size = System::Drawing::Size (80, 23);
			this->AutoCreateMaze_Button->TabIndex = 1;
			this->AutoCreateMaze_Button->Text = L"自動產生";
			this->AutoCreateMaze_Button->UseVisualStyleBackColor = true;
			this->AutoCreateMaze_Button->Click += gcnew System::EventHandler (this, &MyForm::AutoCreateMaze_Button_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->groupBox1->Controls->Add (this->label4);
			this->groupBox1->Controls->Add (this->LoadFileMaze_ExportBox);
			this->groupBox1->Controls->Add (this->label5);
			this->groupBox1->Controls->Add (this->LoadFileMaze_ImportBox);
			this->groupBox1->Controls->Add (this->label3);
			this->groupBox1->Controls->Add (this->LoadFileMaze_WallBox);
			this->groupBox1->Controls->Add (this->label2);
			this->groupBox1->Controls->Add (this->LoadFileMaze_RoadBox);
			this->groupBox1->Controls->Add (this->label1);
			this->groupBox1->Controls->Add (this->LoadFileMaze_LoadButton);
			this->groupBox1->Location = System::Drawing::Point (3, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size (194, 156);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"自檔案載入迷宮";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point (99, 80);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size (53, 12);
			this->label4->TabIndex = 16;
			this->label4->Text = L"出口標誌";
			// 
			// LoadFileMaze_ExportBox
			// 
			this->LoadFileMaze_ExportBox->Location = System::Drawing::Point (101, 95);
			this->LoadFileMaze_ExportBox->MaxLength = 1;
			this->LoadFileMaze_ExportBox->Name = L"LoadFileMaze_ExportBox";
			this->LoadFileMaze_ExportBox->Size = System::Drawing::Size (80, 22);
			this->LoadFileMaze_ExportBox->TabIndex = 15;
			this->LoadFileMaze_ExportBox->Text = L"E";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point (13, 80);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size (53, 12);
			this->label5->TabIndex = 14;
			this->label5->Text = L"入口標誌";
			// 
			// LoadFileMaze_ImportBox
			// 
			this->LoadFileMaze_ImportBox->Location = System::Drawing::Point (15, 95);
			this->LoadFileMaze_ImportBox->MaxLength = 1;
			this->LoadFileMaze_ImportBox->Name = L"LoadFileMaze_ImportBox";
			this->LoadFileMaze_ImportBox->Size = System::Drawing::Size (80, 22);
			this->LoadFileMaze_ImportBox->TabIndex = 13;
			this->LoadFileMaze_ImportBox->Text = L"S";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point (99, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size (53, 12);
			this->label3->TabIndex = 12;
			this->label3->Text = L"牆壁標誌";
			// 
			// LoadFileMaze_WallBox
			// 
			this->LoadFileMaze_WallBox->Location = System::Drawing::Point (101, 55);
			this->LoadFileMaze_WallBox->MaxLength = 1;
			this->LoadFileMaze_WallBox->Name = L"LoadFileMaze_WallBox";
			this->LoadFileMaze_WallBox->Size = System::Drawing::Size (80, 22);
			this->LoadFileMaze_WallBox->TabIndex = 11;
			this->LoadFileMaze_WallBox->Text = L"W";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point (13, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size (53, 12);
			this->label2->TabIndex = 10;
			this->label2->Text = L"道路標誌";
			// 
			// LoadFileMaze_RoadBox
			// 
			this->LoadFileMaze_RoadBox->Location = System::Drawing::Point (15, 55);
			this->LoadFileMaze_RoadBox->MaxLength = 1;
			this->LoadFileMaze_RoadBox->Name = L"LoadFileMaze_RoadBox";
			this->LoadFileMaze_RoadBox->Size = System::Drawing::Size (80, 22);
			this->LoadFileMaze_RoadBox->TabIndex = 9;
			this->LoadFileMaze_RoadBox->Text = L"L";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point (13, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size (77, 12);
			this->label1->TabIndex = 8;
			this->label1->Text = L"［檔案格式］";
			// 
			// LoadFileMaze_LoadButton
			// 
			this->LoadFileMaze_LoadButton->Location = System::Drawing::Point (101, 123);
			this->LoadFileMaze_LoadButton->Name = L"LoadFileMaze_LoadButton";
			this->LoadFileMaze_LoadButton->Size = System::Drawing::Size (80, 23);
			this->LoadFileMaze_LoadButton->TabIndex = 0;
			this->LoadFileMaze_LoadButton->Text = L"自檔案載入";
			this->LoadFileMaze_LoadButton->UseVisualStyleBackColor = true;
			this->LoadFileMaze_LoadButton->Click += gcnew System::EventHandler (this, &MyForm::LoadFileMaze_LoadButton_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
																							| System::Windows::Forms::AnchorStyles::Left)
																						   | System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add (this->tabPage1);
			this->tabControl1->Controls->Add (this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point (215, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size (757, 552);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add (this->GUIMaze);
			this->tabPage1->Location = System::Drawing::Point (4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding (3);
			this->tabPage1->Size = System::Drawing::Size (749, 526);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"圖型迷宮";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add (this->Console);
			this->tabPage2->Location = System::Drawing::Point (4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding (3);
			this->tabPage2->Size = System::Drawing::Size (749, 526);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"系統訊息";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// Console
			// 
			this->Console->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
																						| System::Windows::Forms::AnchorStyles::Left)
																					   | System::Windows::Forms::AnchorStyles::Right));
			this->Console->Font = (gcnew System::Drawing::Font (L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->Console->Location = System::Drawing::Point (6, 6);
			this->Console->Multiline = true;
			this->Console->Name = L"Console";
			this->Console->ReadOnly = true;
			this->Console->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->Console->Size = System::Drawing::Size (737, 524);
			this->Console->TabIndex = 0;
			// 
			// timer
			// 
			this->timer->Tick += gcnew System::EventHandler (this, &MyForm::timer_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF (6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size (984, 571);
			this->Controls->Add (this->tabControl1);
			this->Controls->Add (this->panel1);
			this->MinimumSize = System::Drawing::Size (1000, 610);
			this->Name = L"MyForm";
			this->Text = L"Maze By Yang-Yu";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GUIMaze))->EndInit ();
			this->panel1->ResumeLayout (false);
			this->groupBox4->ResumeLayout (false);
			this->groupBox3->ResumeLayout (false);
			this->groupBox3->PerformLayout ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResolutionMaze_Speed))->EndInit ();
			this->groupBox2->ResumeLayout (false);
			this->groupBox2->PerformLayout ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AutoCreateMaze_Rate))->EndInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AutoCreateMaze_HeightBox))->EndInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AutoCreateMaze_WidthBox))->EndInit ();
			this->groupBox1->ResumeLayout (false);
			this->groupBox1->PerformLayout ();
			this->tabControl1->ResumeLayout (false);
			this->tabPage1->ResumeLayout (false);
			this->tabPage2->ResumeLayout (false);
			this->tabPage2->PerformLayout ();
			this->ResumeLayout (false);

		}
#pragma endregion
	//=====================================================
	// Initialize
	//=====================================================
	private:
		bool wait = false;
		int width = 0;
		int height = 0;
		int **maze = nullptr;
		MyStack *stack = nullptr;
		int x, y, u, v;
		Dir d;
		Color wallColor;
		Color roadColor;
		Color answerColor;
		Color importColor;
		Color exportColor;
		Color tryColor;
	private: Color getColor (Color def)
	{
		if (colorDialog->ShowDialog () == System::Windows::Forms::DialogResult::OK)
			return colorDialog->Color;
		else
			return def;
	}
	private: void setDrawMaze ()
	{
		wallColor = MazeStyle_WallButton->BackColor;
		roadColor = MazeStyle_RoadButton->BackColor;
		answerColor = MazeStyle_AnswerButton->BackColor;
		importColor = MazeStyle_ImportButton->BackColor;
		exportColor = MazeStyle_ExportButton->BackColor;
		tryColor = MazeStyle_TryButton->BackColor;
		GUIMaze->RowCount = height;
		GUIMaze->ColumnCount = width;
		for (int i = 0; i < height; i++)
		{
			GUIMaze->Rows[i]->Height = BLOCK_WIDTH;
			GUIMaze->Rows[i]->ReadOnly = true;
			GUIMaze->Rows[i]->Resizable = DataGridViewTriState::False;
		}
		for (int i = 0; i < width; i++)
		{
			GUIMaze->Columns[i]->Width = BLOCK_WIDTH;
			GUIMaze->Columns[i]->ReadOnly = true;
			GUIMaze->Columns[i]->Resizable = DataGridViewTriState::False;
		}
		GUIMaze->ClearSelection ();
	}
	private: void drawMaze ()
	{
		for (int i = 0; i < width; i++)
			for (int j = 0; j < height; j++)
			{
				switch (maze[j][i])
				{
				case 0:
					GUIMaze->Rows[i]->Cells[j]->Style->BackColor = roadColor; 
					break;
				case 1:
					GUIMaze->Rows[i]->Cells[j]->Style->BackColor = wallColor;
					break;
				case 2:
					GUIMaze->Rows[i]->Cells[j]->Style->BackColor = importColor;
					break;
				case 3:
					GUIMaze->Rows[i]->Cells[j]->Style->BackColor = exportColor;
					break;
				case 4:
					GUIMaze->Rows[i]->Cells[j]->Style->BackColor = answerColor;
					break;
				case 5:
					GUIMaze->Rows[i]->Cells[j]->Style->BackColor = tryColor;
					break;
				}
			}
	}
	private: void showMessage (String^ caption, String^ message)
	{
		MessageBoxButtons buttons = MessageBoxButtons::OK;
		System::Windows::Forms::DialogResult result;
		result = MessageBox::Show (this, message, caption, buttons);
		if (result == System::Windows::Forms::DialogResult::Yes)
			this->Close ();
	}
	//=====================================================
	// Event
	//=====================================================
	private: System::Void LoadFileMaze_LoadButton_Click (System::Object^  sender, System::EventArgs^  e)
	{
		timer->Stop ();
		wait = false;
		String^ text;
		wchar_t roadStyle = System::Convert::ToChar(LoadFileMaze_RoadBox->Text);
		wchar_t wallStyle = System::Convert::ToChar (LoadFileMaze_WallBox->Text);
		wchar_t importStyle = System::Convert::ToChar (LoadFileMaze_ImportBox->Text);
		wchar_t exportStyle = System::Convert::ToChar (LoadFileMaze_ExportBox->Text);

		IO::Stream^ stream;
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;
		openFileDialog->InitialDirectory = "c:\\";
		openFileDialog->Filter = "maze files (*.maze)|*.maze";
		openFileDialog->FilterIndex = 1;
		openFileDialog->RestoreDirectory = true;
		if (openFileDialog->ShowDialog () == System::Windows::Forms::DialogResult::OK)
			if ((stream = openFileDialog->OpenFile ()) != nullptr)
			{
				if (maze != nullptr) delete maze;
				Console->AppendText ("\r\n檔案讀取成功\r\n");
				int c;
				do {
					c = stream->ReadByte ();
					text += (Char) c;
				} while (c != (-1));
				Console->AppendText ("關閉檔案讀取流\r\n\r\n");
				int x = 0, y = 0;
				int tmp = 0;
				int step = 3;
				step = 0;
				for (int i = 0; i < text->Length; i++)
				{
					if (step < 2)
					{
						if (Char::IsNumber (text, i))
							tmp = tmp * 10 + System::Convert::ToInt16 (text[i]-'0');
						else
						{
							if (step == 0)
								width = tmp;
							else
								height = tmp;
							tmp = 0;
							step++;
						}
					}
					else if (step == 2)
					{
						Console->AppendText ("迷宮寬度：" + System::Convert::ToString (width) + "\r\n");
						Console->AppendText ("迷宮長度：" + System::Convert::ToString (height) + "\r\n");
						maze = new int*[width];
						for (int j = 0; j < width; j++)
							maze[j] = new int[height];
						step++;
					}
					else
					{
						if (text[i] == roadStyle)
							maze[x][y] = 0;
						else if (text[i] == wallStyle)
							maze[x][y] = 1;
						else if (text[i] == importStyle)
							maze[x][y] = 2;
						else if (text[i] == exportStyle)
							maze[x][y] = 3;
						if (x > width)
						{
							x = 0;
							y++;
						}
						else
							x++;
					}
				}
				//output maze check
				Console->AppendText ("迷宮內容：\r\n");
				for (int j = 0; j < height; j++)
				{
					for (int i = 0; i < width; i++)
						Console->AppendText (System::Convert::ToString (maze[i][j]));
					Console->AppendText ("\r\n");
				}
				setDrawMaze ();
				drawMaze ();
				stream->Close ();
			}
	}
	private: System::Void ResolutionMaze_AutoButton_Click (System::Object^  sender, System::EventArgs^  e)
	{
		if (maze != nullptr)
		{
			//control timer
			if (wait == true)
				timer->Stop ();
			wait = true;
			//initialize
			stack = new MyStack (width * height);
			x = 1;
			y = 1;
			d = N;
			for (int i = 0; i < width; i++)
				for (int j = 0; j < height; j++)
					if (maze[i][j] == 4 || maze[i][j] == 5)
						maze[i][j] = 0;
					else if (maze[i][j] == 2)
					{
						x = i;
						y = j;
					}
			setDrawMaze ();
			//set first step
			MyPoint start;
			start.x = x;
			start.y = y;
			start.d = d;
			(*stack).push (start);
			//start move
			timer->Interval = ResolutionMaze_Speed->Value;
			timer->Start ();
		}
	}
	private: System::Void timer_Tick (System::Object^  sender, System::EventArgs^  e)
	{
		//no exit
		if ((*stack).empty ())
		{
			wait = false;
			timer->Stop ();
			showMessage ("迷宮結果", "迷宮沒有路徑可以到達出口");
		}
		//try dir
		u = x + dx[d];
		v = y + dy[d];
		//is road
		if (maze[u][v] == 0)
		{
			MyPoint p;
			p.x = x;
			p.y = y;
			p.d = d;
			maze[u][v] = 4;
			(*stack).push (p);
			x = u;
			y = v;
			d = N;
		}
		//is export
		else if (maze[u][v] == 3)
		{
			wait = false;
			timer->Stop ();
			showMessage ("迷宮結果", "已破解迷宮，請確認最終路徑的顏色");
		}
		//no road..
		else
		{
			if (d < W)
				d = (Dir)(d + 1);
			else
			{
				if(maze[x][y] != 2 && maze[x][y] != 3)
					maze[x][y] = 5;
				MyPoint p = (*stack).pop ();
				x = p.x;
				y = p.y;
				d = p.d;
			}
		}
		drawMaze ();
	}	
	private: System::Void AutoCreateMaze_Button_Click (System::Object^  sender, System::EventArgs^  e)
	{
		//delete old
		if (maze != nullptr)
			delete maze;
		//is auto found road?
		if (wait == true)
		{
			wait = false;
			timer->Stop ();
		}
		//create new(row/col switch)
		height = System::Convert::ToInt16(AutoCreateMaze_WidthBox->Value);
		width = System::Convert::ToInt16 (AutoCreateMaze_HeightBox->Value);
		maze = new int*[width];
		for (int i = 0; i < width; i++)
			maze[i] = new int[height];
		//set outline wall
		for (int i = 0; i < width; i++)
		{
			maze[i][0] = 1;
			maze[i][height - 1] = 1;
		}
		for (int i = 0; i < height; i++)
		{
			maze[0][i] = 1;
			maze[width - 1][i] = 1;
		}
		//initialize
		for (int i = 1; i < width-1; i++)
			for (int j = 1; j < height-1; j++)
				if(i % 2 == 0 && j % 2 == 0)
					maze[i][j] = 1;
				else
					maze[i][j] = 0;
		//create wall
		Random rand;
		int rate = System::Convert::ToInt16 (AutoCreateMaze_Rate->Value);
		for (int i = 1; i < width - 1; i++)
			for (int j = 1; j < height - 1; j++)
				if (maze[i][j] == 0)
					if (((maze[i - 1][j] == 1) && (maze[i + 1][j] == 1)) || ((maze[i][j - 1] == 1) && (maze[i][j + 1] == 1)))
						if ((rand.Next () % 100) < rate)
							maze[i][j] = 1;
		//set import and export
		do
		{
			u = (rand.Next () % (width - 2)) + 1;
			v = (rand.Next () % (height - 2)) + 1;
		} while (maze[u][v] == 0);
		maze[u][v] = 2;
		do
		{
			u = (rand.Next () % (width - 2)) + 1;
			v = (rand.Next () % (height - 2)) + 1;
		} while (maze[u][v] == 0);
		maze[u][v] = 3;
		//draw new maze
		setDrawMaze ();
		drawMaze ();
	}
	//=====================================================
	// style setting
	//=====================================================
	private: System::Void MazeStyle_WallButton_Click (System::Object^  sender, System::EventArgs^  e)
	{
		wallColor = getColor (MazeStyle_WallButton->BackColor);
		MazeStyle_WallButton->BackColor = wallColor;
	}
	private: System::Void MazeStyle_RoadButton_Click (System::Object^  sender, System::EventArgs^  e)
	{
		roadColor = getColor (MazeStyle_RoadButton->BackColor);
		MazeStyle_RoadButton->BackColor = roadColor;
	}
	private: System::Void MazeStyle_AnswerButton_Click (System::Object^  sender, System::EventArgs^  e)
	{
		answerColor = getColor (MazeStyle_AnswerButton->BackColor);
		MazeStyle_AnswerButton->BackColor = answerColor;
	}
	private: System::Void MazeStyle_ExportButton_Click (System::Object^  sender, System::EventArgs^  e)
	{
		exportColor = getColor (MazeStyle_ExportButton->BackColor);
		MazeStyle_ExportButton->BackColor = exportColor;
	}
	private: System::Void MazeStyle_ImportButton_Click (System::Object^  sender, System::EventArgs^  e)
	{
		importColor = getColor (MazeStyle_ImportButton->BackColor);
		MazeStyle_ImportButton->BackColor = importColor;
	}
	private: System::Void MazeStyle_TryButton_Click (System::Object^  sender, System::EventArgs^  e)
	{
		tryColor = getColor (MazeStyle_TryButton->BackColor);
		MazeStyle_TryButton->BackColor = tryColor;
	}
};
}
