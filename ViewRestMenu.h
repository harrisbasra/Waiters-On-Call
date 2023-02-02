#pragma once
#include<fstream>
#include<string>
#include<msclr/marshal_cppstd.h>
namespace SREProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ViewRestMenu
	/// </summary>
	public ref class ViewRestMenu : public System::Windows::Forms::Form
	{
	public:
		ViewRestMenu(void)
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
		~ViewRestMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:


	private: System::Windows::Forms::ListBox^ listBox1;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(237, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(257, 44);
			this->label1->TabIndex = 4;
			this->label1->Text = L"VIEW MENU";
			this->label1->Click += gcnew System::EventHandler(this, &ViewRestMenu::label1_Click);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 29;
			this->listBox1->Location = System::Drawing::Point(12, 79);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(680, 410);
			this->listBox1->TabIndex = 8;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ViewRestMenu::listBox1_SelectedIndexChanged);
			// 
			// ViewRestMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(711, 502);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimumSize = System::Drawing::Size(566, 541);
			this->Name = L"ViewRestMenu";
			this->Text = L"ViewRestMenu";
			this->Load += gcnew System::EventHandler(this, &ViewRestMenu::ViewRestMenu_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void ViewRestMenu_Load(System::Object^ sender, System::EventArgs^ e) {
		std::vector<std::string> Restaurant_Name;
		std::vector<std::string> Restaurant_PhoneNumber;
		std::vector<std::string> Restaurant_Due;
		std::vector<std::string> Restaurant_Address;
		std::vector<std::string> Restaurant_Menu;
		std::ifstream io;
		io.open("Restaurant.txt");
		std::string r;
		while (!io.eof()) {
			io >> r;
			Restaurant_Name.push_back(r);
			io >> r;
			Restaurant_PhoneNumber.push_back(r);
			io >> r;
			Restaurant_Due.push_back(r);
			io >> r;
			Restaurant_Address.push_back(r);
			io >> r;
			Restaurant_Menu.push_back(r);
		}
		msclr::interop::marshal_context context;
		for (int i = 0; i < Restaurant_Name.size() - 1; i++) {
			listBox1->Items->Add((gcnew String(Restaurant_Name[i].c_str()) + "   (Due: Rs." + (gcnew String(Restaurant_Due[i].c_str())) + ")->       " + (gcnew String(Restaurant_Menu[i].c_str()))));
		}
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
