#pragma once
#include "Data.h"
#include "Algorithms.h"
#include "NewRecordForm.h"
#include <ctime>

namespace mainProject {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LogForm
	/// </summary>
	///
	//Дані користувача який авторизувався
	static User us;
	//Його телефон
	static std::string ph;
	public ref class LogForm : public System::Windows::Forms::Form
	{
	private:
		//Айді
		int UserID;
	private: System::Windows::Forms::Button^ bCancle;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ TbOld;

	public:
		System::String^ pass;

		LogForm(User& user, String^ password, std::string phone)
		{
			InitializeComponent();
			ph = phone;
			UserID = 0;
			us = user;
			pass = password;

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LogForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MonthCalendar^ monthCalendar;
	private: System::Windows::Forms::ComboBox^ CbLast;

	private: System::Windows::Forms::Label^ lFio;

	private: System::Windows::Forms::Label^ lTel;
	private: System::Windows::Forms::Label^ lAge;

	private: System::Windows::Forms::CheckBox^ CbShow;
	private: System::Windows::Forms::MaskedTextBox^ mTbPassw;
	private: System::Windows::Forms::Label^ lPassw;

	private: System::Windows::Forms::Label^ lLast;
	private: System::Windows::Forms::Label^ lFuture;
	private: System::Windows::Forms::ComboBox^ CbFuture;
	private: System::Windows::Forms::Label^ lShowData;


	private: System::Windows::Forms::TextBox^ TbPatr;
	private: System::Windows::Forms::TextBox^ TbSurn;
	private: System::Windows::Forms::TextBox^ TbTel;
	private: System::Windows::Forms::TextBox^ TbName;
	private: System::Windows::Forms::TextBox^ TbDocPatr;

	private: System::Windows::Forms::TextBox^ TbDocSurn;

	private: System::Windows::Forms::TextBox^ TbDocName;

	private: System::Windows::Forms::Label^ lDocFio;
	private: System::Windows::Forms::Label^ lExp;
	private: System::Windows::Forms::Button^ bSingUp;

	private: System::Windows::Forms::GroupBox^ gBAppoin;
	private: System::Windows::Forms::GroupBox^ gBFamDoc;
	private: System::Windows::Forms::Label^ lPatr;
	private: System::Windows::Forms::Label^ lSurname;
	private: System::Windows::Forms::Label^ lName;
	private: System::Windows::Forms::Label^ linfo;
	private: System::Windows::Forms::PictureBox^ piсBox;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LogForm::typeid));
			this->monthCalendar = (gcnew System::Windows::Forms::MonthCalendar());
			this->CbLast = (gcnew System::Windows::Forms::ComboBox());
			this->lFio = (gcnew System::Windows::Forms::Label());
			this->lTel = (gcnew System::Windows::Forms::Label());
			this->lAge = (gcnew System::Windows::Forms::Label());
			this->CbShow = (gcnew System::Windows::Forms::CheckBox());
			this->mTbPassw = (gcnew System::Windows::Forms::MaskedTextBox());
			this->lPassw = (gcnew System::Windows::Forms::Label());
			this->lLast = (gcnew System::Windows::Forms::Label());
			this->lFuture = (gcnew System::Windows::Forms::Label());
			this->CbFuture = (gcnew System::Windows::Forms::ComboBox());
			this->lShowData = (gcnew System::Windows::Forms::Label());
			this->TbPatr = (gcnew System::Windows::Forms::TextBox());
			this->TbSurn = (gcnew System::Windows::Forms::TextBox());
			this->TbTel = (gcnew System::Windows::Forms::TextBox());
			this->TbName = (gcnew System::Windows::Forms::TextBox());
			this->TbDocPatr = (gcnew System::Windows::Forms::TextBox());
			this->TbDocSurn = (gcnew System::Windows::Forms::TextBox());
			this->TbDocName = (gcnew System::Windows::Forms::TextBox());
			this->lDocFio = (gcnew System::Windows::Forms::Label());
			this->lExp = (gcnew System::Windows::Forms::Label());
			this->bSingUp = (gcnew System::Windows::Forms::Button());
			this->gBAppoin = (gcnew System::Windows::Forms::GroupBox());
			this->gBFamDoc = (gcnew System::Windows::Forms::GroupBox());
			this->lPatr = (gcnew System::Windows::Forms::Label());
			this->lSurname = (gcnew System::Windows::Forms::Label());
			this->lName = (gcnew System::Windows::Forms::Label());
			this->linfo = (gcnew System::Windows::Forms::Label());
			this->piсBox = (gcnew System::Windows::Forms::PictureBox());
			this->bCancle = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->TbOld = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piсBox))->BeginInit();
			this->SuspendLayout();
			// 
			// monthCalendar
			// 
			this->monthCalendar->Location = System::Drawing::Point(1066, 88);
			this->monthCalendar->Margin = System::Windows::Forms::Padding(18, 17, 18, 17);
			this->monthCalendar->Name = L"monthCalendar";
			this->monthCalendar->TabIndex = 0;
			this->monthCalendar->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &LogForm::monthCalendar_MouseMove);
			// 
			// CbLast
			// 
			this->CbLast->FormattingEnabled = true;
			this->CbLast->Location = System::Drawing::Point(1066, 779);
			this->CbLast->Margin = System::Windows::Forms::Padding(6);
			this->CbLast->Name = L"CbLast";
			this->CbLast->Size = System::Drawing::Size(324, 33);
			this->CbLast->TabIndex = 1;
			this->CbLast->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &LogForm::CbLast_MouseMove);
			// 
			// lFio
			// 
			this->lFio->AutoSize = true;
			this->lFio->Location = System::Drawing::Point(56, 262);
			this->lFio->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->lFio->Name = L"lFio";
			this->lFio->Size = System::Drawing::Size(64, 25);
			this->lFio->TabIndex = 3;
			this->lFio->Text = L"ПІБ : ";
			// 
			// lTel
			// 
			this->lTel->AutoSize = true;
			this->lTel->Location = System::Drawing::Point(56, 333);
			this->lTel->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->lTel->Name = L"lTel";
			this->lTel->Size = System::Drawing::Size(120, 25);
			this->lTel->TabIndex = 4;
			this->lTel->Text = L"Телефон : ";
			// 
			// lAge
			// 
			this->lAge->AutoSize = true;
			this->lAge->Location = System::Drawing::Point(56, 408);
			this->lAge->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->lAge->Name = L"lAge";
			this->lAge->Size = System::Drawing::Size(54, 25);
			this->lAge->TabIndex = 5;
			this->lAge->Text = L"Вік :";
			// 
			// CbShow
			// 
			this->CbShow->AutoSize = true;
			this->CbShow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->CbShow->Location = System::Drawing::Point(276, 521);
			this->CbShow->Margin = System::Windows::Forms::Padding(6);
			this->CbShow->Name = L"CbShow";
			this->CbShow->Size = System::Drawing::Size(193, 28);
			this->CbShow->TabIndex = 18;
			this->CbShow->Text = L"показати пароль";
			this->CbShow->UseVisualStyleBackColor = true;
			this->CbShow->CheckedChanged += gcnew System::EventHandler(this, &LogForm::CbShow_CheckedChanged);
			// 
			// mTbPassw
			// 
			this->mTbPassw->Location = System::Drawing::Point(276, 477);
			this->mTbPassw->Margin = System::Windows::Forms::Padding(6);
			this->mTbPassw->Name = L"mTbPassw";
			this->mTbPassw->PasswordChar = '*';
			this->mTbPassw->Size = System::Drawing::Size(212, 31);
			this->mTbPassw->TabIndex = 17;
			this->mTbPassw->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &LogForm::mTbPassw_MouseMove);
			// 
			// lPassw
			// 
			this->lPassw->AutoSize = true;
			this->lPassw->Location = System::Drawing::Point(56, 477);
			this->lPassw->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->lPassw->Name = L"lPassw";
			this->lPassw->Size = System::Drawing::Size(138, 25);
			this->lPassw->TabIndex = 16;
			this->lPassw->Text = L"Ваш пароль:";
			// 
			// lLast
			// 
			this->lLast->AutoSize = true;
			this->lLast->Location = System::Drawing::Point(1060, 725);
			this->lLast->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->lLast->Name = L"lLast";
			this->lLast->Size = System::Drawing::Size(88, 25);
			this->lLast->TabIndex = 19;
			this->lLast->Text = L"Минулі:";
			// 
			// lFuture
			// 
			this->lFuture->AutoSize = true;
			this->lFuture->Location = System::Drawing::Point(1060, 565);
			this->lFuture->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->lFuture->Name = L"lFuture";
			this->lFuture->Size = System::Drawing::Size(110, 25);
			this->lFuture->TabIndex = 21;
			this->lFuture->Text = L"Майбутні:";
			// 
			// CbFuture
			// 
			this->CbFuture->FormattingEnabled = true;
			this->CbFuture->Location = System::Drawing::Point(1066, 619);
			this->CbFuture->Margin = System::Windows::Forms::Padding(6);
			this->CbFuture->Name = L"CbFuture";
			this->CbFuture->Size = System::Drawing::Size(324, 33);
			this->CbFuture->TabIndex = 20;
			this->CbFuture->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &LogForm::CbFuture_MouseMove);
			// 
			// lShowData
			// 
			this->lShowData->AutoSize = true;
			this->lShowData->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->lShowData->Location = System::Drawing::Point(412, 60);
			this->lShowData->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->lShowData->Name = L"lShowData";
			this->lShowData->Size = System::Drawing::Size(173, 36);
			this->lShowData->TabIndex = 22;
			this->lShowData->Text = L"Ваші дані : ";
			this->lShowData->Click += gcnew System::EventHandler(this, &LogForm::lShowData_Click);
			// 
			// TbPatr
			// 
			this->TbPatr->ForeColor = System::Drawing::Color::Black;
			this->TbPatr->Location = System::Drawing::Point(760, 256);
			this->TbPatr->Margin = System::Windows::Forms::Padding(4);
			this->TbPatr->Name = L"TbPatr";
			this->TbPatr->Size = System::Drawing::Size(212, 31);
			this->TbPatr->TabIndex = 28;
			// 
			// TbSurn
			// 
			this->TbSurn->Location = System::Drawing::Point(512, 256);
			this->TbSurn->Margin = System::Windows::Forms::Padding(4);
			this->TbSurn->Name = L"TbSurn";
			this->TbSurn->Size = System::Drawing::Size(212, 31);
			this->TbSurn->TabIndex = 27;
			// 
			// TbTel
			// 
			this->TbTel->Location = System::Drawing::Point(278, 333);
			this->TbTel->Margin = System::Windows::Forms::Padding(4);
			this->TbTel->Name = L"TbTel";
			this->TbTel->Size = System::Drawing::Size(212, 31);
			this->TbTel->TabIndex = 26;
			this->TbTel->TextChanged += gcnew System::EventHandler(this, &LogForm::TbTel_TextChanged);
			// 
			// TbName
			// 
			this->TbName->Location = System::Drawing::Point(276, 256);
			this->TbName->Margin = System::Windows::Forms::Padding(4);
			this->TbName->Name = L"TbName";
			this->TbName->Size = System::Drawing::Size(212, 31);
			this->TbName->TabIndex = 25;
			this->TbName->TextChanged += gcnew System::EventHandler(this, &LogForm::TbName_TextChanged);
			// 
			// TbDocPatr
			// 
			this->TbDocPatr->ForeColor = System::Drawing::Color::Black;
			this->TbDocPatr->Location = System::Drawing::Point(762, 712);
			this->TbDocPatr->Margin = System::Windows::Forms::Padding(4);
			this->TbDocPatr->Name = L"TbDocPatr";
			this->TbDocPatr->Size = System::Drawing::Size(212, 31);
			this->TbDocPatr->TabIndex = 32;
			// 
			// TbDocSurn
			// 
			this->TbDocSurn->Location = System::Drawing::Point(514, 712);
			this->TbDocSurn->Margin = System::Windows::Forms::Padding(4);
			this->TbDocSurn->Name = L"TbDocSurn";
			this->TbDocSurn->Size = System::Drawing::Size(212, 31);
			this->TbDocSurn->TabIndex = 31;
			// 
			// TbDocName
			// 
			this->TbDocName->Location = System::Drawing::Point(278, 712);
			this->TbDocName->Margin = System::Windows::Forms::Padding(4);
			this->TbDocName->Name = L"TbDocName";
			this->TbDocName->Size = System::Drawing::Size(212, 31);
			this->TbDocName->TabIndex = 30;
			// 
			// lDocFio
			// 
			this->lDocFio->AutoSize = true;
			this->lDocFio->Location = System::Drawing::Point(58, 717);
			this->lDocFio->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->lDocFio->Name = L"lDocFio";
			this->lDocFio->Size = System::Drawing::Size(64, 25);
			this->lDocFio->TabIndex = 29;
			this->lDocFio->Text = L"ПІБ : ";
			// 
			// lExp
			// 
			this->lExp->AutoSize = true;
			this->lExp->Location = System::Drawing::Point(56, 785);
			this->lExp->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->lExp->Name = L"lExp";
			this->lExp->Size = System::Drawing::Size(70, 25);
			this->lExp->TabIndex = 33;
			this->lExp->Text = L"Стаж:";
			// 
			// bSingUp
			// 
			this->bSingUp->Location = System::Drawing::Point(1066, 1010);
			this->bSingUp->Margin = System::Windows::Forms::Padding(6);
			this->bSingUp->Name = L"bSingUp";
			this->bSingUp->Size = System::Drawing::Size(302, 71);
			this->bSingUp->TabIndex = 34;
			this->bSingUp->Text = L"Записатися до лікаря";
			this->bSingUp->UseVisualStyleBackColor = true;
			this->bSingUp->Click += gcnew System::EventHandler(this, &LogForm::bSingUp_Click);
			this->bSingUp->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &LogForm::bSingUp_MouseMove);
			// 
			// gBAppoin
			// 
			this->gBAppoin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->gBAppoin->Location = System::Drawing::Point(1054, 477);
			this->gBAppoin->Margin = System::Windows::Forms::Padding(6);
			this->gBAppoin->Name = L"gBAppoin";
			this->gBAppoin->Padding = System::Windows::Forms::Padding(6);
			this->gBAppoin->Size = System::Drawing::Size(390, 404);
			this->gBAppoin->TabIndex = 35;
			this->gBAppoin->TabStop = false;
			this->gBAppoin->Text = L"Ваші записи: ";
			// 
			// gBFamDoc
			// 
			this->gBFamDoc->Location = System::Drawing::Point(24, 652);
			this->gBFamDoc->Margin = System::Windows::Forms::Padding(6);
			this->gBFamDoc->Name = L"gBFamDoc";
			this->gBFamDoc->Padding = System::Windows::Forms::Padding(6);
			this->gBFamDoc->Size = System::Drawing::Size(988, 229);
			this->gBFamDoc->TabIndex = 36;
			this->gBFamDoc->TabStop = false;
			this->gBFamDoc->Text = L"Ваш сімейний лікар : ";
			this->gBFamDoc->Enter += gcnew System::EventHandler(this, &LogForm::gBFamDoc_Enter);
			// 
			// lPatr
			// 
			this->lPatr->AutoSize = true;
			this->lPatr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6));
			this->lPatr->Location = System::Drawing::Point(814, 298);
			this->lPatr->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->lPatr->Name = L"lPatr";
			this->lPatr->Size = System::Drawing::Size(97, 20);
			this->lPatr->TabIndex = 39;
			this->lPatr->Text = L"по-батькові";
			// 
			// lSurname
			// 
			this->lSurname->AutoSize = true;
			this->lSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6));
			this->lSurname->Location = System::Drawing::Point(576, 298);
			this->lSurname->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->lSurname->Name = L"lSurname";
			this->lSurname->Size = System::Drawing::Size(78, 20);
			this->lSurname->TabIndex = 38;
			this->lSurname->Text = L"прізвище";
			// 
			// lName
			// 
			this->lName->AutoSize = true;
			this->lName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lName->Location = System::Drawing::Point(382, 298);
			this->lName->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->lName->Name = L"lName";
			this->lName->Size = System::Drawing::Size(35, 20);
			this->lName->TabIndex = 37;
			this->lName->Text = L"ім\'я";
			// 
			// linfo
			// 
			this->linfo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->linfo->AutoSize = true;
			this->linfo->Location = System::Drawing::Point(18, 1133);
			this->linfo->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->linfo->Name = L"linfo";
			this->linfo->Size = System::Drawing::Size(508, 25);
			this->linfo->TabIndex = 40;
			this->linfo->Text = L"Для отриманя інформації по формі - натисніть F1";
			// 
			// piсBox
			// 
			this->piсBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"piсBox.Image")));
			this->piсBox->Location = System::Drawing::Point(-54, -6);
			this->piсBox->Margin = System::Windows::Forms::Padding(6);
			this->piсBox->Name = L"piсBox";
			this->piсBox->Size = System::Drawing::Size(362, 225);
			this->piсBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->piсBox->TabIndex = 41;
			this->piсBox->TabStop = false;
			// 
			// bCancle
			// 
			this->bCancle->Location = System::Drawing::Point(1066, 915);
			this->bCancle->Margin = System::Windows::Forms::Padding(6);
			this->bCancle->Name = L"bCancle";
			this->bCancle->Size = System::Drawing::Size(302, 65);
			this->bCancle->TabIndex = 42;
			this->bCancle->Text = L"Відмовитися";
			this->bCancle->UseVisualStyleBackColor = true;
			this->bCancle->Click += gcnew System::EventHandler(this, &LogForm::bCancle_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(864, 1002);
			this->button2->Margin = System::Windows::Forms::Padding(6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(16, 15);
			this->button2->TabIndex = 43;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// TbOld
			// 
			this->TbOld->Location = System::Drawing::Point(276, 408);
			this->TbOld->Name = L"TbOld";
			this->TbOld->Size = System::Drawing::Size(32, 31);
			this->TbOld->TabIndex = 44;
			// 
			// LogForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1468, 1175);
			this->Controls->Add(this->TbOld);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->bCancle);
			this->Controls->Add(this->piсBox);
			this->Controls->Add(this->linfo);
			this->Controls->Add(this->lPatr);
			this->Controls->Add(this->lSurname);
			this->Controls->Add(this->lName);
			this->Controls->Add(this->bSingUp);
			this->Controls->Add(this->lExp);
			this->Controls->Add(this->TbDocPatr);
			this->Controls->Add(this->TbDocSurn);
			this->Controls->Add(this->TbDocName);
			this->Controls->Add(this->lDocFio);
			this->Controls->Add(this->TbPatr);
			this->Controls->Add(this->TbSurn);
			this->Controls->Add(this->TbTel);
			this->Controls->Add(this->TbName);
			this->Controls->Add(this->lShowData);
			this->Controls->Add(this->lFuture);
			this->Controls->Add(this->CbFuture);
			this->Controls->Add(this->lLast);
			this->Controls->Add(this->CbShow);
			this->Controls->Add(this->mTbPassw);
			this->Controls->Add(this->lPassw);
			this->Controls->Add(this->lAge);
			this->Controls->Add(this->lTel);
			this->Controls->Add(this->lFio);
			this->Controls->Add(this->CbLast);
			this->Controls->Add(this->monthCalendar);
			this->Controls->Add(this->gBAppoin);
			this->Controls->Add(this->gBFamDoc);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"LogForm";
			this->Text = L"Головна сторінка";
			this->Load += gcnew System::EventHandler(this, &LogForm::LogForm_Load);
			this->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &LogForm::LogForm_HelpRequested);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piсBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void bSingUp_Click(System::Object^ sender, System::EventArgs^ e) {
		NewRecordForm^ newRecordForm = gcnew NewRecordForm(TbTel->Text, CbFuture);

		newRecordForm->Show();
	}
	private: System::Void CbShow_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (CbShow->Checked) {
			mTbPassw->PasswordChar = '\0'; // Показати пароль
		}
		else {
			mTbPassw->PasswordChar = '*'; // Приховати пароль
		}
	}

		   System::Windows::Forms::ToolTip^ toolTip1;

	private: System::Void CbFuture_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		System::Windows::Forms::ToolTip^ toolTip1 = gcnew System::Windows::Forms::ToolTip();
		toolTip1->SetToolTip(CbFuture, "Натисніть щоб переглянути свої майбутні записи до лікаря");
	}

	private: System::Void CbLast_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		System::Windows::Forms::ToolTip^ toolTip1 = gcnew System::Windows::Forms::ToolTip();
		toolTip1->SetToolTip(CbLast, "Натисніть щоб переглянути свої минулі записи до лікаря");
	}
	private: System::Void  bSingUp_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		System::Windows::Forms::ToolTip^ toolTip1 = gcnew System::Windows::Forms::ToolTip();
		toolTip1->SetToolTip(bSingUp, "Натисніть щоб записатися до лікаря");
	}
	private: System::Void monthCalendar_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		System::Windows::Forms::ToolTip^ toolTip1 = gcnew System::Windows::Forms::ToolTip();
		toolTip1->SetToolTip(monthCalendar, "Календар для відображення поточного дня");
	}

	private: System::Void LogForm_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent) {
		// Текст допомоги або пояснення для форми LogForm
		String^ helpText = "Ця форма дозволяє користувачам переглядати свої дані та дані сімейного лікаря, записуватися до лікаря та переглядати історію записів.\n";
		helpText += "Щоб переглянути свої майбутні записи, виберіть відповідний пункт у списку 'Майбутні'.\n";
		helpText += "Щоб переглянути свої минулі записи, виберіть відповідний пункт у списку 'Минулі'.\n";
		helpText += "Щоб записатися до лікаря, натисніть кнопку 'Записатися до лікаря'.\n";
		helpText += "Ви також можете переглядати інформацію за допомогою календаря та ввести свої особисті дані.\n";

		// Показати MessageBox із текстом допомоги
		MessageBox::Show(helpText, "Довідка", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void mTbPassw_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		System::Windows::Forms::ToolTip^ toolTip1 = gcnew System::Windows::Forms::ToolTip();
		toolTip1->SetToolTip(mTbPassw, "Введіть тут свій пароль ");
	}

	private: System::Void LogForm_Load(System::Object^ sender, System::EventArgs^ e) {
		std::vector<Doctor> doctors = read_doctortable();
		std::vector<Visit> visits = read_visittable();
		std::vector<User> users = read_usertable();
		//Чистка визитов
		System::DateTime currentDate = System::DateTime::Now;
		//Ініціалізація UserID.
		for (const User& User : users)
		{
			if (ph == User.userPhone)
			{
				UserID = User.userID;
			}
		}

		System::String^ name = ParseToStringorSTDSTRING(us.userName);
		System::String^ surname = ParseToStringorSTDSTRING(us.userSurname);
		System::String^ middlename = ParseToStringorSTDSTRING(us.userMiddleName);
		System::String^ phone = ParseToStringorSTDSTRING(us.userPhone);

		//System::DateTime dateTime(us.userBirthDate.tm_year + 1900, us.userBirthDate.tm_mon + 1, us.userBirthDate.tm_mday, us.userBirthDate.tm_hour, us.userBirthDate.tm_min, us.userBirthDate.tm_sec);

		TbName->Text = name;
		TbSurn->Text = surname;
		TbPatr->Text = middlename;
		TbTel->Text = phone;
		mTbPassw->Text = pass;
		/*	dateBith->Value = dateTime;*/

			//Ініціалізація ComboBox майбутні записи
		for (Visit& Visit : visits)
		{
			System::DateTime visitDateTime = ConvertTmToDateTime(Visit.visitDate);

			/*	if (visitDateTime < currentDate)
				{
					Visit.visitStatus = 2;
					Visit.write_visitrow();
				}*/
				//Якщо 1 то це майбутній запис, + перевірка айді користувача
			if (Visit.visitStatus == 1 && Visit.clientID == UserID)
			{
				System::DateTime visitTime(Visit.visitDate.tm_year, Visit.visitDate.tm_mon, Visit.visitDate.tm_mday, Visit.visitTime.tm_hour, Visit.visitTime.tm_min, Visit.visitTime.tm_sec);
				System::String^ dateTimeString = visitTime.ToString("yyyy-MM-dd HH:mm:ss");
				std::string spec;
				for (Doctor& Doctor : doctors)
				{
					if (Doctor.docID == Visit.doctorID)
					{
						spec = Doctor.docSpeciality;
					}
				}

				System::String^ fullInfoString = gcnew System::String(dateTimeString + " - " + ParseToStringorSTDSTRING(spec));

				CbFuture->Items->Add(gcnew System::String(fullInfoString));
			}
		}
	}
	private: System::Void gBFamDoc_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TbName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lShowData_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TbTel_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dateBith_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bCancle_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Object^ selectedItem = CbFuture->SelectedItem;
	}
	};
}
