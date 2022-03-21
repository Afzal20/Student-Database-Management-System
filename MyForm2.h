#pragma once

namespace StudentC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		Form^ Dispaly;
		MyForm2(void)
		{
			InitializeComponent();
		}
		// constructr Overloding for change display
		MyForm2(Form^ dispaly)
		{
			Dispaly = dispaly;
			InitializeComponent();
		}

	protected:
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Delete;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->Delete = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Delete
			// 
			this->Delete->BackColor = System::Drawing::Color::LightCoral;
			this->Delete->Location = System::Drawing::Point(81, 424);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(162, 50);
			this->Delete->TabIndex = 0;
			this->Delete->Text = L"Delete";
			this->Delete->UseVisualStyleBackColor = false;
			this->Delete->Click += gcnew System::EventHandler(this, &MyForm2::Delete_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->button1->Location = System::Drawing::Point(894, 424);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(162, 50);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Cancel ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::ForestGreen;
			this->label16->Location = System::Drawing::Point(247, 232);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(66, 18);
			this->label16->TabIndex = 20;
			this->label16->Text = L"Program";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::ForestGreen;
			this->label14->Location = System::Drawing::Point(485, 232);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(72, 18);
			this->label14->TabIndex = 18;
			this->label14->Text = L"Semester";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::ForestGreen;
			this->label18->Location = System::Drawing::Point(723, 232);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(58, 18);
			this->label18->TabIndex = 14;
			this->label18->Text = L"Seation";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::ForestGreen;
			this->label17->Location = System::Drawing::Point(723, 188);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(46, 18);
			this->label17->TabIndex = 13;
			this->label17->Text = L"Batch";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::ForestGreen;
			this->label5->Location = System::Drawing::Point(485, 188);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 18);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Student ID";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::ForestGreen;
			this->label1->Location = System::Drawing::Point(247, 188);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 18);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Student Name";
			// 
			// textBox16
			// 
			this->textBox16->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox16->ForeColor = System::Drawing::Color::Black;
			this->textBox16->Location = System::Drawing::Point(250, 253);
			this->textBox16->Multiline = true;
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(189, 20);
			this->textBox16->TabIndex = 10;
			// 
			// textBox14
			// 
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->ForeColor = System::Drawing::Color::Black;
			this->textBox14->Location = System::Drawing::Point(488, 253);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(189, 20);
			this->textBox14->TabIndex = 9;
			// 
			// textBox18
			// 
			this->textBox18->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox18->ForeColor = System::Drawing::Color::Black;
			this->textBox18->Location = System::Drawing::Point(726, 253);
			this->textBox18->Multiline = true;
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(189, 20);
			this->textBox18->TabIndex = 6;
			// 
			// textBox17
			// 
			this->textBox17->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox17->ForeColor = System::Drawing::Color::Black;
			this->textBox17->Location = System::Drawing::Point(726, 209);
			this->textBox17->Multiline = true;
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(189, 20);
			this->textBox17->TabIndex = 5;
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::Black;
			this->textBox5->Location = System::Drawing::Point(488, 209);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(189, 20);
			this->textBox5->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(250, 209);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(189, 20);
			this->textBox1->TabIndex = 3;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::Color::PaleGreen;
			this->ClientSize = System::Drawing::Size(1162, 507);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Delete);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// finctionality for Delet Button

	private: System::Void Delete_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult iConferm;
		System::Windows::Forms::DialogResult ShowMsg;

		iConferm = MessageBox::Show("Conferm If You wnat to delete this Student detels", 
			"Varandra Univercity Student Management System",
			MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question);

		// If Yes 

		if (iConferm == System::Windows::Forms::DialogResult::Yes)
		{
			this->Hide();
			Dispaly->Show();
			ShowMsg = MessageBox::Show("Student Detels is Remuved", "", MessageBoxButtons::OK,
				MessageBoxIcon::Asterisk);
		}

		// If No

		else if (iConferm == System::Windows::Forms::DialogResult::No)
		{
			this->Hide();
			Dispaly->Show();
			ShowMsg = MessageBox::Show("Student Detels Did not Delete", "", MessageBoxButtons::OK,
				MessageBoxIcon::Asterisk);
		}
		
	}

		   // finctionality for Cancel Button

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Dispaly->Show();
	}
	};
}
