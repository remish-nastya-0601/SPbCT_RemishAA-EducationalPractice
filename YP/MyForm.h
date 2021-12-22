#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <stdio.h>
#include <time.h>
#include <vector>
#include <thread>
#include <algorithm>
#include <chrono>
#include "MyLibrary.h"
#include <mutex>



namespace YP {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Threading;
	using namespace std;


	ifstream f;
	vector<char> v1, v2, v3, v4, v5, v6, v7, v8, v9, v10;



	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{


	public:
		MyForm(void)
		{
			InitializeComponent();

			timer1->Start();

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::DataGridView^ dataGridView1;
	private:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::ComponentModel::IContainer^ components;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(347, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ремиш Анастасия Алексеевна, группа 501";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(597, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Дата и время";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->Location = System::Drawing::Point(17, 46);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(735, 253);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(17, 305);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(227, 36);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Исходные данные";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(525, 305);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(227, 36);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Преобразованный файл";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(764, 354);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Производственная практика";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: Thread^ myThread1;
	private: Thread^ myThread2;
	private: Thread^ myThread3;
	private: Thread^ myThread4;
	private: Thread^ myThread5;


	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) { //для текущего времени
		DateTime dateTime = DateTime::Now;
		this->label2->Text = dateTime.ToString();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { //вывод исходного файла
		
		ifstream input("100.txt");
		dataGridView1->ColumnCount = 10;
		dataGridView1->RowCount = 10;
		if (input.is_open()) {
			char ch;
			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 10; j++) {
					input.get(ch);
					dataGridView1->Rows[i]->Cells[j]->Value = ((wchar_t)ch).ToString();
				}
			}
			input.close();
		}

	}


	public:
		void vect(vector<char> v, int n) { 
			char letter;
			ifstream f;
			f.open("100.txt");
			for (int i = 0; i < (n-1)*10; i++)
				f >> letter;
			for (int i = 0; i < 10; i++)
			{
				f >> letter;
				v.push_back(letter);
			}
			replace(v.begin(), v.end(), '7', '*');//Замена 7 на *
			sort(v.begin(), v.end()); //сортировка по возрастанию
			writeTo(v); //функция из библиотеки
		}


	public: void thr1() {
		vect(v1,1);		vect(v2, 2);
	}

	public: void thr2() {
		vect(v3, 3);		vect(v4, 4);
	}

	public: void thr3() {
		vect(v5, 5);		vect(v6, 6);
	}

	public: void thr4() {
		vect(v7, 7);		vect(v8, 8);
	}

	public: void thr5() {
		vect(v9, 9);		vect(v10, 10);
	}
public: Mutex Join;

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	remove("new.txt");

	ofstream filestream("new.txt");
	filestream.close();

	//потоки и работа с ними
	myThread1 = gcnew Thread(gcnew ThreadStart(this, &MyForm::thr1));
	myThread2 = gcnew Thread(gcnew ThreadStart(this, &MyForm::thr2));
	myThread3 = gcnew Thread(gcnew ThreadStart(this, &MyForm::thr3));
	myThread4 = gcnew Thread(gcnew ThreadStart(this, &MyForm::thr4));
	myThread5 = gcnew Thread(gcnew ThreadStart(this, &MyForm::thr5));

	myThread1->Start();
	myThread1->Join();
	myThread2->Start();
	myThread2->Join();
	myThread3->Start();
	myThread3->Join();
	myThread4->Start();
	myThread4->Join();
	myThread5->Start();
	myThread5->Join();


	//Задание файлу new.txt атрибута только для чтения
	SetFileAttributes(TEXT("new.txt"), FILE_ATTRIBUTE_READONLY);

	ifstream output("new.txt");
	dataGridView1->ColumnCount = 10;
	dataGridView1->RowCount = 10;
	if (output.is_open()) {
		char simv;
			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 10; j++) {
					output.get(simv);
					while(simv == ' '|| simv == '\n')
					output.get(simv);
					dataGridView1->Rows[i]->Cells[j]->Value = ((wchar_t)simv).ToString();

				}
			}
		
		output.close();
	}

}
};
}
