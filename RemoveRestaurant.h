#include<fstream>
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
	/// Summary for RemoveRestaurant
	/// </summary>
	public ref class RemoveRestaurant : public System::Windows::Forms::Form
	{
	public:
		RemoveRestaurant(void)
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
		~RemoveRestaurant()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label3;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(61, 9);
			this->label1->MaximumSize = System::Drawing::Size(469, 44);
			this->label1->MinimumSize = System::Drawing::Size(469, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(469, 44);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Remove Hotel";
			this->label1->Click += gcnew System::EventHandler(this, &RemoveRestaurant::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->textBox1->Location = System::Drawing::Point(19, 137);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(386, 35);
			this->textBox1->TabIndex = 12;
			this->textBox1->Text = L"NishatHotel";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::CadetBlue;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->button7->Location = System::Drawing::Point(164, 263);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(108, 62);
			this->button7->TabIndex = 13;
			this->button7->Text = L"ADD TO LIST";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &RemoveRestaurant::button7_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(18, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 19);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Name ::";
			// 
			// RemoveRestaurant
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightCyan;
			this->ClientSize = System::Drawing::Size(420, 337);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(436, 376);
			this->MinimumSize = System::Drawing::Size(436, 376);
			this->Name = L"RemoveRestaurant";
			this->ShowInTaskbar = false;
			this->Text = L"RemoveRestaurant";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ TB_Removed = textBox1->Text;

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
		
		int id_dex = -1;
		for (int i = 0; i < Restaurant_Name.size(); i++) {
			if (Restaurant_Name[i] == context.marshal_as<std::string>(TB_Removed)) {
				id_dex = i;
				break;
			}
		}
		if (id_dex != -1) {
			Restaurant_Name.erase(Restaurant_Name.begin() + id_dex);
			Restaurant_PhoneNumber.erase(Restaurant_PhoneNumber.begin() + id_dex);
			Restaurant_Due.erase(Restaurant_Due.begin() + id_dex);
			Restaurant_Address.erase(Restaurant_Address.begin() + id_dex);
			Restaurant_Menu.erase(Restaurant_Menu.begin() + id_dex);
			std::ofstream oi;
			oi.open("Restaurant.txt");
			std::string r2;
			for (int i = 0; i < Restaurant_Name.size() - 1; i++) {
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
			MessageBox::Show("Done!");
		}
		else {
			MessageBox::Show("Restaurant Doesn't Exist");
		}

		
	}
};
}
