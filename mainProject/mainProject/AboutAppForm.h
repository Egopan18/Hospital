#pragma once

namespace mainProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AboutAppForm
	/// </summary>
	public ref class AboutAppForm : public System::Windows::Forms::Form
	{
	public:
		AboutAppForm(void)
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
		~AboutAppForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ rTbAbout;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ linfo;
	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AboutAppForm::typeid));
			this->rTbAbout = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->linfo = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// rTbAbout
			// 
			this->rTbAbout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rTbAbout->ForeColor = System::Drawing::SystemColors::WindowText;
			this->rTbAbout->Location = System::Drawing::Point(12, 12);
			this->rTbAbout->Name = L"rTbAbout";
			this->rTbAbout->Size = System::Drawing::Size(660, 573);
			this->rTbAbout->TabIndex = 0;
			this->rTbAbout->Text = resources->GetString(L"rTbAbout.Text");
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::OrangeRed;
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(301, 601);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(59, 32);
			this->button1->TabIndex = 1;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AboutAppForm::button1_Click);
			// 
			// linfo
			// 
			this->linfo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->linfo->AutoSize = true;
			this->linfo->Location = System::Drawing::Point(12, 639);
			this->linfo->Name = L"linfo";
			this->linfo->Size = System::Drawing::Size(256, 13);
			this->linfo->TabIndex = 31;
			this->linfo->Text = L"��� �������� ���������� �� ���� - �������� F1";
			// 
			// AboutAppForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 661);
			this->Controls->Add(this->linfo);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->rTbAbout);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"AboutAppForm";
			this->Text = L"AboutAppForm";
			this->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &AboutAppForm::AboutAppForm_HelpRequested);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
	private: System::Void AboutAppForm_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent) {

		// ����� �������� ��� ��������� ��� ����� AboutAppForm
		String^ helpText = "�� ����� ������ ���������� ��� �������. �� ������ �������� ����� ��� ��������������� �� ���� ����� ������� ���.\n";
		helpText += "��� �������� ����� ����, �������� ������ 'OK' � ����� ������ �����.";

		// �������� MessageBox �� ������� ��������
		MessageBox::Show(helpText, "������", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
	};
}
