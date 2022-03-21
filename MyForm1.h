#pragma once
namespace StudentC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	public ref class MyForm1 : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlcon = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlRD;
		DataSet^ DS = gcnew DataSet();

		String^ sqlQuary;
		String^ server = "localhost";
		String^ username = "root";
		String^ password = "screenshot";
		String^ database = "cppstudentdb";

	public:
		Form^ Display;


		MyForm1(void)
		{
			InitializeComponent();
		}

		// constructr Overloding for change display

		MyForm1(Form^ display)
		{
			Display = display;
			InitializeComponent();
		}

	protected:
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Cancel;
	private: System::Windows::Forms::TextBox^ studentName;
	protected:

	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ fatherName;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ Mothername;
	private: System::Windows::Forms::TextBox^ fatherMibile;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ village;





	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::Button^ ADD;
	private: System::Windows::Forms::TextBox^ motherMibile;
	private: System::Windows::Forms::TextBox^ semester;




	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ studentMibile;


	private: System::Windows::Forms::Label^ label15;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ batch;

	private: System::Windows::Forms::Label^ label17;


	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::TextBox^ studentId;



	private: System::Windows::Forms::ComboBox^ comboBox6;
private: System::Windows::Forms::ComboBox^ program;



	protected:

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->Cancel = (gcnew System::Windows::Forms::Button());
			this->studentName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->fatherName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Mothername = (gcnew System::Windows::Forms::TextBox());
			this->fatherMibile = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->village = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->ADD = (gcnew System::Windows::Forms::Button());
			this->motherMibile = (gcnew System::Windows::Forms::TextBox());
			this->semester = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->studentMibile = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->batch = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->studentId = (gcnew System::Windows::Forms::TextBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->program = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// Cancel
			// 
			this->Cancel->BackColor = System::Drawing::Color::LightSteelBlue;
			this->Cancel->ForeColor = System::Drawing::Color::ForestGreen;
			this->Cancel->Location = System::Drawing::Point(347, 380);
			this->Cancel->Name = L"Cancel";
			this->Cancel->Size = System::Drawing::Size(145, 40);
			this->Cancel->TabIndex = 0;
			this->Cancel->Text = L"Cancel";
			this->Cancel->UseVisualStyleBackColor = false;
			this->Cancel->Click += gcnew System::EventHandler(this, &MyForm1::Cancel_Click);
			// 
			// studentName
			// 
			this->studentName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->studentName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->studentName->ForeColor = System::Drawing::Color::Black;
			this->studentName->Location = System::Drawing::Point(196, 97);
			this->studentName->Multiline = true;
			this->studentName->Name = L"studentName";
			this->studentName->Size = System::Drawing::Size(189, 20);
			this->studentName->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::ForestGreen;
			this->label1->Location = System::Drawing::Point(193, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 18);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Student Name";
			// 
			// fatherName
			// 
			this->fatherName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->fatherName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fatherName->ForeColor = System::Drawing::Color::Black;
			this->fatherName->Location = System::Drawing::Point(196, 141);
			this->fatherName->Multiline = true;
			this->fatherName->Name = L"fatherName";
			this->fatherName->Size = System::Drawing::Size(189, 20);
			this->fatherName->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::ForestGreen;
			this->label2->Location = System::Drawing::Point(193, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Father Name";
			// 
			// Mothername
			// 
			this->Mothername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Mothername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mothername->ForeColor = System::Drawing::Color::Black;
			this->Mothername->Location = System::Drawing::Point(196, 186);
			this->Mothername->Multiline = true;
			this->Mothername->Name = L"Mothername";
			this->Mothername->Size = System::Drawing::Size(189, 20);
			this->Mothername->TabIndex = 1;
			// 
			// fatherMibile
			// 
			this->fatherMibile->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->fatherMibile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fatherMibile->ForeColor = System::Drawing::Color::Black;
			this->fatherMibile->Location = System::Drawing::Point(196, 274);
			this->fatherMibile->Multiline = true;
			this->fatherMibile->Name = L"fatherMibile";
			this->fatherMibile->Size = System::Drawing::Size(189, 20);
			this->fatherMibile->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::ForestGreen;
			this->label3->Location = System::Drawing::Point(193, 165);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 18);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Mother Name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::ForestGreen;
			this->label4->Location = System::Drawing::Point(193, 253);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(126, 18);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Father Mobile No.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::ForestGreen;
			this->label5->Location = System::Drawing::Point(431, 76);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 18);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Student ID";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::ForestGreen;
			this->label6->Location = System::Drawing::Point(431, 253);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 18);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Relegion";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::ForestGreen;
			this->label7->Location = System::Drawing::Point(431, 208);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 18);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Gender";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::ForestGreen;
			this->label8->Location = System::Drawing::Point(431, 297);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(84, 18);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Blood Grup";
			// 
			// village
			// 
			this->village->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->village->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->village->ForeColor = System::Drawing::Color::Black;
			this->village->Location = System::Drawing::Point(674, 274);
			this->village->Multiline = true;
			this->village->Name = L"village";
			this->village->Size = System::Drawing::Size(189, 20);
			this->village->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::ForestGreen;
			this->label9->Location = System::Drawing::Point(671, 253);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(50, 18);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Village";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::ForestGreen;
			this->label10->Location = System::Drawing::Point(669, 121);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(60, 18);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Division";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::ForestGreen;
			this->label11->Location = System::Drawing::Point(669, 210);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(77, 18);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Subdistrict";
			// 
			// ADD
			// 
			this->ADD->BackColor = System::Drawing::Color::LightBlue;
			this->ADD->ForeColor = System::Drawing::Color::ForestGreen;
			this->ADD->Location = System::Drawing::Point(196, 380);
			this->ADD->Name = L"ADD";
			this->ADD->Size = System::Drawing::Size(145, 40);
			this->ADD->TabIndex = 0;
			this->ADD->Text = L"ADD";
			this->ADD->UseVisualStyleBackColor = false;
			this->ADD->Click += gcnew System::EventHandler(this, &MyForm1::ADD_Click);
			// 
			// motherMibile
			// 
			this->motherMibile->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->motherMibile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->motherMibile->ForeColor = System::Drawing::Color::Black;
			this->motherMibile->Location = System::Drawing::Point(196, 318);
			this->motherMibile->Multiline = true;
			this->motherMibile->Name = L"motherMibile";
			this->motherMibile->Size = System::Drawing::Size(189, 20);
			this->motherMibile->TabIndex = 1;
			// 
			// semester
			// 
			this->semester->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->semester->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->semester->ForeColor = System::Drawing::Color::Black;
			this->semester->Location = System::Drawing::Point(434, 141);
			this->semester->Multiline = true;
			this->semester->Name = L"semester";
			this->semester->Size = System::Drawing::Size(189, 20);
			this->semester->TabIndex = 1;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::ForestGreen;
			this->label13->Location = System::Drawing::Point(193, 297);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(131, 18);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Mother Mobile No.";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::ForestGreen;
			this->label14->Location = System::Drawing::Point(431, 120);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(72, 18);
			this->label14->TabIndex = 2;
			this->label14->Text = L"Semester";
			// 
			// studentMibile
			// 
			this->studentMibile->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->studentMibile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->studentMibile->ForeColor = System::Drawing::Color::Black;
			this->studentMibile->Location = System::Drawing::Point(196, 229);
			this->studentMibile->Multiline = true;
			this->studentMibile->Name = L"studentMibile";
			this->studentMibile->Size = System::Drawing::Size(189, 20);
			this->studentMibile->TabIndex = 1;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::ForestGreen;
			this->label15->Location = System::Drawing::Point(193, 208);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(134, 18);
			this->label15->TabIndex = 2;
			this->label15->Text = L"Student Mobile No.";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::ForestGreen;
			this->label16->Location = System::Drawing::Point(431, 164);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(66, 18);
			this->label16->TabIndex = 2;
			this->label16->Text = L"Program";
			// 
			// batch
			// 
			this->batch->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->batch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->batch->ForeColor = System::Drawing::Color::Black;
			this->batch->Location = System::Drawing::Point(672, 97);
			this->batch->Multiline = true;
			this->batch->Name = L"batch";
			this->batch->Size = System::Drawing::Size(189, 20);
			this->batch->TabIndex = 1;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::ForestGreen;
			this->label17->Location = System::Drawing::Point(669, 76);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(46, 18);
			this->label17->TabIndex = 2;
			this->label17->Text = L"Batch";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->comboBox1->Location = System::Drawing::Point(434, 229);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(189, 21);
			this->comboBox1->TabIndex = 3;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"A+", L"B+", L"AB+", L"O+", L"A-", L"B-", L"AB-",
					L"O-"
			});
			this->comboBox2->Location = System::Drawing::Point(434, 317);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(189, 21);
			this->comboBox2->TabIndex = 4;
			// 
			// comboBox3
			// 
			this->comboBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Dhaka Division", L"Rajshahi Division", L"Chittagong Division",
					L"Khulna Division", L"Barisal Division", L"Mymensingh Division", L"Sylhet Division", L"Rangpur Division"
			});
			this->comboBox3->Location = System::Drawing::Point(672, 142);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(189, 21);
			this->comboBox3->TabIndex = 5;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox3_SelectedIndexChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::ForestGreen;
			this->label12->Location = System::Drawing::Point(669, 165);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(54, 18);
			this->label12->TabIndex = 2;
			this->label12->Text = L"District";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(672, 186);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(189, 21);
			this->comboBox4->TabIndex = 5;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox4_SelectedIndexChanged);
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(672, 230);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(189, 21);
			this->comboBox5->TabIndex = 5;
			// 
			// studentId
			// 
			this->studentId->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->studentId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->studentId->ForeColor = System::Drawing::Color::Black;
			this->studentId->Location = System::Drawing::Point(434, 97);
			this->studentId->Multiline = true;
			this->studentId->Name = L"studentId";
			this->studentId->Size = System::Drawing::Size(189, 20);
			this->studentId->TabIndex = 1;
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Muslims", L"Hinduism", L"Buddhism", L"Christianity",
					L"Other religions"
			});
			this->comboBox6->Location = System::Drawing::Point(434, 273);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(189, 21);
			this->comboBox6->TabIndex = 6;
			// 
			// program
			// 
			this->program->FormattingEnabled = true;
			this->program->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"BA Honors in English", L"BSS Honors in Sociology",
					L"BSS Honors in Economics", L"BSS Honors in JCMS", L"B Pharm Honors (Pharmacy)", L"B. Sc. in CSE", L"B. Sc. in EEE", L"BBA",
					L"LLB Honors", L"BSS in Political Science", L"BA in Islamic History"
			});
			this->program->Location = System::Drawing::Point(434, 184);
			this->program->Name = L"program";
			this->program->Size = System::Drawing::Size(189, 21);
			this->program->TabIndex = 7;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::Color::PaleGreen;
			this->ClientSize = System::Drawing::Size(1100, 500);
			this->Controls->Add(this->program);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->semester);
			this->Controls->Add(this->fatherMibile);
			this->Controls->Add(this->motherMibile);
			this->Controls->Add(this->village);
			this->Controls->Add(this->Mothername);
			this->Controls->Add(this->batch);
			this->Controls->Add(this->studentId);
			this->Controls->Add(this->fatherName);
			this->Controls->Add(this->studentMibile);
			this->Controls->Add(this->studentName);
			this->Controls->Add(this->ADD);
			this->Controls->Add(this->Cancel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm1";
			this->Text = L"Add Student";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		// for Dhaka Division

		if (comboBox3->SelectedItem == L"Dhaka Division")
		{
			comboBox4->Items->Clear();
			comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Dhaka District",
					L"Gazipur District",
					L"Kishoreganj District",
					L"Manikganj District"
					L"Munshiganj District",
					L"Narayanganj District",
					L"Narsingdi District",
					L"Tangail District"
					L"Faridpur District",
					L"Gopalganj District"
			});
		}

		// for Rajshahi division

		if (comboBox3->SelectedItem == L"Rajshahi Division")
		{
			comboBox4->Items->Clear();
			comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Rajshahi District",
					L"Sirajganj District",
					L"Pabna District",
					L"Bogura District",
					L"Chapainawabganj District",
					L"Naogaon District",
					L"Joypurhat District",
					L"Natore District",
			});
		}

		// for Chittagong Division

		if (comboBox3->SelectedItem == L"Chittagong Division")
		{
			comboBox4->Items->Clear();
			comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Brahmanbaria District",
					L"Comilla District",
					L"Chandpur District",
					L"Lakshmipur District",
					L"Noakhali District",
					L"Feni District",
					L"Cox's Bazar District",
					L"Chittagong District",
			});
		}

		// for Khulna Division 

		if (comboBox3->SelectedItem == L"Khulna Division")
		{
			comboBox4->Items->Clear();
			comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Bagerhat District",
					L"Jashore District",
					L"Chandpur District",
					L"Jhenaidah District",
					L"Khulna District",
					L"Meherpur District",
					L"Narail District",
					L"Satkhira District",
			});
		}

		// for Barisal Division

		if (comboBox3->SelectedItem == L"Barisal Division")
		{
			comboBox4->Items->Clear();
			comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Barisal District",
					L"Barguna District",
					L"Bhola District",
					L"Jhalokati District",
					L"Patuakhali District",
					L"Pirojpur District",
			});
		}

		// for Mymensingh Division

		if (comboBox3->SelectedItem == L"Mymensingh Division")
		{
			comboBox4->Items->Clear();
			comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Mymensingh District",
					L"Netrokona District",
					L"Jamalpur District",
					L"Sherpur District",
			});
		}

		// for Sylhet Division

		if (comboBox3->SelectedItem == L"Sylhet Division")
		{
			comboBox4->Items->Clear();
			comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Habiganj District",
					L"Moulvibazar District",
					L"Sunamganj District",
					L"Sylhet District",
			});
		}

		// for Rangpur Division

		if (comboBox3->SelectedItem == L"Rangpur Division")
		{
			comboBox4->Items->Clear();
			comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Dinajpur District",
					L"Kurigram District",
					L"Gaibandha District",
					L"Lalmonirhat District",
					L"Nilphamari District",
					L"Panchagarh District",
					L"Rangpur District",
					L"Thakurgaon District",
			});
		}

	}

	private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		System::String^ swtc = (this->comboBox4->SelectedItem->ToString());

		if (comboBox4->SelectedItem == L"Dhaka District")
		{
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(5) {
				L"Dohar Upazila",
					L"Keraniganj Upazila",
					L"Dhamrai Upazila",
					L"Nawabganj Upazila",
					L"Savar Upazila",
				});
			}
		if (comboBox4->SelectedItem == L"Narayanganj District")
		{
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(7) {
				L"Narayanganj Sadar Upazila",
					L"Araihazar Upazila",
					L"Rupganj Upazila",
					L"Bandar Upazila",
					L"Sonargaon Upazila",
					L"Siddhirganj Upazila",
					L"Fatullah Upazila",
				});
			}

		if (comboBox4->SelectedItem == L"Gazipur District")
		{
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(6) {
				L"Gazipur Sadar Upazila",
					L"Kapasia Upazila",
					L"Tongi town(Upazila)",
					L"Sripur Upazila",
					L"Kaliganj Upazila",
					L"Kaliakior Upazila",

				});
			}
																			
		if (comboBox4->SelectedItem == L"Tangail District")
		{
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(12) {
				L"Tangail Sadar Upazila",
					L"Basail Upazila",
					L"Bhuapur Upazila",
					L"Delduar Upazila",
					L"Dhonbari Upazila",
					L"Ghatail Upazila",
					L"Gopalpur Upazila",
					L"Kalihati Upazila",
					L"Madhupur Upazila",
					L"Mirzapur Upazila",
					L"Nagarpur Upazila",
					L"Sakhipur Upazila",
				});
			}
		
		
		if (comboBox4->SelectedItem == L"Manikganj District")
		{
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(7) {
				L"Manikganj Sadar Upazila",
					L"Singair Upazila",
					L"Daulatpur Upazila",
					L"Saturia Upazila",
					L"Ghior Upazila",
					L"Shivalaya Upazila",
					L"Harirampur Upazila",

				});
			}

		if (comboBox4->SelectedItem == L"Kishoreganj District")
		{
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(13) {
				L"Kishoreganj Sadar Upazila",
					L"Bhairab Upazila",
					L"Bajitpur Upazila",
					L"Kuliarchar Upazila",
					L"Pakundia Upazila",
					L"Itna Upazila",
					L"Karimganj Upazila",
					L"Katiadi Upazila",
					L"Austagram Upazila",
					L"Mithamain Upazila",
					L"Tarail Upazila",
					L"Hossainpur Upazila",
					L"Nikli Upazila",

				});
			}
		
		if (comboBox4->SelectedItem == L"Gopalganj District")
		{
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(5) {
				L"Gopalganj Sadar Upazila",
					L"Tungipara Upazila",
					L"Kotalipara Upazila",
					L"Kashiani Upazila",
					L"Muksudpur Upazila",

				});
			}

		if (comboBox4->SelectedItem == L"Munshiganj District")
		{
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(6) {
				L"Munshiganj Sadar Upazila",
					L"Sreenagar Upazila",
					L"Lohajang Upazila",
					L"Sirajdikhan Upazila",
					L"Gazaria Upazila",
					L"Tongibari Upazila",

				});
			}
		
		if (comboBox4->SelectedItem == L"Narsingdi District")
		{
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(6) {
				L"Narsingdi Sadar Upazila",
					L"Monohardi Upazila",
					L"Belabo Upazila",
					L"Raipura Upazila",
					L"Shibpur Upazila",
					L"Palash Upazila",

				});
			}
			
		if (comboBox4->SelectedItem == L"Faridpur District")
		{
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(9) {
				L"Faridpur Sadar Upazila",
					L"Bhanga Upazila",
					L"Madhukhali Upazila",
					L"Sadarpur Upazila",
					L"Alfadanga Upazila",
					L"Boalmari Upazila",
					L"Charbhadrasan Upazila",
					L"Nagarkanda Upazila",
					L"Shaltha Upazila",
				});
			}

		if (comboBox4->SelectedItem == "Pabna District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(9) {
				L"Pabna Sadar Upazila",
					L"Santhia Upazila",
					L"Bera Upazila",
					L"Sujanagar Upazila",
					L"Atgharia Upazila",
					L"Bhangura Upazila",
					L"Faridpur Upazila",
					L"Chatmohar Upazila",
					L"Ishwardi Upazila",
				});
			}

		if (comboBox4->SelectedItem == "Bogura District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(12) {
				L"Bogra Sadar Upazila",
					L"Gabtali Upazila",
					L"Sariakandi Upazila",
					L"Adamdighi Upazila",
					L"Sonatala Upazila",
					L"Sherpur Upazila",
					L"Kahaloo Upazila",
					L"Shibganj Upazila",
					L"Dupchanchia Upazila",
					L"Nandigram Upazila",
					L"Sahajanpur Upazila",
					L"Dhunat Upazila",
				});
			}

		if (comboBox4->SelectedItem == "Chapainawabganj District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(5) {
				L"Chapai Nawabganj Sadar Upazila",
					L"Nachole Upazila",
					L"Shibganj Upazila",
					L"Gomastapur Upazila",
					L"Bholahat Upazila",
				});
			}

		if (comboBox4->SelectedItem == "Naogaon District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(11) {
				L"Naogaon Sadar Upazila",
					L"Atrai Upazila Upazila",
					L"Dhamoirhat Upazila",
					L"Badalgachhi Upazila",
					L"Niamatpur Upazila",
					L"Manda Upazila",
					L"Mohadevpur Upazila",
					L"Patnitala Upazila",
					L"Porsha Upazila",
					L"Sapahar Upazila",
					L"Raninagar Upazila",
				});
			}
		
		if (comboBox4->SelectedItem == "Joypurhat District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(5) {
				L"Joypurhat Sadar Upazila",
					L"Akkelpur Upazila",
					L"Khetlal Upazila",
					L"Panchbibi Upazila",
					L"Kalai Upazila",
				});
			}

		if (comboBox4->SelectedItem == "Natore District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(6) {
				L"Natore Sadar Upazila",
					L"Bagatipara Upazilla",
					L"Singra Upazila",
					L"Boraigram Upazila",
					L"Gurudaspur Upazila",
					L"Lalpur Upazila",
				});
			}





		if (comboBox4->SelectedItem == "Brahmanbaria District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(9) {
				L"Brahmanbaria(B.Baria) Sadar Upazila",
					L"Bijoynagar Upazila",
					L"Akhaura Upazila",
					L"Ashuganj Upazila",
					L"Bancharampur Upazila",
					L"Kasba Upazila",
					L"Nabinagar Upazila",
					L"Nasirnagar Upazila",
					L"Sarail Upazila",
			});
		}

		if (comboBox4->SelectedItem == "Comilla District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(16) {
				L"Comilla Sadar South Upazila",
					L"Comilla Adarsa Sadar Upazila",
					L"Barura Upazila",
					L"Chandina Upazila",
					L"Chauddagram Upazila",
					L"Daudkandi Upazila",
					L"Brahmanpara Upazila",
					L"Homna Upazila",
					L"Monohorgonj Upazila",
					L"Laksam Upazila",
					L"Debidwar Upazila",
					L"Meghna Upazila",
					L"Muradnagar Upazila",
					L"Nangalkot Upazila",
					L"Burichong Upazila",
					L"Titas Upazila",
			});
		}

		if (comboBox4->SelectedItem == "Chandpur District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(8) {
				L"Chandpur Sadar Upazila",
					L"Haziganj Upazila",
					L"Shahrasti Upazila",
					L"Haimchar Upazila",
					L"Faridganj Upazila",
					L"Kachua Upazila",
					L"Matlab Uttar Upazila",
					L"Matlab Dakkhin Upazila",
			});
		}


		if (comboBox4->SelectedItem == "Lakshmipur District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(5) {
				L"Lakshmipur (Laxmipur) Sadar Upazila",
					L"Ramgati Upazila",
					L"Komolnagar Upazila",
					L"Raipur Upazila",
					L"Ramganj Upazila",
			});
		}

		if (comboBox4->SelectedItem == "Noakhali District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(9) {
				L"Noakhali Sadar Upazila",
					L"Begumganj Upazila",
					L"Senbag Upazila",
					L"Companiganj Upazila",
					L"Chatkhil Upazila",
					L"Sonaimuri Upazila",
					L"Hatiya Upazila",
					L"Subarnachar Upazila",
					L"Kabirhat Upazila",

			});
		}

		if (comboBox4->SelectedItem == "Feni District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(6) {
				L"Feni Sadar Upazila",
					L"Daganbhuiyan Upazila",
					L"Chhagalnaiya Upazila",
					L"Porshuram Upazila",
					L"Fulgazi Upazila",
					L"Sonagazi Upazila",

			});
		}

		if (comboBox4->SelectedItem == "Cox's Bazar District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(8) {
				L"Cox's Bazar Sadar Upazila",
					L"Teknaf Upazila",
					L"Chakaria Upazila",
					L"Maheshkhali Upazila",
					L"Pekua Upazila",
					L"Kutubdia Upazila",
					L"Ukhia Upazila",
					L"Ramu Upazila",
			});
		}

		if (comboBox4->SelectedItem == "Chittagong District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(14) {
				L"Mirsharai Upazila",
					L"Rangunia Upazila",
					L"Patiya Upazila",
					L"Raozan Upazila",
					L"Sandwip Upazila",
					L"Satkania Upazila",
					L"Sitakunda Upazila",
					L"Anwara Upazila",
					L"Banshkhali Upazila",
					L"Boalkhali Upazila",
					L"Chandanaish Upazila",
					L"Fatikchhari Upazila",
					L"Hathazari Upazila",
					L"Lohagara Upazila",
			});
		}

		if (comboBox4->SelectedItem == "Bagerhat District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(9) {
				L"Bagerhat Sadar Upazila",
					L"Mongla Upazila",
					L"Chitalmari Upazila",
					L"Mollahat Upazila",
					L"Sarankhola Upazila",
					L"Rampal Upazila",
					L"Fakirhat Upazila",
					L"Morrelganj Upazila",
					L"Kachua Upazila",
			});
		}

		if (comboBox4->SelectedItem == "Jashore District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(8) {
				L"Jessore Sadar Upazila",
					L"Jhikargachha Upazila",
					L"Manirampur Upazila",
					L"Bagherpara Upazila",
					L"Abhaynagar Upazila",
					L"Keshabpur Upazila",
					L"Sharsha Upazila",
					L"Chaugachha Upazila",
			});
		}
		if (comboBox4->SelectedItem == "Jhenaidah District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(6) {
				L"Jhenaidah Sadar Upazila",
					L"Shailkupa Upazila",
					L"Harinakunda Upazila",
					L"Maheshpur Upazila",
					L"Kotchandpur Upazila",
					L"Kaliganj Upazila",
			});
		}

		if (comboBox4->SelectedItem == "Khulna District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(9) {
				L"Dumuria Upazila",
					L"Batiaghata Upazila",
					L"Dacope Upazila",
					L"Phultala Upazila",
					L"Dighalia Upazila",
					L"Koyra Upazila",
					L"Terokhada Upazila",
					L"Rupsha Upazila",
					L"Paikgachha Upazila",
			});
		}

		if (comboBox4->SelectedItem == "Meherpur District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(3) {
				L"Meherpur Sadar Upazila",
					L"Mujibnagar Upazila",
					L"Gangni Upazila",
			});
		}

		if (comboBox4->SelectedItem == "Narail District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(3) {
				L"Narail Sadar Upazila",
					L"Lohagara Upazila",
					L"Kalia Upazila",
			});
		}

		if (comboBox4->SelectedItem == "Satkhira District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(7) {
				L"Satkhira Sadar Upazila",
					L"Shyamnagar Upazila",
					L"Assasuni Upazila",
					L"Kaliganj Upazila",
					L"Debhata Upazila",
					L"Kalaroa Upazila",
					L"Tala Upazila",
			});
		}

		if (comboBox4->SelectedItem == "Barisal District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(10) {
				L"Barisal Sadar Upazila",
					L"Banaripara Upazila",
					L"Bakerganj Upazila",
					L"Babuganj Upazila",
					L"Gaurnadi Upazila",
					L"Hizla Upazila",
					L"Mehendiganj Upazila",
					L"Agailjhara Upazila",
					L"Wazirpur Upazila",
					L"Muladi Upazila",
			});
		}

		if (comboBox4->SelectedItem == "Barguna District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(6) {
				L"Barguna Sadar Upazila",
					L"Betagi Upazila",
					L"Bamna Upazila",
					L"Patharghata Upazila",
					L"Amtali Upazila",
					L"Taltali Upazila",
			});
		}

		if (comboBox4->SelectedItem == "Bhola District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(7) {
				L"Bhola Sadar Upazila",
					L"Char Fasson Upazila",
					L"Manpura Upazila",
					L"Burhanuddin Upazila",
					L"Tazumuddin Upazila",
					L"Daulatkhan Upazila",
					L"Lalmohan Upazila",
			});
		}

		if (comboBox4->SelectedItem == "Jhalokati District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(4) {
				L"Jhalokati Sadar Upazila",
					L"Nalchity Upazila",
					L"Kathalia Upazila",
					L"Rajapur Upazila"
			});
		}

		if (comboBox4->SelectedItem == "Patuakhali District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(8) {
				L"Patuakhali Sadar Upazila",
					L"Galachipa Upazila",
					L"Dumki Upazila",
					L"Mirzaganj Upazila",
					L"Dasmina Upazila",
					L"Bauphal Upazila",
					L"Kalapara Upazila",
					L"Rangabali Upazila",

			});
		}

		if (comboBox4->SelectedItem == "Pirojpur District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(7) {
				L"Pirojpur Sadar Upazila",
					L"Zianagar Upazila",
					L"Mathbaria Upazila",
					L"Bhandaria Upazila",
					L"Kawkhali Upazila",
					L"Nesarabad (Swarupkathi) Upazila",
					L"Nazirpur Upazila",

			});
		}


		if (comboBox4->SelectedItem == "Mymensingh District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(12) {
				L"Mymensingh Sadar Upazila",
					L"Muktagachha Upazila",
					L"Valuka Upazila",
					L"Haluaghat Upazila",
					L"Gouripur Upazila",
					L"Dhobaura Upazila",
					L"Fulbaria Upazila",
					L"Gafargaon Upazila ",
					L"Trishal Upazila",
					L"Fulpur Upazila",
					L"Nandail Upazila",
					L"Ishwarganj Upazila",
			});
		}

		if (comboBox4->SelectedItem == "Netrokona District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(10) {
				L"Netrokona Sadar Upazila",
					L"Kendua Upazila",
					L"Mohangonj Upazila ",
					L"Khaliajuri Upazila",
					L"Purbodhola Upazila",
					L"Atpara Upazila",
					L"Modon Upazila",
					L"Kolmkakanda Upazila",
					L"Barhatta Upazila",
					L"Durgapur Upazila",

			});
		}

		if (comboBox4->SelectedItem == "Jamalpur District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(7) {
				L"Jamalpur Sadar Upazila",
					L"Baksiganj Upazila",
					L"Dewanganj Upazila",
					L"Islampur Upazila",
					L"Madarganj Upazila",
					L"Melandaha Upazila",
					L"Sarishabari Upazila",
			});
		}

		if (comboBox4->SelectedItem == "Sherpur District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(5) {
				L"Sherpur Sadar Upazila",
					L"Nakla Upazila",
					L"Sreebardi Upazila",
					L"Nalitabari Upazila",
					L"Jhenaigati Upazila",
			});
		}

		if (comboBox4->SelectedItem == "Habiganj District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(8) {
				L"Habiganj Sadar Upazila",
					L"Lakhai Upazila",
					L"Madhabpur Upazila",
					L"Nabiganj Upazila",
					L"Chunarughat Upazila",
					L"Baniachang Upazila",
					L"Bahubal Upazila",
					L"Ajmiriganj Upazila",

			});
		}

		if (comboBox4->SelectedItem == "Moulvibazar District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(7) {
				L"Moulvibazar Sadar Upazila",
					L"SreeMangal Upazila",
					L"Kulaura Upazila",
					L"Kamalganj Upazila",
					L"Juri Upazila",
					L"Barlekha Upazila",
					L"Rajnagar Upazila",
			});
		}

		if (comboBox4->SelectedItem == "Sunamganj District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(11) {
				L"Sunamganj Sadar Upazila",
					L"Sunamganj South Upazila",
					L"Chhatak Upazila",
					L"Jagannathpur Upazila",
					L"Bishwamvarpur Upazila",
					L"Tahirpur Upazila",
					L"Derai Upazila",
					L"Dharampasha Upazila",
					L"Sulla Upazila",
					L"Dowarabazar Upazila",
					L"Jamalganj Upazila",
			});
		}

		if (comboBox4->SelectedItem == "Sylhet District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(12) {
				L"Sylhet Sadar Upazila ",
					L"Beanibazar Upazila",
					L"Golapganj Upazila",
					L"Companiganj Upazila",
					L"Fenchuganj Upazila",
					L"Bishwanath Upazila",
					L"Gowainghat Upazila",
					L"Jaintiapur Upazila",
					L"Kanaighat Upazila",
					L"Balaganj Upazila",
					L"South Shurma Upazila ",
					L"Zakiganj Upazila",

			});
		}

		if (comboBox4->SelectedItem == "Dinajpur District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(13) {
				L"Dinajpur Sadar Upazila",
					L"Birampur Upazila",
					L"Biral Upazila",
					L"Phulbari Upazila",
					L"Hakimpur Upazila",
					L"Khansama Upazila",
					L"Nawabganj Upazila",
					L"Parbatipur Upazila",
					L"Birganj Upazila",
					L"Kaharole Upazila",
					L"Chirirbandar Upazila",
					L"Ghoraghat Upazila",
					L"Bochaganj Upazila",
			});
		}

		if (comboBox4->SelectedItem == "Kurigram District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(9) {
				L"Kurigram Sadar Upazila",
					L"Phulbari Upazila",
					L"Nageshwari Upazila",
					L"Rajarha Upazila",
					L"Bhurungamari Upazila",
					L"Ulipur Upazila",
					L"Char Rajibpur Upazila",
					L"Rowmari Upazila",
					L"Chilmari Upazila",
			});
		}

		if (comboBox4->SelectedItem == "Gaibandha District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(7) {
				L"Gaibandha Sadar Upazila",
					L"Palashbari Upazila",
					L"Fulchhari Upazila",
					L"Sadullapur Upazila",
					L"Sundarganj Upazila",
					L"Gobindaganj Upazila",
					L"Saghata Upazila",

			});
		}

		if (comboBox4->SelectedItem == "Lalmonirhat District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(5) {
				L"Lalmonirhat Sadar Upazila",
					L"Patgram Upazila",
					L"Aditmari Upazila",
					L"Hatibandha Upazila",
					L"Kaliganj Upazila",
			});
		}

		if (comboBox4->SelectedItem == "Nilphamari District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(6) {
				L"Nilphamari Sadar Upazila",
					L"Jaldhaka Upazila",
					L"Saidpur Upazila",
					L"Dimla Upazila",
					L"Kishoreganj Upazila",
					L"Domar Upazila",
			});
		}

		if (comboBox4->SelectedItem == "Panchagarh District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(5) {
				L"Panchagarh Sadar Upazila",
					L"Atwari Upazila",
					L"Boda Upazila",
					L"Debiganj Upazila",
					L"Tetulia Upazila",
			});
		}

		if (comboBox4->SelectedItem == "Rangpur District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(8) {
				L"Rangpur Sadar Upazila",
					L"Badarganj Upazila",
					L"Kaunia Upazila",
					L"Gangachhara Upazila",
					L"Mithapukur Upazila",
					L"Taraganj Upazila",
					L"Pirganj Upazila",
					L"Pirgachha Upazila",

			});
		}

		if (comboBox4->SelectedItem == "Thakurgaon District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(5) {
				L"Thakurgaon Sadar Upazila (",
					L"Baliadangi Upazila",
					L"Pirganj Upazila",
					L"Ranisankail Upazila",
					L"Haripur Upazila",
				});
			}
		
		if (comboBox4->SelectedItem == "Rajshahi District") {
			comboBox5->Items->Clear();
			comboBox5->Items->AddRange(gcnew cli::array<System::Object^ >(9) {
				L"Bagmara Upazila",
					L"Paba Upazila",
					L"Charghat Upazila",
					L"Durgapur Upazila",
					L"Godagari Upazila",
					L"Mohanpur Upazila",
					L"Bagha Upazila",
					L"Puthia Upazila",
					L"Tanore Upazila",
				});
			}
		}



		// add Button Functionality
	private: System::Void ADD_Click(System::Object^ sender, System::EventArgs^ e) {
		
		sqlcon->ConnectionString = "server=" + server + ";" + "username=" + username + ";"
			"password=" + password + ";" + "database =" + database;

		try
		{
			sqlcon->Open();
			/*sqlQuary = "insert into cppstudentdb(Student Name, Father Name, Mother Name, Student Mobil No,"
				"Father Mobile No, Mother Mobil No, Student Id, Semester, Program, Gender, Relegion, Blood Grup,"
				"Batch, Division, District, Subdistrict, Village) values(" + studentName->Text + "','" +
				fatherName->Text + "','" + Mothername->Text + "','" + studentId->Text + "','" + semester->Text + "','" + program->Text
				+ "','" + comboBox1->Text + "','" + comboBox6->Text + "','" + comboBox2->Text + "','" + batch->Text + "','" + comboBox3->Text
				+ "','" + comboBox4->Text + "','" + comboBox5->Text + "','" + village->Text;*/

			//sqlQuary = "INSERT INTO 'mystudent.student' ('Student Name', 'Father Name', 'Mother Name') VALUES ( studentName, fatherName, Mothername);";

			sqlCmd = gcnew MySqlCommand("INSERT INTO 'mystudent.student' ('Student Name', 'Father Name', 'Mother Name') VALUES ( 'studentName', 'fatherName', 'Mothername');", sqlcon);
			sqlRD = sqlCmd->ExecuteReader();
			sqlcon->Close();
		}

		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

		finally { sqlcon->Close(); }

		System::Windows::Forms::DialogResult iAdd;
		System::Windows::Forms::DialogResult ShowMsg;

		iAdd = MessageBox::Show("Conferm If You wnat to Add this Student",
			"Varandra Univercity Student Management System", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question);
		if (iAdd == System::Windows::Forms::DialogResult::Yes)
		{
			this->Hide();
			Display->Show();
			
			ShowMsg = MessageBox::Show("Student Detels Add Scussesfull", "", MessageBoxButtons::OK,
				MessageBoxIcon::Asterisk);
		}
		else if (iAdd == System::Windows::Forms::DialogResult::No)
		{
			this->Hide();
			Display->Show();
			ShowMsg = MessageBox::Show("Student Detels Did not Add!", "", MessageBoxButtons::OK,
				MessageBoxIcon::Asterisk);
		}
	}
		   // cancel Button Functionality

	private:
		System::Void Cancel_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Hide();
			Display->Show();
		}
	};
}