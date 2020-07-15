#pragma once
#include "AddRecordForm.h";
#include "AllRecordsForm.h"
#include "CountIncomeForm.h"
#include "Record.h"
#include "Data1.h"
#include <iostream>
#include <fstream>

namespace RentalAgency {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		// ����������� ����� (������ ���������� ���������)
		MainForm(void)
		{
			InitializeComponent();
			// ��������� ������ �������
			Data1::allItems->push_back(new Item("���������", 500));
			Data1::allItems->push_back(new Item("��������� ������", 300));
			Data1::allItems->push_back(new Item("�������", 200));
		}

	protected:
		/// ���������� ��� ������������ �������.
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

		// �������� �����
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::Button^ buttonShow;
	private: System::Windows::Forms::Button^ buttonMoney;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ OpenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ SaveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ExitToolStripMenuItem;

	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;

	private:
		/// ������������ ���������� ������������.
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// ��������� ����� ��� ��������� ������������
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonShow = (gcnew System::Windows::Forms::Button());
			this->buttonMoney = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OpenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SaveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ExitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(180, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"����� �������";
			// 
			// buttonAdd
			// 
			this->buttonAdd->Location = System::Drawing::Point(170, 117);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(173, 50);
			this->buttonAdd->TabIndex = 1;
			this->buttonAdd->Text = L"�������� ������";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MainForm::buttonAdd_Click);
			// 
			// buttonShow
			// 
			this->buttonShow->Location = System::Drawing::Point(170, 191);
			this->buttonShow->Name = L"buttonShow";
			this->buttonShow->Size = System::Drawing::Size(173, 50);
			this->buttonShow->TabIndex = 2;
			this->buttonShow->Text = L"������� ��� ������";
			this->buttonShow->UseVisualStyleBackColor = true;
			this->buttonShow->Click += gcnew System::EventHandler(this, &MainForm::buttonShow_Click);
			// 
			// buttonMoney
			// 
			this->buttonMoney->Location = System::Drawing::Point(170, 266);
			this->buttonMoney->Name = L"buttonMoney";
			this->buttonMoney->Size = System::Drawing::Size(173, 50);
			this->buttonMoney->TabIndex = 3;
			this->buttonMoney->Text = L"��������� �����";
			this->buttonMoney->UseVisualStyleBackColor = true;
			this->buttonMoney->Click += gcnew System::EventHandler(this, &MainForm::buttonMoney_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->����ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(7, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(534, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->OpenToolStripMenuItem,
					this->SaveToolStripMenuItem, this->ExitToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// OpenToolStripMenuItem
			// 
			this->OpenToolStripMenuItem->Name = L"OpenToolStripMenuItem";
			this->OpenToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->OpenToolStripMenuItem->Text = L"�������";
			this->OpenToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::OpenToolStripMenuItem_Click);
			// 
			// SaveToolStripMenuItem
			// 
			this->SaveToolStripMenuItem->Name = L"SaveToolStripMenuItem";
			this->SaveToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->SaveToolStripMenuItem->Text = L"���������";
			this->SaveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::SaveToolStripMenuItem_Click);
			// 
			// ExitToolStripMenuItem
			// 
			this->ExitToolStripMenuItem->Name = L"ExitToolStripMenuItem";
			this->ExitToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ExitToolStripMenuItem->Text = L"�����";
			this->ExitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ExitToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(534, 361);
			this->Controls->Add(this->buttonMoney);
			this->Controls->Add(this->buttonShow);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"������� ����";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// ������ "�������� ������"
		private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
			// �������� ����� �����
			AddRecordForm^ form2 = gcnew AddRecordForm();
			form2->Show();
		}
		
		// ������ "��������� �����"
		private: System::Void buttonMoney_Click(System::Object^ sender, System::EventArgs^ e) {
			// �������� ����� �����
			CountIncomeForm^ form4 = gcnew CountIncomeForm();
			form4->Show();
		}
		
	    // ������ "������� ��� ������"
		private: System::Void buttonShow_Click(System::Object^ sender, System::EventArgs^ e) {
			// �������� ����� �����
			AllRecordsForm^ form3 = gcnew AllRecordsForm();
			form3->Show();
		}

	    // ���� -> �����
		private: System::Void ExitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			Application::Exit();
		}

		// ���� -> ���������
		private: System::Void SaveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::Cancel	)
				return;
			// �������� ���� �����
			String^ fileName = saveFileDialog1->FileName;
			// ��������� ����
			ofstream file(msclr::interop::marshal_as<std::string>(fileName));
			// ��������� ������ � ������� ������� � ����
			for (Record* record : *Data1::allRecords)
			{
				file << " " + record->toString();
			}
		}

		// ���� -> �������
		private: System::Void OpenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			openFileDialog1->Filter = "Text files(*.txt)|*.txt|All files(*.*)|*.*";

			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)
				return;
			// �������� ���� �����, ��������� ����
			String^ fileName = openFileDialog1->FileName;
			ifstream file(msclr::interop::marshal_as<std::string>(fileName));
			// ��������� ���������� �� �����
			char date[50], receiveHours[2], receiveMin[2], returnHours[2], returnMin[2], name[50], type[1];
			while (!file.eof())
			{
				file >> date;
				file >> receiveHours;
				file >> receiveMin;
				file >> returnHours;
				file >> returnMin;
				file >> name;
				file >> type;
				// ��������� ������� � ������
				Data1::addElement(new Record(date, atoi(receiveHours), atoi(receiveMin), atoi(returnHours), atoi(returnMin), name, atoi(type)));
			}
			// ��������� ����
			file.close();
		}
	};
}
