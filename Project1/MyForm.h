#pragma once

#include "MyForm1.h"

namespace Project1 {

	using namespace System;
	using namespace System::Diagnostics;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		String ^ eventTime;
		String ^ eventName;
		String ^ userNotes;
		String ^ lineData;
		StreamWriter ^ outputStream;
		List<String^> ^ events;

	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	public:
		StreamReader ^ inputStream;

		MyForm(void)
		{

			InitializeComponent();
			ColumnHeader ^ column = gcnew ColumnHeader();
			column->Text = "Events";
			this->eventPreview->Columns->Add(column);
			eventTime = dateTimePicker->Value.ToShortDateString();


			events = gcnew List<String^>;
			writeText();
			

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
	private: System::Windows::Forms::MonthCalendar^  monthCalendar;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  labelNotes;
	private: System::Windows::Forms::Label^  labelEventTitle;
	private: System::Windows::Forms::Label^  labelDatePicker;
	private: System::Windows::Forms::TextBox^  eventTitleTF;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::TextBox^  notesTF;
	private: System::Windows::Forms::Label^  labelUEO;
	private: System::Windows::Forms::ListView^  eventPreview;
	private: System::Windows::Forms::Button^  buttonNewClear;
	private: System::Windows::Forms::Button^  buttonSaveEvent;
	private: System::ComponentModel::IContainer^  components;

		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->monthCalendar = (gcnew System::Windows::Forms::MonthCalendar());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonNewClear = (gcnew System::Windows::Forms::Button());
			this->buttonSaveEvent = (gcnew System::Windows::Forms::Button());
			this->notesTF = (gcnew System::Windows::Forms::TextBox());
			this->eventTitleTF = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->labelNotes = (gcnew System::Windows::Forms::Label());
			this->labelEventTitle = (gcnew System::Windows::Forms::Label());
			this->labelDatePicker = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->labelUEO = (gcnew System::Windows::Forms::Label());
			this->eventPreview = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// monthCalendar
			// 
			this->monthCalendar->Location = System::Drawing::Point(18, 18);
			this->monthCalendar->Name = L"monthCalendar";
			this->monthCalendar->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->buttonNewClear);
			this->groupBox1->Controls->Add(this->buttonSaveEvent);
			this->groupBox1->Controls->Add(this->notesTF);
			this->groupBox1->Controls->Add(this->eventTitleTF);
			this->groupBox1->Controls->Add(this->dateTimePicker);
			this->groupBox1->Controls->Add(this->labelNotes);
			this->groupBox1->Controls->Add(this->labelEventTitle);
			this->groupBox1->Controls->Add(this->labelDatePicker);
			this->groupBox1->Location = System::Drawing::Point(257, 18);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(415, 328);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"New Event";
			// 
			// buttonNewClear
			// 
			this->buttonNewClear->Location = System::Drawing::Point(328, 294);
			this->buttonNewClear->Name = L"buttonNewClear";
			this->buttonNewClear->Size = System::Drawing::Size(75, 23);
			this->buttonNewClear->TabIndex = 13;
			this->buttonNewClear->Text = L"New/Clear";
			this->buttonNewClear->UseVisualStyleBackColor = true;
			this->buttonNewClear->Click += gcnew System::EventHandler(this, &MyForm::buttonNewClear_Click);
			// 
			// buttonSaveEvent
			// 
			this->buttonSaveEvent->Location = System::Drawing::Point(52, 294);
			this->buttonSaveEvent->Name = L"buttonSaveEvent";
			this->buttonSaveEvent->Size = System::Drawing::Size(75, 23);
			this->buttonSaveEvent->TabIndex = 12;
			this->buttonSaveEvent->Text = L"Save Event";
			this->buttonSaveEvent->UseVisualStyleBackColor = true;
			this->buttonSaveEvent->Click += gcnew System::EventHandler(this, &MyForm::buttonSaveEvent_Click);
			// 
			// notesTF
			// 
			this->notesTF->Location = System::Drawing::Point(52, 153);
			this->notesTF->Multiline = true;
			this->notesTF->Name = L"notesTF";
			this->notesTF->Size = System::Drawing::Size(350, 118);
			this->notesTF->TabIndex = 8;
			this->notesTF->TextChanged += gcnew System::EventHandler(this, &MyForm::notesTF_TextChanged);
			// 
			// eventTitleTF
			// 
			this->eventTitleTF->Location = System::Drawing::Point(52, 98);
			this->eventTitleTF->Name = L"eventTitleTF";
			this->eventTitleTF->Size = System::Drawing::Size(200, 20);
			this->eventTitleTF->TabIndex = 4;
			this->eventTitleTF->TextChanged += gcnew System::EventHandler(this, &MyForm::eventTitleTF_TextChanged);
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Location = System::Drawing::Point(52, 47);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->ShowUpDown = true;
			this->dateTimePicker->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker->TabIndex = 3;
			this->dateTimePicker->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker_ValueChanged);
			// 
			// labelNotes
			// 
			this->labelNotes->AutoSize = true;
			this->labelNotes->Location = System::Drawing::Point(7, 132);
			this->labelNotes->Name = L"labelNotes";
			this->labelNotes->Size = System::Drawing::Size(38, 13);
			this->labelNotes->TabIndex = 2;
			this->labelNotes->Text = L"Notes:";
			// 
			// labelEventTitle
			// 
			this->labelEventTitle->AutoSize = true;
			this->labelEventTitle->Location = System::Drawing::Point(7, 81);
			this->labelEventTitle->Name = L"labelEventTitle";
			this->labelEventTitle->Size = System::Drawing::Size(61, 13);
			this->labelEventTitle->TabIndex = 1;
			this->labelEventTitle->Text = L"Event Title:";
			// 
			// labelDatePicker
			// 
			this->labelDatePicker->AutoSize = true;
			this->labelDatePicker->Location = System::Drawing::Point(7, 31);
			this->labelDatePicker->Name = L"labelDatePicker";
			this->labelDatePicker->Size = System::Drawing::Size(66, 13);
			this->labelDatePicker->TabIndex = 0;
			this->labelDatePicker->Text = L"Date Picker:";
			// 
			// labelUEO
			// 
			this->labelUEO->AutoSize = true;
			this->labelUEO->Location = System::Drawing::Point(18, 193);
			this->labelUEO->Name = L"labelUEO";
			this->labelUEO->Size = System::Drawing::Size(142, 13);
			this->labelUEO->TabIndex = 2;
			this->labelUEO->Text = L"Upcoming Events Overview:";
			// 
			// eventPreview
			// 
			this->eventPreview->Alignment = System::Windows::Forms::ListViewAlignment::Left;
			this->eventPreview->AutoArrange = false;
			this->eventPreview->FullRowSelect = true;
			this->eventPreview->GridLines = true;
			this->eventPreview->LabelWrap = false;
			this->eventPreview->Location = System::Drawing::Point(21, 209);
			this->eventPreview->Name = L"eventPreview";
			this->eventPreview->Size = System::Drawing::Size(224, 137);
			this->eventPreview->TabIndex = 3;
			this->eventPreview->UseCompatibleStateImageBehavior = false;
			this->eventPreview->View = System::Windows::Forms::View::Details;
			this->eventPreview->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::eventPreview_MouseDoubleClick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(691, 368);
			this->Controls->Add(this->eventPreview);
			this->Controls->Add(this->labelUEO);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->monthCalendar);
			this->Name = L"MyForm";
			this->Text = L"Personal Event Calendar";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		/**
		* this method clears the events list and the eventPreview box.
		* then it will read in a line from the file.  Each line is parsed
		* and then added to the events list and eventPreview box.
		* at the end the inputStream is closed.
		*/
	private: System::Void writeText() {
		try {
			events->Clear();
			this->eventPreview->Items->Clear();
		}
		catch (...) {
		}
		try {
			inputStream = gcnew StreamReader("eventLog", true);
			lineData = inputStream->ReadLine();
			while (lineData != nullptr) {
				events->Add(lineData);
				lineData = inputStream->ReadLine();
			}
			//sorts events so they will occur in a more ordered manner
			events->Sort();
			for (int i = 0; i < events->Count; i++) {
				String ^ lineData;
				String ^ temp = events[i];
				lineData = events[i]->Replace("$@$", " ");
				lineData = lineData->Replace("  ", " ");
				String ^ date = temp->Substring(0, temp->IndexOf("$@$"));
				monthCalendar->AddBoldedDate(DateTime::Parse(date));
				monthCalendar->UpdateBoldedDates();
				//this->eventPreview->Columns->TextAlign = HorizontalAlignment::Right;
				this->eventPreview->Items->Add(gcnew ListViewItem(lineData));
				this->eventPreview->AutoResizeColumn(0, ColumnHeaderAutoResizeStyle::ColumnContent);
			}
			
		}
		catch (...) {

		}
		finally {
			try {
				inputStream->Close();
			}
			catch (...) {

			}
		}
	}
	private: System::Void dateTimePicker_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		eventTime = dateTimePicker->Value.ToShortDateString();
	}
	private: System::Void eventTitleTF_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		eventName = eventTitleTF->Text;
	}
	private: System::Void notesTF_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		userNotes = notesTF->Text;
	}

	private: System::Void buttonSaveEvent_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			if (eventName->Length > 0 && eventTime->Length > 0) {
				outputStream = gcnew StreamWriter("eventLog", true);
				outputStream->WriteLine(eventTime + "$@$" + eventName + "$@$" + userNotes);
				outputStream->Flush();
				outputStream->Close();
				writeText();
				monthCalendar->AddBoldedDate(DateTime::Parse(eventTime));
				monthCalendar->UpdateBoldedDates();
			}
		}
		catch (...) {

		}
	}
	private: System::Void buttonNewClear_Click(System::Object^  sender, System::EventArgs^  e) {
		dateTimePicker->Value = dateTimePicker->Value.Now;
		eventTime->Empty;
		eventTitleTF->Clear();
		eventName->Empty;
		notesTF->Clear();
		userNotes->Empty;
	}
private: System::Void eventPreview_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

	ListViewHitTestInfo ^ info = this->eventPreview->HitTest(e->X, e->Y);
	ListViewItem ^ item = info->Item;
	String ^ currEvent = item->Text;
	try {
		if (item != nullptr) {
			MyForm1 ^ form = gcnew MyForm1();
			String ^ date;
			String ^ title;
			int i = 0;
			//find event that was clicked on in the events list.
			//this has the $@$ characters, which are helpful for parsing

			for (i; i < events->Count; i++) {
				String ^ current = events[i];
				current = current->Replace("$@$", " ");
				current = current->Replace("  ", " ");
				if (current->Equals(currEvent)) {
					break;
				}
			}
			currEvent = events[i];
			date = currEvent->Substring(0, currEvent->IndexOf("$@$"));
			String ^ notes = "";
			currEvent = currEvent->Substring(currEvent->IndexOf("$@$") + 3);

			title = currEvent->Substring(0, currEvent->IndexOf("$@$"));
			currEvent = currEvent->Substring(currEvent->IndexOf("$@$") + 3);
			if (currEvent->Length > 0) {
				notes = currEvent;
			}

			form->passEvents(events, title, date, notes);
			form->ShowDialog();
			String ^ result = form->result;
			if (result->Equals("save")) {
				String ^ lineData = form->eventTime + "$@$" + form->eventName + "$@$" + form->userNotes;
				int  i = 0;
				while (!events[i]->Equals(date + "$@$" + title + "$@$" + notes)) {
					i++;
				}
				//finds the correct event entry in the list
				//updates it with the new info from the other form.
				//writes to file and then updates the event view.
				events[i] = lineData;
				FileInfo ^ fi = gcnew FileInfo("eventLog");
				outputStream = gcnew StreamWriter(fi->Open(FileMode::Truncate));
				for (i = 0; i < events->Count; i++) {
					outputStream->WriteLine(events[i]);
				}
				outputStream->Close();
				writeText();

			}
			else if (result->Equals("delete")) {
				//delete option.
				String ^ lineData = form->eventTime + "$@$" + form->eventName + "$@$" + form->userNotes;
				int  i = 0;
				while (!events[i]->Equals(date + "$@$" + title + "$@$" + notes)) {
					i++;
				}
				//removes selected items from file.
				events->RemoveAt(i);
				//clears the eventLog, writes the events list, then displays updated list in the event Preview
				FileInfo ^ fi = gcnew FileInfo("eventLog");
				outputStream = gcnew StreamWriter(fi->Open(FileMode::Truncate));
				for (i = 0; i < events->Count; i++) {
					outputStream->WriteLine(events[i]);
				}
				outputStream->Close();
				writeText();
			}
			else {
				//cancel option. do nothing
			}

		}
		else {

		}
	}
	catch (...) {

	}
}
};
}
