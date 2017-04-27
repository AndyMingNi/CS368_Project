#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
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
		StreamWriter ^ outputStream;
		MyForm(void)
		{
			InitializeComponent();
			outputStream = gcnew StreamWriter("eventLog", true);
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
	private: System::Windows::Forms::Label^  labelDayPicker;
	private: System::Windows::Forms::TextBox^  eventTitleTF;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  labelAlarmPicker;
	private: System::Windows::Forms::TextBox^  NotesTF;
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
			this->NotesTF = (gcnew System::Windows::Forms::TextBox());
			this->alarmTimePicker = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelAlarmPicker = (gcnew System::Windows::Forms::Label());
			this->eventTitleTF = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->labelNotes = (gcnew System::Windows::Forms::Label());
			this->labelEventTitle = (gcnew System::Windows::Forms::Label());
			this->labelDayPicker = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->labelUEO = (gcnew System::Windows::Forms::Label());
			this->eventPreview = (gcnew System::Windows::Forms::ListView());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->alarmTimePicker))->BeginInit();
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
			this->groupBox1->Controls->Add(this->alarmCheckBox);
			this->groupBox1->Controls->Add(this->NotesTF);
			this->groupBox1->Controls->Add(this->alarmTimePicker);
			this->groupBox1->Controls->Add(this->labelAlarmPicker);
			this->groupBox1->Controls->Add(this->eventTitleTF);
			this->groupBox1->Controls->Add(this->dateTimePicker);
			this->groupBox1->Controls->Add(this->labelNotes);
			this->groupBox1->Controls->Add(this->labelEventTitle);
			this->groupBox1->Controls->Add(this->labelDayPicker);
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
			// alarmCheckBox
			// 
			this->alarmCheckBox->AutoSize = true;
			this->alarmCheckBox->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->alarmCheckBox->Location = System::Drawing::Point(266, 50);
			this->alarmCheckBox->Name = L"alarmCheckBox";
			this->alarmCheckBox->Size = System::Drawing::Size(97, 17);
			this->alarmCheckBox->TabIndex = 10;
			this->alarmCheckBox->Text = L"Alarm (On/Off):";
			this->alarmCheckBox->UseVisualStyleBackColor = true;
			// 
			// NotesTF
			// 
			this->NotesTF->Location = System::Drawing::Point(52, 153);
			this->NotesTF->Multiline = true;
			this->NotesTF->Name = L"NotesTF";
			this->NotesTF->Size = System::Drawing::Size(351, 118);
			this->NotesTF->TabIndex = 8;
			this->NotesTF->TextChanged += gcnew System::EventHandler(this, &MyForm::NotesTF_TextChanged);
			// 
			// alarmTimePicker
			// 
			this->alarmTimePicker->Location = System::Drawing::Point(311, 97);
			this->alarmTimePicker->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 48, 0, 0, 0 });
			this->alarmTimePicker->Name = L"alarmTimePicker";
			this->alarmTimePicker->Size = System::Drawing::Size(92, 20);
			this->alarmTimePicker->TabIndex = 7;
			// 
			// labelAlarmPicker
			// 
			this->labelAlarmPicker->AutoSize = true;
			this->labelAlarmPicker->Location = System::Drawing::Point(266, 81);
			this->labelAlarmPicker->Name = L"labelAlarmPicker";
			this->labelAlarmPicker->Size = System::Drawing::Size(97, 13);
			this->labelAlarmPicker->TabIndex = 6;
			this->labelAlarmPicker->Text = L"Alarm (0-48 Hours):";
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
			this->dateTimePicker->CustomFormat = L"MM/dd/yyyy hh:mm tt";
			this->dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
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
			// labelDayPicker
			// 
			this->labelDayPicker->AutoSize = true;
			this->labelDayPicker->Location = System::Drawing::Point(7, 31);
			this->labelDayPicker->Name = L"labelDayPicker";
			this->labelDayPicker->Size = System::Drawing::Size(62, 13);
			this->labelDayPicker->TabIndex = 0;
			this->labelDayPicker->Text = L"Day Picker:";
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
			this->eventPreview->GridLines = true;
			this->eventPreview->Location = System::Drawing::Point(21, 209);
			this->eventPreview->Name = L"eventPreview";
			this->eventPreview->Size = System::Drawing::Size(224, 137);
			this->eventPreview->TabIndex = 3;
			this->eventPreview->UseCompatibleStateImageBehavior = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(691, 355);
			this->Controls->Add(this->eventPreview);
			this->Controls->Add(this->labelUEO);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->monthCalendar);
			this->Name = L"MyForm";
			this->Text = L"Personal Event Calendar";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->alarmTimePicker))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dateTimePicker_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		eventTime = dateTimePicker->Value.ToShortDateString();
	}
	private: System::Void eventTitleTF_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		eventName = eventTitleTF->Text;
	}
	private: System::Void NotesTF_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		userNotes = NotesTF->Text;
	}

	private: System::Void buttonSaveEvent_Click(System::Object^  sender, System::EventArgs^  e) {
		if (eventName->Length > 0) {
			outputStream->WriteLine(eventName + "$@$" + eventTime + "$@$" + userNotes);
			outputStream->Flush();
		}
	}
	private: System::Void buttonNewClear_Click(System::Object^  sender, System::EventArgs^  e) {
		dateTimePicker->Value = dateTimePicker->Value.Now;
		eventTime->Empty;
		eventTitleTF->Clear();
		eventName->Empty;
		NotesTF->Clear();
		userNotes->Empty;
	}
};
}
