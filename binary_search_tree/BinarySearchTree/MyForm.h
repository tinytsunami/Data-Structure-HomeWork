#pragma once
#include <vector>
#include "BinaryTree.h"

BinaryTree<int> tree;
std::vector<int> list;
void callback (BinaryTreeNode<int> *node)
{ 
	list.push_back (node->data);
}

namespace BinarySearchTree {

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
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Button^  button7;

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
			this->button1 = (gcnew System::Windows::Forms::Button ());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox ());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown ());
			this->button2 = (gcnew System::Windows::Forms::Button ());
			this->button3 = (gcnew System::Windows::Forms::Button ());
			this->button4 = (gcnew System::Windows::Forms::Button ());
			this->button5 = (gcnew System::Windows::Forms::Button ());
			this->button6 = (gcnew System::Windows::Forms::Button ());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox ());
			this->button7 = (gcnew System::Windows::Forms::Button ());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit ();
			this->SuspendLayout ();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button1->Location = System::Drawing::Point (282, 55);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size (90, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Insert...";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler (this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
																						 | System::Windows::Forms::AnchorStyles::Left)
																						| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point (12, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size (264, 287);
			this->textBox1->TabIndex = 1;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->numericUpDown1->Location = System::Drawing::Point (282, 27);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size (90, 22);
			this->numericUpDown1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button2->Location = System::Drawing::Point (282, 142);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size (90, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Add Random";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler (this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button3->Location = System::Drawing::Point (282, 84);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size (90, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Find...";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler (this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button4->Location = System::Drawing::Point (282, 171);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size (90, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Inorder";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler (this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button5->Location = System::Drawing::Point (282, 229);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size (90, 23);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Postorder";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler (this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button6->Location = System::Drawing::Point (282, 200);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size (90, 23);
			this->button6->TabIndex = 7;
			this->button6->Text = L"Preorder";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler (this, &MyForm::button6_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point (282, 258);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size (70, 16);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->Text = L"Recursive";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button7->Location = System::Drawing::Point (282, 113);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size (90, 23);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Delete...";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler (this, &MyForm::button7_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF (6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size (384, 311);
			this->Controls->Add (this->button7);
			this->Controls->Add (this->checkBox1);
			this->Controls->Add (this->button6);
			this->Controls->Add (this->button5);
			this->Controls->Add (this->button4);
			this->Controls->Add (this->button3);
			this->Controls->Add (this->button2);
			this->Controls->Add (this->numericUpDown1);
			this->Controls->Add (this->textBox1);
			this->Controls->Add (this->button1);
			this->MinimumSize = System::Drawing::Size (400, 350);
			this->Name = L"MyForm";
			this->Text = L"Binary Search Tree By Yang-Yu";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit ();
			this->ResumeLayout (false);
			this->PerformLayout ();

		}
#pragma endregion
	// Convert
	private: Int32 num (Object ^data)
	{
		return System::Convert::ToInt32 (data);
	}
	private: String^ str (Object ^data)
	{
		return System::Convert::ToString (data);
	}
	// Show Tree Element
	private: void show ()
	{
		show (0); //inorder
	}
	private: void show (int type)
	{
		String ^msg;
		list.clear ();
		switch (type)
		{
		case 0: //inorder
			if (checkBox1->Checked)
				tree.recursive_inorder (callback);
			else
				tree.inorder (callback);
			break;
		case 1: //preorder
			if (checkBox1->Checked)
				tree.recursive_preorder (callback);
			else
				tree.preorder (callback);
			break;
		case 2: //postorder
			if (checkBox1->Checked)
				tree.recursive_postorder (callback);
			else
				tree.postorder (callback);
			break;
		}
		for (int i = 0; i < list.size (); i++)
			msg += System::Convert::ToString (list[i]) + " ";
		textBox1->AppendText (msg + "\r\n");
	}
	// Insert
	private: System::Void button1_Click (System::Object^  sender, System::EventArgs^  e)
	{
		int data = num (numericUpDown1->Value);
		if(checkBox1->Checked)
			tree.recursive_insert (data);
		else
			tree.insert (data);
		textBox1->AppendText ("New data: " + str(data) + "\r\n");
		show ();
	}
	// Search
	private: System::Void button3_Click (System::Object^  sender, System::EventArgs^  e)
	{
		int data = num (numericUpDown1->Value);
		BinaryTreeNode<int>* node = NULL;
		if (checkBox1->Checked)
			node = tree.recursive_search (data);
		else
			node = tree.search (data);
		textBox1->AppendText ((node != NULL ? "Found: " : "Not found: ") + str(data) + "\r\n");
	}
	// Delete
	private: System::Void button7_Click (System::Object^  sender, System::EventArgs^  e)
	{
		int data = num (numericUpDown1->Value);
		if (checkBox1->Checked)
			tree.recursive_remove (data);
		else
			tree.remove (data);
		show ();
	}
	// Insert Random Number
	private: System::Void button2_Click (System::Object^  sender, System::EventArgs^  e)
	{
		Random r;
		int max = num (numericUpDown1->Maximum);
		int min = num (numericUpDown1->Minimum);
		int rand = r.Next ();
		numericUpDown1->Value = (rand % (max - min)) + min;
		int data = num (numericUpDown1->Value);
		if (checkBox1->Checked)
			tree.recursive_insert (data);
		else
			tree.insert (data);
		textBox1->AppendText ("New data: " + str (data) + "\r\n");
		show ();
	}
	// Inorder
	private: System::Void button4_Click (System::Object^  sender, System::EventArgs^  e)
	{
		show (0);
	}
	// Preorder
	private: System::Void button6_Click (System::Object^  sender, System::EventArgs^  e)
	{
		show (1);
	}
	// Postorder
	private: System::Void button5_Click (System::Object^  sender, System::EventArgs^  e)
	{
		show (2);
	}
};
}
