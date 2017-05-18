#pragma once
#include <ctime>
#include <cmath>
#include <algorithm>
#define BLOCK_SIZE 30

int **graphic;
int **edge;
int maxCountE;
int countV;
int countE;
int rangeW;
int infinity;
int i, j;

// Sort function
bool func (int a, int b)
{
	return edge[a][2] < edge[b][2];
}

// Quick Sort
void quickSort (int *start, int *end, bool(*func)(int, int))
{
	if (end - start <= 1) return;
	int *pivot = start++;
	for (int *data = start; data < end; data++)
		if (func(*data, *pivot))
		{
			std::swap (*data, *start);
			start++;
		}
	std::swap (*pivot, *(start - 1));
	quickSort (pivot, start, func);
	quickSort (start, end, func);
}

namespace spanning_tree {

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
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button9;
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
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown ());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl ());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage ());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox ());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage ());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView ());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage ());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView ());
			this->label1 = (gcnew System::Windows::Forms::Label ());
			this->label3 = (gcnew System::Windows::Forms::Label ());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown ());
			this->button1 = (gcnew System::Windows::Forms::Button ());
			this->button2 = (gcnew System::Windows::Forms::Button ());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox ());
			this->panel1 = (gcnew System::Windows::Forms::Panel ());
			this->label5 = (gcnew System::Windows::Forms::Label ());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown ());
			this->panel2 = (gcnew System::Windows::Forms::Panel ());
			this->button8 = (gcnew System::Windows::Forms::Button ());
			this->button7 = (gcnew System::Windows::Forms::Button ());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox ());
			this->button6 = (gcnew System::Windows::Forms::Button ());
			this->button5 = (gcnew System::Windows::Forms::Button ());
			this->button4 = (gcnew System::Windows::Forms::Button ());
			this->button3 = (gcnew System::Windows::Forms::Button ());
			this->button9 = (gcnew System::Windows::Forms::Button ());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit ();
			this->tabControl1->SuspendLayout ();
			this->tabPage1->SuspendLayout ();
			this->tabPage2->SuspendLayout ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit ();
			this->tabPage3->SuspendLayout ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit ();
			this->panel1->SuspendLayout ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit ();
			this->panel2->SuspendLayout ();
			this->SuspendLayout ();
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
																							  | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDown1->Location = System::Drawing::Point (7, 31);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding (4);
			this->numericUpDown1->Maximum = System::Decimal (gcnew cli::array< System::Int32 > (4) { 255, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size (153, 25);
			this->numericUpDown1->TabIndex = 0;
			this->numericUpDown1->Value = System::Decimal (gcnew cli::array< System::Int32 > (4) { 10, 0, 0, 0 });
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
			this->tabControl1->Size = System::Drawing::Size (383, 536);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add (this->textBox1);
			this->tabPage1->Location = System::Drawing::Point (4, 26);
			this->tabPage1->Margin = System::Windows::Forms::Padding (4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding (4);
			this->tabPage1->Size = System::Drawing::Size (375, 506);
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
			this->textBox1->Size = System::Drawing::Size (361, 492);
			this->textBox1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add (this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point (4, 26);
			this->tabPage2->Margin = System::Windows::Forms::Padding (4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding (4);
			this->tabPage2->Size = System::Drawing::Size (375, 506);
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
			this->dataGridView1->Size = System::Drawing::Size (358, 492);
			this->dataGridView1->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add (this->dataGridView2);
			this->tabPage3->Location = System::Drawing::Point (4, 26);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding (3);
			this->tabPage3->Size = System::Drawing::Size (375, 506);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"邊列表";
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
			this->dataGridView2->Location = System::Drawing::Point (7, 7);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size (358, 493);
			this->dataGridView2->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point (4, 10);
			this->label1->Margin = System::Windows::Forms::Padding (4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size (60, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"點的數量";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point (4, 110);
			this->label3->Margin = System::Windows::Forms::Padding (4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size (73, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"定義無限大";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
																							  | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDown3->Location = System::Drawing::Point (7, 131);
			this->numericUpDown3->Margin = System::Windows::Forms::Padding (4);
			this->numericUpDown3->Maximum = System::Decimal (gcnew cli::array< System::Int32 > (4) { 2147483647, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size (153, 25);
			this->numericUpDown3->TabIndex = 5;
			this->numericUpDown3->Value = System::Decimal (gcnew cli::array< System::Int32 > (4) { 2147483647, 0, 0, 0 });
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
																					   | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point (7, 163);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size (153, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"使用最大整數";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler (this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
																					   | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point (7, 220);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size (153, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"生成圖";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler (this, &MyForm::button2_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point (7, 193);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size (66, 21);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"輸出圖";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler (this, &MyForm::checkBox1_CheckedChanged);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add (this->label5);
			this->panel1->Controls->Add (this->numericUpDown4);
			this->panel1->Controls->Add (this->label1);
			this->panel1->Controls->Add (this->checkBox1);
			this->panel1->Controls->Add (this->numericUpDown1);
			this->panel1->Controls->Add (this->button2);
			this->panel1->Controls->Add (this->button1);
			this->panel1->Controls->Add (this->label3);
			this->panel1->Controls->Add (this->numericUpDown3);
			this->panel1->Location = System::Drawing::Point (403, 39);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size (169, 257);
			this->panel1->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point (4, 60);
			this->label5->Margin = System::Windows::Forms::Padding (4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size (60, 17);
			this->label5->TabIndex = 11;
			this->label5->Text = L"權重範圍";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
																							  | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDown4->Location = System::Drawing::Point (7, 81);
			this->numericUpDown4->Margin = System::Windows::Forms::Padding (4);
			this->numericUpDown4->Maximum = System::Decimal (gcnew cli::array< System::Int32 > (4) { 2147483647, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size (153, 25);
			this->numericUpDown4->TabIndex = 10;
			this->numericUpDown4->Value = System::Decimal (gcnew cli::array< System::Int32 > (4) { 100, 0, 0, 0 });
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
																					  | System::Windows::Forms::AnchorStyles::Right));
			this->panel2->Controls->Add (this->button9);
			this->panel2->Controls->Add (this->button8);
			this->panel2->Controls->Add (this->button7);
			this->panel2->Controls->Add (this->checkBox2);
			this->panel2->Controls->Add (this->button6);
			this->panel2->Controls->Add (this->button5);
			this->panel2->Controls->Add (this->button4);
			this->panel2->Controls->Add (this->button3);
			this->panel2->Location = System::Drawing::Point (403, 302);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size (169, 247);
			this->panel2->TabIndex = 11;
			// 
			// button8
			// 
			this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
																					   | System::Windows::Forms::AnchorStyles::Right));
			this->button8->Location = System::Drawing::Point (7, 110);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size (153, 34);
			this->button8->TabIndex = 16;
			this->button8->Text = L"Kruskal ( n^2 sort )";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler (this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
																					   | System::Windows::Forms::AnchorStyles::Right));
			this->button7->Location = System::Drawing::Point (7, 70);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size (153, 34);
			this->button7->TabIndex = 15;
			this->button7->Text = L"Kruskal ( nlgn sort )";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler (this, &MyForm::button7_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Location = System::Drawing::Point (7, 14);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size (79, 21);
			this->checkBox2->TabIndex = 14;
			this->checkBox2->Text = L"輸出答案";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
																					   | System::Windows::Forms::AnchorStyles::Right));
			this->button6->Location = System::Drawing::Point (7, 41);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size (153, 23);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Kruskal ( STL Sort )";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler (this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
																					   | System::Windows::Forms::AnchorStyles::Right));
			this->button5->Location = System::Drawing::Point (7, 150);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size (153, 23);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Kruskal ( Linear )";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler (this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
																					   | System::Windows::Forms::AnchorStyles::Right));
			this->button4->Location = System::Drawing::Point (7, 208);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size (153, 23);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Prim";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler (this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
																					   | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point (7, 179);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size (153, 23);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Kruskal ( Heap )";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler (this, &MyForm::button3_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point (85, 12);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size (75, 23);
			this->button9->TabIndex = 12;
			this->button9->Text = L"批次測試";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler (this, &MyForm::button9_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF (8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size (584, 561);
			this->Controls->Add (this->panel2);
			this->Controls->Add (this->panel1);
			this->Controls->Add (this->tabControl1);
			this->Font = (gcnew System::Drawing::Font (L"微軟正黑體", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
													   static_cast<System::Byte>(136)));
			this->Margin = System::Windows::Forms::Padding (4);
			this->MinimumSize = System::Drawing::Size (600, 600);
			this->Name = L"MyForm";
			this->Text = L"MST 最小生成樹 By Yang-Yu";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit ();
			this->tabControl1->ResumeLayout (false);
			this->tabPage1->ResumeLayout (false);
			this->tabPage1->PerformLayout ();
			this->tabPage2->ResumeLayout (false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit ();
			this->tabPage3->ResumeLayout (false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit ();
			this->panel1->ResumeLayout (false);
			this->panel1->PerformLayout ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit ();
			this->panel2->ResumeLayout (false);
			this->panel2->PerformLayout ();
			this->ResumeLayout (false);

		}
#pragma endregion
	private: inline String^ text (int x)
	{
		return System::Convert::ToString (x);
	}
	// Let V > 255 if don't show on data grid view
	private: System::Void checkBox1_CheckedChanged (System::Object^  sender, System::EventArgs^  e)
	{
		if (checkBox1->Checked)
			numericUpDown1->Maximum = 255;
		else
			numericUpDown1->Maximum = 65535;
	}
	// Make inf. is max int.
	private: System::Void button1_Click (System::Object^  sender, System::EventArgs^  e)
	{
		numericUpDown3->Value = 0x7fffffff;
	}
	// Create Graphic
	private: System::Void button2_Click (System::Object^  sender, System::EventArgs^  e)
	{
		// Clear varible
		if (edge)
		{
			for (i = 0; i < maxCountE; i++)
				delete[] edge[i];
			delete[] edge;
		}
		if (graphic)
		{
			for (i = 0; i < countV; i++)
				delete[] graphic[i];
			delete[] graphic;
		}

		// Change tabControl index
		if(checkBox1->Checked)
			tabControl1->SelectedIndex = 1;

		// Varibale initalize
		countV = System::Convert::ToInt32(numericUpDown1->Value);
		rangeW = System::Convert::ToInt32 (numericUpDown4->Value);
		infinity = System::Convert::ToInt32 (numericUpDown3->Value);

		// Initialize graphic
		graphic = new int* [countV];
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
					graphic[j][i] = graphic[i][j];
				}
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

		// Initialize edge list
		maxCountE = (countV * (countV - 1)) / 2;
		edge = new int*[maxCountE];
		for (i = 0; i < maxCountE; i++)
			edge[i] = new int[3];

		// Create edge list
		countE = 0;
		for (i = 0; i < countV; i++)
			for (j = i + 1; j < countV; j++)
				if (graphic[i][j] < infinity)
				{
					edge[countE][0] = i;
					edge[countE][1] = j;
					edge[countE][2] = graphic[i][j];
					countE++;
				}

		// Create edge-list DataGridView
		if (checkBox1->Checked)
			if (countE > 0)
			{
				dataGridView2->RowCount = countE;
				dataGridView2->ColumnCount = 3;
				dataGridView2->ClearSelection ();
				for (i = 0; i < countE; i++)
					for (j = 0; j < 3; j++)
						dataGridView2->Rows[i]->Cells[j]->Value = edge[i][j];
			}

		textBox1->AppendText ("圖生成完成\r\n\r\n");
	}
	// Algorithm
	private: void krukalSTLSort ()
	{
		tabControl1->SelectedIndex = 0;
		if (edge)
		{
			textBox1->AppendText ("開始運行 Kruskal's Algorithm (STL Sort)\r\n");
			// Define
			int allWeight;
			float t1, t2, t3;
			clock_t ct1, ct2;
			int* set = new int[countV];
			int* ans = new int[countE];
			int* sort = new int[countE];
			// Initalize
			allWeight = 0;
			t1 = t2 = t3 = 0;
			for (i = 0; i < countV; i++)
				set[i] = i;
			for (i = 0; i < countE; i++)
				sort[i] = i;
			// Sort
			ct1 = clock ();
			std::sort (sort, sort + countE, func);
			t1 = (float)(clock () - ct1) / CLK_TCK;
			// Kruskal algorithm
			int countAns = 0;
			for (i = 0; i < countE; i++)
			{
				int a = edge[sort[i]][0];
				int b = edge[sort[i]][1];
				int w = edge[sort[i]][2];
				if (set[a] != set[b])
				{
					ct2 = clock ();
					int min = std::min (set[a], set[b]);
					int max = std::max (set[a], set[b]);
					for (j = 0; j < countV; j++)
						if (set[j] == max)
							set[j] = min;
					t2 += (float)(clock () - ct2) / CLK_TCK;
					ans[countAns] = sort[i];
					countAns++;
					if (countAns == (countV - 1))
						break;
				}
			}
			if (checkBox2->Checked)
			{
				if (countAns == (countV - 1))
				{
					textBox1->AppendText ("最小生成樹：\r\n");
					for (i = 0; i < countAns; i++)
					{
						int a = edge[ans[i]][0];
						int b = edge[ans[i]][1];
						int w = edge[ans[i]][2];
						textBox1->AppendText ("(" + a + "," + b + ") = " + w + "\r\n");
					}
				}
				else
					textBox1->AppendText ("本圖無解\r\n");
			}
			t3 = (float)(clock () - ct1) / CLK_TCK;
			textBox1->AppendText ("STL排序邊，耗時：" + t1 + "秒\r\n");
			textBox1->AppendText ("避免環生成，耗時：" + t2 + "秒\r\n");
			textBox1->AppendText ("操作完成，總耗時：" + t3 + "秒\r\n");
			for (i = 0; i < countAns; i++) allWeight += edge[ans[i]][2];
			textBox1->AppendText ("總權重：" + allWeight + "\r\n\r\n");
			// Clear varible
			delete[] set;
			delete[] ans;
			delete[] sort;
		}
		else
			textBox1->AppendText ("尚未生成圖，請重新生成後再試\r\n\r\n");
	}
	private: void krukalNLogNSort ()
	{
		tabControl1->SelectedIndex = 0;
		if (edge)
		{
			textBox1->AppendText ("開始運行 Kruskal's Algorithm (nlgn Sort)\r\n");
			// Define
			int allWeight;
			float t1, t2, t3;
			clock_t ct1, ct2;
			int* set = new int[countV];
			int* ans = new int[countE];
			int* sort = new int[countE];
			// Initalize
			allWeight = 0;
			t1 = t2 = t3 = 0;
			for (i = 0; i < countV; i++)
				set[i] = i;
			for (i = 0; i < countE; i++)
				sort[i] = i;
			// Sort
			ct1 = clock ();
			quickSort (sort, sort + countE, func);
			t1 = (float)(clock () - ct1) / CLK_TCK;
			// Kruskal algorithm
			int countAns = 0;
			for (i = 0; i < countE; i++)
			{
				int a = edge[sort[i]][0];
				int b = edge[sort[i]][1];
				int w = edge[sort[i]][2];
				if (set[a] != set[b])
				{
					ct2 = clock ();
					int min = std::min (set[a], set[b]);
					int max = std::max (set[a], set[b]);
					for (j = 0; j < countV; j++)
						if (set[j] == max)
							set[j] = min;
					t2 += (float)(clock () - ct2) / CLK_TCK;
					ans[countAns] = sort[i];
					countAns++;
					if (countAns == (countV - 1))
						break;
				}
			}
			if (checkBox2->Checked)
			{
				if (countAns == (countV - 1))
				{
					textBox1->AppendText ("最小生成樹：\r\n");
					for (i = 0; i < countAns; i++)
					{
						int a = edge[ans[i]][0];
						int b = edge[ans[i]][1];
						int w = edge[ans[i]][2];
						textBox1->AppendText ("(" + a + "," + b + ") = " + w + "\r\n");
					}
				}
				else
					textBox1->AppendText ("本圖無解\r\n");
			}
			t3 = (float)(clock () - ct1) / CLK_TCK;
			textBox1->AppendText ("快速排序邊，耗時：" + t1 + "秒\r\n");
			textBox1->AppendText ("避免環生成，耗時：" + t2 + "秒\r\n");
			textBox1->AppendText ("操作完成，總耗時：" + t3 + "秒\r\n");
			for (i = 0; i < countAns; i++) allWeight += edge[ans[i]][2];
			textBox1->AppendText ("總權重：" + allWeight + "\r\n\r\n");
			// Clear varible
			delete[] set;
			delete[] ans;
			delete[] sort;
		}
		else
			textBox1->AppendText ("尚未生成圖，請重新生成後再試\r\n\r\n");
	}
	private: void krukalNNSort ()
	{
		tabControl1->SelectedIndex = 0;
		if (edge)
		{
			textBox1->AppendText ("開始運行 Kruskal's Algorithm (n^2 Sort)\r\n");
			// Define
			int allWeight;
			float t1, t2, t3;
			clock_t ct1, ct2;
			int* set = new int[countV];
			int* ans = new int[countE];
			int* sort = new int[countE];
			// Initalize
			allWeight = 0;
			t1 = t2 = t3 = 0;
			for (i = 0; i < countV; i++)
				set[i] = i;
			for (i = 0; i < countE; i++)
				sort[i] = i;
			// Sort
			ct1 = clock ();
			for (i = 0; i < countE; i++)
				for (j = i; j < countE; j++)
					if (edge[sort[i]][2] > edge[sort[j]][2])
						std::swap (sort[i], sort[j]);
			t1 = (float)(clock () - ct1) / CLK_TCK;
			// Kruskal algorithm
			int countAns = 0;
			for (i = 0; i < countE; i++)
			{
				int a = edge[sort[i]][0];
				int b = edge[sort[i]][1];
				int w = edge[sort[i]][2];
				if (set[a] != set[b])
				{
					ct2 = clock ();
					int min = std::min (set[a], set[b]);
					int max = std::max (set[a], set[b]);
					for (j = 0; j < countV; j++)
						if (set[j] == max)
							set[j] = min;
					t2 += (float)(clock () - ct2) / CLK_TCK;
					ans[countAns] = sort[i];
					countAns++;
					if (countAns == (countV - 1))
						break;
				}
			}
			if (checkBox2->Checked)
			{
				if (countAns == (countV - 1))
				{
					textBox1->AppendText ("最小生成樹：\r\n");
					for (i = 0; i < countAns; i++)
					{
						int a = edge[ans[i]][0];
						int b = edge[ans[i]][1];
						int w = edge[ans[i]][2];
						textBox1->AppendText ("(" + a + "," + b + ") = " + w + "\r\n");
					}
				}
				else
					textBox1->AppendText ("本圖無解\r\n");
			}
			t3 = (float)(clock () - ct1) / CLK_TCK;
			textBox1->AppendText ("氣泡排序邊，耗時：" + t1 + "秒\r\n");
			textBox1->AppendText ("避免環生成，耗時：" + t2 + "秒\r\n");
			textBox1->AppendText ("操作完成，總耗時：" + t3 + "秒\r\n");
			for (i = 0; i < countAns; i++) allWeight += edge[ans[i]][2];
			textBox1->AppendText ("總權重：" + allWeight + "\r\n\r\n");
			// Clear varible
			delete[] set;
			delete[] ans;
			delete[] sort;
		}
		else
			textBox1->AppendText ("尚未生成圖，請重新生成後再試\r\n\r\n");
	}
	private: void krukalLinear ()
	{
		tabControl1->SelectedIndex = 0;
		if (edge)
		{
			textBox1->AppendText ("開始運行 Kruskal's Algorithm (Linear)\r\n");
			// Define
			int allWeight;
			float t1, t2, t3;
			clock_t ct1, ct2;
			int* set = new int[countV];
			int* ans = new int[countE];
			bool* use = new bool[countE];
			int selectMin;
			int select;
			// Initalize
			allWeight = 0;
			t1 = t2 = t3 = 0;
			for (i = 0; i < countE; i++)
				use[i] = true;
			for (i = 0; i < countV; i++)
				set[i] = i;
			// Kruskal algorithm
			ct1 = clock ();
			int countAns = 0;
			for (i = 0; i < countE; i++)
			{
				ct2 = clock ();
				selectMin = infinity;
				select = 0;
				for (j = 0; j < countE; j++)
					if (use[j] && edge[j][2] < selectMin)
					{
						selectMin = edge[j][2];
						select = j;
					}
				t1 += (float)(clock () - ct2) / CLK_TCK;
				int a = edge[select][0];
				int b = edge[select][1];
				int w = edge[select][2];
				use[select] = false;
				if (set[a] != set[b])
				{
					ct2 = clock ();
					int min = std::min (set[a], set[b]);
					int max = std::max (set[a], set[b]);
					for (j = 0; j < countV; j++)
						if (set[j] == max)
							set[j] = min;
					t2 += (float)(clock () - ct2) / CLK_TCK;
					ans[countAns] = select;
					countAns++;
					if (countAns == (countV - 1))
						break;
				}
			}
			if (checkBox2->Checked)
			{
				if (countAns == (countV - 1))
				{
					textBox1->AppendText ("最小生成樹：\r\n");
					for (i = 0; i < countAns; i++)
					{
						int a = edge[ans[i]][0];
						int b = edge[ans[i]][1];
						int w = edge[ans[i]][2];
						textBox1->AppendText ("(" + a + "," + b + ") = " + w + "\r\n");
					}
				}
				else
					textBox1->AppendText ("本圖無解\r\n");
			}
			t3 = (float)(clock () - ct1) / CLK_TCK;
			textBox1->AppendText ("尋找最小邊，耗時：" + t1 + "秒\r\n");
			textBox1->AppendText ("避免環生成，耗時：" + t2 + "秒\r\n");
			textBox1->AppendText ("操作完成，總耗時：" + t3 + "秒\r\n");
			for (i = 0; i < countAns; i++) allWeight += edge[ans[i]][2];
			textBox1->AppendText ("總權重：" + allWeight + "\r\n\r\n");
			// Clear varible
			delete[] set;
			delete[] ans;
			delete[] use;
		}
		else
			textBox1->AppendText ("尚未生成圖，請重新生成後再試\r\n\r\n");
	}
	private: void krukalHeap ()
	{
		tabControl1->SelectedIndex = 0;
		if (edge)
		{
			textBox1->AppendText ("開始運行 Kruskal's Algorithm (Heap)\r\n");
			// Define
			int allWeight;
			float t1, t2, t3;
			clock_t ct1, ct2;
			int* set = new int[countV];
			int* ans = new int[countE];
			int* heap = new int[countE + 1];
			int size = 0;
			// Initalize
			allWeight = 0;
			t1 = t2 = t3 = 0;
			for (i = 0; i < countV; i++)
				set[i] = i;
			// Create Heap
			ct1 = clock ();
			for (i = 0; i < countE; i++)
			{
				size++;
				for (j = size; j > 1 && edge[heap[j / 2]][2] > edge[i][2]; j /= 2)
					heap[j] = heap[j / 2];
				heap[j] = i;
			}
			t1 = (float)(clock () - ct1) / CLK_TCK;

			// Kruskal algorithm
			int countAns = 0;
			while (size > 1)
			{
				int m = heap[1];
				heap[1] = heap[size];
				size--;

				i = 1;
				while (i < size / 2)
				{
					if (edge[heap[i * 2]][2] < edge[heap[i * 2 + 1]][2])
						j = i * 2;
					else
						j = i * 2 + 1;
					if (edge[heap[j]][2] > edge[heap[i]][2])
						break;
					std::swap (heap[i], heap[j]);
					i = j;
				}

				int a = edge[m][0];
				int b = edge[m][1];
				int w = edge[m][2];
				if (set[a] != set[b])
				{
					ct2 = clock ();
					int min = std::min (set[a], set[b]);
					int max = std::max (set[a], set[b]);
					for (j = 0; j < countV; j++)
						if (set[j] == max)
							set[j] = min;
					t2 += (float)(clock () - ct2) / CLK_TCK;
					ans[countAns] = m;
					countAns++;
					if (countAns == (countV - 1))
						break;
				}
			}
			if (checkBox2->Checked)
			{
				if (countAns == (countV - 1))
				{
					textBox1->AppendText ("最小生成樹：\r\n");
					for (i = 0; i < countAns; i++)
					{
						int a = edge[ans[i]][0];
						int b = edge[ans[i]][1];
						int w = edge[ans[i]][2];
						textBox1->AppendText ("(" + a + "," + b + ") = " + w + "\r\n");
					}
				}
				else
					textBox1->AppendText ("本圖無解\r\n");
			}
			t3 = (float)(clock () - ct1) / CLK_TCK;
			textBox1->AppendText ("創建堆積，耗時：" + t1 + "秒\r\n");
			textBox1->AppendText ("避免環生成，耗時：" + t2 + "秒\r\n");
			textBox1->AppendText ("操作完成，總耗時：" + t3 + "秒\r\n");
			for (i = 0; i < countAns; i++) allWeight += edge[ans[i]][2];
			textBox1->AppendText ("總權重：" + allWeight + "\r\n\r\n");
			// Clear varible
			delete[] set;
			delete[] ans;
			delete[] heap;
		}
		else
			textBox1->AppendText ("尚未生成圖，請重新生成後再試\r\n\r\n");
	}
	private: void prim ()
	{
		tabControl1->SelectedIndex = 0;
		if (edge)
		{
			textBox1->AppendText ("開始運行 Prim's Algorithm\r\n");
			// Define
			int allWeight;
			float t1;
			clock_t ct1;
			int **ans = new int*[countV];
			for (i = 0; i < countV; i++)
				ans[i] = new int[2];
			int countAns;
			// Initalize
			allWeight = 0;
			countAns = 0;
			for (i = 0; i < countV; i++)
			{
				ans[i][0] = (-1);
				ans[i][1] = infinity;
			}
			// Prim algorithm
			int p = 0, q, min;
			ans[0][0] = 0;
			ans[0][1] = (-1);
			ct1 = clock ();
			while (countAns < (countV - 1))
			{
				// Update weight
				for (i = 0; i < countV; i++)
					if (i != p && graphic[p][i] < ans[i][1])
					{
						ans[i][0] = p;
						ans[i][1] = graphic[p][i];
					}
				// Get min edge
				min = infinity;
				for (i = 0; i < countV; i++)
					if (ans[i][1] > (-1) && ans[i][1] < min)
					{
						q = i;
						min = ans[i][1];
					}
				ans[q][1] = (-1);
				p = q;
				countAns++;
			}
			t1 += (float)(clock () - ct1) / CLK_TCK;
			// Output Ans
			if (checkBox2->Checked)
			{
				if (countAns == (countV - 1))
				{
					textBox1->AppendText ("最小生成樹：\r\n");
					for (i = 1; i < countV; i++)
					{
						int a = i;
						int b = ans[i][0];
						int w = graphic[a][b];
						textBox1->AppendText ("(" + a + "," + b + ") = " + w + "\r\n");
					}
				}
				else
					textBox1->AppendText ("本圖無解\r\n");
			}
			textBox1->AppendText ("操作完成，總耗時：" + t1 + "秒\r\n");
			for (i = 1; i < countV; i++) allWeight += graphic[i][ans[i][0]];
			textBox1->AppendText ("總權重：" + allWeight + "\r\n\r\n");
			// Clear varible
			for (i = 0; i < countV; i++)
				delete[] ans[i];
			delete[] ans;
		}
		else
			textBox1->AppendText ("尚未生成圖，請重新生成後再試\r\n\r\n");
	}
	// Kruskal algorithm (STL: Sort)
	private: System::Void button6_Click (System::Object^  sender, System::EventArgs^  e)
	{
		krukalSTLSort ();
	}
	// Kruskal algorithm (nlogn: Sort)
	private: System::Void button7_Click (System::Object^  sender, System::EventArgs^  e)
	{
		krukalNLogNSort ();
	}
	// Kruskal algorithm (n^2: Sort)
	private: System::Void button8_Click (System::Object^  sender, System::EventArgs^  e)
	{
		krukalNNSort ();
	}
	// Kruskal algorithm (Linear)
	private: System::Void button5_Click (System::Object^  sender, System::EventArgs^  e)
	{
		krukalLinear ();
	}
	// Kruskal algorithm (Heap)
	private: System::Void button3_Click (System::Object^  sender, System::EventArgs^  e)
	{
		krukalHeap ();
	}
	// Prim algorithm
	private: System::Void button4_Click (System::Object^  sender, System::EventArgs^  e)
	{
		prim ();
	}
	// All
	private: System::Void button9_Click (System::Object^  sender, System::EventArgs^  e)
	{
		prim ();
		krukalHeap ();
		krukalSTLSort ();
		krukalLinear ();
		krukalNLogNSort ();
		//krukalNNSort ();
	}
};
}
