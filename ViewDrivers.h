#pragma once
#include<fstream>
#include<msclr/marshal_cppstd.h>
#include<string>
namespace SREProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ViewDrivers
	/// </summary>
	public ref class ViewDrivers : public System::Windows::Forms::Form
	{
	public:
		ViewDrivers(void)
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
		~ViewDrivers()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;

	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(120, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(306, 44);
			this->label1->TabIndex = 6;
			this->label1->Text = L"VIEW DRIVERS";
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 29;
			this->listBox1->Location = System::Drawing::Point(27, 71);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(492, 381);
			this->listBox1->TabIndex = 7;
			// 
			// ViewDrivers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(550, 502);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(566, 541);
			this->MinimumSize = System::Drawing::Size(566, 541);
			this->Name = L"ViewDrivers";
			this->Text = L"ViewDrivers";
			this->Load += gcnew System::EventHandler(this, &ViewDrivers::ViewDrivers_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ViewDrivers_Load(System::Object^ sender, System::EventArgs^ e) {
		std::vector<std::string> Driver_Name;
		std::vector<std::string> Driver_PhoneNumber;
		std::vector<std::string> Driver_Address;
		std::vector<std::string> Driver_Rides;
		std::vector<std::string> Driver_Available;
		std::ifstream io;
		io.open("Drivers.txt");
		std::string r;
		while (!io.eof()) {
			io >> r;
			Driver_Name.push_back(r);
			io >> r;
			Driver_PhoneNumber.push_back(r);
			io >> r;
			Driver_Address.push_back(r);
			io >> r;
			Driver_Rides.push_back(r);
			io >> r;
			Driver_Available.push_back(r);
		}
		msclr::interop::marshal_context context;
		for (int i = 0; i < Driver_Name.size() - 1; i++) {
			listBox1->Items->Add((gcnew String(Driver_Name[i].c_str()) +"("+ (gcnew String(Driver_PhoneNumber[i].c_str())) + ")->       " + (gcnew String(Driver_Available[i].c_str()))));
		}
	}
	};
}
