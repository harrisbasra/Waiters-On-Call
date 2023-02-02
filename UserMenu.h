#pragma once
#include"AddRestaurant.h";
#include"AddUser.h";
#include"GenerateSlips.h";
#include"PlaceOrder.h";
#include"RemoveRestaurant.h";
#include"ViewOrders.h"
#include"ViewRestMenu.h"
#include"ViewDrivers.h"
#include"View Users.h"
namespace SREProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UserMenu
	/// </summary>
	public ref class UserMenu : public System::Windows::Forms::Form
	{
	public:
		UserMenu(void)
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
		~UserMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(101, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(314, 44);
			this->label1->TabIndex = 1;
			this->label1->Text = L"USER MANUAL";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::CadetBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->button1->Location = System::Drawing::Point(44, 135);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 62);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Place Order";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &UserMenu::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::CadetBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->button2->Location = System::Drawing::Point(202, 135);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 62);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Add Restaurant";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &UserMenu::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::CadetBlue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->button3->Location = System::Drawing::Point(361, 135);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(108, 62);
			this->button3->TabIndex = 4;
			this->button3->Text = L"View Restaurants";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &UserMenu::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::CadetBlue;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->button4->Location = System::Drawing::Point(44, 218);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(108, 62);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Remove Restaurant";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &UserMenu::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::CadetBlue;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->button5->Location = System::Drawing::Point(202, 218);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(108, 62);
			this->button5->TabIndex = 6;
			this->button5->Text = L"View Orders";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &UserMenu::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::CadetBlue;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->button6->Location = System::Drawing::Point(361, 218);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(108, 62);
			this->button6->TabIndex = 7;
			this->button6->Text = L"Add a User";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &UserMenu::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::CadetBlue;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->button7->Location = System::Drawing::Point(202, 314);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(108, 62);
			this->button7->TabIndex = 8;
			this->button7->Text = L"View Drivers";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &UserMenu::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::CadetBlue;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->button8->Location = System::Drawing::Point(361, 314);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(108, 62);
			this->button8->TabIndex = 9;
			this->button8->Text = L"Generate Slips";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &UserMenu::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::CadetBlue;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->button9->Location = System::Drawing::Point(44, 314);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(108, 62);
			this->button9->TabIndex = 10;
			this->button9->Text = L"View Users";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &UserMenu::button9_Click);
			// 
			// UserMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(510, 422);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(526, 461);
			this->MinimumSize = System::Drawing::Size(526, 461);
			this->Name = L"UserMenu";
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &UserMenu::UserMenu_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		PlaceOrder^ obj = gcnew PlaceOrder();
		//this->Hide();
		obj->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		AddRestaurant^ obj = gcnew AddRestaurant();
		//this->Hide();
		obj->Show();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		ViewRestMenu^ obj = gcnew ViewRestMenu();
		//this->Hide();
		obj->Show();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		RemoveRestaurant^ obj = gcnew RemoveRestaurant();
		//this->Hide();
		obj->Show();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		ViewOrders^ obj = gcnew ViewOrders();
		//this->Hide();
		obj->Show();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		AddUser^ obj = gcnew AddUser();
		//this->Hide();
		obj->Show();
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		ViewDrivers^ obj = gcnew ViewDrivers();
		//this->Hide();
		obj->Show();
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		GenerateSlips^ obj = gcnew GenerateSlips();
		//this->Hide();
		obj->Show();
	}
private: System::Void UserMenu_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	ViewUsers^ obj = gcnew ViewUsers();
	obj->Show();
}
};
}
