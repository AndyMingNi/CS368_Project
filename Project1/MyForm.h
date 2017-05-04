#pragma once

#include "MyForm1.h";

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
	protected:

	protected:
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  labelNotes;
	private: System::Windows::Forms::Label^  labelEventTitle;
	private: System::Windows::Forms::Label^  labelDatePicker;

	private: System::Windows::Forms::TextBox^  eventTitleTF;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  labelAlarmPicker;
	private: System::Windows::Forms::TextBox^  notesTF;

	private: System::Windows::Forms::NumericUpDown^  alarmTimePicker;
	private: System::Windows::Forms::Label^  labelUEO;
	private: System::Windows::Forms::ListView^  eventPreview;
	private: System::Windows::Forms::Button^  buttonNewClear;
	private: System::Windows::Forms::Button^  buttonSaveEvent;
	private: System::Windows::Forms::CheckBox^  alarmCheckBox;
	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
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
			this->alarmCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->notesTF = (gcnew System::Windows::Forms::TextBox());
			this->alarmTimePicker = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelAlarmPicker = (gcnew System::Windows::Forms::Label());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->alarmTimePicker))->BeginInit();
			this->SuspendLayout();
			// 
			// monthCalendar
			// 
			this->monthCalendar->Location = System::Drawing::Point(24, 22);
			this->monthCalendar->Margin = System::Windows::Forms::Padding(12, 11, 12, 11);
			this->monthCalendar->Name = L"monthCalendar";
			this->monthCalendar->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->buttonNewClear);
			this->groupBox1->Controls->Add(this->buttonSaveEvent);
			this->groupBox1->Controls->Add(this->alarmCheckBox);
			this->groupBox1->Controls->Add(this->notesTF);
			this->groupBox1->Controls->Add(this->alarmTimePicker);
			this->groupBox1->Controls->Add(this->labelAlarmPicker);
			this->groupBox1->Controls->Add(this->eventTitleTF);
			this->groupBox1->Controls->Add(this->dateTimePicker);
			this->groupBox1->Controls->Add(this->labelNotes);
			this->groupBox1->Controls->Add(this->labelEventTitle);
			this->groupBox1->Controls->Add(this->labelDatePicker);
			this->groupBox1->Location = System::Drawing::Point(343, 22);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(553, 404);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"New Event";
			// 
			// buttonNewClear
			// 
			this->buttonNewClear->Location = System::Drawing::Point(437, 362);
			this->buttonNewClear->Margin = System::Windows::Forms::Padding(4);
			this->buttonNewClear->Name = L"buttonNewClear";
			this->buttonNewClear->Size = System::Drawing::Size(100, 28);
			this->buttonNewClear->TabIndex = 13;
			this->buttonNewClear->Text = L"New/Clear";
			this->buttonNewClear->UseVisualStyleBackColor = true;
			this->buttonNewClear->Click += gcnew System::EventHandler(this, &MyForm::buttonNewClear_Click);
			// 
			// buttonSaveEvent
			// 
			this->buttonSaveEvent->Location = System::Drawing::Point(69, 362);
			this->buttonSaveEvent->Margin = System::Windows::Forms::Padding(4);
			this->buttonSaveEvent->Name = L"buttonSaveEvent";
			this->buttonSaveEvent->Size = System::Drawing::Size(100, 28);
			this->buttonSaveEvent->TabIndex = 12;
			this->buttonSaveEvent->Text = L"Save Event";
			this->buttonSaveEvent->UseVisualStyleBackColor = true;
			this->buttonSaveEvent->Click += gcnew System::EventHandler(this, &MyForm::buttonSaveEvent_Click);
			// 
			// alarmCheckBox
			// 
			this->alarmCheckBox->AutoSize = true;
			this->alarmCheckBox->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->alarmCheckBox->Location = System::Drawing::Point(355, 62);
			this->alarmCheckBox->Margin = System::Windows::Forms::Padding(4);
			this->alarmCheckBox->Name = L"alarmCheckBox";
			this->alarmCheckBox->Size = System::Drawing::Size(126, 21);
			this->alarmCheckBox->TabIndex = 10;
			this->alarmCheckBox->Text = L"Alarm (On/Off):";
			this->alarmCheckBox->UseVisualStyleBackColor = true;
			// 
			// notesTF
			// 
			this->notesTF->Location = System::Drawing::Point(69, 188);
			this->notesTF->Margin = System::Windows::Forms::Padding(4);
			this->notesTF->Multiline = true;
			this->notesTF->Name = L"notesTF";
			this->notesTF->Size = System::Drawing::Size(465, 144);
			this->notesTF->TabIndex = 8;
			this->notesTF->TextChanged += gcnew System::EventHandler(this, &MyForm::notesTF_TextChanged);
			// 
			// alarmTimePicker
			// 
			this->alarmTimePicker->Location = System::Drawing::Point(415, 119);
			this->alarmTimePicker->Margin = System::Windows::Forms::Padding(4);
			this->alarmTimePicker->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 48, 0, 0, 0 });
			this->alarmTimePicker->Name = L"alarmTimePicker";
			this->alarmTimePicker->Size = System::Drawing::Size(123, 22);
			this->alarmTimePicker->TabIndex = 7;
			// 
			// labelAlarmPicker
			// 
			this->labelAlarmPicker->AutoSize = true;
			this->labelAlarmPicker->Location = System::Drawing::Point(355, 100);
			this->labelAlarmPicker->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelAlarmPicker->Name = L"labelAlarmPicker";
			this->labelAlarmPicker->Size = System::Drawing::Size(133, 17);
			this->labelAlarmPicker->TabIndex = 6;
			this->labelAlarmPicker->Text = L"Alarm (0-48 Hours):";
			// 
			// eventTitleTF
			// 
			this->eventTitleTF->Location = System::Drawing::Point(69, 121);
			this->eventTitleTF->Margin = System::Windows::Forms::Padding(4);
			this->eventTitleTF->Name = L"eventTitleTF";
			this->eventTitleTF->Size = System::Drawing::Size(265, 22);
			this->eventTitleTF->TabIndex = 4;
			this->eventTitleTF->TextChanged += gcnew System::EventHandler(this, &MyForm::eventTitleTF_TextChanged);
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->CustomFormat = L"MM/dd/yyyy hh:mm tt";
			this->dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker->Location = System::Drawing::Point(69, 58);
			this->dateTimePicker->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->ShowUpDown = true;
			this->dateTimePicker->Size = System::Drawing::Size(265, 22);
			this->dateTimePicker->TabIndex = 3;
			this->dateTimePicker->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker_ValueChanged);
			eventTime = dateTimePicker->Value.ToShortDateString();
			// 
			// labelNotes
			// 
			this->labelNotes->AutoSize = true;
			this->labelNotes->Location = System::Drawing::Point(9, 162);
			this->labelNotes->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelNotes->Name = L"labelNotes";
			this->labelNotes->Size = System::Drawing::Size(49, 17);
			this->labelNotes->TabIndex = 2;
			this->labelNotes->Text = L"Notes:";
			// 
			// labelEventTitle
			// 
			this->labelEventTitle->AutoSize = true;
			this->labelEventTitle->Location = System::Drawing::Point(9, 100);
			this->labelEventTitle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelEventTitle->Name = L"labelEventTitle";
			this->labelEventTitle->Size = System::Drawing::Size(79, 17);
			this->labelEventTitle->TabIndex = 1;
			this->labelEventTitle->Text = L"Event Title:";
			// 
			// labelDatePicker
			// 
			this->labelDatePicker->AutoSize = true;
			this->labelDatePicker->Location = System::Drawing::Point(9, 38);
			this->labelDatePicker->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelDatePicker->Name = L"labelDatePicker";
			this->labelDatePicker->Size = System::Drawing::Size(85, 17);
			this->labelDatePicker->TabIndex = 0;
			this->labelDatePicker->Text = L"Date Picker:";
			// 
			// labelUEO
			// 
			this->labelUEO->AutoSize = true;
			this->labelUEO->Location = System::Drawing::Point(24, 238);
			this->labelUEO->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelUEO->Name = L"labelUEO";
			this->labelUEO->Size = System::Drawing::Size(184, 17);
			this->labelUEO->TabIndex = 2;
			this->labelUEO->Text = L"Upcoming Events Overview:";
			// 
			// eventPreview
			// 
			this->eventPreview->Alignment = System::Windows::Forms::ListViewAlignment::Left;
			this->eventPreview->AutoArrange = false;
			this->eventPreview->FullRowSelect = true;
			this->eventPreview->View = View::Details;
			ColumnHeader ^ column = gcnew ColumnHeader();
			column->Text = "Events";
			this->eventPreview->Columns->Add(column);

			this->eventPreview->GridLines = true;
			this->eventPreview->LabelWrap = false;
			this->eventPreview->Location = System::Drawing::Point(28, 257);
			this->eventPreview->Margin = System::Windows::Forms::Padding(4);
			this->eventPreview->Name = L"eventPreview";
			this->eventPreview->Size = System::Drawing::Size(297, 168);
			this->eventPreview->TabIndex = 3;
			this->eventPreview->UseCompatibleStateImageBehavior = false;
			this->eventPreview->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::eventPreview_MouseDoubleClick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(921, 453);
			this->Controls->Add(this->eventPreview);
			this->Controls->Add(this->labelUEO);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->monthCalendar);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Personal Event Calendar";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->alarmTimePicker))->EndInit();
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
		catch (NullReferenceException ^ ex1) {
		}
		try {
			inputStream = gcnew StreamReader("eventLog", true);
			lineData = inputStream->ReadLine();
			while (lineData != nullptr) {
				events->Add(lineData);
				lineData = lineData->Replace("$@$", " ");
				lineData = lineData->Replace("  ", " ");
				//this->eventPreview->Columns->TextAlign = HorizontalAlignment::Right;
				this->eventPreview->Items->Add(gcnew ListViewItem(lineData));
				this->eventPreview->AutoResizeColumn(0, ColumnHeaderAutoResizeStyle::ColumnContent);
				
				lineData = inputStream->ReadLine();
			}
			
		}
		catch (FileNotFoundException ^ ex) {

		}
		catch (NullReferenceException ^ ex1) {

		}
		finally {
			try {
				inputStream->Close();
			}
			catch (NullReferenceException ^ ex1) {

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
				outputStream->WriteLine(eventName + "$@$" + eventTime + "$@$" + userNotes);
				outputStream->Flush();
				outputStream->Close();
				writeText();
			}
		}
		catch (NullReferenceException ^ex1) {

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
			String ^ title = currEvent->Substring(0, currEvent->IndexOf("$@$"));
			String ^ notes = "";
			currEvent = currEvent->Substring(currEvent->IndexOf("$@$") + 3);

			date = currEvent->Substring(0, currEvent->IndexOf("$@$"));
			currEvent = currEvent->Substring(currEvent->IndexOf("$@$") + 3);
			if (currEvent->Length > 0) {
				notes = currEvent;
			}

			form->passEvents(events, title, date, notes);
			form->ShowDialog();
			String ^ result = form->result;
			if (result->Equals("save")) {
				String ^ lineData = form->eventName + "$@$" + form->eventTime + "$@$" + form->userNotes;
				int  i = 0;
				while (!events[i]->Equals(title + "$@$" + date + "$@$" + notes)) {
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
				String ^ lineData = form->eventName + "$@$" + form->eventTime + "$@$" + form->userNotes;
				int  i = 0;
				while (!events[i]->Equals(title + "$@$" + date + "$@$" + notes)) {
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
	catch (ArgumentOutOfRangeException ^ ex1) {

	}
}
};
}
