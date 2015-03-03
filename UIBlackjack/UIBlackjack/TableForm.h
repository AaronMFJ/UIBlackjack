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
	private: System::Windows::Forms::TextBox^  player1TextBox;

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
			this->player1TextBox = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cardBack))->BeginInit();
			this->SuspendLayout();
			// 
			// dealerLabel
			// 
			this->dealerLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->dealerLabel->AutoSize = true;
			this->dealerLabel->BackColor = System::Drawing::Color::ForestGreen;
			this->dealerLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dealerLabel->Location = System::Drawing::Point(265, 71);
			this->dealerLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->dealerLabel->Name = L"dealerLabel";
			this->dealerLabel->Size = System::Drawing::Size(76, 26);
			this->dealerLabel->TabIndex = 0;
			this->dealerLabel->Text = L"Dealer";
			this->dealerLabel->Click += gcnew System::EventHandler(this, &TableForm::label1_Click);
			// 
			// player1Label
			// 
			this->player1Label->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->player1Label->AutoSize = true;
			this->player1Label->BackColor = System::Drawing::Color::ForestGreen;
			this->player1Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->player1Label->Location = System::Drawing::Point(265, 299);
			this->player1Label->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->player1Label->Name = L"player1Label";
			this->player1Label->Size = System::Drawing::Size(92, 26);
			this->player1Label->TabIndex = 1;
			this->player1Label->Text = L"Player 1";
			// 
			// cardBack
			// 
			this->cardBack->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cardBack.BackgroundImage")));
			this->cardBack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->cardBack->Location = System::Drawing::Point(170, 79);
			this->cardBack->Margin = System::Windows::Forms::Padding(2);
			this->cardBack->Name = L"cardBack";
			this->cardBack->Size = System::Drawing::Size(52, 72);
			this->cardBack->TabIndex = 2;
			this->cardBack->TabStop = false;
			// 
			// player1TextBox
			// 
			this->player1TextBox->Location = System::Drawing::Point(262, 276);
			this->player1TextBox->Name = L"player1TextBox";
			this->player1TextBox->Size = System::Drawing::Size(100, 20);
			this->player1TextBox->TabIndex = 3;
			this->player1TextBox->Text = L"Enter your name";
			this->player1TextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// TableForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(626, 442);
			this->Controls->Add(this->player1TextBox);
			this->Controls->Add(this->cardBack);
			this->Controls->Add(this->player1Label);
			this->Controls->Add(this->dealerLabel);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(2);
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
