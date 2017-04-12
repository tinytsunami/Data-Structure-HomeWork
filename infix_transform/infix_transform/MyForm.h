#pragma once
#include <string>
#include "string_transfrom.h"
#include "transform.h"

namespace infix_transform {

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
	private: System::Windows::Forms::Button^  in_to_pre;
	protected:

	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  infix_box;

	private: System::Windows::Forms::TextBox^  console;
	private: System::Windows::Forms::Button^  in_to_post;
	private: System::Windows::Forms::Button^  pre_to_post;



	private: System::Windows::Forms::TextBox^  prefix_box;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  pre_to_in;
	private: System::Windows::Forms::Button^  post_to_in;


	private: System::Windows::Forms::TextBox^  postfix_box;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  post_to_pre;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;


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
			this->in_to_pre = (gcnew System::Windows::Forms::Button ());
			this->label1 = (gcnew System::Windows::Forms::Label ());
			this->infix_box = (gcnew System::Windows::Forms::TextBox ());
			this->console = (gcnew System::Windows::Forms::TextBox ());
			this->in_to_post = (gcnew System::Windows::Forms::Button ());
			this->pre_to_post = (gcnew System::Windows::Forms::Button ());
			this->prefix_box = (gcnew System::Windows::Forms::TextBox ());
			this->label2 = (gcnew System::Windows::Forms::Label ());
			this->pre_to_in = (gcnew System::Windows::Forms::Button ());
			this->post_to_in = (gcnew System::Windows::Forms::Button ());
			this->postfix_box = (gcnew System::Windows::Forms::TextBox ());
			this->label3 = (gcnew System::Windows::Forms::Label ());
			this->post_to_pre = (gcnew System::Windows::Forms::Button ());
			this->label4 = (gcnew System::Windows::Forms::Label ());
			this->label5 = (gcnew System::Windows::Forms::Label ());
			this->SuspendLayout ();
			// 
			// in_to_pre
			// 
			this->in_to_pre->Location = System::Drawing::Point (241, 94);
			this->in_to_pre->Name = L"in_to_pre";
			this->in_to_pre->Size = System::Drawing::Size (75, 23);
			this->in_to_pre->TabIndex = 0;
			this->in_to_pre->Text = L"To prefix";
			this->in_to_pre->UseVisualStyleBackColor = true;
			this->in_to_pre->Click += gcnew System::EventHandler (this, &MyForm::in_to_pre_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font (L"微軟正黑體", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point (241, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size (33, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Infix";
			// 
			// infix_box
			// 
			this->infix_box->Location = System::Drawing::Point (241, 66);
			this->infix_box->Name = L"infix_box";
			this->infix_box->Size = System::Drawing::Size (156, 22);
			this->infix_box->TabIndex = 2;
			this->infix_box->Text = L"(A+B)*(C-D)^E/F+G*H-I";
			// 
			// console
			// 
			this->console->Location = System::Drawing::Point (12, 46);
			this->console->Multiline = true;
			this->console->Name = L"console";
			this->console->ReadOnly = true;
			this->console->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->console->Size = System::Drawing::Size (223, 219);
			this->console->TabIndex = 3;
			// 
			// in_to_post
			// 
			this->in_to_post->Location = System::Drawing::Point (322, 94);
			this->in_to_post->Name = L"in_to_post";
			this->in_to_post->Size = System::Drawing::Size (75, 23);
			this->in_to_post->TabIndex = 10;
			this->in_to_post->Text = L"To postfix";
			this->in_to_post->UseVisualStyleBackColor = true;
			this->in_to_post->Click += gcnew System::EventHandler (this, &MyForm::in_to_post_Click);
			// 
			// pre_to_post
			// 
			this->pre_to_post->Location = System::Drawing::Point (322, 168);
			this->pre_to_post->Name = L"pre_to_post";
			this->pre_to_post->Size = System::Drawing::Size (75, 23);
			this->pre_to_post->TabIndex = 14;
			this->pre_to_post->Text = L"To postfix";
			this->pre_to_post->UseVisualStyleBackColor = true;
			this->pre_to_post->Click += gcnew System::EventHandler (this, &MyForm::pre_to_post_Click);
			// 
			// prefix_box
			// 
			this->prefix_box->Location = System::Drawing::Point (241, 140);
			this->prefix_box->Name = L"prefix_box";
			this->prefix_box->Size = System::Drawing::Size (156, 22);
			this->prefix_box->TabIndex = 13;
			this->prefix_box->Text = L"AB+CD-E^F/*GH*+I-";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font (L"微軟正黑體", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point (241, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size (41, 17);
			this->label2->TabIndex = 12;
			this->label2->Text = L"prefix";
			// 
			// pre_to_in
			// 
			this->pre_to_in->Location = System::Drawing::Point (241, 168);
			this->pre_to_in->Name = L"pre_to_in";
			this->pre_to_in->Size = System::Drawing::Size (75, 23);
			this->pre_to_in->TabIndex = 11;
			this->pre_to_in->Text = L"To infix";
			this->pre_to_in->UseVisualStyleBackColor = true;
			this->pre_to_in->Click += gcnew System::EventHandler (this, &MyForm::pre_to_in_Click);
			// 
			// post_to_in
			// 
			this->post_to_in->Location = System::Drawing::Point (241, 242);
			this->post_to_in->Name = L"post_to_in";
			this->post_to_in->Size = System::Drawing::Size (75, 23);
			this->post_to_in->TabIndex = 18;
			this->post_to_in->Text = L"To infix";
			this->post_to_in->UseVisualStyleBackColor = true;
			this->post_to_in->Click += gcnew System::EventHandler (this, &MyForm::post_to_in_Click);
			// 
			// postfix_box
			// 
			this->postfix_box->Location = System::Drawing::Point (241, 214);
			this->postfix_box->Name = L"postfix_box";
			this->postfix_box->Size = System::Drawing::Size (156, 22);
			this->postfix_box->TabIndex = 17;
			this->postfix_box->Text = L"-+*+AB/^-CDEF*GHI";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font (L"微軟正黑體", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point (241, 194);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size (48, 17);
			this->label3->TabIndex = 16;
			this->label3->Text = L"postfix";
			// 
			// post_to_pre
			// 
			this->post_to_pre->Location = System::Drawing::Point (322, 242);
			this->post_to_pre->Name = L"post_to_pre";
			this->post_to_pre->Size = System::Drawing::Size (75, 23);
			this->post_to_pre->TabIndex = 15;
			this->post_to_pre->Text = L"To prefix";
			this->post_to_pre->UseVisualStyleBackColor = true;
			this->post_to_pre->Click += gcnew System::EventHandler (this, &MyForm::post_to_pre_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font (L"微軟正黑體", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(136)));
			this->label4->Location = System::Drawing::Point (12, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size (155, 17);
			this->label4->TabIndex = 19;
			this->label4->Text = L"運算子為 + - * / ^ ( ) 數種";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font (L"微軟正黑體", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point (12, 26);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size (268, 17);
			this->label5->TabIndex = 20;
			this->label5->Text = L"運算元為單一非運算元字符（不接受寬字元）";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF (6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size (409, 277);
			this->Controls->Add (this->label5);
			this->Controls->Add (this->label4);
			this->Controls->Add (this->post_to_in);
			this->Controls->Add (this->postfix_box);
			this->Controls->Add (this->label3);
			this->Controls->Add (this->post_to_pre);
			this->Controls->Add (this->pre_to_post);
			this->Controls->Add (this->prefix_box);
			this->Controls->Add (this->label2);
			this->Controls->Add (this->pre_to_in);
			this->Controls->Add (this->in_to_post);
			this->Controls->Add (this->console);
			this->Controls->Add (this->infix_box);
			this->Controls->Add (this->label1);
			this->Controls->Add (this->in_to_pre);
			this->MaximumSize = System::Drawing::Size (425, 316);
			this->MinimumSize = System::Drawing::Size (425, 316);
			this->Name = L"MyForm";
			this->Text = L"Infix, Prefix, Postfix By Yang-Yu";
			this->ResumeLayout (false);
			this->PerformLayout ();

		}
#pragma endregion
	private: String^ infix_trans (String^ input, bool prefix)
	{
		std::string answer = osstr_to_str (input);
		if (prefix)
			answer = infix_to_prefix (answer);
		else
			answer = infix_to_postfix (answer);
		input = str_to_osstr (answer);
		return input;
	}
	private: System::Void in_to_pre_Click (System::Object^  sender, System::EventArgs^  e)
	{
		String^ tmp = System::Convert::ToString (infix_box->Text);
		console->AppendText(infix_trans(tmp, true) + "\r\n");
	}
	private: System::Void in_to_post_Click (System::Object^  sender, System::EventArgs^  e)
	{
		String^ tmp = System::Convert::ToString (infix_box->Text);
		console->AppendText (infix_trans (tmp, false) + "\r\n");
	}
	
	private: String^ prefix_trans (String^ input, bool infix)
	{
		std::string answer = osstr_to_str (input);
		if (infix)
			answer = prefix_to_infix (answer);
		else
			answer = prefix_to_postfix (answer);
		input = str_to_osstr (answer);
		return input;
	}
	private: System::Void pre_to_in_Click (System::Object^  sender, System::EventArgs^  e)
	{
		String^ tmp = System::Convert::ToString (prefix_box->Text);
		console->AppendText (prefix_trans (tmp, true) + "\r\n");
	}
	private: System::Void pre_to_post_Click (System::Object^  sender, System::EventArgs^  e)
	{
		String^ tmp = System::Convert::ToString (prefix_box->Text);
		console->AppendText (prefix_trans (tmp, false) + "\r\n");
	}

	private: String^ postfix_trans (String^ input, bool infix)
	{
		std::string answer = osstr_to_str (input);
		if (infix)
			answer = postfix_to_infix (answer);
		else
			answer = postfix_to_prefix (answer);
		input = str_to_osstr (answer);
		return input;
	}
	private: System::Void post_to_in_Click (System::Object^  sender, System::EventArgs^  e)
	{
		String^ tmp = System::Convert::ToString (postfix_box->Text);
		console->AppendText (postfix_trans (tmp, true) + "\r\n");
	}
	private: System::Void post_to_pre_Click (System::Object^  sender, System::EventArgs^  e)
	{
		String^ tmp = System::Convert::ToString (postfix_box->Text);
		console->AppendText (postfix_trans (tmp, false) + "\r\n");
	}
};
}
