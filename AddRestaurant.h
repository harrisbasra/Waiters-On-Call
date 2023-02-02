#include<fstream>
#include<msclr/marshal_cppstd.h>
#include<string>
#pragma once

namespace SREProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddRestaurant
	/// </summary>
	public ref class AddRestaurant : public System::Windows::Forms::Form
	{
	public:
		AddRestaurant(void)
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
		~AddRestaurant()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
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
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(99, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(436, 44);
			this->label1->TabIndex = 2;
			this->label1->Text = L"ADD A RESTAURANT";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::CadetBlue;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->button7->Location = System::Drawing::Point(256, 392);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(108, 62);
			this->button7->TabIndex = 9;
			this->button7->Text = L"ADD TO LIST";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &AddRestaurant::button7_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->textBox1->Location = System::Drawing::Point(12, 107);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(587, 35);
			this->textBox1->TabIndex = 10;
			this->textBox1->Text = L"NishatHotel";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->textBox2->Location = System::Drawing::Point(12, 172);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(587, 35);
			this->textBox2->TabIndex = 11;
			this->textBox2->Text = L"0624286427";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->textBox3->Location = System::Drawing::Point(12, 241);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(587, 35);
			this->textBox3->TabIndex = 12;
			this->textBox3->Text = L"ZamanPark";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->textBox4->Location = System::Drawing::Point(12, 310);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(587, 35);
			this->textBox4->TabIndex = 13;
			this->textBox4->Text = L"Pickle:Burger:Tikka";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 19);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Name ::";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 19);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Phone Number ::";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 216);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 19);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Address ::";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 284);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(221, 19);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Menu (Colon Separated Items) ::";
			// 
			// AddRestaurant
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaShell;
			this->ClientSize = System::Drawing::Size(611, 466);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(627, 505);
			this->MinimumSize = System::Drawing::Size(627, 505);
			this->Name = L"AddRestaurant";
			this->Text = L"AddRestaurant";
			this->Load += gcnew System::EventHandler(this, &AddRestaurant::AddRestaurant_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddRestaurant_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Got_Name = textBox1->Text;
		String^ Got_Menu = textBox4->Text;
		String^ Got_Address = textBox3->Text;
		String^ Got_PhoneNumber = textBox2->Text;

		
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
		std::ofstream oi;
		oi.open("Restaurant.txt");
		std::string r2;
		for (int i = 0; i < Restaurant_Name.size()-1; i++) {
			oi << Restaurant_Name[i];
			oi << " ";
			oi << Restaurant_PhoneNumber[i];
			oi << " ";
			oi << Restaurant_Due[i];
			oi << " ";
			oi << Restaurant_Address[i];
			oi << " ";
			oi << Restaurant_Menu[i];
			oi << "\n";
		}
		msclr::interop::marshal_context context;
		oi << context.marshal_as<std::string>(Got_Name);
		oi << " ";
		oi << context.marshal_as<std::string>(Got_PhoneNumber);
		oi << " ";
		oi << "0";
		oi << " ";
		oi << context.marshal_as<std::string>(Got_Address);
		oi << " ";
		oi << context.marshal_as<std::string>(Got_Menu);
		oi << " ";

		MessageBox::Show("Done!");
	}
};
}
