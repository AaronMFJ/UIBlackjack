#pragma once

namespace UIBlackjack 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TableForm
	/// </summary>
	public ref class TableForm : public System::Windows::Forms::Form
	{
	public:
		TableForm(void)
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
		~TableForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  dealerLabel;
	private: System::Windows::Forms::Label^  player1Label;
	private: System::Windows::Forms::PictureBox^  cardBack;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TableForm::typeid));
			this->dealerLabel = (gcnew System::Windows::Forms::Label());
			this->player1Label = (gcnew System::Windows::Forms::Label());
			this->cardBack = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cardBack))->BeginInit();
			this->SuspendLayout();
			// 
			// dealerLabel
			// 
			this->dealerLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->dealerLabel->AutoSize = true;
			this->dealerLabel->BackColor = System::Drawing::Color::ForestGreen;
			this->dealerLabel->Font = (gcnew System::Drawing::Font(L"Broadway", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dealerLabel->Location = System::Drawing::Point(331, 89);
			this->dealerLabel->Name = L"dealerLabel";
			this->dealerLabel->Size = System::Drawing::Size(115, 32);
			this->dealerLabel->TabIndex = 0;
			this->dealerLabel->Text = L"Dealer";
			this->dealerLabel->Click += gcnew System::EventHandler(this, &TableForm::label1_Click);
			// 
			// player1Label
			// 
			this->player1Label->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->player1Label->AutoSize = true;
			this->player1Label->BackColor = System::Drawing::Color::ForestGreen;
			this->player1Label->Font = (gcnew System::Drawing::Font(L"Broadway", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->player1Label->Location = System::Drawing::Point(317, 374);
			this->player1Label->Name = L"player1Label";
			this->player1Label->Size = System::Drawing::Size(140, 32);
			this->player1Label->TabIndex = 1;
			this->player1Label->Text = L"Player 1";
			// 
			// cardBack
			// 
			this->cardBack->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cardBack.BackgroundImage")));
			this->cardBack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->cardBack->Location = System::Drawing::Point(213, 99);
			this->cardBack->Name = L"cardBack";
			this->cardBack->Size = System::Drawing::Size(65, 90);
			this->cardBack->TabIndex = 2;
			this->cardBack->TabStop = false;
			// 
			// TableForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(782, 553);
			this->Controls->Add(this->cardBack);
			this->Controls->Add(this->player1Label);
			this->Controls->Add(this->dealerLabel);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->DoubleBuffered = true;
			this->Name = L"TableForm";
			this->Text = L"UIBlackjack";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cardBack))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	
	}
	};
}
