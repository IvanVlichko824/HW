#pragma once

#include <Windows.h>
#include <string>

namespace ePub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		bool first_load;
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::WebBrowser^  webBrowser1;
	protected: 
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::WebBrowser^  webBrowser2;

	private:
		/// <summary>
		/// ��������� ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->webBrowser2 = (gcnew System::Windows::Forms::WebBrowser());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(0, 24);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(224, 536);
			this->webBrowser1->TabIndex = 0;
			this->webBrowser1->WebBrowserShortcutsEnabled = false;
			this->webBrowser1->Navigated += gcnew System::Windows::Forms::WebBrowserNavigatedEventHandler(this, &Form1::webBrowser1_Navigated);
			this->webBrowser1->Navigating += gcnew System::Windows::Forms::WebBrowserNavigatingEventHandler(this, &Form1::webBrowser1_Navigating);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->����ToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(846, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->�������ToolStripMenuItem, 
				this->�����ToolStripMenuItem});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(130, 22);
			this->�������ToolStripMenuItem->Text = L"�������...";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(130, 22);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�����ToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->DefaultExt = L"epub";
			this->openFileDialog1->Filter = L"ePub files|*.epub";
			this->openFileDialog1->InitialDirectory = L"\"\"";
			// 
			// webBrowser2
			// 
			this->webBrowser2->AllowWebBrowserDrop = false;
			this->webBrowser2->Location = System::Drawing::Point(230, 27);
			this->webBrowser2->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser2->Name = L"webBrowser2";
			this->webBrowser2->Size = System::Drawing::Size(616, 533);
			this->webBrowser2->TabIndex = 2;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(846, 560);
			this->Controls->Add(this->webBrowser2);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ePub reader";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void �������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 using namespace System::Runtime::InteropServices;
				 using namespace System;
				 using namespace System::IO;
				 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {	
				 	 // �������� ��������� ����� 
				     system("rmdir /s /q tmp");

					 String^ cmd = "unzip.exe "+openFileDialog1->FileName+" -d tmp";
					 
					 char* cmd_line = (char*)(void*)Marshal::StringToHGlobalAnsi(cmd);            
					 WinExec(cmd_line, SW_HIDE);
					 Marshal::FreeHGlobal((System::IntPtr)cmd_line);
					 
					 String^ path = Directory::GetCurrentDirectory();
					 
					 Sleep(1000);
					 first_load = true;
					 webBrowser1->Navigate(path + "\\tmp\\index_split_000.xhtml");
                     
				 }

			 }

private: System::Void �����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }

private: System::Void webBrowser1_Navigated(System::Object^  sender, System::Windows::Forms::WebBrowserNavigatedEventArgs^  e) {
		 }

private: System::Void webBrowser1_Navigating(System::Object^  sender, System::Windows::Forms::WebBrowserNavigatingEventArgs^  e) {
			 if (!first_load) {
				 webBrowser2->Navigate(e->Url->ToString());
				 e->Cancel = true;
			 } else
				 first_load = false;
		 }
};
}