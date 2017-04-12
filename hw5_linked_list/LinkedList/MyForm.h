#pragma once
#include <string>
#include "Stack.h"
#include "Transform.h"
#include "LinkedList.h"

Stack<int> stack;
SingleLinkList<int> singleLinkedList;

namespace LinkedList {

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

	protected:






















	private: System::Windows::Forms::TabPage^  tabPage1;

	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown15;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button32;

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
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage ());
			this->button10 = (gcnew System::Windows::Forms::Button ());
			this->button9 = (gcnew System::Windows::Forms::Button ());
			this->button8 = (gcnew System::Windows::Forms::Button ());
			this->label5 = (gcnew System::Windows::Forms::Label ());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown ());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown ());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown ());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown ());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown ());
			this->label4 = (gcnew System::Windows::Forms::Label ());
			this->label3 = (gcnew System::Windows::Forms::Label ());
			this->button7 = (gcnew System::Windows::Forms::Button ());
			this->button6 = (gcnew System::Windows::Forms::Button ());
			this->button5 = (gcnew System::Windows::Forms::Button ());
			this->label2 = (gcnew System::Windows::Forms::Label ());
			this->label1 = (gcnew System::Windows::Forms::Label ());
			this->button4 = (gcnew System::Windows::Forms::Button ());
			this->button3 = (gcnew System::Windows::Forms::Button ());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox ());
			this->button2 = (gcnew System::Windows::Forms::Button ());
			this->button1 = (gcnew System::Windows::Forms::Button ());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl ());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage ());
			this->numericUpDown15 = (gcnew System::Windows::Forms::NumericUpDown ());
			this->button31 = (gcnew System::Windows::Forms::Button ());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox ());
			this->button32 = (gcnew System::Windows::Forms::Button ());
			this->tabPage1->SuspendLayout ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit ();
			this->tabControl1->SuspendLayout ();
			this->tabPage4->SuspendLayout ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown15))->BeginInit ();
			this->SuspendLayout ();
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add (this->button10);
			this->tabPage1->Controls->Add (this->button9);
			this->tabPage1->Controls->Add (this->button8);
			this->tabPage1->Controls->Add (this->label5);
			this->tabPage1->Controls->Add (this->numericUpDown5);
			this->tabPage1->Controls->Add (this->numericUpDown4);
			this->tabPage1->Controls->Add (this->numericUpDown3);
			this->tabPage1->Controls->Add (this->numericUpDown2);
			this->tabPage1->Controls->Add (this->numericUpDown1);
			this->tabPage1->Controls->Add (this->label4);
			this->tabPage1->Controls->Add (this->label3);
			this->tabPage1->Controls->Add (this->button7);
			this->tabPage1->Controls->Add (this->button6);
			this->tabPage1->Controls->Add (this->button5);
			this->tabPage1->Controls->Add (this->label2);
			this->tabPage1->Controls->Add (this->label1);
			this->tabPage1->Controls->Add (this->button4);
			this->tabPage1->Controls->Add (this->button3);
			this->tabPage1->Controls->Add (this->textBox1);
			this->tabPage1->Controls->Add (this->button2);
			this->tabPage1->Controls->Add (this->button1);
			this->tabPage1->Location = System::Drawing::Point (4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding (3);
			this->tabPage1->Size = System::Drawing::Size (659, 377);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"³æ¦VÀôª¬";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point (87, 94);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size (75, 23);
			this->button10->TabIndex = 23;
			this->button10->Text = L"Delete All";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler (this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point (360, 67);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size (75, 23);
			this->button9->TabIndex = 22;
			this->button9->Text = L"Insert to Last";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler (this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point (279, 67);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size (75, 23);
			this->button8->TabIndex = 21;
			this->button8->Text = L"Insert to First";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler (this, &MyForm::button8_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point (205, 71);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size (11, 12);
			this->label5->TabIndex = 20;
			this->label5->Text = L"x";
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point (222, 67);
			this->numericUpDown5->Maximum = System::Decimal (gcnew cli::array< System::Int32 > (4) { System::Int32::MinValue, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size (51, 22);
			this->numericUpDown5->TabIndex = 19;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point (148, 67);
			this->numericUpDown4->Maximum = System::Decimal (gcnew cli::array< System::Int32 > (4) { System::Int32::MinValue, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size (51, 22);
			this->numericUpDown4->TabIndex = 18;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point (74, 66);
			this->numericUpDown3->Maximum = System::Decimal (gcnew cli::array< System::Int32 > (4) { System::Int32::MinValue, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size (51, 22);
			this->numericUpDown3->TabIndex = 17;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point (74, 38);
			this->numericUpDown2->Maximum = System::Decimal (gcnew cli::array< System::Int32 > (4) { System::Int32::MinValue, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size (95, 22);
			this->numericUpDown2->TabIndex = 16;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point (74, 10);
			this->numericUpDown1->Maximum = System::Decimal (gcnew cli::array< System::Int32 > (4) { System::Int32::MinValue, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size (95, 22);
			this->numericUpDown1->TabIndex = 15;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point (131, 69);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size (11, 12);
			this->label4->TabIndex = 14;
			this->label4->Text = L"~";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point (6, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size (65, 12);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Create Data :";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point (401, 38);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size (139, 23);
			this->button7->TabIndex = 11;
			this->button7->Text = L"Insert to Target ( After )";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler (this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point (546, 38);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size (66, 23);
			this->button6->TabIndex = 10;
			this->button6->Text = L"Delete";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler (this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point (256, 38);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size (139, 23);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Insert to Target ( Before )";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler (this, &MyForm::button5_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point (6, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size (62, 12);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Target Data:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point (10, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size (58, 12);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Insert Data:";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point (175, 38);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size (75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Find Target";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler (this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point (256, 9);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size (75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Insert to Last";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler (this, &MyForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point (6, 123);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size (647, 248);
			this->textBox1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point (175, 9);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size (75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Insert to First";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler (this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point (6, 94);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size (75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Print All";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler (this, &MyForm::button1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
																							| System::Windows::Forms::AnchorStyles::Left)
																						   | System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add (this->tabPage1);
			this->tabControl1->Controls->Add (this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point (12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size (667, 403);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add (this->numericUpDown15);
			this->tabPage4->Controls->Add (this->button31);
			this->tabPage4->Controls->Add (this->textBox3);
			this->tabPage4->Controls->Add (this->button32);
			this->tabPage4->Location = System::Drawing::Point (4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding (3);
			this->tabPage4->Size = System::Drawing::Size (659, 377);
			this->tabPage4->TabIndex = 4;
			this->tabPage4->Text = L"¦ê¦C°ïÅ|";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// numericUpDown15
			// 
			this->numericUpDown15->Location = System::Drawing::Point (6, 6);
			this->numericUpDown15->Maximum = System::Decimal (gcnew cli::array< System::Int32 > (4) { System::Int32::MinValue, 0, 0, 0 });
			this->numericUpDown15->Name = L"numericUpDown15";
			this->numericUpDown15->Size = System::Drawing::Size (95, 22);
			this->numericUpDown15->TabIndex = 15;
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point (188, 5);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size (75, 23);
			this->button31->TabIndex = 4;
			this->button31->Text = L"POP";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler (this, &MyForm::button31_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point (6, 34);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size (647, 337);
			this->textBox3->TabIndex = 2;
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point (107, 5);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size (75, 23);
			this->button32->TabIndex = 1;
			this->button32->Text = L"PUSH";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler (this, &MyForm::button32_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF (6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size (691, 427);
			this->Controls->Add (this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"Linked List by Yang-Yu";
			this->Load += gcnew System::EventHandler (this, &MyForm::MyForm_Load);
			this->tabPage1->ResumeLayout (false);
			this->tabPage1->PerformLayout ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit ();
			this->tabControl1->ResumeLayout (false);
			this->tabPage4->ResumeLayout (false);
			this->tabPage4->PerformLayout ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown15))->EndInit ();
			this->ResumeLayout (false);

		}
	//------------------------------------------------------
	private: void showSigleList ()
	{
		String^ ostmp = str_to_osstr (singleLinkedList.getString ()) + "x\r\n";
		textBox1->AppendText (ostmp);
	}
	private: Random r;
	private: System::Void MyForm_Load (System::Object^  sender, System::EventArgs^  e)
	{
		numericUpDown1->Value = r.Next (0, 100);
		numericUpDown2->Value = r.Next (0, 100);
		numericUpDown3->Value = 0;
		numericUpDown4->Value = r.Next (0, 100);
		numericUpDown5->Value = r.Next (0, 100);
		numericUpDown15->Value = r.Next (0, 100);
	}
	//*******************************************************//
    // Single Linked List                                    //
	//*******************************************************//
	private: System::Void button1_Click (System::Object^  sender, System::EventArgs^  e)
	{
		showSigleList ();
	}
	private: System::Void button2_Click (System::Object^  sender, System::EventArgs^  e)
	{
		int tmp = System::Convert::ToInt32(numericUpDown1->Value);
		singleLinkedList.insertFirst (tmp);
		textBox1->AppendText ("Add to First: " + System::Convert::ToString(tmp) + "\r\n");
		showSigleList ();
		numericUpDown1->Value = r.Next(0, 100);
	}
	private: System::Void button3_Click (System::Object^  sender, System::EventArgs^  e)
	{
		int tmp = System::Convert::ToInt32 (numericUpDown1->Value);
		singleLinkedList.insertLast (tmp);
		textBox1->AppendText ("Add to Last: " + System::Convert::ToString (tmp) + "\r\n");
		showSigleList ();
		numericUpDown1->Value = r.Next(0, 100);
	}
	private: System::Void button4_Click (System::Object^  sender, System::EventArgs^  e)
	{
		int tmp = System::Convert::ToInt32 (numericUpDown2->Value);
		singleNode<int> *target = singleLinkedList.findTarget (tmp);
		if (target != nullptr)
			textBox1->AppendText (System::Convert::ToInt32 (numericUpDown2->Value) + " FOUND.\r\n");
		else
			textBox1->AppendText (System::Convert::ToInt32 (numericUpDown2->Value) + " NOT found.\r\n");
		numericUpDown2->Value = r.Next(0, 100);
	}
	private: System::Void button5_Click (System::Object^  sender, System::EventArgs^  e)
	{
		int t_data = System::Convert::ToInt32 (numericUpDown2->Value);
		int data = System::Convert::ToInt32 (numericUpDown1->Value);
		bool finsh = singleLinkedList.insertBeforeTarget (t_data ,data);
		if (finsh)
		{
			textBox1->AppendText ("Add to Target (Before): " + System::Convert::ToString (data) + "\r\n");
			numericUpDown1->Value = r.Next(0, 100);
			showSigleList ();
		}
		else
		{
			textBox1->AppendText (System::Convert::ToInt32 (t_data) + " NOT found.\r\n");
			numericUpDown2->Value = r.Next(0, 100);
		}
	}
	private: System::Void button7_Click (System::Object^  sender, System::EventArgs^  e)
	{
		int t_data = System::Convert::ToInt32 (numericUpDown2->Value);
		int data = System::Convert::ToInt32 (numericUpDown1->Value);
		bool finsh = singleLinkedList.insertAfterTarget (t_data, data);
		if (finsh)
		{
			textBox1->AppendText ("Add to Target (After): " + System::Convert::ToString (data) + "\r\n");
			numericUpDown1->Value = r.Next(0, 100);
			numericUpDown2->Value = r.Next(0, 100);
			showSigleList ();
		}
		else
		{
			textBox1->AppendText (System::Convert::ToInt32 (t_data) + " NOT found.\r\n");
			numericUpDown2->Value = r.Next(0, 100);
		}
	}
	private: System::Void button6_Click (System::Object^  sender, System::EventArgs^  e)
	{
		int t_data = System::Convert::ToInt32 (numericUpDown2->Value);
		bool finsh = singleLinkedList.deleteTarget (t_data);
		if (finsh)
		{
			textBox1->AppendText ("Delete target: " + System::Convert::ToString (t_data) + " FINSIH!\r\n");
			showSigleList ();
		}
		else
			textBox1->AppendText (System::Convert::ToInt32 (t_data) + " NOT found.\r\n");
		numericUpDown2->Value = r.Next(0, 100);
	}
	private: System::Void button10_Click (System::Object^  sender, System::EventArgs^  e)
	{
		singleLinkedList.clear ();
		textBox1->AppendText ("Clear All.\r\n");
	}
	private: System::Void button8_Click (System::Object^  sender, System::EventArgs^  e)
	{
		Random r;
		Int32 n = System::Convert::ToInt32 (numericUpDown5->Value);
		Int32 min = System::Convert::ToInt32 (numericUpDown3->Value);
		Int32 max = System::Convert::ToInt32 (numericUpDown4->Value);
		for (int i = 0; i < n; i++)
			singleLinkedList.insertFirst (r.Next(min, max));
	}
	private: System::Void button9_Click (System::Object^  sender, System::EventArgs^  e)
	{
		Random r;
		Int32 n = System::Convert::ToInt32 (numericUpDown5->Value);
		Int32 min = System::Convert::ToInt32 (numericUpDown3->Value);
		Int32 max = System::Convert::ToInt32 (numericUpDown4->Value);
		for (int i = 0; i < n; i++)
			singleLinkedList.insertLast (r.Next (min, max));
	}
	//*******************************************************//
	// Stack                                                 //
	//*******************************************************//
	private: System::Void button32_Click (System::Object^  sender, System::EventArgs^  e)
	{
		int tmp = System::Convert::ToInt32 (numericUpDown15->Value);
		stack.push (tmp);
	}
	private: System::Void button31_Click (System::Object^  sender, System::EventArgs^  e)
	{
		int tmp = stack.pop ();
		textBox3->AppendText ("POP: " + System::Convert::ToInt32 (tmp) + "\r\n");
	}
};
}
