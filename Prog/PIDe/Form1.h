#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include "pid_file.h"
#include "EngineController.h"
#include <string>
namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
		
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label7;






	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart4;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart5;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea13 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea14 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea15 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend15 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series15 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea16 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend16 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series16 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea17 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend17 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series17 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea18 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend18 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series18 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->chart5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->domainUpDown2 = (gcnew System::Windows::Forms::DomainUpDown());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->chart6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart6))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(56, 634);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Старт";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(56, 683);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(118, 32);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// chart1
			// 
			chartArea13->AxisY->Maximum = 4;
			chartArea13->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea13);
			legend13->Name = L"Legend1";
			this->chart1->Legends->Add(legend13);
			this->chart1->Location = System::Drawing::Point(795, 68);
			this->chart1->Name = L"chart1";
			series13->ChartArea = L"ChartArea1";
			series13->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series13->Legend = L"Legend1";
			series13->Name = L"Угол тангажа, град";
			this->chart1->Series->Add(series13);
			this->chart1->Size = System::Drawing::Size(541, 218);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"chart1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(83, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Kp";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(83, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Ki";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(83, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Kd";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(119, 63);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(62, 20);
			this->textBox1->TabIndex = 6;
			this->textBox1->Text = L"0,1";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(119, 89);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(62, 20);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"0,01";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(119, 115);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(62, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,04";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(49, 32);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(164, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Коэффициенты регулирования";
			// 
			// chart2
			// 
			chartArea14->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea14);
			legend14->Name = L"Legend1";
			this->chart2->Legends->Add(legend14);
			this->chart2->Location = System::Drawing::Point(228, 64);
			this->chart2->Name = L"chart2";
			series14->ChartArea = L"ChartArea1";
			series14->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series14->Legend = L"Legend1";
			series14->Name = L"Расстояние, м";
			this->chart2->Series->Add(series14);
			this->chart2->Size = System::Drawing::Size(541, 222);
			this->chart2->TabIndex = 22;
			this->chart2->Text = L"chart2";
			// 
			// chart3
			// 
			chartArea15->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea15);
			legend15->Name = L"Legend1";
			this->chart3->Legends->Add(legend15);
			this->chart3->Location = System::Drawing::Point(228, 301);
			this->chart3->Name = L"chart3";
			series15->ChartArea = L"ChartArea1";
			series15->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series15->Legend = L"Legend1";
			series15->Name = L"Поворот ОУ, град";
			this->chart3->Series->Add(series15);
			this->chart3->Size = System::Drawing::Size(541, 222);
			this->chart3->TabIndex = 23;
			this->chart3->Text = L"chart3";
			// 
			// chart4
			// 
			chartArea16->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea16);
			legend16->Name = L"Legend1";
			this->chart4->Legends->Add(legend16);
			this->chart4->Location = System::Drawing::Point(795, 301);
			this->chart4->Name = L"chart4";
			series16->ChartArea = L"ChartArea1";
			series16->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series16->Legend = L"Legend1";
			series16->Name = L"Ветер, м/с";
			this->chart4->Series->Add(series16);
			this->chart4->Size = System::Drawing::Size(541, 222);
			this->chart4->TabIndex = 24;
			this->chart4->Text = L"chart4";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(25, 208);
			this->listBox1->Name = L"listBox1";
			this->listBox1->ScrollAlwaysVisible = true;
			this->listBox1->Size = System::Drawing::Size(171, 160);
			this->listBox1->TabIndex = 25;
			// 
			// chart5
			// 
			chartArea17->Name = L"ChartArea1";
			this->chart5->ChartAreas->Add(chartArea17);
			legend17->Name = L"Legend1";
			this->chart5->Legends->Add(legend17);
			this->chart5->Location = System::Drawing::Point(795, 541);
			this->chart5->Name = L"chart5";
			series17->ChartArea = L"ChartArea1";
			series17->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series17->Legend = L"Legend1";
			series17->Name = L"Перемещения, мм";
			this->chart5->Series->Add(series17);
			this->chart5->Size = System::Drawing::Size(541, 222);
			this->chart5->TabIndex = 26;
			this->chart5->Text = L"chart5";
			// 
			// domainUpDown1
			// 
			this->domainUpDown1->Items->Add(L"5");
			this->domainUpDown1->Items->Add(L"4");
			this->domainUpDown1->Items->Add(L"3");
			this->domainUpDown1->Items->Add(L"2");
			this->domainUpDown1->Items->Add(L"1");
			this->domainUpDown1->Location = System::Drawing::Point(119, 141);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->Size = System::Drawing::Size(77, 20);
			this->domainUpDown1->TabIndex = 27;
			this->domainUpDown1->Text = L"5";
			this->domainUpDown1->SelectedItemChanged += gcnew System::EventHandler(this, &Form1::domainUpDown1_SelectedItemChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(79, 144);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 13);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Мода";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(22, 169);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(91, 13);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Заданное время";
			// 
			// domainUpDown2
			// 
			this->domainUpDown2->Items->Add(L"129");
			this->domainUpDown2->Items->Add(L"120");
			this->domainUpDown2->Items->Add(L"110");
			this->domainUpDown2->Items->Add(L"100");
			this->domainUpDown2->Items->Add(L"90");
			this->domainUpDown2->Items->Add(L"80");
			this->domainUpDown2->Items->Add(L"70");
			this->domainUpDown2->Items->Add(L"60");
			this->domainUpDown2->Items->Add(L"50");
			this->domainUpDown2->Items->Add(L"40");
			this->domainUpDown2->Items->Add(L"30");
			this->domainUpDown2->Items->Add(L"20");
			this->domainUpDown2->Items->Add(L"10");
			this->domainUpDown2->Location = System::Drawing::Point(119, 167);
			this->domainUpDown2->Name = L"domainUpDown2";
			this->domainUpDown2->Size = System::Drawing::Size(77, 20);
			this->domainUpDown2->TabIndex = 31;
			this->domainUpDown2->Text = L"26";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(59, 611);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(107, 17);
			this->checkBox1->TabIndex = 41;
			this->checkBox1->Text = L"Учет колебаний";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// chart6
			// 
			chartArea18->Name = L"ChartArea1";
			this->chart6->ChartAreas->Add(chartArea18);
			legend18->Name = L"Legend1";
			this->chart6->Legends->Add(legend18);
			this->chart6->Location = System::Drawing::Point(228, 541);
			this->chart6->Name = L"chart6";
			series18->ChartArea = L"ChartArea1";
			series18->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series18->Legend = L"Legend1";
			series18->Name = L"Угол атаки, град";
			this->chart6->Series->Add(series18);
			this->chart6->Size = System::Drawing::Size(541, 222);
			this->chart6->TabIndex = 42;
			this->chart6->Text = L"chart6";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(25, 401);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox4->Size = System::Drawing::Size(171, 156);
			this->textBox4->TabIndex = 43;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(423, 0);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 44;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(187, 70);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(22, 13);
			this->label5->TabIndex = 45;
			this->label5->Text = L"0,1";
			this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(187, 96);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 13);
			this->label8->TabIndex = 46;
			this->label8->Text = L"0,01";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(187, 122);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(28, 13);
			this->label9->TabIndex = 47;
			this->label9->Text = L"0,04";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1374, 795);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->chart6);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->domainUpDown2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->domainUpDown1);
			this->Controls->Add(this->chart5);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->chart4);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Пропорциональный Интегральный Дифференциальный Регулятор";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) 
	{

	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		// Объявление потоков
			ifstream Aero;
			ifstream Dow;
			ifstream Cin;
			ifstream CEqual;
			ifstream Alpha;

			Aero.open("C:\\Users\\smeta\\OneDrive\\Рабочий стол\\study storage\\12 S\\PID-reg\\Start data\\Посадка\\reAero.txt");
			Dow.open("C:\\Users\\smeta\\OneDrive\\Рабочий стол\\study storage\\12 S\\PID-reg\\Start data\\Посадка\\reDow.txt");
			Cin.open("C:\\Users\\smeta\\OneDrive\\Рабочий стол\\study storage\\12 S\\PID-reg\\Start data\\Посадка\\reCin.txt");
			CEqual.open("C:\\Users\\smeta\\OneDrive\\Рабочий стол\\study storage\\12 S\\PID-reg\\Start data\\Посадка\\reCEqual.txt");
			//Alpha.open("C:\\Users\\smeta\\OneDrive\\Рабочий стол\\study storage\\12 S\\PID-reg\\Start data\\Посадка\\Alpha.txt");

			float kp, ki, kd, goal, h=0.5;
			float Time ;
			int N = Convert::ToInt64(domainUpDown2->Text) * 2;
			int Mod = Convert::ToDouble(domainUpDown1->Text);
			float KK, KS[5], KdS[5], KddS[5], Summ_KS[5];

			std::unique_ptr<float[]> Cvv(new float[N]);
			std::unique_ptr<float[]> Cvw(new float[N]);
			std::unique_ptr<float[]> Cwv(new float[N]);
			std::unique_ptr<float[]> Cvb(new float[N]);
			std::unique_ptr<float[]> Cwb(new float[N]);
			std::unique_ptr<float[]> Cww(new float[N]);
			std::unique_ptr<float[]> Wind(new float[N]);
			std::unique_ptr<float[]> Csb(new float[N]);
			std::unique_ptr<float[]> Qv(new float[N]);
			std::unique_ptr<float[]> Qs(new float[N]);
			std::unique_ptr<float[]> Qw(new float[N]);
			std::unique_ptr<float[]> Vel(new float[N]);
			std::unique_ptr<float[]> Alp(new float[N]);
			std::unique_ptr<float[]> newAlp(new float[N]);

			std::unique_ptr< std::unique_ptr<float[]>[]> dow (new std::unique_ptr<float[]>[5]);
			std::unique_ptr< std::unique_ptr<float[]>[]> Cws(new std::unique_ptr<float[]>[5]);
			std::unique_ptr< std::unique_ptr<float[]>[]> Cvs(new std::unique_ptr<float[]>[5]);
			for (int j = 0; j < 5; j++)
			{
				dow[j].reset(new float[N]);
				Cws[j].reset(new float[N]);
				Cvs[j].reset(new float[N]);
			}




			float s[5];
			float ds[5];
			float dds[5];
			float double_W[5];

			for (int i = 0; i < 5; i++)
			{
				s[i] = 0;
				ds[i] = 0;
				dds[i] = 0;
			}

			float bmax, bmin;
			float
				w = 0,
				dw = 0,
				ddw = 0,
				v = 0,
				dv = 0,
				u = 0,
				y = 0,
				du = 0,
				ddu = 0,
				uc = 0,
				Summ_Cws=0,
				Summ_Cvs=0,
				Summ_S=0;

			float A0;
			float AU;
			float A1;
			float N0;
			float N1;
			chart1->Series[0]->Points->Clear();
			chart2->Series[0]->Points->Clear();
			chart3->Series[0]->Points->Clear();
			chart4->Series[0]->Points->Clear();
			chart5->Series[0]->Points->Clear();
			chart6->Series[0]->Points->Clear();
			listBox1->Items->Clear();
			
			kp = Convert::ToDouble(textBox1->Text);
			ki = Convert::ToDouble(textBox2->Text);
			kd = Convert::ToDouble(textBox3->Text);

			goal = 0;

			PID pid1(kp, ki, kd, 0.5, goal);
			PID pid2(kp, ki, kd, 0.5, goal);
			PID pid3(kp, ki, kd, 0.5, goal);
			PID pid4(kp, ki, kd, 0.5, goal);

			bmax = 7 / 57.3;

			//EngineController controller(0.1);

			for (int i = 0; i < N; i++)
			{
				// Чтение файла с данными аэродинамики
				Aero >> Wind[i] >> Qv[i] >> Qs[i] >> Qw[i] >> Vel[i];
				// Чтение файла с частотами
				Dow >> dow[0][i] >> dow[1][i] >> dow[2][i] >> dow[3][i] >> dow[4][i];
				// Чтения файла с колебательными коэффициентами
				Cin  >> Cws[0][i] >> Cvs[0][i];
				Cin  >> Cws[1][i] >> Cvs[1][i];
				Cin  >> Cws[2][i] >> Cvs[2][i];
				Cin  >> Cws[3][i] >> Cvs[3][i];
				Cin  >> Cws[4][i] >> Cvs[4][i];
				// Чтение файлов с коэффициентами движения
				CEqual >> Cvb[i];
				CEqual >> Cvw[i];
				CEqual >> Cww[i];
				CEqual >> Cvv[i];
				CEqual >> Cwv[i];
				CEqual >> Cwb[i];
				CEqual >> Csb[i];
				// Чтение файла с углами атаки
				Alpha >> Alp[i];
				//Alp[i] = 0;
				newAlp[i] = w-(v-Wind[i])/ Vel[i];

				//uc = ki * w + kp * dw + kd * ddw;
				//uc = pid1.signal(w)+ pid2.signal(dw);
				uc = pid1.signal(dw);
				//uc += pid3.signal(y);
				//uc += pid4.signal(v);

				if (uc >= bmax) uc = bmax;
				if (uc <=-bmax) uc =-bmax;
					
				Summ_Cws = Cws[0][i]*s[0] + Cws[1][i]*s[1] + Cws[2][i]*s[2] + Cws[3][i]*s[3] + Cws[4][i]*s[4];
				Summ_Cvs = Cvs[0][i]*s[0] + Cvs[1][i]*s[1] + Cvs[2][i]*s[2] + Cvs[3][i]*s[3] + Cvs[4][i]*s[4];
				AU = Qs[i] * (w - (v - Wind[i]) / Vel[i]);

				for (int j = 0; j < 5; j++)
				{
					double_W[j] = dow[j][i];
				}
				// Контроллер переменной конструкции
				KS[0] = 0;   KS[1] = 0;   KS[2] = 0;         KS  [3] = 0;      KS[4]  = 0;
				KdS[0] = 0;  KdS[1] = 0;  KdS[2] = 0;        KdS [3] = 0;      KdS[4] = 0;
				//KddS[0] = 0; KddS[1] = 0; KddS[2] = 0;      KddS[3] = 5.5;    KddS[4] = 13;
				KddS[0] = 0; KddS[1] = 0; KddS[2] = 1.5;      KddS[3] =5.5;    KddS[4]= 13;
			
				for (int j = 0; j < 5; j++)
				{
					Summ_KS[j] = KS[j] * s[j] + KdS[j] * ds[j];
					Summ_S += s[j];
				}

				dv =  Cvv[i] * Wind[i] - Cvw[i] * w - Cvv[i] * v + Cvb[i] * uc -Summ_Cvs; // 
				ddw = Cwv[i] * Wind[i] - Cww[i] * w - Cwv[i] * v - Cwb[i] * uc -Summ_Cws; //

				  if (checkBox1->CheckState == CheckState::Checked)
				  {
					  dds[0] = -0.5 * sqrt(double_W[0]) / 3.14 * ds[0] - double_W[0] * s[0] + Csb[i] * uc;// -Summ_KS[0];
					  dds[1] = -0.5 * sqrt(double_W[1]) / 3.14 * ds[1] - double_W[1] * s[1] - Csb[i] * uc;// - Summ_KS[1];  
					  dds[2] = -0.5 * sqrt(double_W[2]) / 3.14 * ds[2] - double_W[2] * s[2] + Csb[i] * uc;// - Summ_KS[2];  
					  dds[3] = -0.5 * sqrt(double_W[3]) / 3.14 * ds[3] - double_W[3] * s[3] - Csb[i] * uc;// - Summ_KS[3];  
					  dds[4] = -0.5 * sqrt(double_W[4]) / 3.14 * ds[4] - double_W[4] * s[4] + Csb[i] * uc;// - Summ_KS[4]; 

					  dv     -= Qv[i] * s[0];
					  ddw    -= Qw[i] * s[0];
					  dds[0] -= AU;
					  dds[1] -= AU;
					  dds[2] -= AU;
					  dds[3] -= AU;
					  dds[4] -= AU;
				  }

				 //Интегрирование
				  v += h * dv;
				  dw += h * ddw;
				  w += h * dw;
				  du += h * ddu;
				  u += h * du;
				  y += h * v;

				  std::cout << v << std::endl;
				for (int j = 0; j < Mod; j++)
				{
					ds[j] += h * dds[j] * pow(1+KddS[j],-1); 
					s[j] += h * ds[j] * pow(1 + KdS[j], -1);
					s[j] = s[j] * pow(1 + KS[j], -1);
				}

				//Summ_S * 1000

				// FrontEnd

				//listBox1->Items->Add(Time+"  "+ newAlp[i] * 57.3);
				textBox4->Text += Convert::ToString(Time)+" "+ Convert::ToString(v) + "\n";

				Time += 0.5;
				chart1->Series[0]->Points->AddXY(Time, w*57.3);

				chart2->Series[0]->Points->AddXY(Time, y);
				//chart2->Series[1]->Points->AddXY(Time, Vel[i]);
				//chart3->Series[0]->Points->AddXY(Time, y);
				chart3->Series[0]->Points->AddXY(Time, uc*57.3);
				chart4->Series[0]->Points->AddXY(Time, Wind[i]);
				chart5->Series[0]->Points->AddXY(Time, Summ_S * 1000);
				chart6->Series[0]->Points->AddXY(Time, newAlp[i] * 57.3);
				if (abs(newAlp[i] * 57.3) >= 5) 
				{ 
					break; 
				}

			}
			// 	number = System::Convert::ToString(Time);
			//  textBox5->Text = number;
			// Удаление массивов


			
			// Удаление потоков
			Aero.close();
			Dow.close();
			Cin.close();
			CEqual.close();
			Alpha.close();
	}
		   
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	Application::Exit();

	}

private: System::Void domainUpDown1_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
