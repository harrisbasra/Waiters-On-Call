
#include<vector>
#include <fstream>
#include<string>
#include<msclr/marshal_cppstd.h>
#pragma once

namespace SREProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PlaceOrder
	/// </summary>
	public ref class PlaceOrder : public System::Windows::Forms::Form
	{
	public:
		PlaceOrder(void)
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
		~PlaceOrder()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(124, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(296, 44);
			this->label1->TabIndex = 3;
			this->label1->Text = L"PLACE ORDER";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 17.75F));
			this->label2->Location = System::Drawing::Point(12, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 28);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Order # ";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->textBox1->Location = System::Drawing::Point(33, 159);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(472, 35);
			this->textBox1->TabIndex = 11;
			this->textBox1->Text = L"Burger";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->textBox2->Location = System::Drawing::Point(34, 222);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(472, 35);
			this->textBox2->TabIndex = 12;
			this->textBox2->Text = L"275";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->textBox3->Location = System::Drawing::Point(33, 288);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(472, 35);
			this->textBox3->TabIndex = 13;
			this->textBox3->Text = L"Coke";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(30, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 19);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Order ::";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(30, 200);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(217, 19);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Money (Discounted (if) / Final)::";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(30, 266);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(156, 19);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Compensatory Thing ::";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(30, 326);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(101, 19);
			this->label6->TabIndex = 18;
			this->label6->Text = L"User\'s Name ::";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->textBox4->Location = System::Drawing::Point(34, 348);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(472, 35);
			this->textBox4->TabIndex = 19;
			this->textBox4->Text = L"HarreyBe";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(463, 467);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Order !";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PlaceOrder::button1_Click);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->textBox5->Location = System::Drawing::Point(33, 409);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(472, 35);
			this->textBox5->TabIndex = 21;
			this->textBox5->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(30, 386);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(94, 19);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Discounted ::\r\n";
			// 
			// PlaceOrder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::NavajoWhite;
			this->ClientSize = System::Drawing::Size(550, 502);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(566, 541);
			this->MinimumSize = System::Drawing::Size(557, 518);
			this->Name = L"PlaceOrder";
			this->Text = L"PlaceOrder";
			this->Load += gcnew System::EventHandler(this, &PlaceOrder::PlaceOrder_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	bool CheckIf(std::string search, std::vector<std::string> List) {
		for (int i = 0; i < List.size(); i++) {
			if (List[i].find(search) < List[i].size()) {
				std::ofstream idr;
				idr.open("LoggedIn.txt");
				idr << i;
				idr.close();
				return true;
			}
		}
		return false;
	}
	private: System::Void PlaceOrder_Load(System::Object^ sender, System::EventArgs^ e) {

		std::vector<std::string> Order_Name;
		std::vector<std::string> Order_Money;
		std::vector<std::string> Order_Discount;
		std::vector<std::string> Order_AddOn;
		std::vector<std::string> Order_CustomName;
		std::ifstream io;
		io.open("Orders.txt");
		std::string r;
		std::string r1;
		while (!io.eof()) {
			io >> r1;

			io >> r;
			Order_Name.push_back(r);
			io >> r;
			Order_Money.push_back(r);
			io >> r;
			Order_Discount.push_back(r);
			io >> r;
			Order_AddOn.push_back(r);
			io >> r;
			Order_CustomName.push_back(r);
		}
		int rrr = stoi(r1);
		rrr++;
		String^ Got_UN = "Order # ";
		Got_UN += rrr.ToString();
		label2->Text = Got_UN;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Got_Item = textBox1->Text;
		String^ Got_User = textBox4->Text;
		String^ Got_DiscIF = textBox5->Text;
		String^ Compensate = textBox3->Text;
		String^ Got_Payable = textBox2->Text;
		std::string Got_UN;

		std::vector<std::string> Restaurant_Name;
		std::vector<std::string> Restaurant_PhoneNumber;
		std::vector<std::string> Restaurant_Due;
		std::vector<std::string> Restaurant_Address;
		std::vector<std::string> Restaurant_Menu;
		std::ifstream io2;
		io2.open("Restaurant.txt");
		std::string r;
		while (!io2.eof()) {
			io2 >> r;
			Restaurant_Name.push_back(r);
			io2 >> r;
			Restaurant_PhoneNumber.push_back(r);
			io2 >> r;
			Restaurant_Due.push_back(r);
			io2 >> r;
			Restaurant_Address.push_back(r);
			io2 >> r;
			Restaurant_Menu.push_back(r);
		}
		msclr::interop::marshal_context context;
		if (CheckIf(context.marshal_as<std::string>(Got_Item), Restaurant_Menu)) {
			std::vector<std::string> Order_Index;
			std::vector<std::string> Order_Name;
			std::vector<std::string> Order_Money;
			std::vector<std::string> Order_Discount;
			std::vector<std::string> Order_AddOn;
			std::vector<std::string> Order_CustomName;
			std::ifstream io;
			io.open("Orders.txt");
			std::string r;
			std::string r1;
			while (!io.eof()) {
				io >> r1;
				Order_Index.push_back(r1);
				io >> r;
				Order_Name.push_back(r);
				io >> r;
				Order_Money.push_back(r);
				io >> r;
				Order_Discount.push_back(r);
				io >> r;
				Order_AddOn.push_back(r);
				io >> r;
				Order_CustomName.push_back(r);
			}
			std::ofstream oi;
			oi.open("Orders.txt");
			std::string r2;
			for (int i = 0; i < Order_Name.size() - 1; i++) {
				oi << Order_Index[i];
				oi << " ";
				oi << Order_Name[i];
				oi << " ";
				oi << Order_Money[i];
				oi << " ";
				oi << Order_Discount[i];
				oi << " ";
				oi << Order_AddOn[i];
				oi << " ";
				oi << Order_CustomName[i];
				oi << "\n";
			}
			int rrr = stoi(r1);
			rrr++;
			Got_UN = std::to_string(rrr);



			oi << Got_UN;
			oi << " ";
			oi << context.marshal_as<std::string>(Got_Item);
			oi << " ";
			oi << context.marshal_as<std::string>(Got_Payable);
			oi << " ";
			oi << context.marshal_as<std::string>(Got_DiscIF);
			oi << " ";
			oi << context.marshal_as<std::string>(Compensate);
			oi << " ";
			oi << context.marshal_as<std::string>(Got_User);
			oi << " ";
			///////////////////////////////////////////////////////
			std::ifstream idr; int mny = 0;
			idr.open("LoggedIn.txt");
			idr >> mny;
			idr.close();
			int tobeadded = std::stoi(context.marshal_as<std::string>(Got_Payable));
			int total = std::stoi(Restaurant_Due[mny]) + tobeadded;
			Restaurant_Due[mny] = std::to_string(total);
			std::ofstream oioi;
			oioi.open("Restaurant.txt");
			for (int i = 0; i < Restaurant_Name.size(); i++) {
				oioi << Restaurant_Name[i];
				oioi << " ";
				oioi << Restaurant_PhoneNumber[i];
				oioi << " ";
				oioi << Restaurant_Due[i];
				oioi << " ";
				oioi << Restaurant_Address[i];
				oioi << " ";
				oioi << Restaurant_Menu[i];
				if(i!= Restaurant_Name.size()-1)
				oioi << "\n";
			}
			MessageBox::Show("Done!");
		}
		else {
			MessageBox::Show("Not in Restaurant Menus");
		}

		

	}
};
}
