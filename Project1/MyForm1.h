#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Diagnostics;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		String ^ eventTime;
		String ^ eventName;
		String ^ userNotes;
		String ^ result = "";


		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		/**
		* method used to pass the current event title, date, and notes.
		*/
		void passEvents(List<String ^> ^ events, String ^ title, String ^ date, String ^ notes) {
			this->eventTitleTF1->Text = title;
			this->notesTF1->Text = notes;
			this->dateTimePicker1->Value = DateTime::Parse(date);

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::TextBox^  notesTF1;


	private: System::Windows::Forms::TextBox^  eventTitleTF1;
	private: System::Windows::Forms::Button^  cancelChanges;




	private: System::Windows::Forms::Button^  deleteEvent;
	private: System::Windows::Forms::Button^  saveChanges;


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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->cancelChanges = (gcnew System::Windows::Forms::Button());
			this->deleteEvent = (gcnew System::Windows::Forms::Button());
			this->saveChanges = (gcnew System::Windows::Forms::Button());
			this->notesTF1 = (gcnew System::Windows::Forms::TextBox());
			this->eventTitleTF1 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Event Title:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Date Picker:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 143);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Notes:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->cancelChanges);
			this->groupBox1->Controls->Add(this->deleteEvent);
			this->groupBox1->Controls->Add(this->saveChanges);
			this->groupBox1->Controls->Add(this->notesTF1);
			this->groupBox1->Controls->Add(this->eventTitleTF1);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(495, 337);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Editing Existing Event";
			// 
			// cancelChanges
			// 
			this->cancelChanges->Location = System::Drawing::Point(315, 297);
			this->cancelChanges->Name = L"cancelChanges";
			this->cancelChanges->Size = System::Drawing::Size(97, 23);
			this->cancelChanges->TabIndex = 11;
			this->cancelChanges->Text = L"Cancel Changes";
			this->cancelChanges->UseVisualStyleBackColor = true;
			this->cancelChanges->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// deleteEvent
			// 
			this->deleteEvent->Location = System::Drawing::Point(384, 24);
			this->deleteEvent->Name = L"deleteEvent";
			this->deleteEvent->Size = System::Drawing::Size(92, 23);
			this->deleteEvent->TabIndex = 10;
			this->deleteEvent->Text = L"Delete Event";
			this->deleteEvent->UseVisualStyleBackColor = true;
			this->deleteEvent->Click += gcnew System::EventHandler(this, &MyForm1::deleteEvent_Click);
			// 
			// saveChanges
			// 
			this->saveChanges->Location = System::Drawing::Point(62, 297);
			this->saveChanges->Name = L"saveChanges";
			this->saveChanges->Size = System::Drawing::Size(86, 23);
			this->saveChanges->TabIndex = 9;
			this->saveChanges->Text = L"Save Changes";
			this->saveChanges->UseVisualStyleBackColor = true;
			this->saveChanges->Click += gcnew System::EventHandler(this, &MyForm1::saveChanges_Click);
			// 
			// notesTF1
			// 
			this->notesTF1->Location = System::Drawing::Point(63, 153);
			this->notesTF1->Multiline = true;
			this->notesTF1->Name = L"notesTF1";
			this->notesTF1->Size = System::Drawing::Size(350, 118);
			this->notesTF1->TabIndex = 8;
			this->notesTF1->TextChanged += gcnew System::EventHandler(this, &MyForm1::notesTF1_TextChanged);
			// 
			// eventTitleTF1
			// 
			this->eventTitleTF1->Location = System::Drawing::Point(62, 101);
			this->eventTitleTF1->Name = L"eventTitleTF1";
			this->eventTitleTF1->Size = System::Drawing::Size(200, 20);
			this->eventTitleTF1->TabIndex = 4;
			this->eventTitleTF1->TextChanged += gcnew System::EventHandler(this, &MyForm1::eventTitleTF1_TextChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"MM/dd/yyyy hh:mm tt";
			this->dateTimePicker1->Location = System::Drawing::Point(62, 50);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->ShowUpDown = true;
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 3;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyForm1::dateTimePicker1_ValueChanged);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(519, 370);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm1";
			this->Text = L"Event Modifer";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		//result is used in Myform.h to determine which buttonw as pressed.
		result = "cancel";
		this->Close();
	}
	private: System::Void notesTF1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		userNotes = this->notesTF1->Text;
	}
	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		eventTime = dateTimePicker1->Value.ToShortDateString();
	}
	private: System::Void eventTitleTF1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		eventName = eventTitleTF1->Text;
	}
	private: System::Void saveChanges_Click(System::Object^  sender, System::EventArgs^  e) {
		result = "save";
		//result is used in Myform.h to determine which buttonw as pressed.
		//only saves if event has title and time
		if (eventName->Length > 0 && eventTime->Length > 0) {
			this->Close();
		}

	}
	private: System::Void deleteEvent_Click(System::Object^  sender, System::EventArgs^  e) {
		result = "delete";
		this->Close();
	}
};
}
