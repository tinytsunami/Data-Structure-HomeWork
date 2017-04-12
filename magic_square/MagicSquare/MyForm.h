#pragma once
#include <cmath>
#include "magicSquare.h"

namespace MagicSquare {

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
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  spBottom;
	protected:

	private: System::Windows::Forms::RadioButton^  spRight;

	private: System::Windows::Forms::RadioButton^  spLeft;

	private: System::Windows::Forms::RadioButton^  spTop;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  dBottomRight;

	private: System::Windows::Forms::RadioButton^  dBottomLeft;

	private: System::Windows::Forms::RadioButton^  dTopLeft;

	private: System::Windows::Forms::RadioButton^  dTopRight;

	private: System::Windows::Forms::NumericUpDown^  sizeBox;

	private: System::Windows::Forms::CheckBox^  examine;

	private: System::Windows::Forms::GroupBox^  Control;
	private: System::Windows::Forms::TabControl^  viewTab;



	private: System::Windows::Forms::TabPage^  command;
	private: System::Windows::Forms::TabPage^  text;


	private: System::Windows::Forms::Button^  produce;
	private: System::Windows::Forms::TextBox^  commandShow;

	private: System::Windows::Forms::TextBox^  textShow;

	private: System::Windows::Forms::TabPage^  gridView;

	private: System::Windows::Forms::Button^  clearSquare;
	private: System::Windows::Forms::Button^  clearCommand;
    private: System::Windows::Forms::ListView^  dataTable;

















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
        this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
        this->spBottom = (gcnew System::Windows::Forms::RadioButton());
        this->spRight = (gcnew System::Windows::Forms::RadioButton());
        this->spLeft = (gcnew System::Windows::Forms::RadioButton());
        this->spTop = (gcnew System::Windows::Forms::RadioButton());
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
        this->dBottomRight = (gcnew System::Windows::Forms::RadioButton());
        this->dBottomLeft = (gcnew System::Windows::Forms::RadioButton());
        this->dTopLeft = (gcnew System::Windows::Forms::RadioButton());
        this->dTopRight = (gcnew System::Windows::Forms::RadioButton());
        this->sizeBox = (gcnew System::Windows::Forms::NumericUpDown());
        this->examine = (gcnew System::Windows::Forms::CheckBox());
        this->Control = (gcnew System::Windows::Forms::GroupBox());
        this->clearSquare = (gcnew System::Windows::Forms::Button());
        this->clearCommand = (gcnew System::Windows::Forms::Button());
        this->produce = (gcnew System::Windows::Forms::Button());
        this->viewTab = (gcnew System::Windows::Forms::TabControl());
        this->command = (gcnew System::Windows::Forms::TabPage());
        this->commandShow = (gcnew System::Windows::Forms::TextBox());
        this->text = (gcnew System::Windows::Forms::TabPage());
        this->textShow = (gcnew System::Windows::Forms::TextBox());
        this->gridView = (gcnew System::Windows::Forms::TabPage());
        this->dataTable = (gcnew System::Windows::Forms::ListView());
        this->groupBox1->SuspendLayout();
        this->groupBox2->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sizeBox))->BeginInit();
        this->Control->SuspendLayout();
        this->viewTab->SuspendLayout();
        this->command->SuspendLayout();
        this->text->SuspendLayout();
        this->gridView->SuspendLayout();
        this->SuspendLayout();
        // 
        // groupBox1
        // 
        this->groupBox1->Controls->Add(this->spBottom);
        this->groupBox1->Controls->Add(this->spRight);
        this->groupBox1->Controls->Add(this->spLeft);
        this->groupBox1->Controls->Add(this->spTop);
        this->groupBox1->Location = System::Drawing::Point(8, 60);
        this->groupBox1->Name = L"groupBox1";
        this->groupBox1->Size = System::Drawing::Size(96, 114);
        this->groupBox1->TabIndex = 0;
        this->groupBox1->TabStop = false;
        this->groupBox1->Text = L"Starting point";
        // 
        // spBottom
        // 
        this->spBottom->AutoSize = true;
        this->spBottom->Location = System::Drawing::Point(6, 84);
        this->spBottom->Name = L"spBottom";
        this->spBottom->Size = System::Drawing::Size(58, 16);
        this->spBottom->TabIndex = 5;
        this->spBottom->Text = L"Bottom";
        this->spBottom->UseVisualStyleBackColor = true;
        // 
        // spRight
        // 
        this->spRight->AutoSize = true;
        this->spRight->Location = System::Drawing::Point(6, 62);
        this->spRight->Name = L"spRight";
        this->spRight->Size = System::Drawing::Size(49, 16);
        this->spRight->TabIndex = 4;
        this->spRight->Text = L"Right";
        this->spRight->UseVisualStyleBackColor = true;
        // 
        // spLeft
        // 
        this->spLeft->AutoSize = true;
        this->spLeft->Location = System::Drawing::Point(6, 43);
        this->spLeft->Name = L"spLeft";
        this->spLeft->Size = System::Drawing::Size(42, 16);
        this->spLeft->TabIndex = 3;
        this->spLeft->Text = L"Left";
        this->spLeft->UseVisualStyleBackColor = true;
        // 
        // spTop
        // 
        this->spTop->AutoSize = true;
        this->spTop->Checked = true;
        this->spTop->Location = System::Drawing::Point(6, 21);
        this->spTop->Name = L"spTop";
        this->spTop->Size = System::Drawing::Size(42, 16);
        this->spTop->TabIndex = 2;
        this->spTop->TabStop = true;
        this->spTop->Text = L"Top";
        this->spTop->UseVisualStyleBackColor = true;
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(136)));
        this->label1->Location = System::Drawing::Point(6, 18);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(24, 12);
        this->label1->TabIndex = 1;
        this->label1->Text = L"Size";
        // 
        // groupBox2
        // 
        this->groupBox2->Controls->Add(this->dBottomRight);
        this->groupBox2->Controls->Add(this->dBottomLeft);
        this->groupBox2->Controls->Add(this->dTopLeft);
        this->groupBox2->Controls->Add(this->dTopRight);
        this->groupBox2->Location = System::Drawing::Point(110, 60);
        this->groupBox2->Name = L"groupBox2";
        this->groupBox2->Size = System::Drawing::Size(96, 114);
        this->groupBox2->TabIndex = 6;
        this->groupBox2->TabStop = false;
        this->groupBox2->Text = L"Direction";
        // 
        // dBottomRight
        // 
        this->dBottomRight->AutoSize = true;
        this->dBottomRight->Location = System::Drawing::Point(6, 84);
        this->dBottomRight->Name = L"dBottomRight";
        this->dBottomRight->Size = System::Drawing::Size(84, 16);
        this->dBottomRight->TabIndex = 5;
        this->dBottomRight->Text = L"Bottom-right";
        this->dBottomRight->UseVisualStyleBackColor = true;
        // 
        // dBottomLeft
        // 
        this->dBottomLeft->AutoSize = true;
        this->dBottomLeft->Location = System::Drawing::Point(6, 62);
        this->dBottomLeft->Name = L"dBottomLeft";
        this->dBottomLeft->Size = System::Drawing::Size(77, 16);
        this->dBottomLeft->TabIndex = 4;
        this->dBottomLeft->Text = L"Bottom-left";
        this->dBottomLeft->UseVisualStyleBackColor = true;
        // 
        // dTopLeft
        // 
        this->dTopLeft->AutoSize = true;
        this->dTopLeft->Location = System::Drawing::Point(6, 43);
        this->dTopLeft->Name = L"dTopLeft";
        this->dTopLeft->Size = System::Drawing::Size(61, 16);
        this->dTopLeft->TabIndex = 3;
        this->dTopLeft->Text = L"Top-left";
        this->dTopLeft->UseVisualStyleBackColor = true;
        // 
        // dTopRight
        // 
        this->dTopRight->AutoSize = true;
        this->dTopRight->Checked = true;
        this->dTopRight->Location = System::Drawing::Point(6, 21);
        this->dTopRight->Name = L"dTopRight";
        this->dTopRight->Size = System::Drawing::Size(68, 16);
        this->dTopRight->TabIndex = 2;
        this->dTopRight->TabStop = true;
        this->dTopRight->Text = L"Top-right";
        this->dTopRight->UseVisualStyleBackColor = true;
        // 
        // sizeBox
        // 
        this->sizeBox->Location = System::Drawing::Point(8, 33);
        this->sizeBox->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
        this->sizeBox->Name = L"sizeBox";
        this->sizeBox->Size = System::Drawing::Size(96, 22);
        this->sizeBox->TabIndex = 7;
        this->sizeBox->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
        // 
        // examine
        // 
        this->examine->AutoSize = true;
        this->examine->Location = System::Drawing::Point(8, 180);
        this->examine->Name = L"examine";
        this->examine->Size = System::Drawing::Size(65, 16);
        this->examine->TabIndex = 8;
        this->examine->Text = L"Examine";
        this->examine->UseVisualStyleBackColor = true;
        // 
        // Control
        // 
        this->Control->Controls->Add(this->clearSquare);
        this->Control->Controls->Add(this->clearCommand);
        this->Control->Controls->Add(this->produce);
        this->Control->Controls->Add(this->sizeBox);
        this->Control->Controls->Add(this->label1);
        this->Control->Controls->Add(this->examine);
        this->Control->Controls->Add(this->groupBox1);
        this->Control->Controls->Add(this->groupBox2);
        this->Control->Location = System::Drawing::Point(12, 12);
        this->Control->Name = L"Control";
        this->Control->Size = System::Drawing::Size(215, 271);
        this->Control->TabIndex = 9;
        this->Control->TabStop = false;
        this->Control->Text = L"Control Box";
        // 
        // clearSquare
        // 
        this->clearSquare->Location = System::Drawing::Point(91, 238);
        this->clearSquare->Name = L"clearSquare";
        this->clearSquare->Size = System::Drawing::Size(115, 23);
        this->clearSquare->TabIndex = 11;
        this->clearSquare->Text = L"Clear Square";
        this->clearSquare->UseVisualStyleBackColor = true;
        this->clearSquare->Click += gcnew System::EventHandler(this, &MyForm::clearSquare_Click);
        // 
        // clearCommand
        // 
        this->clearCommand->Location = System::Drawing::Point(91, 209);
        this->clearCommand->Name = L"clearCommand";
        this->clearCommand->Size = System::Drawing::Size(115, 23);
        this->clearCommand->TabIndex = 10;
        this->clearCommand->Text = L"Clear Command";
        this->clearCommand->UseVisualStyleBackColor = true;
        this->clearCommand->Click += gcnew System::EventHandler(this, &MyForm::clearCommand_Click);
        // 
        // produce
        // 
        this->produce->Location = System::Drawing::Point(91, 180);
        this->produce->Name = L"produce";
        this->produce->Size = System::Drawing::Size(115, 23);
        this->produce->TabIndex = 9;
        this->produce->Text = L"Produce";
        this->produce->UseVisualStyleBackColor = true;
        this->produce->Click += gcnew System::EventHandler(this, &MyForm::produce_Click);
        // 
        // viewTab
        // 
        this->viewTab->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
            | System::Windows::Forms::AnchorStyles::Left)
            | System::Windows::Forms::AnchorStyles::Right));
        this->viewTab->Controls->Add(this->command);
        this->viewTab->Controls->Add(this->text);
        this->viewTab->Controls->Add(this->gridView);
        this->viewTab->HotTrack = true;
        this->viewTab->Location = System::Drawing::Point(233, 12);
        this->viewTab->Name = L"viewTab";
        this->viewTab->SelectedIndex = 0;
        this->viewTab->Size = System::Drawing::Size(637, 473);
        this->viewTab->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
        this->viewTab->TabIndex = 10;
        // 
        // command
        // 
        this->command->Controls->Add(this->commandShow);
        this->command->Location = System::Drawing::Point(4, 22);
        this->command->Name = L"command";
        this->command->Padding = System::Windows::Forms::Padding(3);
        this->command->Size = System::Drawing::Size(629, 447);
        this->command->TabIndex = 0;
        this->command->Text = L"Command";
        this->command->UseVisualStyleBackColor = true;
        // 
        // commandShow
        // 
        this->commandShow->Dock = System::Windows::Forms::DockStyle::Fill;
        this->commandShow->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->commandShow->Location = System::Drawing::Point(3, 3);
        this->commandShow->Multiline = true;
        this->commandShow->Name = L"commandShow";
        this->commandShow->ReadOnly = true;
        this->commandShow->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
        this->commandShow->Size = System::Drawing::Size(623, 441);
        this->commandShow->TabIndex = 0;
        // 
        // text
        // 
        this->text->Controls->Add(this->textShow);
        this->text->Location = System::Drawing::Point(4, 22);
        this->text->Name = L"text";
        this->text->Padding = System::Windows::Forms::Padding(3);
        this->text->Size = System::Drawing::Size(629, 447);
        this->text->TabIndex = 1;
        this->text->Text = L"Text";
        this->text->UseVisualStyleBackColor = true;
        // 
        // textShow
        // 
        this->textShow->Dock = System::Windows::Forms::DockStyle::Fill;
        this->textShow->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->textShow->Location = System::Drawing::Point(3, 3);
        this->textShow->Multiline = true;
        this->textShow->Name = L"textShow";
        this->textShow->ReadOnly = true;
        this->textShow->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
        this->textShow->Size = System::Drawing::Size(623, 441);
        this->textShow->TabIndex = 1;
        // 
        // gridView
        // 
        this->gridView->Controls->Add(this->dataTable);
        this->gridView->Location = System::Drawing::Point(4, 22);
        this->gridView->Name = L"gridView";
        this->gridView->Size = System::Drawing::Size(629, 447);
        this->gridView->TabIndex = 2;
        this->gridView->Text = L"Grid View";
        this->gridView->UseVisualStyleBackColor = true;
        // 
        // dataTable
        // 
        this->dataTable->Dock = System::Windows::Forms::DockStyle::Fill;
        this->dataTable->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(136)));
        this->dataTable->GridLines = true;
        this->dataTable->Location = System::Drawing::Point(0, 0);
        this->dataTable->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
        this->dataTable->Name = L"dataTable";
        this->dataTable->Size = System::Drawing::Size(629, 447);
        this->dataTable->TabIndex = 11;
        this->dataTable->UseCompatibleStateImageBehavior = false;
        this->dataTable->View = System::Windows::Forms::View::Details;
        // 
        // MyForm
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(882, 497);
        this->Controls->Add(this->viewTab);
        this->Controls->Add(this->Control);
        this->MinimumSize = System::Drawing::Size(555, 275);
        this->Name = L"MyForm";
        this->Text = L"Magic Square By Yang-Yu";
        this->groupBox1->ResumeLayout(false);
        this->groupBox1->PerformLayout();
        this->groupBox2->ResumeLayout(false);
        this->groupBox2->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sizeBox))->EndInit();
        this->Control->ResumeLayout(false);
        this->Control->PerformLayout();
        this->viewTab->ResumeLayout(false);
        this->command->ResumeLayout(false);
        this->command->PerformLayout();
        this->text->ResumeLayout(false);
        this->text->PerformLayout();
        this->gridView->ResumeLayout(false);
        this->ResumeLayout(false);

            }
#pragma endregion
	private: System::Void produce_Click (System::Object^  sender, System::EventArgs^  e)
	{
		//get type
		int type = 0;
		int size = System::Convert::ToInt32 (sizeBox->Value);
		if (size % 2 == 1)
		{
			type += spTop->Checked ? 10 : 0;
			type += spLeft->Checked ? 20 : 0;
			type += spRight->Checked ? 30 : 0;
			type += spBottom->Checked ? 40 : 0;
			type += dTopRight->Checked ? 1 : 0;
			type += dTopLeft->Checked ? 2 : 0;
			type += dBottomLeft->Checked ? 3 : 0;
			type += dBottomRight->Checked ? 4 : 0;
		};
		//process
		Magicsquare martix(size, type);
		int digit = (log10 (size) + 1) * 2 + 1;
		commandShow->AppendText ("Produce " + System::Convert::ToString (size) + " Magic Square...\r\n");
		commandShow->AppendText ("Space: " + System::Convert::ToString(digit) + "\r\n\r\n");
		//show
		for (int i = 0; i < size; i++)
		{
			String^ tmp = "";
			for (int j = 0; j < size; j++)
			{
				String^ value = System::Convert::ToString (martix.value[i][j]);
				int space = value->Length;
				while (space < digit)
				{
					tmp += " ";
					space++;
				}
				tmp += value;
			}
			textShow->AppendText (tmp);
			textShow->AppendText ("\r\n");	
		}
		textShow->AppendText ("\r\n");
        //show the grid view
        dataTable->Clear();
        for (int i = 0; i < size; i++)
            {
            dataTable->Columns->Add("");
            dataTable->Columns[i]->Width = 40;
            }
        for (int i = 0; i < size; i++)
            dataTable->Items->Add(System::Convert::ToString(martix.value[i][0]));
        for (int i = 0; i < size; i++)
            for (int j = 1; j < size; j++)
                dataTable->Items[i]->SubItems->Add(System::Convert::ToString(martix.value[i][j]));
		//check
		if (examine->Checked)
		{
			int **pTmp = martix.check ();

			commandShow->AppendText ("row count: ");
			for (int i = 0; i < size; i++)
				commandShow->AppendText (System::Convert::ToString (pTmp[0][i]) + " ");
			commandShow->AppendText ("\r\n");

			commandShow->AppendText ("column count: ");
			for (int i = 0; i < size; i++)
				commandShow->AppendText (System::Convert::ToString (pTmp[1][i]) + " ");
			commandShow->AppendText ("\r\n");

			commandShow->AppendText ("oblique: ");
			commandShow->AppendText (System::Convert::ToString (pTmp[2][0]) + " ");
			commandShow->AppendText (System::Convert::ToString (pTmp[2][1]) + " ");
			commandShow->AppendText ("\r\n");

			commandShow->AppendText ("\r\n");
		}
	}
	private: System::Void clearCommand_Click (System::Object^  sender, System::EventArgs^  e)
	{
		commandShow->Clear ();
	}
	private: System::Void clearSquare_Click (System::Object^  sender, System::EventArgs^  e)
	{
		textShow->Clear ();
	}
};
}
