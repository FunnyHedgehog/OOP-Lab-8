#pragma once

namespace OOPlab8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Findtour
	/// </summary>
	public ref class Findtour : public System::Windows::Forms::Form
	{
	public:
		Findtour(void)
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
		~Findtour()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// Findtour
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(531, 445);
			this->Name = L"Findtour";
			this->Text = L"Findtour";
			this->Load += gcnew System::EventHandler(this, &Findtour::Findtour_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Findtour_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
