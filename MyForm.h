#pragma once

namespace Laba5 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

#include "Function.h"
    /// <summary>
    /// Summary for MyForm
    /// </summary>
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            cont = gcnew FilmContainer(textBox3);
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

    private:
        FilmContainer^ cont;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::TextBox^ textBox4;

    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::TextBox^ textBox8;
    private: System::Windows::Forms::TextBox^ textBox9;
    private: System::Windows::Forms::TextBox^ textBox10;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::TextBox^ textBox11;
    private: System::Windows::Forms::TextBox^ textBox12;
    private: System::Windows::Forms::TextBox^ textBox13;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::TextBox^ textBox14;
    private: System::Windows::Forms::TextBox^ textBox15;
    private: System::Windows::Forms::TextBox^ textBox16;
    private: System::Windows::Forms::Button^ button1;


    private: System::Windows::Forms::Button^ button4;


    private: System::Windows::Forms::Button^ button7;


    private: System::Windows::Forms::Button^ button10;


    private: System::Windows::Forms::Button^ button13;


    private: System::Windows::Forms::Button^ button16;
    private: System::Windows::Forms::Button^ button17;
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
               this->textBox1 = (gcnew System::Windows::Forms::TextBox());
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->textBox2 = (gcnew System::Windows::Forms::TextBox());
               this->textBox3 = (gcnew System::Windows::Forms::TextBox());
               this->label2 = (gcnew System::Windows::Forms::Label());
               this->label3 = (gcnew System::Windows::Forms::Label());
               this->label4 = (gcnew System::Windows::Forms::Label());
               this->label5 = (gcnew System::Windows::Forms::Label());
               this->textBox4 = (gcnew System::Windows::Forms::TextBox());
               this->label7 = (gcnew System::Windows::Forms::Label());
               this->label8 = (gcnew System::Windows::Forms::Label());
               this->label9 = (gcnew System::Windows::Forms::Label());
               this->label10 = (gcnew System::Windows::Forms::Label());
               this->textBox5 = (gcnew System::Windows::Forms::TextBox());
               this->textBox6 = (gcnew System::Windows::Forms::TextBox());
               this->textBox7 = (gcnew System::Windows::Forms::TextBox());
               this->label11 = (gcnew System::Windows::Forms::Label());
               this->label12 = (gcnew System::Windows::Forms::Label());
               this->label13 = (gcnew System::Windows::Forms::Label());
               this->label14 = (gcnew System::Windows::Forms::Label());
               this->textBox8 = (gcnew System::Windows::Forms::TextBox());
               this->textBox9 = (gcnew System::Windows::Forms::TextBox());
               this->textBox10 = (gcnew System::Windows::Forms::TextBox());
               this->label15 = (gcnew System::Windows::Forms::Label());
               this->label16 = (gcnew System::Windows::Forms::Label());
               this->label17 = (gcnew System::Windows::Forms::Label());
               this->label18 = (gcnew System::Windows::Forms::Label());
               this->textBox11 = (gcnew System::Windows::Forms::TextBox());
               this->textBox12 = (gcnew System::Windows::Forms::TextBox());
               this->textBox13 = (gcnew System::Windows::Forms::TextBox());
               this->label19 = (gcnew System::Windows::Forms::Label());
               this->label20 = (gcnew System::Windows::Forms::Label());
               this->label21 = (gcnew System::Windows::Forms::Label());
               this->label22 = (gcnew System::Windows::Forms::Label());
               this->textBox14 = (gcnew System::Windows::Forms::TextBox());
               this->textBox15 = (gcnew System::Windows::Forms::TextBox());
               this->textBox16 = (gcnew System::Windows::Forms::TextBox());
               this->button1 = (gcnew System::Windows::Forms::Button());
               this->button4 = (gcnew System::Windows::Forms::Button());
               this->button7 = (gcnew System::Windows::Forms::Button());
               this->button10 = (gcnew System::Windows::Forms::Button());
               this->button13 = (gcnew System::Windows::Forms::Button());
               this->button16 = (gcnew System::Windows::Forms::Button());
               this->button17 = (gcnew System::Windows::Forms::Button());
               this->SuspendLayout();
               // 
               // textBox1
               // 
               this->textBox1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->textBox1->Location = System::Drawing::Point(18, 179);
               this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->textBox1->Name = L"textBox1";
               this->textBox1->Size = System::Drawing::Size(140, 24);
               this->textBox1->TabIndex = 0;
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label1->Location = System::Drawing::Point(1143, 92);
               this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(244, 60);
               this->label1->TabIndex = 1;
               this->label1->Text = L"Film List";
               // 
               // textBox2
               // 
               this->textBox2->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->textBox2->Location = System::Drawing::Point(18, 239);
               this->textBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->textBox2->Name = L"textBox2";
               this->textBox2->Size = System::Drawing::Size(140, 24);
               this->textBox2->TabIndex = 2;
               // 
               // textBox3
               // 
               this->textBox3->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->textBox3->ForeColor = System::Drawing::SystemColors::InfoText;
               this->textBox3->Location = System::Drawing::Point(986, 174);
               this->textBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->textBox3->Multiline = true;
               this->textBox3->Name = L"textBox3";
               this->textBox3->Size = System::Drawing::Size(661, 488);
               this->textBox3->TabIndex = 3;
               // 
               // label2
               // 
               this->label2->AutoSize = true;
               this->label2->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label2->Location = System::Drawing::Point(20, 93);
               this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(158, 30);
               this->label2->TabIndex = 4;
               this->label2->Text = L"Biographic";
               // 
               // label3
               // 
               this->label3->AutoSize = true;
               this->label3->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label3->Location = System::Drawing::Point(18, 149);
               this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label3->Name = L"label3";
               this->label3->Size = System::Drawing::Size(95, 20);
               this->label3->TabIndex = 5;
               this->label3->Text = L"Film Name";
               // 
               // label4
               // 
               this->label4->AutoSize = true;
               this->label4->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label4->Location = System::Drawing::Point(18, 209);
               this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label4->Name = L"label4";
               this->label4->Size = System::Drawing::Size(39, 20);
               this->label4->TabIndex = 6;
               this->label4->Text = L"Age";
               // 
               // label5
               // 
               this->label5->AutoSize = true;
               this->label5->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label5->Location = System::Drawing::Point(12, 285);
               this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label5->Name = L"label5";
               this->label5->Size = System::Drawing::Size(68, 20);
               this->label5->TabIndex = 7;
               this->label5->Text = L"Rating";
               // 
               // textBox4
               // 
               this->textBox4->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->textBox4->Location = System::Drawing::Point(15, 315);
               this->textBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->textBox4->Name = L"textBox4";
               this->textBox4->Size = System::Drawing::Size(144, 24);
               this->textBox4->TabIndex = 8;
               // 
               // label7
               // 
               this->label7->AutoSize = true;
               this->label7->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label7->Location = System::Drawing::Point(321, 93);
               this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label7->Name = L"label7";
               this->label7->Size = System::Drawing::Size(123, 30);
               this->label7->TabIndex = 10;
               this->label7->Text = L"Cartoon";
               // 
               // label8
               // 
               this->label8->AutoSize = true;
               this->label8->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label8->Location = System::Drawing::Point(322, 149);
               this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label8->Name = L"label8";
               this->label8->Size = System::Drawing::Size(95, 20);
               this->label8->TabIndex = 11;
               this->label8->Text = L"Film Name";
               // 
               // label9
               // 
               this->label9->AutoSize = true;
               this->label9->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label9->Location = System::Drawing::Point(322, 209);
               this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label9->Name = L"label9";
               this->label9->Size = System::Drawing::Size(39, 20);
               this->label9->TabIndex = 12;
               this->label9->Text = L"Age";
               // 
               // label10
               // 
               this->label10->AutoSize = true;
               this->label10->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label10->Location = System::Drawing::Point(322, 285);
               this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label10->Name = L"label10";
               this->label10->Size = System::Drawing::Size(68, 20);
               this->label10->TabIndex = 13;
               this->label10->Text = L"Rating";
               // 
               // textBox5
               // 
               this->textBox5->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->textBox5->Location = System::Drawing::Point(328, 179);
               this->textBox5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->textBox5->Name = L"textBox5";
               this->textBox5->Size = System::Drawing::Size(134, 24);
               this->textBox5->TabIndex = 14;
               // 
               // textBox6
               // 
               this->textBox6->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->textBox6->Location = System::Drawing::Point(328, 239);
               this->textBox6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->textBox6->Name = L"textBox6";
               this->textBox6->Size = System::Drawing::Size(134, 24);
               this->textBox6->TabIndex = 15;
               // 
               // textBox7
               // 
               this->textBox7->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->textBox7->Location = System::Drawing::Point(328, 315);
               this->textBox7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->textBox7->Name = L"textBox7";
               this->textBox7->Size = System::Drawing::Size(134, 24);
               this->textBox7->TabIndex = 16;
               // 
               // label11
               // 
               this->label11->AutoSize = true;
               this->label11->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label11->Location = System::Drawing::Point(20, 420);
               this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label11->Name = L"label11";
               this->label11->Size = System::Drawing::Size(134, 30);
               this->label11->TabIndex = 17;
               this->label11->Text = L"Scientific";
               // 
               // label12
               // 
               this->label12->AutoSize = true;
               this->label12->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label12->Location = System::Drawing::Point(21, 484);
               this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label12->Name = L"label12";
               this->label12->Size = System::Drawing::Size(95, 20);
               this->label12->TabIndex = 18;
               this->label12->Text = L"Film Name";
               // 
               // label13
               // 
               this->label13->AutoSize = true;
               this->label13->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label13->Location = System::Drawing::Point(21, 544);
               this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label13->Name = L"label13";
               this->label13->Size = System::Drawing::Size(39, 20);
               this->label13->TabIndex = 19;
               this->label13->Text = L"AGE";
               // 
               // label14
               // 
               this->label14->AutoSize = true;
               this->label14->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label14->Location = System::Drawing::Point(21, 615);
               this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label14->Name = L"label14";
               this->label14->Size = System::Drawing::Size(68, 20);
               this->label14->TabIndex = 20;
               this->label14->Text = L"Rating";
               // 
               // textBox8
               // 
               this->textBox8->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->textBox8->Location = System::Drawing::Point(24, 514);
               this->textBox8->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->textBox8->Name = L"textBox8";
               this->textBox8->Size = System::Drawing::Size(140, 24);
               this->textBox8->TabIndex = 21;
               // 
               // textBox9
               // 
               this->textBox9->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->textBox9->Location = System::Drawing::Point(18, 577);
               this->textBox9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->textBox9->Name = L"textBox9";
               this->textBox9->Size = System::Drawing::Size(140, 24);
               this->textBox9->TabIndex = 22;
               // 
               // textBox10
               // 
               this->textBox10->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->textBox10->Location = System::Drawing::Point(18, 645);
               this->textBox10->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->textBox10->Name = L"textBox10";
               this->textBox10->Size = System::Drawing::Size(140, 24);
               this->textBox10->TabIndex = 23;
               // 
               // label15
               // 
               this->label15->AutoSize = true;
               this->label15->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label15->Location = System::Drawing::Point(321, 420);
               this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label15->Name = L"label15";
               this->label15->Size = System::Drawing::Size(191, 30);
               this->label15->TabIndex = 24;
               this->label15->Text = L"Documentary";
               // 
               // label16
               // 
               this->label16->AutoSize = true;
               this->label16->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label16->Location = System::Drawing::Point(324, 484);
               this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label16->Name = L"label16";
               this->label16->Size = System::Drawing::Size(95, 20);
               this->label16->TabIndex = 25;
               this->label16->Text = L"Film name";
               // 
               // label17
               // 
               this->label17->AutoSize = true;
               this->label17->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label17->Location = System::Drawing::Point(324, 544);
               this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label17->Name = L"label17";
               this->label17->Size = System::Drawing::Size(39, 20);
               this->label17->TabIndex = 26;
               this->label17->Text = L"age";
               // 
               // label18
               // 
               this->label18->AutoSize = true;
               this->label18->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label18->Location = System::Drawing::Point(324, 615);
               this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label18->Name = L"label18";
               this->label18->Size = System::Drawing::Size(68, 20);
               this->label18->TabIndex = 27;
               this->label18->Text = L"rating";
               // 
               // textBox11
               // 
               this->textBox11->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->textBox11->Location = System::Drawing::Point(328, 514);
               this->textBox11->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->textBox11->Name = L"textBox11";
               this->textBox11->Size = System::Drawing::Size(134, 24);
               this->textBox11->TabIndex = 28;
               // 
               // textBox12
               // 
               this->textBox12->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->textBox12->Location = System::Drawing::Point(328, 577);
               this->textBox12->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->textBox12->Name = L"textBox12";
               this->textBox12->Size = System::Drawing::Size(134, 24);
               this->textBox12->TabIndex = 29;
               // 
               // textBox13
               // 
               this->textBox13->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->textBox13->Location = System::Drawing::Point(328, 645);
               this->textBox13->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->textBox13->Name = L"textBox13";
               this->textBox13->Size = System::Drawing::Size(134, 24);
               this->textBox13->TabIndex = 30;
               // 
               // label19
               // 
               this->label19->AutoSize = true;
               this->label19->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label19->Location = System::Drawing::Point(632, 92);
               this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label19->Name = L"label19";
               this->label19->Size = System::Drawing::Size(218, 30);
               this->label19->TabIndex = 31;
               this->label19->Text = L"children\'s films";
               // 
               // label20
               // 
               this->label20->AutoSize = true;
               this->label20->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label20->Location = System::Drawing::Point(633, 149);
               this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label20->Name = L"label20";
               this->label20->Size = System::Drawing::Size(95, 20);
               this->label20->TabIndex = 32;
               this->label20->Text = L"film name";
               // 
               // label21
               // 
               this->label21->AutoSize = true;
               this->label21->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label21->Location = System::Drawing::Point(634, 209);
               this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label21->Name = L"label21";
               this->label21->Size = System::Drawing::Size(39, 20);
               this->label21->TabIndex = 33;
               this->label21->Text = L"Age";
               // 
               // label22
               // 
               this->label22->AutoSize = true;
               this->label22->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label22->Location = System::Drawing::Point(633, 286);
               this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label22->Name = L"label22";
               this->label22->Size = System::Drawing::Size(68, 20);
               this->label22->TabIndex = 34;
               this->label22->Text = L"Rating";
               // 
               // textBox14
               // 
               this->textBox14->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->textBox14->Location = System::Drawing::Point(639, 179);
               this->textBox14->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->textBox14->Name = L"textBox14";
               this->textBox14->Size = System::Drawing::Size(134, 24);
               this->textBox14->TabIndex = 35;
               // 
               // textBox15
               // 
               this->textBox15->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->textBox15->Location = System::Drawing::Point(639, 239);
               this->textBox15->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->textBox15->Name = L"textBox15";
               this->textBox15->Size = System::Drawing::Size(134, 24);
               this->textBox15->TabIndex = 36;
               // 
               // textBox16
               // 
               this->textBox16->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->textBox16->Location = System::Drawing::Point(639, 313);
               this->textBox16->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->textBox16->Name = L"textBox16";
               this->textBox16->Size = System::Drawing::Size(134, 24);
               this->textBox16->TabIndex = 37;
               // 
               // button1
               // 
               this->button1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->button1->Location = System::Drawing::Point(176, 235);
               this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->button1->Name = L"button1";
               this->button1->Size = System::Drawing::Size(112, 30);
               this->button1->TabIndex = 38;
               this->button1->Text = L"Input";
               this->button1->UseVisualStyleBackColor = true;
               this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
               // 
               // button4
               // 
               this->button4->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->button4->Location = System::Drawing::Point(474, 235);
               this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->button4->Name = L"button4";
               this->button4->Size = System::Drawing::Size(112, 30);
               this->button4->TabIndex = 41;
               this->button4->Text = L"Input";
               this->button4->UseVisualStyleBackColor = true;
               this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
               // 
               // button7
               // 
               this->button7->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->button7->Location = System::Drawing::Point(784, 235);
               this->button7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->button7->Name = L"button7";
               this->button7->Size = System::Drawing::Size(112, 30);
               this->button7->TabIndex = 44;
               this->button7->Text = L"Input";
               this->button7->UseVisualStyleBackColor = true;
               this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
               // 
               // button10
               // 
               this->button10->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->button10->Location = System::Drawing::Point(176, 573);
               this->button10->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->button10->Name = L"button10";
               this->button10->Size = System::Drawing::Size(112, 30);
               this->button10->TabIndex = 47;
               this->button10->Text = L"Input";
               this->button10->UseVisualStyleBackColor = true;
               this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
               // 
               // button13
               // 
               this->button13->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->button13->Location = System::Drawing::Point(474, 573);
               this->button13->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->button13->Name = L"button13";
               this->button13->Size = System::Drawing::Size(112, 30);
               this->button13->TabIndex = 50;
               this->button13->Text = L"Input";
               this->button13->UseVisualStyleBackColor = true;
               this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
               // 
               // button16
               // 
               this->button16->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->button16->Location = System::Drawing::Point(1158, 711);
               this->button16->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->button16->Name = L"button16";
               this->button16->Size = System::Drawing::Size(112, 30);
               this->button16->TabIndex = 53;
               this->button16->Text = L"Output";
               this->button16->UseVisualStyleBackColor = true;
               this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
               // 
               // button17
               // 
               this->button17->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->button17->Location = System::Drawing::Point(1396, 711);
               this->button17->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->button17->Name = L"button17";
               this->button17->Size = System::Drawing::Size(112, 30);
               this->button17->TabIndex = 54;
               this->button17->Text = L"Clear";
               this->button17->UseVisualStyleBackColor = true;
               this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
               // 
               // MyForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(9, 17);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(1653, 774);
               this->Controls->Add(this->button17);
               this->Controls->Add(this->button16);
               this->Controls->Add(this->button13);
               this->Controls->Add(this->button10);
               this->Controls->Add(this->button7);
               this->Controls->Add(this->button4);
               this->Controls->Add(this->button1);
               this->Controls->Add(this->textBox16);
               this->Controls->Add(this->textBox15);
               this->Controls->Add(this->textBox14);
               this->Controls->Add(this->label22);
               this->Controls->Add(this->label21);
               this->Controls->Add(this->label20);
               this->Controls->Add(this->label19);
               this->Controls->Add(this->textBox13);
               this->Controls->Add(this->textBox12);
               this->Controls->Add(this->textBox11);
               this->Controls->Add(this->label18);
               this->Controls->Add(this->label17);
               this->Controls->Add(this->label16);
               this->Controls->Add(this->label15);
               this->Controls->Add(this->textBox10);
               this->Controls->Add(this->textBox9);
               this->Controls->Add(this->textBox8);
               this->Controls->Add(this->label14);
               this->Controls->Add(this->label13);
               this->Controls->Add(this->label12);
               this->Controls->Add(this->label11);
               this->Controls->Add(this->textBox7);
               this->Controls->Add(this->textBox6);
               this->Controls->Add(this->textBox5);
               this->Controls->Add(this->label10);
               this->Controls->Add(this->label9);
               this->Controls->Add(this->label8);
               this->Controls->Add(this->label7);
               this->Controls->Add(this->textBox4);
               this->Controls->Add(this->label5);
               this->Controls->Add(this->label4);
               this->Controls->Add(this->label3);
               this->Controls->Add(this->label2);
               this->Controls->Add(this->textBox3);
               this->Controls->Add(this->textBox2);
               this->Controls->Add(this->label1);
               this->Controls->Add(this->textBox1);
               this->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->Name = L"MyForm";
               this->Text = L"MyForm";
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            String^ name = textBox1->Text;
            String^ rating = textBox4->Text;
            String^ age = textBox2->Text;
            int ageValue;
            if (!Int32::TryParse(textBox2->Text, ageValue)) {
                throw gcnew System::FormatException("Error entering age. Please enter a number.");
            }
            double ratingValue;
            if (!Double::TryParse(textBox4->Text, ratingValue)) {
                throw gcnew System::FormatException("Error entering rating. Please enter a number.");
            }
            Bio^ film = gcnew Bio(name, "Bio", age, rating);
            cont->Add(film);
        }
        catch (System::FormatException^ ex) {
            MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            String^ name = textBox5->Text;
            String^ rating = textBox7->Text;
            String^ age = textBox6->Text;
            int ageValue;
            if (!Int32::TryParse(textBox6->Text, ageValue)) {
                throw gcnew System::FormatException("Error entering age. Please enter a number.");
            }
            double ratingValue;
            if (!Double::TryParse(textBox7->Text, ratingValue)) {
                throw gcnew System::FormatException("Error entering rating. Please enter a number.");
            }
            Cartoon^ film = gcnew Cartoon(name, "Cartoon", age, rating);
            cont->Add(film);
        }
            catch (System::FormatException^ ex) {
                MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
    
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
    try {
    String^ name = textBox14->Text;
    String^ rating = textBox16->Text;
    String^ age = textBox15->Text;
    int ageValue;
    if (!Int32::TryParse(textBox15->Text, ageValue)) {
        throw gcnew System::FormatException("Error entering age. Please enter a number.");
    }
    double ratingValue;
    if (!Double::TryParse(textBox16->Text, ratingValue)) {
        throw gcnew System::FormatException("Error entering rating. Please enter a number.");
    }
    Children^ film = gcnew Children(name, "Children", age, rating);
    cont->Add(film);
    }
    catch (System::FormatException^ ex) {
        MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
    try {
    String^ name = textBox8->Text;
    String^ rating = textBox10->Text;
    String^ age = textBox9->Text;
    int ageValue;
    if (!Int32::TryParse(textBox9->Text, ageValue)) {
        throw gcnew System::FormatException("Error entering age. Please enter a number.");
    }
    double ratingValue;
    if (!Double::TryParse(textBox10->Text, ratingValue)) {
        throw gcnew System::FormatException("Error entering rating. Please enter a number.");
    }
    Scientific^ film = gcnew Scientific(name, "Scientific", age, rating);
    cont->Add(film);
}
    catch (System::FormatException^ ex) {
        MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}

private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
    try {
    String^ name = textBox11->Text;
    String^ rating = textBox13->Text;
    String^ age = textBox12->Text;
    int ageValue;
    if (!Int32::TryParse(textBox12->Text, ageValue)) {
        throw gcnew System::FormatException("Error entering age. Please enter a number.");
    }
    double ratingValue;
    if (!Double::TryParse(textBox13->Text, ratingValue)) {
        throw gcnew System::FormatException("Error entering rating. Please enter a number.");
    }
    Doc^ film = gcnew Doc(name, "Doc", age, rating);
    cont->Add(film);
}
    catch (System::FormatException^ ex) {
        MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
    cont->Output();
}

private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
    cont->Clear();
    cont->Output();
}

};
}