#pragma once
#include "RKfuncs.h"

namespace RK4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		
		MyForm(void)
		{
			InitializeComponent();

			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label11;

	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  i1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Hi11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Xi1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Vi1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Vi12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Vi1_Vi12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  S1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Vi11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Vi111;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  double1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  xx1;














	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->i1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Hi11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Xi1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vi1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vi12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vi1_Vi12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->S1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vi11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vi111 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->double1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->xx1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(187, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Исходное уравнение:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(13, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"L dI/dx + R I = V";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::Color::Crimson;
			this->groupBox1->Location = System::Drawing::Point(17, 94);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(211, 141);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры задачи:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(39, 115);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(106, 24);
			this->textBox3->TabIndex = 5;
			this->textBox3->Text = L"0";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(39, 81);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(106, 24);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"0";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(39, 48);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(106, 24);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(5, 118);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 18);
			this->label5->TabIndex = 2;
			this->label5->Text = L"V=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(6, 84);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 18);
			this->label4->TabIndex = 1;
			this->label4->Text = L"R=";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(6, 51);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 18);
			this->label3->TabIndex = 0;
			this->label3->Text = L"L=";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->checkBox2);
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->ForeColor = System::Drawing::Color::Crimson;
			this->groupBox2->Location = System::Drawing::Point(234, 94);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(237, 141);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Параметры метода:";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(198, 115);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(18, 17);
			this->checkBox2->TabIndex = 7;
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(198, 81);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(18, 17);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(93, 110);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(89, 24);
			this->textBox4->TabIndex = 5;
			this->textBox4->Text = L"0,0000005";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(93, 76);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(89, 24);
			this->textBox5->TabIndex = 4;
			this->textBox5->Text = L"100";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(93, 46);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(89, 24);
			this->textBox6->TabIndex = 3;
			this->textBox6->Text = L"0";
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(6, 116);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 18);
			this->label6->TabIndex = 2;
			this->label6->Text = L"infControl";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(4, 79);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(82, 18);
			this->label7->TabIndex = 1;
			this->label7->Text = L"MaxSteps";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(6, 46);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(71, 18);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Нач.шаг";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox7);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->ForeColor = System::Drawing::Color::Crimson;
			this->groupBox3->Location = System::Drawing::Point(257, 9);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(214, 59);
			this->groupBox3->TabIndex = 7;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Нач.Условия:";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(137, 28);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(76, 24);
			this->textBox7->TabIndex = 6;
			this->textBox7->Text = L"0";
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(99, 29);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(32, 21);
			this->label10->TabIndex = 1;
			this->label10->Text = L"I0=";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(14, 30);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 18);
			this->label9->TabIndex = 0;
			this->label9->Text = L"x0=0";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBox8);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->checkedListBox1);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox4->ForeColor = System::Drawing::Color::Crimson;
			this->groupBox4->Location = System::Drawing::Point(486, 18);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(198, 123);
			this->groupBox4->TabIndex = 8;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Контроль ЛП:";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(57, 90);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(135, 24);
			this->textBox8->TabIndex = 7;
			this->textBox8->Text = L"0,00005";
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(8, 93);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(43, 21);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Eps=";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->CheckOnClick = true;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Сверху и снизу", L"Сверху", L"Без контроля" });
			this->checkedListBox1->Location = System::Drawing::Point(6, 23);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(186, 61);
			this->checkedListBox1->TabIndex = 0;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::checkedListBox1_SelectedIndexChanged);
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(726, 18);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(650, 664);
			this->zedGraphControl1->TabIndex = 10;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label19);
			this->groupBox5->Controls->Add(this->label18);
			this->groupBox5->Controls->Add(this->label17);
			this->groupBox5->Controls->Add(this->label16);
			this->groupBox5->Controls->Add(this->label15);
			this->groupBox5->Controls->Add(this->label14);
			this->groupBox5->Controls->Add(this->label13);
			this->groupBox5->Controls->Add(this->label12);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox5->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->groupBox5->Location = System::Drawing::Point(486, 156);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(233, 165);
			this->groupBox5->TabIndex = 11;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Справка";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(167, 134);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(17, 18);
			this->label19->TabIndex = 8;
			this->label19->Text = L"0";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(149, 104);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(17, 18);
			this->label18->TabIndex = 7;
			this->label18->Text = L"0";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(183, 70);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(17, 18);
			this->label17->TabIndex = 6;
			this->label17->Text = L"0";
			this->label17->Click += gcnew System::EventHandler(this, &MyForm::label17_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(134, 31);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(17, 18);
			this->label16->TabIndex = 5;
			this->label16->Text = L"0";
			this->label16->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(6, 134);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(145, 18);
			this->label15->TabIndex = 4;
			this->label15->Text = L"Умножений шага:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(6, 104);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(123, 18);
			this->label14->TabIndex = 3;
			this->label14->Text = L"Делений шага:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(6, 70);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(160, 18);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Макс.значение ЛП:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(6, 31);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(111, 18);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Всего шагов:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->button1->Location = System::Drawing::Point(145, 255);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 39);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Расчет";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button2->Location = System::Drawing::Point(36, 255);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(94, 39);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->i1, this->Hi11,
					this->Xi1, this->Vi1, this->Vi12, this->Vi1_Vi12, this->S1, this->Vi11, this->Vi111, this->double1, this->xx1
			});
			this->dataGridView1->Location = System::Drawing::Point(8, 340);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(711, 343);
			this->dataGridView1->TabIndex = 14;
			// 
			// i1
			// 
			this->i1->HeaderText = L"i";
			this->i1->Name = L"i1";
			// 
			// Hi11
			// 
			this->Hi11->HeaderText = L"Hi";
			this->Hi11->Name = L"Hi11";
			// 
			// Xi1
			// 
			this->Xi1->HeaderText = L"Xi";
			this->Xi1->Name = L"Xi1";
			// 
			// Vi1
			// 
			this->Vi1->HeaderText = L"Vi";
			this->Vi1->Name = L"Vi1";
			// 
			// Vi12
			// 
			this->Vi12->HeaderText = L"Vi удв";
			this->Vi12->Name = L"Vi12";
			// 
			// Vi1_Vi12
			// 
			this->Vi1_Vi12->HeaderText = L"Vi - Vi удв";
			this->Vi1_Vi12->Name = L"Vi1_Vi12";
			// 
			// S1
			// 
			this->S1->HeaderText = L"S (ОЛП)";
			this->S1->Name = L"S1";
			// 
			// Vi11
			// 
			this->Vi11->HeaderText = L"Vi уточн";
			this->Vi11->Name = L"Vi11";
			// 
			// Vi111
			// 
			this->Vi111->HeaderText = L"Vi итог";
			this->Vi111->Name = L"Vi111";
			// 
			// double1
			// 
			this->double1->HeaderText = L"дел. шага";
			this->double1->Name = L"double1";
			// 
			// xx1
			// 
			this->xx1->HeaderText = L"умн. шага";
			this->xx1->Name = L"xx1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1380, 695);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->zedGraphControl1);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
	GraphPane^ panel = zedGraphControl1->GraphPane;
	PointPairList^ f2_list = gcnew ZedGraph::PointPairList();


	
	double h = Convert::ToDouble(textBox6->Text);
	double u0 = Convert::ToDouble(textBox7->Text);
	int Nmax = Convert::ToInt32(textBox5->Text);
	double epsError = Convert::ToDouble(textBox8->Text);
	double epsBorder = Convert::ToDouble(textBox4->Text);

	double L = Convert::ToDouble(textBox1->Text);
	double R = Convert::ToDouble(textBox2->Text);
	double V = Convert::ToDouble(textBox3->Text);

	// справка
	double maxS = 0;
	double maxControlError = 0;
	double sumHalf = 0;
	double sumDouble = 0;
	
	double breakV; // значение V для остановки счета


	if (checkBox1->Checked == true)
	{
		breakV = -1;
	}
	else if (checkBox2->Checked == true)
	{
		Nmax = 100000;
		breakV = 0 + epsBorder;
	}

	RKfuncs testExample;
	RKfuncs testExampleWithHalfSteps;

	// инициализация полей экземпляра с обычным шагом
	testExample.setH(h);
	testExample.setV0(u0);
	testExample.setVi(u0);
	testExample.setXi(0);
	testExample.setEpsError(epsError);
	testExample.setV(V);
	testExample.setL(L);
	testExample.setR(R);

	// инициализация полей экземпляра с половинным шагом
	testExampleWithHalfSteps.setH(h);
	testExampleWithHalfSteps.setV0(u0);
	testExampleWithHalfSteps.setVi(u0);
	testExampleWithHalfSteps.setXi(0);
	testExampleWithHalfSteps.setEpsError(epsError);
	testExampleWithHalfSteps.setV(V);
	testExampleWithHalfSteps.setL(L);
	testExampleWithHalfSteps.setR(R);
	
	int i = 1;
	if (checkedListBox1->GetItemChecked(2) == true) // без контроля ЛП
	{
		dataGridView1->Rows->Add();
		dataGridView1->Rows[0]->Cells[0]->Value = 0;
		dataGridView1->Rows[0]->Cells[1]->Value = testExample.getH();
		dataGridView1->Rows[0]->Cells[2]->Value = testExample.getXi();
		dataGridView1->Rows[0]->Cells[3]->Value = testExample.getVi();
		

		while (i < Nmax)
		{
			//Печать в таблицу
			testExample.RK4(testExample.getH());
			if (testExample.getVi() < breakV)
			{
				break;
			}
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = testExample.getH();
			dataGridView1->Rows[i]->Cells[2]->Value = testExample.getXi();
			dataGridView1->Rows[i]->Cells[3]->Value = testExample.getVi();

			
			
			f2_list->Add(testExample.getXi(), testExample.getVi());

			i++;
		}

		

		
		LineItem^ Curve2 = panel->AddCurve("численное решение", f2_list, Color::RoyalBlue, SymbolType::Triangle);

		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();

	
		label16->Text = i.ToString();
		
		label17->Text = maxControlError.ToString();
		label18->Text = sumHalf.ToString();
		label19->Text = sumDouble.ToString();
	}
	else if (checkedListBox1->GetItemChecked(0) == true) // c контролем ЛП (сверху и снизу)
	{
		int doubleCount = 0, halfCount = 0;
		int i = 1;

		dataGridView1->Rows->Add();
		dataGridView1->Rows[0]->Cells[0]->Value = 0;
		dataGridView1->Rows[0]->Cells[1]->Value = testExample.getH();
		dataGridView1->Rows[0]->Cells[2]->Value = testExample.getXi();
		dataGridView1->Rows[0]->Cells[3]->Value = testExample.getVi();
		dataGridView1->Rows[0]->Cells[4]->Value = testExampleWithHalfSteps.getVi();
		dataGridView1->Rows[0]->Cells[5]->Value = testExample.getVi() - testExampleWithHalfSteps.getVi();
		dataGridView1->Rows[0]->Cells[6]->Value = testExample.getCountS(testExample.getVi(), testExampleWithHalfSteps.getVi());
		dataGridView1->Rows[0]->Cells[8]->Value = testExampleWithHalfSteps.getVi();
		dataGridView1->Rows[0]->Cells[9]->Value = halfCount;
		dataGridView1->Rows[0]->Cells[10]->Value = doubleCount;

		while (i < Nmax)
		{


			testExample.RK4(testExample.getH());
			testExampleWithHalfSteps.RK4(testExample.getHalfH());
			testExampleWithHalfSteps.RK4(testExample.getHalfH());
			if (testExample.getVi() < breakV)
			{
				break;
			}
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = testExample.getH();
			dataGridView1->Rows[i]->Cells[2]->Value = testExample.getXi();
			dataGridView1->Rows[i]->Cells[3]->Value = testExample.getVi();
			dataGridView1->Rows[i]->Cells[4]->Value = testExampleWithHalfSteps.getVi();
			dataGridView1->Rows[i]->Cells[5]->Value = testExample.getVi() - testExampleWithHalfSteps.getVi();
			dataGridView1->Rows[i]->Cells[6]->Value = testExample.getCountS(testExample.getVi(), testExampleWithHalfSteps.getVi());
			if (testExample.getCountS(testExample.getVi(), testExampleWithHalfSteps.getVi()) > maxControlError)
				maxControlError = testExample.getCountS(testExample.getVi(), testExampleWithHalfSteps.getVi());
			
			dataGridView1->Rows[i]->Cells[8]->Value = testExampleWithHalfSteps.getVi();
			dataGridView1->Rows[i]->Cells[9]->Value = halfCount; 
			halfCount = 0;
			dataGridView1->Rows[i]->Cells[10]->Value = doubleCount; 
			doubleCount = 0;

			while ((testExample.tooBig(testExample.getVi(), testExampleWithHalfSteps.getVi())) || (testExample.tooSmall(testExample.getVi(), testExampleWithHalfSteps.getVi())))
			{
				if (testExample.tooBig(testExample.getVi(), testExampleWithHalfSteps.getVi()))
				{
					testExample.goBack();
					testExample.doHalfH();

					testExampleWithHalfSteps.setXi(testExample.getXi());
					testExampleWithHalfSteps.setVi(testExample.getVi());
					testExampleWithHalfSteps.setH(testExample.getH() / 2);

					testExample.RK4(testExample.getH());
					testExampleWithHalfSteps.RK4(testExampleWithHalfSteps.getH());
					testExampleWithHalfSteps.RK4(testExampleWithHalfSteps.getH());
					halfCount++;
					sumHalf++;
					dataGridView1->Rows->Add();
					//dataGridView2->Rows[i]->Cells[0]->Value = i;
					dataGridView1->Rows[i]->Cells[1]->Value = testExample.getH();
					dataGridView1->Rows[i]->Cells[2]->Value = testExample.getXi();
					dataGridView1->Rows[i]->Cells[3]->Value = testExample.getVi();
					dataGridView1->Rows[i]->Cells[4]->Value = testExampleWithHalfSteps.getVi();

					dataGridView1->Rows[i]->Cells[5]->Value = testExample.getVi() - testExampleWithHalfSteps.getVi();
					dataGridView1->Rows[i]->Cells[6]->Value = testExample.getCountS(testExample.getVi(), testExampleWithHalfSteps.getVi()); if (testExample.getCountS(testExample.getVi(), testExampleWithHalfSteps.getVi()) > maxControlError) maxControlError = testExample.getCountS(testExample.getVi(), testExampleWithHalfSteps.getVi());
					dataGridView1->Rows[i]->Cells[7]->Value = testExample.getVi();
					dataGridView1->Rows[i]->Cells[8]->Value = testExampleWithHalfSteps.getVi();
					dataGridView1->Rows[i]->Cells[9]->Value = halfCount; halfCount = 0;
					dataGridView1->Rows[i]->Cells[10]->Value = doubleCount; doubleCount = 0;

				}

				else if (testExample.tooSmall(testExample.getVi(), testExampleWithHalfSteps.getVi()))
				{
					testExample.doDoubleH();
					doubleCount++;
					sumDouble++;
					break;
				}
			}

			halfCount = 0;

			
			f2_list->Add(testExample.getXi(), testExampleWithHalfSteps.getVi());


			i++;

		}

		

		LineItem^ Curve2 = panel->AddCurve("численное решение", f2_list, Color::RoyalBlue, SymbolType::Triangle);

		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();

		
		label16->Text = i.ToString();
		
		label17->Text = maxControlError.ToString();
		label18->Text = sumHalf.ToString();
		label19->Text = sumDouble.ToString();

	}
	else if (checkedListBox1->GetItemChecked(1) == true) // c контролем ЛП 
	{
		int doubleCount = 0, halfCount = 0;
		int i = 1;

		dataGridView1->Rows->Add();
		dataGridView1->Rows[0]->Cells[0]->Value = 0;
		dataGridView1->Rows[0]->Cells[1]->Value = testExample.getH();
		dataGridView1->Rows[0]->Cells[2]->Value = testExample.getXi();
		dataGridView1->Rows[0]->Cells[3]->Value = testExample.getVi();
		dataGridView1->Rows[0]->Cells[4]->Value = testExampleWithHalfSteps.getVi();
		dataGridView1->Rows[0]->Cells[5]->Value = testExample.getVi() - testExampleWithHalfSteps.getVi();
		dataGridView1->Rows[0]->Cells[6]->Value = testExample.getCountS(testExample.getVi(), testExampleWithHalfSteps.getVi());
		dataGridView1->Rows[0]->Cells[8]->Value = testExampleWithHalfSteps.getVi();//rows i?
		dataGridView1->Rows[0]->Cells[9]->Value = halfCount;
		dataGridView1->Rows[0]->Cells[10]->Value = doubleCount;

		while (i < Nmax)
		{


			testExample.RK4(testExample.getH());
			testExampleWithHalfSteps.RK4(testExample.getHalfH());
			testExampleWithHalfSteps.RK4(testExample.getHalfH());
			if (testExample.getVi() < breakV)
			{
				break;
			}

			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = testExample.getH();
			dataGridView1->Rows[i]->Cells[2]->Value = testExample.getXi();
			dataGridView1->Rows[i]->Cells[3]->Value = testExample.getVi();
			dataGridView1->Rows[i]->Cells[4]->Value = testExampleWithHalfSteps.getVi();
			dataGridView1->Rows[i]->Cells[5]->Value = testExample.getVi() - testExampleWithHalfSteps.getVi();
			dataGridView1->Rows[i]->Cells[6]->Value = testExample.getCountS(testExample.getVi(), testExampleWithHalfSteps.getVi()); if (testExample.getCountS(testExample.getVi(), testExampleWithHalfSteps.getVi()) > maxControlError) maxControlError = testExample.getCountS(testExample.getVi(), testExampleWithHalfSteps.getVi());
			dataGridView1->Rows[i]->Cells[8]->Value = testExampleWithHalfSteps.getVi();
			dataGridView1->Rows[i]->Cells[9]->Value = halfCount; halfCount = 0;
			dataGridView1->Rows[i]->Cells[10]->Value = doubleCount; doubleCount = 0;

			while ((testExample.tooBig(testExample.getVi(), testExampleWithHalfSteps.getVi())))
			{

				testExample.goBack();
				testExample.doHalfH();

				testExampleWithHalfSteps.setXi(testExample.getXi());
				testExampleWithHalfSteps.setVi(testExample.getVi());
				testExampleWithHalfSteps.setH(testExample.getH() / 2);

				testExample.RK4(testExample.getH());
				testExampleWithHalfSteps.RK4(testExampleWithHalfSteps.getH());
				testExampleWithHalfSteps.RK4(testExampleWithHalfSteps.getH());
				halfCount++;
				sumDouble++;
				dataGridView1->Rows->Add();
				//dataGridView2->Rows[i]->Cells[0]->Value = i;
				dataGridView1->Rows[i]->Cells[1]->Value = testExample.getH();
				dataGridView1->Rows[i]->Cells[2]->Value = testExample.getXi();
				dataGridView1->Rows[i]->Cells[3]->Value = testExample.getVi();
				dataGridView1->Rows[i]->Cells[4]->Value = testExampleWithHalfSteps.getVi();

				dataGridView1->Rows[i]->Cells[5]->Value = testExample.getVi() - testExampleWithHalfSteps.getVi();
				dataGridView1->Rows[i]->Cells[6]->Value = testExample.getCountS(testExample.getVi(), testExampleWithHalfSteps.getVi()); if (testExample.getCountS(testExample.getVi(), testExampleWithHalfSteps.getVi()) > maxControlError) maxControlError = testExample.getCountS(testExample.getVi(), testExampleWithHalfSteps.getVi());
				dataGridView1->Rows[i]->Cells[7]->Value = testExample.getVi();
				dataGridView1->Rows[i]->Cells[8]->Value = testExampleWithHalfSteps.getVi();
				dataGridView1->Rows[i]->Cells[9]->Value = halfCount;
				//dataGridView2->Rows[i]->Cells[8]->Value = doubleCount; doubleCount = 0;


			}

			halfCount = 0;

			
			f2_list->Add(testExample.getXi(), testExampleWithHalfSteps.getVi());


			i++;

		}

		

		LineItem^ Curve2 = panel->AddCurve("численное решение", f2_list, Color::RoyalBlue, SymbolType::Triangle);

		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();

		label16->Text = i.ToString();
		label17->Text = maxControlError.ToString();
		label18->Text = sumHalf.ToString();
		label19->Text = sumDouble.ToString();

	}
}
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label16_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Rows->Clear();
}
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label17_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
