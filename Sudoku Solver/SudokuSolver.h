#pragma once
using namespace System::Threading::Tasks;
#define UNASSIGNED 0
#define N 9
using namespace System::Collections;
using namespace System::Collections::Generic;

namespace SudokuSolver {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SudokuSolver
	/// </summary>
	public ref class SudokuSolver : public System::Windows::Forms::Form
	{
	public:
		SudokuSolver(void)
		{
            inputs = gcnew List<TextBox^>;
            grid = gcnew array<int, 2>(N, N);

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
            setInputs();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SudokuSolver()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::TextBox^ textBox1;
    protected:
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::TextBox^ textBox8;
    private: System::Windows::Forms::TextBox^ textBox9;


    private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::Button^ clearButton;

private: System::Windows::Forms::Button^ solveButton;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::TextBox^ textBox15;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::TextBox^ textBox18;
private: System::Windows::Forms::TextBox^ textBox19;
private: System::Windows::Forms::TextBox^ textBox20;
private: System::Windows::Forms::TextBox^ textBox21;
private: System::Windows::Forms::TextBox^ textBox22;
private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::TextBox^ textBox24;
private: System::Windows::Forms::TextBox^ textBox25;
private: System::Windows::Forms::TextBox^ textBox26;
private: System::Windows::Forms::TextBox^ textBox27;
private: System::Windows::Forms::TextBox^ textBox28;
private: System::Windows::Forms::TextBox^ textBox29;
private: System::Windows::Forms::TextBox^ textBox30;
private: System::Windows::Forms::TextBox^ textBox31;
private: System::Windows::Forms::TextBox^ textBox32;
private: System::Windows::Forms::TextBox^ textBox33;
private: System::Windows::Forms::TextBox^ textBox34;
private: System::Windows::Forms::TextBox^ textBox35;
private: System::Windows::Forms::TextBox^ textBox36;
private: System::Windows::Forms::TextBox^ textBox37;
private: System::Windows::Forms::TextBox^ textBox38;
private: System::Windows::Forms::TextBox^ textBox39;
private: System::Windows::Forms::TextBox^ textBox40;
private: System::Windows::Forms::TextBox^ textBox41;
private: System::Windows::Forms::TextBox^ textBox42;
private: System::Windows::Forms::TextBox^ textBox43;
private: System::Windows::Forms::TextBox^ textBox44;
private: System::Windows::Forms::TextBox^ textBox45;
private: System::Windows::Forms::TextBox^ textBox46;
private: System::Windows::Forms::TextBox^ textBox47;
private: System::Windows::Forms::TextBox^ textBox48;
private: System::Windows::Forms::TextBox^ textBox49;
private: System::Windows::Forms::TextBox^ textBox50;
private: System::Windows::Forms::TextBox^ textBox51;
private: System::Windows::Forms::TextBox^ textBox52;
private: System::Windows::Forms::TextBox^ textBox53;
private: System::Windows::Forms::TextBox^ textBox54;
private: System::Windows::Forms::TextBox^ textBox55;
private: System::Windows::Forms::TextBox^ textBox56;
private: System::Windows::Forms::TextBox^ textBox57;
private: System::Windows::Forms::TextBox^ textBox58;
private: System::Windows::Forms::TextBox^ textBox59;
private: System::Windows::Forms::TextBox^ textBox60;
private: System::Windows::Forms::TextBox^ textBox61;
private: System::Windows::Forms::TextBox^ textBox62;
private: System::Windows::Forms::TextBox^ textBox63;
private: System::Windows::Forms::TextBox^ textBox64;
private: System::Windows::Forms::TextBox^ textBox65;
private: System::Windows::Forms::TextBox^ textBox66;
private: System::Windows::Forms::TextBox^ textBox67;
private: System::Windows::Forms::TextBox^ textBox68;
private: System::Windows::Forms::TextBox^ textBox69;
private: System::Windows::Forms::TextBox^ textBox70;
private: System::Windows::Forms::TextBox^ textBox71;
private: System::Windows::Forms::TextBox^ textBox72;
private: System::Windows::Forms::TextBox^ textBox73;
private: System::Windows::Forms::TextBox^ textBox74;
private: System::Windows::Forms::TextBox^ textBox75;
private: System::Windows::Forms::TextBox^ textBox76;
private: System::Windows::Forms::TextBox^ textBox77;
private: System::Windows::Forms::TextBox^ textBox78;
private: System::Windows::Forms::TextBox^ textBox79;
private: System::Windows::Forms::TextBox^ textBox80;
private: System::Windows::Forms::TextBox^ textBox81;
 List<TextBox^>^ inputs;
 array<int, 2>^ grid;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->clearButton = (gcnew System::Windows::Forms::Button());
            this->solveButton = (gcnew System::Windows::Forms::Button());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->textBox11 = (gcnew System::Windows::Forms::TextBox());
            this->textBox12 = (gcnew System::Windows::Forms::TextBox());
            this->textBox13 = (gcnew System::Windows::Forms::TextBox());
            this->textBox14 = (gcnew System::Windows::Forms::TextBox());
            this->textBox15 = (gcnew System::Windows::Forms::TextBox());
            this->textBox16 = (gcnew System::Windows::Forms::TextBox());
            this->textBox17 = (gcnew System::Windows::Forms::TextBox());
            this->textBox18 = (gcnew System::Windows::Forms::TextBox());
            this->textBox19 = (gcnew System::Windows::Forms::TextBox());
            this->textBox20 = (gcnew System::Windows::Forms::TextBox());
            this->textBox21 = (gcnew System::Windows::Forms::TextBox());
            this->textBox22 = (gcnew System::Windows::Forms::TextBox());
            this->textBox23 = (gcnew System::Windows::Forms::TextBox());
            this->textBox24 = (gcnew System::Windows::Forms::TextBox());
            this->textBox25 = (gcnew System::Windows::Forms::TextBox());
            this->textBox26 = (gcnew System::Windows::Forms::TextBox());
            this->textBox27 = (gcnew System::Windows::Forms::TextBox());
            this->textBox28 = (gcnew System::Windows::Forms::TextBox());
            this->textBox29 = (gcnew System::Windows::Forms::TextBox());
            this->textBox30 = (gcnew System::Windows::Forms::TextBox());
            this->textBox31 = (gcnew System::Windows::Forms::TextBox());
            this->textBox32 = (gcnew System::Windows::Forms::TextBox());
            this->textBox33 = (gcnew System::Windows::Forms::TextBox());
            this->textBox34 = (gcnew System::Windows::Forms::TextBox());
            this->textBox35 = (gcnew System::Windows::Forms::TextBox());
            this->textBox36 = (gcnew System::Windows::Forms::TextBox());
            this->textBox37 = (gcnew System::Windows::Forms::TextBox());
            this->textBox38 = (gcnew System::Windows::Forms::TextBox());
            this->textBox39 = (gcnew System::Windows::Forms::TextBox());
            this->textBox40 = (gcnew System::Windows::Forms::TextBox());
            this->textBox41 = (gcnew System::Windows::Forms::TextBox());
            this->textBox42 = (gcnew System::Windows::Forms::TextBox());
            this->textBox43 = (gcnew System::Windows::Forms::TextBox());
            this->textBox44 = (gcnew System::Windows::Forms::TextBox());
            this->textBox45 = (gcnew System::Windows::Forms::TextBox());
            this->textBox46 = (gcnew System::Windows::Forms::TextBox());
            this->textBox47 = (gcnew System::Windows::Forms::TextBox());
            this->textBox48 = (gcnew System::Windows::Forms::TextBox());
            this->textBox49 = (gcnew System::Windows::Forms::TextBox());
            this->textBox50 = (gcnew System::Windows::Forms::TextBox());
            this->textBox51 = (gcnew System::Windows::Forms::TextBox());
            this->textBox52 = (gcnew System::Windows::Forms::TextBox());
            this->textBox53 = (gcnew System::Windows::Forms::TextBox());
            this->textBox54 = (gcnew System::Windows::Forms::TextBox());
            this->textBox55 = (gcnew System::Windows::Forms::TextBox());
            this->textBox56 = (gcnew System::Windows::Forms::TextBox());
            this->textBox57 = (gcnew System::Windows::Forms::TextBox());
            this->textBox58 = (gcnew System::Windows::Forms::TextBox());
            this->textBox59 = (gcnew System::Windows::Forms::TextBox());
            this->textBox60 = (gcnew System::Windows::Forms::TextBox());
            this->textBox61 = (gcnew System::Windows::Forms::TextBox());
            this->textBox62 = (gcnew System::Windows::Forms::TextBox());
            this->textBox63 = (gcnew System::Windows::Forms::TextBox());
            this->textBox64 = (gcnew System::Windows::Forms::TextBox());
            this->textBox65 = (gcnew System::Windows::Forms::TextBox());
            this->textBox66 = (gcnew System::Windows::Forms::TextBox());
            this->textBox67 = (gcnew System::Windows::Forms::TextBox());
            this->textBox68 = (gcnew System::Windows::Forms::TextBox());
            this->textBox69 = (gcnew System::Windows::Forms::TextBox());
            this->textBox70 = (gcnew System::Windows::Forms::TextBox());
            this->textBox71 = (gcnew System::Windows::Forms::TextBox());
            this->textBox72 = (gcnew System::Windows::Forms::TextBox());
            this->textBox73 = (gcnew System::Windows::Forms::TextBox());
            this->textBox74 = (gcnew System::Windows::Forms::TextBox());
            this->textBox75 = (gcnew System::Windows::Forms::TextBox());
            this->textBox76 = (gcnew System::Windows::Forms::TextBox());
            this->textBox77 = (gcnew System::Windows::Forms::TextBox());
            this->textBox78 = (gcnew System::Windows::Forms::TextBox());
            this->textBox79 = (gcnew System::Windows::Forms::TextBox());
            this->textBox80 = (gcnew System::Windows::Forms::TextBox());
            this->textBox81 = (gcnew System::Windows::Forms::TextBox());
            this->SuspendLayout();
            // 
            // textBox1
            // 
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->Location = System::Drawing::Point(12, 132);
            this->textBox1->MaxLength = 1;
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(55, 55);
            this->textBox1->TabIndex = 0;
            // 
            // textBox2
            // 
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox2->Location = System::Drawing::Point(73, 132);
            this->textBox2->MaxLength = 1;
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(55, 55);
            this->textBox2->TabIndex = 1;
            // 
            // textBox3
            // 
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox3->Location = System::Drawing::Point(134, 132);
            this->textBox3->MaxLength = 1;
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(55, 55);
            this->textBox3->TabIndex = 2;
            // 
            // textBox4
            // 
            this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox4->Location = System::Drawing::Point(12, 73);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(55, 55);
            this->textBox4->TabIndex = 5;
            // 
            // textBox5
            // 
            this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox5->Location = System::Drawing::Point(73, 73);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(55, 55);
            this->textBox5->TabIndex = 4;
            // 
            // textBox6
            // 
            this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox6->Location = System::Drawing::Point(134, 73);
            this->textBox6->MaxLength = 1;
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(55, 55);
            this->textBox6->TabIndex = 3;
            // 
            // textBox7
            // 
            this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox7->Location = System::Drawing::Point(134, 12);
            this->textBox7->MaxLength = 1;
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(55, 55);
            this->textBox7->TabIndex = 8;
            // 
            // textBox8
            // 
            this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox8->Location = System::Drawing::Point(73, 12);
            this->textBox8->MaxLength = 1;
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(55, 55);
            this->textBox8->TabIndex = 7;
            // 
            // textBox9
            // 
            this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox9->Location = System::Drawing::Point(12, 12);
            this->textBox9->MaxLength = 1;
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(55, 55);
            this->textBox9->TabIndex = 6;
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::SystemColors::ActiveBorder;
            this->panel1->Location = System::Drawing::Point(12, 193);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(575, 10);
            this->panel1->TabIndex = 81;
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::SystemColors::ActiveBorder;
            this->panel2->Location = System::Drawing::Point(12, 391);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(575, 10);
            this->panel2->TabIndex = 82;
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::SystemColors::ActiveBorder;
            this->panel3->Location = System::Drawing::Point(394, 14);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(10, 569);
            this->panel3->TabIndex = 82;
            // 
            // panel4
            // 
            this->panel4->BackColor = System::Drawing::SystemColors::ActiveBorder;
            this->panel4->Location = System::Drawing::Point(195, 14);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(10, 569);
            this->panel4->TabIndex = 83;
            // 
            // clearButton
            // 
            this->clearButton->Location = System::Drawing::Point(12, 604);
            this->clearButton->Name = L"clearButton";
            this->clearButton->Size = System::Drawing::Size(180, 40);
            this->clearButton->TabIndex = 84;
            this->clearButton->Text = L"Clear";
            this->clearButton->UseVisualStyleBackColor = true;
            this->clearButton->Click += gcnew System::EventHandler(this, &SudokuSolver::clearButton_Click);
            // 
            // solveButton
            // 
            this->solveButton->Location = System::Drawing::Point(407, 604);
            this->solveButton->Name = L"solveButton";
            this->solveButton->Size = System::Drawing::Size(180, 40);
            this->solveButton->TabIndex = 85;
            this->solveButton->Text = L"Solve";
            this->solveButton->UseVisualStyleBackColor = true;
            this->solveButton->Click += gcnew System::EventHandler(this, &SudokuSolver::solveButton_Click);
            // 
            // textBox10
            // 
            this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox10->Location = System::Drawing::Point(211, 134);
            this->textBox10->MaxLength = 1;
            this->textBox10->Name = L"textBox10";
            this->textBox10->Size = System::Drawing::Size(55, 55);
            this->textBox10->TabIndex = 94;
            // 
            // textBox11
            // 
            this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox11->Location = System::Drawing::Point(272, 136);
            this->textBox11->MaxLength = 1;
            this->textBox11->Name = L"textBox11";
            this->textBox11->Size = System::Drawing::Size(55, 55);
            this->textBox11->TabIndex = 93;
            // 
            // textBox12
            // 
            this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox12->Location = System::Drawing::Point(333, 134);
            this->textBox12->MaxLength = 1;
            this->textBox12->Name = L"textBox12";
            this->textBox12->Size = System::Drawing::Size(55, 55);
            this->textBox12->TabIndex = 92;
            // 
            // textBox13
            // 
            this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox13->Location = System::Drawing::Point(211, 75);
            this->textBox13->Name = L"textBox13";
            this->textBox13->Size = System::Drawing::Size(55, 55);
            this->textBox13->TabIndex = 91;
            // 
            // textBox14
            // 
            this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox14->Location = System::Drawing::Point(272, 75);
            this->textBox14->Name = L"textBox14";
            this->textBox14->Size = System::Drawing::Size(55, 55);
            this->textBox14->TabIndex = 90;
            // 
            // textBox15
            // 
            this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox15->Location = System::Drawing::Point(333, 75);
            this->textBox15->MaxLength = 1;
            this->textBox15->Name = L"textBox15";
            this->textBox15->Size = System::Drawing::Size(55, 55);
            this->textBox15->TabIndex = 89;
            // 
            // textBox16
            // 
            this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox16->Location = System::Drawing::Point(333, 14);
            this->textBox16->MaxLength = 1;
            this->textBox16->Name = L"textBox16";
            this->textBox16->Size = System::Drawing::Size(55, 55);
            this->textBox16->TabIndex = 88;
            // 
            // textBox17
            // 
            this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox17->Location = System::Drawing::Point(272, 14);
            this->textBox17->MaxLength = 1;
            this->textBox17->Name = L"textBox17";
            this->textBox17->Size = System::Drawing::Size(55, 55);
            this->textBox17->TabIndex = 87;
            // 
            // textBox18
            // 
            this->textBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox18->Location = System::Drawing::Point(211, 14);
            this->textBox18->MaxLength = 1;
            this->textBox18->Name = L"textBox18";
            this->textBox18->Size = System::Drawing::Size(55, 55);
            this->textBox18->TabIndex = 86;
            // 
            // textBox19
            // 
            this->textBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox19->Location = System::Drawing::Point(410, 134);
            this->textBox19->MaxLength = 1;
            this->textBox19->Name = L"textBox19";
            this->textBox19->Size = System::Drawing::Size(55, 55);
            this->textBox19->TabIndex = 103;
            // 
            // textBox20
            // 
            this->textBox20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox20->Location = System::Drawing::Point(471, 136);
            this->textBox20->MaxLength = 1;
            this->textBox20->Name = L"textBox20";
            this->textBox20->Size = System::Drawing::Size(55, 55);
            this->textBox20->TabIndex = 102;
            // 
            // textBox21
            // 
            this->textBox21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox21->Location = System::Drawing::Point(532, 134);
            this->textBox21->MaxLength = 1;
            this->textBox21->Name = L"textBox21";
            this->textBox21->Size = System::Drawing::Size(55, 55);
            this->textBox21->TabIndex = 101;
            // 
            // textBox22
            // 
            this->textBox22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox22->Location = System::Drawing::Point(410, 75);
            this->textBox22->Name = L"textBox22";
            this->textBox22->Size = System::Drawing::Size(55, 55);
            this->textBox22->TabIndex = 100;
            // 
            // textBox23
            // 
            this->textBox23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox23->Location = System::Drawing::Point(471, 75);
            this->textBox23->Name = L"textBox23";
            this->textBox23->Size = System::Drawing::Size(55, 55);
            this->textBox23->TabIndex = 99;
            // 
            // textBox24
            // 
            this->textBox24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox24->Location = System::Drawing::Point(532, 75);
            this->textBox24->MaxLength = 1;
            this->textBox24->Name = L"textBox24";
            this->textBox24->Size = System::Drawing::Size(55, 55);
            this->textBox24->TabIndex = 98;
            // 
            // textBox25
            // 
            this->textBox25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox25->Location = System::Drawing::Point(532, 14);
            this->textBox25->MaxLength = 1;
            this->textBox25->Name = L"textBox25";
            this->textBox25->Size = System::Drawing::Size(55, 55);
            this->textBox25->TabIndex = 97;
            // 
            // textBox26
            // 
            this->textBox26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox26->Location = System::Drawing::Point(471, 14);
            this->textBox26->MaxLength = 1;
            this->textBox26->Name = L"textBox26";
            this->textBox26->Size = System::Drawing::Size(55, 55);
            this->textBox26->TabIndex = 96;
            // 
            // textBox27
            // 
            this->textBox27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox27->Location = System::Drawing::Point(410, 14);
            this->textBox27->MaxLength = 1;
            this->textBox27->Name = L"textBox27";
            this->textBox27->Size = System::Drawing::Size(55, 55);
            this->textBox27->TabIndex = 95;
            // 
            // textBox28
            // 
            this->textBox28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox28->Location = System::Drawing::Point(12, 329);
            this->textBox28->MaxLength = 1;
            this->textBox28->Name = L"textBox28";
            this->textBox28->Size = System::Drawing::Size(55, 55);
            this->textBox28->TabIndex = 112;
            // 
            // textBox29
            // 
            this->textBox29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox29->Location = System::Drawing::Point(73, 331);
            this->textBox29->MaxLength = 1;
            this->textBox29->Name = L"textBox29";
            this->textBox29->Size = System::Drawing::Size(55, 55);
            this->textBox29->TabIndex = 111;
            // 
            // textBox30
            // 
            this->textBox30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox30->Location = System::Drawing::Point(134, 329);
            this->textBox30->MaxLength = 1;
            this->textBox30->Name = L"textBox30";
            this->textBox30->Size = System::Drawing::Size(55, 55);
            this->textBox30->TabIndex = 110;
            // 
            // textBox31
            // 
            this->textBox31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox31->Location = System::Drawing::Point(12, 270);
            this->textBox31->Name = L"textBox31";
            this->textBox31->Size = System::Drawing::Size(55, 55);
            this->textBox31->TabIndex = 109;
            // 
            // textBox32
            // 
            this->textBox32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox32->Location = System::Drawing::Point(73, 270);
            this->textBox32->Name = L"textBox32";
            this->textBox32->Size = System::Drawing::Size(55, 55);
            this->textBox32->TabIndex = 108;
            // 
            // textBox33
            // 
            this->textBox33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox33->Location = System::Drawing::Point(134, 270);
            this->textBox33->MaxLength = 1;
            this->textBox33->Name = L"textBox33";
            this->textBox33->Size = System::Drawing::Size(55, 55);
            this->textBox33->TabIndex = 107;
            // 
            // textBox34
            // 
            this->textBox34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox34->Location = System::Drawing::Point(134, 209);
            this->textBox34->MaxLength = 1;
            this->textBox34->Name = L"textBox34";
            this->textBox34->Size = System::Drawing::Size(55, 55);
            this->textBox34->TabIndex = 106;
            // 
            // textBox35
            // 
            this->textBox35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox35->Location = System::Drawing::Point(73, 209);
            this->textBox35->MaxLength = 1;
            this->textBox35->Name = L"textBox35";
            this->textBox35->Size = System::Drawing::Size(55, 55);
            this->textBox35->TabIndex = 105;
            // 
            // textBox36
            // 
            this->textBox36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox36->Location = System::Drawing::Point(12, 209);
            this->textBox36->MaxLength = 1;
            this->textBox36->Name = L"textBox36";
            this->textBox36->Size = System::Drawing::Size(55, 55);
            this->textBox36->TabIndex = 104;
            // 
            // textBox37
            // 
            this->textBox37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox37->Location = System::Drawing::Point(211, 329);
            this->textBox37->MaxLength = 1;
            this->textBox37->Name = L"textBox37";
            this->textBox37->Size = System::Drawing::Size(55, 55);
            this->textBox37->TabIndex = 121;
            // 
            // textBox38
            // 
            this->textBox38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox38->Location = System::Drawing::Point(272, 331);
            this->textBox38->MaxLength = 1;
            this->textBox38->Name = L"textBox38";
            this->textBox38->Size = System::Drawing::Size(55, 55);
            this->textBox38->TabIndex = 120;
            // 
            // textBox39
            // 
            this->textBox39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox39->Location = System::Drawing::Point(333, 329);
            this->textBox39->MaxLength = 1;
            this->textBox39->Name = L"textBox39";
            this->textBox39->Size = System::Drawing::Size(55, 55);
            this->textBox39->TabIndex = 119;
            // 
            // textBox40
            // 
            this->textBox40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox40->Location = System::Drawing::Point(211, 270);
            this->textBox40->Name = L"textBox40";
            this->textBox40->Size = System::Drawing::Size(55, 55);
            this->textBox40->TabIndex = 118;
            // 
            // textBox41
            // 
            this->textBox41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox41->Location = System::Drawing::Point(272, 270);
            this->textBox41->Name = L"textBox41";
            this->textBox41->Size = System::Drawing::Size(55, 55);
            this->textBox41->TabIndex = 117;
            // 
            // textBox42
            // 
            this->textBox42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox42->Location = System::Drawing::Point(333, 270);
            this->textBox42->MaxLength = 1;
            this->textBox42->Name = L"textBox42";
            this->textBox42->Size = System::Drawing::Size(55, 55);
            this->textBox42->TabIndex = 116;
            // 
            // textBox43
            // 
            this->textBox43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox43->Location = System::Drawing::Point(333, 209);
            this->textBox43->MaxLength = 1;
            this->textBox43->Name = L"textBox43";
            this->textBox43->Size = System::Drawing::Size(55, 55);
            this->textBox43->TabIndex = 115;
            // 
            // textBox44
            // 
            this->textBox44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox44->Location = System::Drawing::Point(272, 209);
            this->textBox44->MaxLength = 1;
            this->textBox44->Name = L"textBox44";
            this->textBox44->Size = System::Drawing::Size(55, 55);
            this->textBox44->TabIndex = 114;
            // 
            // textBox45
            // 
            this->textBox45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox45->Location = System::Drawing::Point(211, 209);
            this->textBox45->MaxLength = 1;
            this->textBox45->Name = L"textBox45";
            this->textBox45->Size = System::Drawing::Size(55, 55);
            this->textBox45->TabIndex = 113;
            // 
            // textBox46
            // 
            this->textBox46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox46->Location = System::Drawing::Point(410, 329);
            this->textBox46->MaxLength = 1;
            this->textBox46->Name = L"textBox46";
            this->textBox46->Size = System::Drawing::Size(55, 55);
            this->textBox46->TabIndex = 130;
            // 
            // textBox47
            // 
            this->textBox47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox47->Location = System::Drawing::Point(471, 331);
            this->textBox47->MaxLength = 1;
            this->textBox47->Name = L"textBox47";
            this->textBox47->Size = System::Drawing::Size(55, 55);
            this->textBox47->TabIndex = 129;
            // 
            // textBox48
            // 
            this->textBox48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox48->Location = System::Drawing::Point(532, 329);
            this->textBox48->MaxLength = 1;
            this->textBox48->Name = L"textBox48";
            this->textBox48->Size = System::Drawing::Size(55, 55);
            this->textBox48->TabIndex = 128;
            // 
            // textBox49
            // 
            this->textBox49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox49->Location = System::Drawing::Point(410, 270);
            this->textBox49->Name = L"textBox49";
            this->textBox49->Size = System::Drawing::Size(55, 55);
            this->textBox49->TabIndex = 127;
            // 
            // textBox50
            // 
            this->textBox50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox50->Location = System::Drawing::Point(471, 270);
            this->textBox50->Name = L"textBox50";
            this->textBox50->Size = System::Drawing::Size(55, 55);
            this->textBox50->TabIndex = 126;
            // 
            // textBox51
            // 
            this->textBox51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox51->Location = System::Drawing::Point(532, 270);
            this->textBox51->MaxLength = 1;
            this->textBox51->Name = L"textBox51";
            this->textBox51->Size = System::Drawing::Size(55, 55);
            this->textBox51->TabIndex = 125;
            // 
            // textBox52
            // 
            this->textBox52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox52->Location = System::Drawing::Point(532, 209);
            this->textBox52->MaxLength = 1;
            this->textBox52->Name = L"textBox52";
            this->textBox52->Size = System::Drawing::Size(55, 55);
            this->textBox52->TabIndex = 124;
            // 
            // textBox53
            // 
            this->textBox53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox53->Location = System::Drawing::Point(471, 209);
            this->textBox53->MaxLength = 1;
            this->textBox53->Name = L"textBox53";
            this->textBox53->Size = System::Drawing::Size(55, 55);
            this->textBox53->TabIndex = 123;
            // 
            // textBox54
            // 
            this->textBox54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox54->Location = System::Drawing::Point(410, 209);
            this->textBox54->MaxLength = 1;
            this->textBox54->Name = L"textBox54";
            this->textBox54->Size = System::Drawing::Size(55, 55);
            this->textBox54->TabIndex = 122;
            // 
            // textBox55
            // 
            this->textBox55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox55->Location = System::Drawing::Point(12, 527);
            this->textBox55->MaxLength = 1;
            this->textBox55->Name = L"textBox55";
            this->textBox55->Size = System::Drawing::Size(55, 55);
            this->textBox55->TabIndex = 139;
            // 
            // textBox56
            // 
            this->textBox56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox56->Location = System::Drawing::Point(73, 529);
            this->textBox56->MaxLength = 1;
            this->textBox56->Name = L"textBox56";
            this->textBox56->Size = System::Drawing::Size(55, 55);
            this->textBox56->TabIndex = 138;
            // 
            // textBox57
            // 
            this->textBox57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox57->Location = System::Drawing::Point(134, 527);
            this->textBox57->MaxLength = 1;
            this->textBox57->Name = L"textBox57";
            this->textBox57->Size = System::Drawing::Size(55, 55);
            this->textBox57->TabIndex = 137;
            // 
            // textBox58
            // 
            this->textBox58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox58->Location = System::Drawing::Point(12, 468);
            this->textBox58->Name = L"textBox58";
            this->textBox58->Size = System::Drawing::Size(55, 55);
            this->textBox58->TabIndex = 136;
            // 
            // textBox59
            // 
            this->textBox59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox59->Location = System::Drawing::Point(73, 468);
            this->textBox59->Name = L"textBox59";
            this->textBox59->Size = System::Drawing::Size(55, 55);
            this->textBox59->TabIndex = 135;
            // 
            // textBox60
            // 
            this->textBox60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox60->Location = System::Drawing::Point(134, 468);
            this->textBox60->MaxLength = 1;
            this->textBox60->Name = L"textBox60";
            this->textBox60->Size = System::Drawing::Size(55, 55);
            this->textBox60->TabIndex = 134;
            // 
            // textBox61
            // 
            this->textBox61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox61->Location = System::Drawing::Point(134, 407);
            this->textBox61->MaxLength = 1;
            this->textBox61->Name = L"textBox61";
            this->textBox61->Size = System::Drawing::Size(55, 55);
            this->textBox61->TabIndex = 133;
            // 
            // textBox62
            // 
            this->textBox62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox62->Location = System::Drawing::Point(73, 407);
            this->textBox62->MaxLength = 1;
            this->textBox62->Name = L"textBox62";
            this->textBox62->Size = System::Drawing::Size(55, 55);
            this->textBox62->TabIndex = 132;
            // 
            // textBox63
            // 
            this->textBox63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox63->Location = System::Drawing::Point(12, 407);
            this->textBox63->MaxLength = 1;
            this->textBox63->Name = L"textBox63";
            this->textBox63->Size = System::Drawing::Size(55, 55);
            this->textBox63->TabIndex = 131;
            // 
            // textBox64
            // 
            this->textBox64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox64->Location = System::Drawing::Point(211, 527);
            this->textBox64->MaxLength = 1;
            this->textBox64->Name = L"textBox64";
            this->textBox64->Size = System::Drawing::Size(55, 55);
            this->textBox64->TabIndex = 148;
            // 
            // textBox65
            // 
            this->textBox65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox65->Location = System::Drawing::Point(272, 529);
            this->textBox65->MaxLength = 1;
            this->textBox65->Name = L"textBox65";
            this->textBox65->Size = System::Drawing::Size(55, 55);
            this->textBox65->TabIndex = 147;
            // 
            // textBox66
            // 
            this->textBox66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox66->Location = System::Drawing::Point(333, 527);
            this->textBox66->MaxLength = 1;
            this->textBox66->Name = L"textBox66";
            this->textBox66->Size = System::Drawing::Size(55, 55);
            this->textBox66->TabIndex = 146;
            // 
            // textBox67
            // 
            this->textBox67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox67->Location = System::Drawing::Point(211, 468);
            this->textBox67->Name = L"textBox67";
            this->textBox67->Size = System::Drawing::Size(55, 55);
            this->textBox67->TabIndex = 145;
            // 
            // textBox68
            // 
            this->textBox68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox68->Location = System::Drawing::Point(272, 468);
            this->textBox68->Name = L"textBox68";
            this->textBox68->Size = System::Drawing::Size(55, 55);
            this->textBox68->TabIndex = 144;
            // 
            // textBox69
            // 
            this->textBox69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox69->Location = System::Drawing::Point(333, 468);
            this->textBox69->MaxLength = 1;
            this->textBox69->Name = L"textBox69";
            this->textBox69->Size = System::Drawing::Size(55, 55);
            this->textBox69->TabIndex = 143;
            // 
            // textBox70
            // 
            this->textBox70->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox70->Location = System::Drawing::Point(333, 407);
            this->textBox70->MaxLength = 1;
            this->textBox70->Name = L"textBox70";
            this->textBox70->Size = System::Drawing::Size(55, 55);
            this->textBox70->TabIndex = 142;
            // 
            // textBox71
            // 
            this->textBox71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox71->Location = System::Drawing::Point(272, 407);
            this->textBox71->MaxLength = 1;
            this->textBox71->Name = L"textBox71";
            this->textBox71->Size = System::Drawing::Size(55, 55);
            this->textBox71->TabIndex = 141;
            // 
            // textBox72
            // 
            this->textBox72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox72->Location = System::Drawing::Point(211, 407);
            this->textBox72->MaxLength = 1;
            this->textBox72->Name = L"textBox72";
            this->textBox72->Size = System::Drawing::Size(55, 55);
            this->textBox72->TabIndex = 140;
            // 
            // textBox73
            // 
            this->textBox73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox73->Location = System::Drawing::Point(410, 527);
            this->textBox73->MaxLength = 1;
            this->textBox73->Name = L"textBox73";
            this->textBox73->Size = System::Drawing::Size(55, 55);
            this->textBox73->TabIndex = 157;
            // 
            // textBox74
            // 
            this->textBox74->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox74->Location = System::Drawing::Point(471, 529);
            this->textBox74->MaxLength = 1;
            this->textBox74->Name = L"textBox74";
            this->textBox74->Size = System::Drawing::Size(55, 55);
            this->textBox74->TabIndex = 156;
            // 
            // textBox75
            // 
            this->textBox75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox75->Location = System::Drawing::Point(532, 527);
            this->textBox75->MaxLength = 1;
            this->textBox75->Name = L"textBox75";
            this->textBox75->Size = System::Drawing::Size(55, 55);
            this->textBox75->TabIndex = 155;
            // 
            // textBox76
            // 
            this->textBox76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox76->Location = System::Drawing::Point(410, 468);
            this->textBox76->Name = L"textBox76";
            this->textBox76->Size = System::Drawing::Size(55, 55);
            this->textBox76->TabIndex = 154;
            // 
            // textBox77
            // 
            this->textBox77->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox77->Location = System::Drawing::Point(471, 468);
            this->textBox77->Name = L"textBox77";
            this->textBox77->Size = System::Drawing::Size(55, 55);
            this->textBox77->TabIndex = 153;
            // 
            // textBox78
            // 
            this->textBox78->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox78->Location = System::Drawing::Point(532, 468);
            this->textBox78->MaxLength = 1;
            this->textBox78->Name = L"textBox78";
            this->textBox78->Size = System::Drawing::Size(55, 55);
            this->textBox78->TabIndex = 152;
            // 
            // textBox79
            // 
            this->textBox79->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox79->Location = System::Drawing::Point(532, 407);
            this->textBox79->MaxLength = 1;
            this->textBox79->Name = L"textBox79";
            this->textBox79->Size = System::Drawing::Size(55, 55);
            this->textBox79->TabIndex = 151;
            // 
            // textBox80
            // 
            this->textBox80->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox80->Location = System::Drawing::Point(471, 407);
            this->textBox80->MaxLength = 1;
            this->textBox80->Name = L"textBox80";
            this->textBox80->Size = System::Drawing::Size(55, 55);
            this->textBox80->TabIndex = 150;
            // 
            // textBox81
            // 
            this->textBox81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox81->Location = System::Drawing::Point(410, 407);
            this->textBox81->MaxLength = 1;
            this->textBox81->Name = L"textBox81";
            this->textBox81->Size = System::Drawing::Size(55, 55);
            this->textBox81->TabIndex = 149;
            // 
            // SudokuSolver
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(614, 656);
            this->Controls->Add(this->textBox73);
            this->Controls->Add(this->textBox74);
            this->Controls->Add(this->textBox75);
            this->Controls->Add(this->textBox76);
            this->Controls->Add(this->textBox77);
            this->Controls->Add(this->textBox78);
            this->Controls->Add(this->textBox79);
            this->Controls->Add(this->textBox80);
            this->Controls->Add(this->textBox81);
            this->Controls->Add(this->textBox64);
            this->Controls->Add(this->textBox65);
            this->Controls->Add(this->textBox66);
            this->Controls->Add(this->textBox67);
            this->Controls->Add(this->textBox68);
            this->Controls->Add(this->textBox69);
            this->Controls->Add(this->textBox70);
            this->Controls->Add(this->textBox71);
            this->Controls->Add(this->textBox72);
            this->Controls->Add(this->textBox55);
            this->Controls->Add(this->textBox56);
            this->Controls->Add(this->textBox57);
            this->Controls->Add(this->textBox58);
            this->Controls->Add(this->textBox59);
            this->Controls->Add(this->textBox60);
            this->Controls->Add(this->textBox61);
            this->Controls->Add(this->textBox62);
            this->Controls->Add(this->textBox63);
            this->Controls->Add(this->textBox46);
            this->Controls->Add(this->textBox47);
            this->Controls->Add(this->textBox48);
            this->Controls->Add(this->textBox49);
            this->Controls->Add(this->textBox50);
            this->Controls->Add(this->textBox51);
            this->Controls->Add(this->textBox52);
            this->Controls->Add(this->textBox53);
            this->Controls->Add(this->textBox54);
            this->Controls->Add(this->textBox37);
            this->Controls->Add(this->textBox38);
            this->Controls->Add(this->textBox39);
            this->Controls->Add(this->textBox40);
            this->Controls->Add(this->textBox41);
            this->Controls->Add(this->textBox42);
            this->Controls->Add(this->textBox43);
            this->Controls->Add(this->textBox44);
            this->Controls->Add(this->textBox45);
            this->Controls->Add(this->textBox28);
            this->Controls->Add(this->textBox29);
            this->Controls->Add(this->textBox30);
            this->Controls->Add(this->textBox31);
            this->Controls->Add(this->textBox32);
            this->Controls->Add(this->textBox33);
            this->Controls->Add(this->textBox34);
            this->Controls->Add(this->textBox35);
            this->Controls->Add(this->textBox36);
            this->Controls->Add(this->textBox19);
            this->Controls->Add(this->textBox20);
            this->Controls->Add(this->textBox21);
            this->Controls->Add(this->textBox22);
            this->Controls->Add(this->textBox23);
            this->Controls->Add(this->textBox24);
            this->Controls->Add(this->textBox25);
            this->Controls->Add(this->textBox26);
            this->Controls->Add(this->textBox27);
            this->Controls->Add(this->textBox10);
            this->Controls->Add(this->textBox11);
            this->Controls->Add(this->textBox12);
            this->Controls->Add(this->textBox13);
            this->Controls->Add(this->textBox14);
            this->Controls->Add(this->textBox15);
            this->Controls->Add(this->textBox16);
            this->Controls->Add(this->textBox17);
            this->Controls->Add(this->textBox18);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->solveButton);
            this->Controls->Add(this->clearButton);
            this->Controls->Add(this->panel4);
            this->Controls->Add(this->panel3);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->textBox7);
            this->Controls->Add(this->textBox8);
            this->Controls->Add(this->textBox9);
            this->Controls->Add(this->textBox4);
            this->Controls->Add(this->textBox5);
            this->Controls->Add(this->textBox6);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->textBox1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->MaximizeBox = false;
            this->Name = L"SudokuSolver";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"SudokuSolver";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
        // Sets inputs validations
        private: Void setInputs()
        {
            inputs->Add(textBox9);
            inputs->Add(textBox8);
            inputs->Add(textBox7);
            inputs->Add(textBox18);
            inputs->Add(textBox17);
            inputs->Add(textBox16);
            inputs->Add(textBox27);
            inputs->Add(textBox26);
            inputs->Add(textBox25);
            /**/
            inputs->Add(textBox4);
            inputs->Add(textBox5);
            inputs->Add(textBox6);
            inputs->Add(textBox13);
            inputs->Add(textBox14);
            inputs->Add(textBox15);
            inputs->Add(textBox22);
            inputs->Add(textBox23);
            inputs->Add(textBox24);
            /**/
            inputs->Add(textBox1);
            inputs->Add(textBox2);
            inputs->Add(textBox3);
            inputs->Add(textBox10);
            inputs->Add(textBox11);
            inputs->Add(textBox12);
            inputs->Add(textBox19);
            inputs->Add(textBox20);
            inputs->Add(textBox21);

            ///////////////////////

            inputs->Add(textBox36);
            inputs->Add(textBox35);
            inputs->Add(textBox34);
            inputs->Add(textBox45);
            inputs->Add(textBox44);
            inputs->Add(textBox43);
            inputs->Add(textBox54);
            inputs->Add(textBox53);
            inputs->Add(textBox52);
            /**/
            inputs->Add(textBox31);
            inputs->Add(textBox32);
            inputs->Add(textBox33);
            inputs->Add(textBox40);
            inputs->Add(textBox41);
            inputs->Add(textBox42);
            inputs->Add(textBox49);
            inputs->Add(textBox50);
            inputs->Add(textBox51);
            /**/
            inputs->Add(textBox28);
            inputs->Add(textBox29);
            inputs->Add(textBox30);
            inputs->Add(textBox37);
            inputs->Add(textBox38);
            inputs->Add(textBox39);
            inputs->Add(textBox46);
            inputs->Add(textBox47);
            inputs->Add(textBox48);

            //////////////////////

            inputs->Add(textBox63);
            inputs->Add(textBox62);
            inputs->Add(textBox61);
            inputs->Add(textBox72);
            inputs->Add(textBox71);
            inputs->Add(textBox70);
            inputs->Add(textBox81);
            inputs->Add(textBox80);
            inputs->Add(textBox79);
            /**/
            inputs->Add(textBox58);
            inputs->Add(textBox59);
            inputs->Add(textBox60);
            inputs->Add(textBox67);
            inputs->Add(textBox68);
            inputs->Add(textBox69);
            inputs->Add(textBox76);
            inputs->Add(textBox77);
            inputs->Add(textBox78);
            /**/
            inputs->Add(textBox55);
            inputs->Add(textBox56);
            inputs->Add(textBox57);
            inputs->Add(textBox64);
            inputs->Add(textBox65);
            inputs->Add(textBox66);
            inputs->Add(textBox73);
            inputs->Add(textBox74);
            inputs->Add(textBox75);

            for each (TextBox ^ input in inputs)
            {
                input->MaxLength = 1;
                input->KeyPress += gcnew KeyPressEventHandler(this, &SudokuSolver::textBox_KeyPress);
                input->KeyDown += gcnew KeyEventHandler(this, &SudokuSolver::textBox_KeyDown);

            }

        }

        private: Void clearInputs()
        {
            for each (TextBox^ input in inputs)
            {
                input->Text = "";
                }
        }

        void SudokuSolver::textBox_KeyPress(Object^ sender, KeyPressEventArgs^ e) {
            // Allow digits 1-9 and backspace
            if ((e->KeyChar < '1' || e->KeyChar > '9') && e->KeyChar != '\b') {
                e->Handled = true;  
            }
        }
        void SudokuSolver::textBox_KeyDown(Object^ sender, KeyEventArgs^ e) {
            if (e->Control && e->KeyCode == Keys::V) {
                e->SuppressKeyPress = true;  // Blocks Ctrl+V (paste)
            }
        }
        
        // Updates the UI with the solution
        void UpdateTextBoxes(array<int, 2>^ grid) {
            for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 9; j++) {
                    inputs[i * 9 + j]->Text = (grid[i,j] != 0) ? grid[i,j].ToString() : "";
                }
            }
        }

    private: System::Void clearButton_Click(System::Object^ sender, System::EventArgs^ e) {

        clearInputs();
    }

    // Checks if it's safe to place num in grid[row][col]
    private: bool isSafe(array<int, 2>^ grid, int row, int col, int num) {
        // Check row
        for (int x = 0; x < N; x++)
            if (grid[row,x] == num)
                return false;

        // Check column
        for (int x = 0; x < N; x++)
            if (grid[x,col] == num)
                return false;

        // Check 3x3 subgrid
        int startRow = row - row % 3;
        int startCol = col - col % 3;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                if (grid[i + startRow ,j + startCol] == num)
                    return false;

        return true;
    }

    // Finds an unassigned location in the grid
           bool findUnassignedLocation(array<int, 2>^ grid, int% row, int% col) {
               int minOptions = 10; // Max 9 numbers, 10 ensures we find a smaller count

               for (int r = 0; r < 9; r++) {
                   for (int c = 0; c < 9; c++) {
                       if (grid[r, c] == 0) { // Empty cell
                           int options = 0;
                           for (int num = 1; num <= 9; num++) {
                               if (isSafe(grid, r, c, num))
                                   options++;
                           }
                           if (options < minOptions) {
                               minOptions = options;
                               row = r;
                               col = c;
                           }
                       }
                   }
               }

               return minOptions != 10; // true if we found a cell
           }

    // Solves the Sudoku using backtracking
    bool solveSudoku(array<int, 2>^ grid) {
        int row, col;

        // If there's no unassigned location, we're done
        if (!findUnassignedLocation(grid, row, col))
            return true;

        
        for (int num = 1; num <= 9; num++) {
            // If placing num in grid[row][col] is valid
            if (isSafe(grid, row, col, num)) {
                grid[row ,col] = num;

                // success
                if (solveSudoku(grid))
                    return true;

                // Failure, undo & try again
                grid[row,col] = UNASSIGNED;
            }
        }
        return false; // Trigger backtracking
    }

    void UpdateUI() {
        UpdateTextBoxes(grid);
    }
    // Main: solves the Sudoku using parallelization for less execution time
    void ParallelSolve() {
        
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                String^ text = inputs[i * 9 + j]->Text;
                grid[i, j] = (text->Length > 0) ? Convert::ToInt32(text) : 0;  // empty cells
            }
        }
        if (solveSudoku(grid)) {
            // Update the UI safely from a different thread
            this->Invoke(gcnew Action(this, &SudokuSolver::UpdateUI));
        }
        else {
            MessageBox::Show("No solution found!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
private: System::Void solveButton_Click(System::Object^ sender, System::EventArgs^ e) {

        Task::Run(gcnew Action(this, &SudokuSolver::ParallelSolve));
  
}
};
}
