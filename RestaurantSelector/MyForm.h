#pragma once

#include "MaxHeap.h"

namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
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
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::DirectoryServices::DirectoryEntry^ directoryEntry1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ listBox1;

	private: System::IO::FileSystemWatcher^ fileSystemWatcher1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->directoryEntry1 = (gcnew System::DirectoryServices::DirectoryEntry());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->fileSystemWatcher1 = (gcnew System::IO::FileSystemWatcher());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(723, 63);
			this->label1->TabIndex = 0;
			this->label1->Text = L"What Should You Get For Dinner\?";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(17, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(218, 36);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter Latitude";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::MenuText;
			this->textBox1->Location = System::Drawing::Point(23, 111);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(400, 35);
			this->textBox1->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(17, 149);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(241, 36);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Enter Longitude";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::MenuText;
			this->textBox3->Location = System::Drawing::Point(23, 188);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(400, 35);
			this->textBox3->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(17, 226);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(349, 36);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Enter Minumum Rating";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::MenuText;
			this->textBox2->Location = System::Drawing::Point(23, 265);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(400, 35);
			this->textBox2->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(758, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(502, 76);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Generate List";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 36;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"  " });
			this->listBox1->Location = System::Drawing::Point(429, 94);
			this->listBox1->Name = L"listBox1";
			this->listBox1->SelectionMode = System::Windows::Forms::SelectionMode::MultiSimple;
			this->listBox1->Size = System::Drawing::Size(831, 544);
			this->listBox1->TabIndex = 10;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// fileSystemWatcher1
			// 
			this->fileSystemWatcher1->EnableRaisingEvents = true;
			this->fileSystemWatcher1->SynchronizingObject = this;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(17, 303);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(354, 36);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Select Prefered Category";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Chinese", L"Mexican", L"Italian", L"Thai", L"Indian",
					L"Japanese", L"Korean", L"Greek"
			});
			this->comboBox1->Location = System::Drawing::Point(23, 342);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(400, 34);
			this->comboBox1->TabIndex = 13;
			this->comboBox1->Text = L"Select...";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(1278, 653);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Restaurant Selector";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ stdDetails = "{0, -40}{1, -4}{2, -11}";
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// start the milestone to see where to add the correct part
		float milestone = 5.5;
		MaxHeap heap;
		double rating = Convert::ToDouble(textBox2->Text);
		std::ifstream inputFile("output.txt");
		if (!inputFile.is_open()) {
		}
		else {
			std::string line;
			while (getline(inputFile, line)) {
				// code implemented to parse through the text file in order to create a max heap sorted by the rating
				// of each business
				Restaurant business;

				size_t pos = 1; // this skips the first char bc its always "
				while (pos < line.size() && line[pos] != '"') {
					business.name += line[pos++];
				}

				pos += 2; // past the quote and comma
				business.latitude = stod(line.substr(pos, line.find(',', pos) - pos));
				pos = line.find(',', pos) + 1;

				business.longitude = stod(line.substr(pos, line.find(',', pos) - pos));
				pos = line.find(',', pos) + 1;

				business.rating = stod(line.substr(pos, line.find(',', pos) - pos));
				pos = line.find(',', pos) + 1;

				pos += 2;
				business.category = line.substr(pos, line.find('"', pos) - pos);

				heap.insert(business);
			}
		}
		this->listBox1->Items->Clear();
		std::string temp;
		MaxHeap heapcpy = heap;
		// add all the wanted businesses to the list based on the spacified wants
		while (true) {
			Restaurant rest = heap.extractMax();
			
			String^ cat = comboBox1->Text;
			// if they select nothing, display all restaurants
			if (cat == "Select...") {
				cat = "Restaurant";
			}
			// stop displaying if it is below the rating
			if (rest.rating < rating) {
				break;
			}
			if (rest.findCategory(cat)) {
				double lat = Convert::ToDouble(textBox1->Text);
				double lon = Convert::ToDouble(textBox3->Text);
				// see if the business is close
				if (rest.isItClose(lat, lon)) {
					String^ name = gcnew String(rest.getName().c_str());
					// add a milestone to show where the different rated list starts
					if (rest.getRating() < milestone) {
						std::string r = std::to_string(rest.getRating());
						r.erase(r.find_last_not_of('0') + 1, std::string::npos);
						if (r[r.size() - 1] == '.') {
							r.append("0");
						}
						String^ rating = gcnew String(r.c_str());
						this->listBox1->Items->Add(String::Format(stdDetails, " ", rating, " Star Restaurants:"));
						milestone = rest.getRating();
					}
					
					//add the restaurant once it has passed all the tests
					this->listBox1->Items->Add(name);
				}
			}
		}



		
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};

}

