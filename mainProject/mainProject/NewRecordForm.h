#pragma once

namespace mainProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NewRecordForm
	/// </summary>
	public ref class NewRecordForm : public System::Windows::Forms::Form
	{
	public:
		NewRecordForm(void)
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
		~NewRecordForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckedListBox^ cLBplace;
	private: System::Windows::Forms::CheckBox^ CbPrivate;
	protected:

	protected:


	private: System::Windows::Forms::CheckBox^ CbState;
	private: System::Windows::Forms::CheckedListBox^ cLbDocType;







	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ lPlace;
	private: System::Windows::Forms::Label^ lDocType;
	private: System::Windows::Forms::Label^ lDateVizit;
	private: System::Windows::Forms::ComboBox^ cBTimeSelect;
	private: System::Windows::Forms::TextBox^ tBComments;
	private: System::Windows::Forms::Label^ lComments;
	private: System::Windows::Forms::Label^ lChoose;
	private: System::Windows::Forms::Button^ bSend;
	private: System::Windows::Forms::Label^ linfo;
	private: System::Windows::Forms::DateTimePicker^ dTPSelect;


	private: System::Windows::Forms::CheckedListBox^ cLbDoc;
	private: System::Windows::Forms::CheckedListBox^ cLbHospital;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ l�linic;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pi�Box;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(NewRecordForm::typeid));
			this->cLBplace = (gcnew System::Windows::Forms::CheckedListBox());
			this->CbPrivate = (gcnew System::Windows::Forms::CheckBox());
			this->CbState = (gcnew System::Windows::Forms::CheckBox());
			this->cLbDocType = (gcnew System::Windows::Forms::CheckedListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lPlace = (gcnew System::Windows::Forms::Label());
			this->lDocType = (gcnew System::Windows::Forms::Label());
			this->lDateVizit = (gcnew System::Windows::Forms::Label());
			this->cBTimeSelect = (gcnew System::Windows::Forms::ComboBox());
			this->tBComments = (gcnew System::Windows::Forms::TextBox());
			this->lComments = (gcnew System::Windows::Forms::Label());
			this->lChoose = (gcnew System::Windows::Forms::Label());
			this->bSend = (gcnew System::Windows::Forms::Button());
			this->linfo = (gcnew System::Windows::Forms::Label());
			this->dTPSelect = (gcnew System::Windows::Forms::DateTimePicker());
			this->cLbDoc = (gcnew System::Windows::Forms::CheckedListBox());
			this->cLbHospital = (gcnew System::Windows::Forms::CheckedListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->l�linic = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pi�Box = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pi�Box))->BeginInit();
			this->SuspendLayout();
			// 
			// cLBplace
			// 
			this->cLBplace->FormattingEnabled = true;
			this->cLBplace->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"�������������� (������� ����������������)",
					L"����������� (������� ���������)", L"������������", L"��������������� (������� ���������)", L"�������������", L"����������",
					L"����������"
			});
			this->cLBplace->Location = System::Drawing::Point(6, 133);
			this->cLBplace->Name = L"cLBplace";
			this->cLBplace->Size = System::Drawing::Size(277, 139);
			this->cLBplace->TabIndex = 0;
			this->cLBplace->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &NewRecordForm::cLBplace_MouseMove);
			// 
			// CbPrivate
			// 
			this->CbPrivate->AutoSize = true;
			this->CbPrivate->Location = System::Drawing::Point(13, 49);
			this->CbPrivate->Name = L"CbPrivate";
			this->CbPrivate->Size = System::Drawing::Size(75, 17);
			this->CbPrivate->TabIndex = 1;
			this->CbPrivate->Text = L"��������";
			this->CbPrivate->UseVisualStyleBackColor = true;
			this->CbPrivate->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &NewRecordForm::CbPrivate_MouseMove);
			// 
			// CbState
			// 
			this->CbState->AutoSize = true;
			this->CbState->Location = System::Drawing::Point(13, 95);
			this->CbState->Name = L"CbState";
			this->CbState->Size = System::Drawing::Size(79, 17);
			this->CbState->TabIndex = 2;
			this->CbState->Text = L"��������";
			this->CbState->UseVisualStyleBackColor = true;
			this->CbState->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &NewRecordForm::CbState_MouseMove);
			// 
			// cLbDocType
			// 
			this->cLbDocType->FormattingEnabled = true;
			this->cLbDocType->Items->AddRange(gcnew cli::array< System::Object^  >(18) {
				L"������-��������", L"����������", L"���������������",
					L"���������", L"ó�������", L"��������", L"��������", L"������", L"�������", L"�������", L"������������� (���-����)", L"��������",
					L"�����������", L"����������", L"����������", L"��������", L"������", L"������������"
			});
			this->cLbDocType->Location = System::Drawing::Point(297, 133);
			this->cLbDocType->Name = L"cLbDocType";
			this->cLbDocType->Size = System::Drawing::Size(161, 139);
			this->cLbDocType->TabIndex = 3;
			this->cLbDocType->Tag = L"";
			this->cLbDocType->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &NewRecordForm::cLbDocType_MouseMove);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->CbState);
			this->groupBox1->Controls->Add(this->CbPrivate);
			this->groupBox1->Location = System::Drawing::Point(473, 127);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(118, 145);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"��� �����:";
			// 
			// lPlace
			// 
			this->lPlace->AutoSize = true;
			this->lPlace->Location = System::Drawing::Point(6, 116);
			this->lPlace->Name = L"lPlace";
			this->lPlace->Size = System::Drawing::Size(87, 13);
			this->lPlace->TabIndex = 7;
			this->lPlace->Text = L"������� �����:";
			// 
			// lDocType
			// 
			this->lDocType->AutoSize = true;
			this->lDocType->Location = System::Drawing::Point(294, 116);
			this->lDocType->Name = L"lDocType";
			this->lDocType->Size = System::Drawing::Size(112, 13);
			this->lDocType->TabIndex = 8;
			this->lDocType->Text = L"������������ �����:";
			// 
			// lDateVizit
			// 
			this->lDateVizit->AutoSize = true;
			this->lDateVizit->Location = System::Drawing::Point(6, 291);
			this->lDateVizit->Name = L"lDateVizit";
			this->lDateVizit->Size = System::Drawing::Size(195, 13);
			this->lDateVizit->TabIndex = 9;
			this->lDateVizit->Text = L"������ ���� �� ������ ��� �������:";
			// 
			// cBTimeSelect
			// 
			this->cBTimeSelect->FormattingEnabled = true;
			this->cBTimeSelect->Location = System::Drawing::Point(12, 362);
			this->cBTimeSelect->Name = L"cBTimeSelect";
			this->cBTimeSelect->Size = System::Drawing::Size(202, 21);
			this->cBTimeSelect->TabIndex = 10;
			this->cBTimeSelect->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &NewRecordForm::cBTimeSelect_MouseMove);
			// 
			// tBComments
			// 
			this->tBComments->Location = System::Drawing::Point(384, 584);
			this->tBComments->Multiline = true;
			this->tBComments->Name = L"tBComments";
			this->tBComments->Size = System::Drawing::Size(438, 118);
			this->tBComments->TabIndex = 12;
			this->tBComments->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &NewRecordForm::tBComments_MouseUp);
			// 
			// lComments
			// 
			this->lComments->AutoSize = true;
			this->lComments->Location = System::Drawing::Point(385, 557);
			this->lComments->Name = L"lComments";
			this->lComments->Size = System::Drawing::Size(271, 13);
			this->lComments->TabIndex = 13;
			this->lComments->Text = L"������ �������� ������ ���� ����������� �����:";
			// 
			// lChoose
			// 
			this->lChoose->AutoSize = true;
			this->lChoose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lChoose->Location = System::Drawing::Point(311, 26);
			this->lChoose->Name = L"lChoose";
			this->lChoose->Size = System::Drawing::Size(227, 18);
			this->lChoose->TabIndex = 14;
			this->lChoose->Text = L"�������� ����� ����� ������";
			// 
			// bSend
			// 
			this->bSend->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->bSend->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->bSend->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bSend->Location = System::Drawing::Point(12, 616);
			this->bSend->Name = L"bSend";
			this->bSend->Size = System::Drawing::Size(202, 61);
			this->bSend->TabIndex = 15;
			this->bSend->Text = L"����������";
			this->bSend->UseVisualStyleBackColor = true;
			this->bSend->Click += gcnew System::EventHandler(this, &NewRecordForm::bSend_Click);
			this->bSend->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &NewRecordForm::bSend_MouseMove);
			// 
			// linfo
			// 
			this->linfo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->linfo->AutoSize = true;
			this->linfo->Location = System::Drawing::Point(3, 689);
			this->linfo->Name = L"linfo";
			this->linfo->Size = System::Drawing::Size(256, 13);
			this->linfo->TabIndex = 31;
			this->linfo->Text = L"��� �������� ���������� �� ���� - �������� F1";
			// 
			// dTPSelect
			// 
			this->dTPSelect->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dTPSelect->Location = System::Drawing::Point(12, 324);
			this->dTPSelect->Name = L"dTPSelect";
			this->dTPSelect->Size = System::Drawing::Size(89, 20);
			this->dTPSelect->TabIndex = 32;
			this->dTPSelect->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &NewRecordForm::dTPSelect_MouseMove);
			// 
			// cLbDoc
			// 
			this->cLbDoc->FormattingEnabled = true;
			this->cLbDoc->Location = System::Drawing::Point(388, 324);
			this->cLbDoc->Name = L"cLbDoc";
			this->cLbDoc->Size = System::Drawing::Size(438, 214);
			this->cLbDoc->TabIndex = 34;
			// 
			// cLbHospital
			// 
			this->cLbHospital->FormattingEnabled = true;
			this->cLbHospital->Location = System::Drawing::Point(610, 133);
			this->cLbHospital->Name = L"cLbHospital";
			this->cLbHospital->Size = System::Drawing::Size(212, 139);
			this->cLbHospital->TabIndex = 35;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 546);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(202, 35);
			this->button1->TabIndex = 36;
			this->button1->Text = L"������ ��������� �����";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// l�linic
			// 
			this->l�linic->AutoSize = true;
			this->l�linic->Location = System::Drawing::Point(607, 116);
			this->l�linic->Name = L"l�linic";
			this->l�linic->Size = System::Drawing::Size(49, 13);
			this->l�linic->TabIndex = 37;
			this->l�linic->Text = L"������:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(385, 291);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 13);
			this->label2->TabIndex = 38;
			this->label2->Text = L"������������ �����:";
			// 
			// pi�Box
			// 
			this->pi�Box->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pi�Box.Image")));
			this->pi�Box->Location = System::Drawing::Point(-26, -4);
			this->pi�Box->Name = L"pi�Box";
			this->pi�Box->Size = System::Drawing::Size(181, 117);
			this->pi�Box->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pi�Box->TabIndex = 42;
			this->pi�Box->TabStop = false;
			// 
			// NewRecordForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(834, 711);
			this->Controls->Add(this->pi�Box);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->l�linic);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->cLbHospital);
			this->Controls->Add(this->cLbDoc);
			this->Controls->Add(this->dTPSelect);
			this->Controls->Add(this->linfo);
			this->Controls->Add(this->bSend);
			this->Controls->Add(this->lChoose);
			this->Controls->Add(this->lComments);
			this->Controls->Add(this->tBComments);
			this->Controls->Add(this->cBTimeSelect);
			this->Controls->Add(this->lDateVizit);
			this->Controls->Add(this->lDocType);
			this->Controls->Add(this->lPlace);
			this->Controls->Add(this->cLbDocType);
			this->Controls->Add(this->cLBplace);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"NewRecordForm";
			this->Text = L"NewRecordForm";
			this->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &NewRecordForm::NewRecordForm_HelpRequested);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pi�Box))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void bSend_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void cLBplace_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	System::Windows::Forms::ToolTip^ toolTip1 = gcnew System::Windows::Forms::ToolTip();
	toolTip1->SetToolTip(cLBplace, "³������ �������� ������ � ���� �� ������ �������� ����� ");
}
private: System::Void CbPrivate_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	System::Windows::Forms::ToolTip^ toolTip1 = gcnew System::Windows::Forms::ToolTip();
	toolTip1->SetToolTip(CbPrivate, "³������ �������� ��� ����� ");
}
private: System::Void CbState_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	System::Windows::Forms::ToolTip^ toolTip1 = gcnew System::Windows::Forms::ToolTip();
	toolTip1->SetToolTip(CbState, "³������ �������� ��� ����� ");
}
private: System::Void cLbDocType_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	System::Windows::Forms::ToolTip^ toolTip1 = gcnew System::Windows::Forms::ToolTip();
	toolTip1->SetToolTip(cLbDocType, "³������ �������� ������ ������������ �����");
}

private: System::Void cBTimeSelect_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	System::Windows::Forms::ToolTip^ toolTip1 = gcnew System::Windows::Forms::ToolTip();
	toolTip1->SetToolTip(cBTimeSelect, "������ ������� ��� �� ���� ������� ");
}
private: System::Void tBComments_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	System::Windows::Forms::ToolTip^ toolTip1 = gcnew System::Windows::Forms::ToolTip();
	toolTip1->SetToolTip(tBComments, "��� �� ������ �������� �������� ���� ������ ����������� ");
}
private: System::Void bSend_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	System::Windows::Forms::ToolTip^ toolTip1 = gcnew System::Windows::Forms::ToolTip();
	toolTip1->SetToolTip(bSend, "������ ��� ������������ ���������");
}

private: System::Void dTPSelect_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	System::Windows::Forms::ToolTip^ toolTip1 = gcnew System::Windows::Forms::ToolTip();
	toolTip1->SetToolTip(dTPSelect, "������ ��� �� ���� �������");
}
private: System::Void NewRecordForm_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent) {

	// ����� �������� ��� ��������� ��� ����� NewRecordForm
	String^ helpText = "�� ����� �������� ������������ ������������ �� �����, ������� ������������, ���� �� ��� �������, � ����� �������� �������� ���� ����� �����������.\n";
	helpText += "������ ��� ����� (�������� ��� ��������), �����, ������������ ����� �� ���� �������.\n";
	helpText += "������ ������ ��� ������� � ������� �������� �� �������.\n";
	helpText += "��������� ��������� ���������� ������ '����������'.";

	// �������� MessageBox �� ������� ��������
	MessageBox::Show(helpText, "������", MessageBoxButtons::OK, MessageBoxIcon::Information);

}

};
}
