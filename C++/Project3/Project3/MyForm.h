#pragma once
#include "MyForm1.h"

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pn_title_bar;
	protected:

	protected:

	protected:

	protected:

	private: System::Windows::Forms::Panel^ pn_st_bar;
	protected:

	private: System::Windows::Forms::Panel^ pn_nav_bar;
	private: System::Windows::Forms::Panel^ pn_co_bar;
	private: System::Windows::Forms::Button^ btn_maximize_window;

	private: System::Windows::Forms::Button^ btn_exit;

	private: System::Windows::Forms::Button^ btn_inf;
	private: System::Windows::Forms::Button^ btn_closed;
	private: System::Windows::Forms::Label^ App_Name;






	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btn_home;
	private: System::Windows::Forms::Button^ btn_studnet;

	private: System::Windows::Forms::Button^ btn_books;
	private: System::Windows::Forms::Button^ btn_cat;
	private: System::Windows::Forms::Button^ btn_sell;
	private: System::Windows::Forms::Button^ btn_borrow;
















	private: System::Windows::Forms::Label^ Botton_UserName;
	private: System::Windows::Forms::Label^ Botton_User_Real_Name;
	private: System::Windows::Forms::Label^ Real_What_Name;




	private: System::Windows::Forms::Label^ What_Name;
	private: System::Windows::Forms::Label^ Esh3arat;


	private: System::Windows::Forms::Label^ V_1;

	private: System::Windows::Forms::Panel^ pn_home;
	private: System::Windows::Forms::Panel^ pn_borrow;

	private: System::Windows::Forms::Panel^ pn_sell;
	private: System::Windows::Forms::Panel^ pn_cat;
	private: System::Windows::Forms::Panel^ pn_books;
	private: System::Windows::Forms::Panel^ pn_student;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::PictureBox^ pictureBox4;












private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::PictureBox^ pictureBox8;
private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::Button^ btn_min;
private: System::Windows::Forms::Button^ btn_col;
private: System::Windows::Forms::Panel^ pn_info;

private: System::Windows::Forms::Label^ Admin;
private: System::Windows::Forms::Label^ UserName;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::Panel^ panel19;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
private: System::Windows::Forms::Panel^ panel11;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::PictureBox^ pictureBox10;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Panel^ panel12;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::PictureBox^ pictureBox11;
private: System::Windows::Forms::Panel^ panel13;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::PictureBox^ pictureBox12;
private: System::Windows::Forms::Panel^ panel14;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::PictureBox^ pictureBox13;
private: System::Windows::Forms::Panel^ panel15;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::PictureBox^ pictureBox14;
private: System::Windows::Forms::Panel^ panel16;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::PictureBox^ pictureBox15;
private: System::Windows::Forms::Panel^ panel17;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::PictureBox^ pictureBox16;
private: System::Windows::Forms::Panel^ panel18;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::PictureBox^ pictureBox17;






































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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->pn_title_bar = (gcnew System::Windows::Forms::Panel());
            this->btn_min = (gcnew System::Windows::Forms::Button());
            this->App_Name = (gcnew System::Windows::Forms::Label());
            this->btn_closed = (gcnew System::Windows::Forms::Button());
            this->btn_inf = (gcnew System::Windows::Forms::Button());
            this->btn_maximize_window = (gcnew System::Windows::Forms::Button());
            this->btn_exit = (gcnew System::Windows::Forms::Button());
            this->pn_st_bar = (gcnew System::Windows::Forms::Panel());
            this->Esh3arat = (gcnew System::Windows::Forms::Label());
            this->V_1 = (gcnew System::Windows::Forms::Label());
            this->Real_What_Name = (gcnew System::Windows::Forms::Label());
            this->What_Name = (gcnew System::Windows::Forms::Label());
            this->Botton_User_Real_Name = (gcnew System::Windows::Forms::Label());
            this->Botton_UserName = (gcnew System::Windows::Forms::Label());
            this->pn_nav_bar = (gcnew System::Windows::Forms::Panel());
            this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->btn_home = (gcnew System::Windows::Forms::Button());
            this->btn_studnet = (gcnew System::Windows::Forms::Button());
            this->btn_books = (gcnew System::Windows::Forms::Button());
            this->btn_cat = (gcnew System::Windows::Forms::Button());
            this->btn_sell = (gcnew System::Windows::Forms::Button());
            this->btn_borrow = (gcnew System::Windows::Forms::Button());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->pn_info = (gcnew System::Windows::Forms::Panel());
            this->Admin = (gcnew System::Windows::Forms::Label());
            this->UserName = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->btn_col = (gcnew System::Windows::Forms::Button());
            this->pn_co_bar = (gcnew System::Windows::Forms::Panel());
            this->pn_home = (gcnew System::Windows::Forms::Panel());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->panel7 = (gcnew System::Windows::Forms::Panel());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
            this->panel8 = (gcnew System::Windows::Forms::Panel());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
            this->panel9 = (gcnew System::Windows::Forms::Panel());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
            this->panel10 = (gcnew System::Windows::Forms::Panel());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
            this->pn_borrow = (gcnew System::Windows::Forms::Panel());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->pn_sell = (gcnew System::Windows::Forms::Panel());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->pn_cat = (gcnew System::Windows::Forms::Panel());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->pn_books = (gcnew System::Windows::Forms::Panel());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->pn_student = (gcnew System::Windows::Forms::Panel());
            this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->panel11 = (gcnew System::Windows::Forms::Panel());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
            this->panel19 = (gcnew System::Windows::Forms::Panel());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->panel12 = (gcnew System::Windows::Forms::Panel());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
            this->panel13 = (gcnew System::Windows::Forms::Panel());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
            this->panel14 = (gcnew System::Windows::Forms::Panel());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
            this->panel15 = (gcnew System::Windows::Forms::Panel());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->label39 = (gcnew System::Windows::Forms::Label());
            this->label40 = (gcnew System::Windows::Forms::Label());
            this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
            this->panel16 = (gcnew System::Windows::Forms::Panel());
            this->label41 = (gcnew System::Windows::Forms::Label());
            this->label42 = (gcnew System::Windows::Forms::Label());
            this->label43 = (gcnew System::Windows::Forms::Label());
            this->label44 = (gcnew System::Windows::Forms::Label());
            this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
            this->panel17 = (gcnew System::Windows::Forms::Panel());
            this->label45 = (gcnew System::Windows::Forms::Label());
            this->label46 = (gcnew System::Windows::Forms::Label());
            this->label47 = (gcnew System::Windows::Forms::Label());
            this->label48 = (gcnew System::Windows::Forms::Label());
            this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
            this->panel18 = (gcnew System::Windows::Forms::Panel());
            this->label49 = (gcnew System::Windows::Forms::Label());
            this->label50 = (gcnew System::Windows::Forms::Label());
            this->label51 = (gcnew System::Windows::Forms::Label());
            this->label52 = (gcnew System::Windows::Forms::Label());
            this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
            this->pn_title_bar->SuspendLayout();
            this->pn_st_bar->SuspendLayout();
            this->pn_nav_bar->SuspendLayout();
            this->flowLayoutPanel1->SuspendLayout();
            this->panel1->SuspendLayout();
            this->pn_info->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->pn_co_bar->SuspendLayout();
            this->pn_home->SuspendLayout();
            this->panel2->SuspendLayout();
            this->flowLayoutPanel2->SuspendLayout();
            this->panel3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->panel4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            this->panel5->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            this->panel6->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            this->panel7->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
            this->panel8->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
            this->panel9->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
            this->panel10->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
            this->pn_borrow->SuspendLayout();
            this->pn_sell->SuspendLayout();
            this->pn_cat->SuspendLayout();
            this->pn_books->SuspendLayout();
            this->pn_student->SuspendLayout();
            this->flowLayoutPanel3->SuspendLayout();
            this->panel11->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
            this->panel19->SuspendLayout();
            this->panel12->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
            this->panel13->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
            this->panel14->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
            this->panel15->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
            this->panel16->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
            this->panel17->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
            this->panel18->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
            this->SuspendLayout();
            // 
            // pn_title_bar
            // 
            this->pn_title_bar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->pn_title_bar->Controls->Add(this->btn_min);
            this->pn_title_bar->Controls->Add(this->App_Name);
            this->pn_title_bar->Controls->Add(this->btn_closed);
            this->pn_title_bar->Controls->Add(this->btn_inf);
            this->pn_title_bar->Controls->Add(this->btn_maximize_window);
            this->pn_title_bar->Controls->Add(this->btn_exit);
            this->pn_title_bar->Dock = System::Windows::Forms::DockStyle::Top;
            this->pn_title_bar->Location = System::Drawing::Point(0, 0);
            this->pn_title_bar->Name = L"pn_title_bar";
            this->pn_title_bar->Size = System::Drawing::Size(808, 60);
            this->pn_title_bar->TabIndex = 0;
            this->pn_title_bar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pn_title_bar_Paint);
            // 
            // btn_min
            // 
            this->btn_min->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_min.BackgroundImage")));
            this->btn_min->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->btn_min->FlatAppearance->BorderSize = 0;
            this->btn_min->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_min->Location = System::Drawing::Point(118, 3);
            this->btn_min->Name = L"btn_min";
            this->btn_min->Size = System::Drawing::Size(71, 47);
            this->btn_min->TabIndex = 2;
            this->btn_min->UseVisualStyleBackColor = true;
            this->btn_min->Click += gcnew System::EventHandler(this, &MyForm::btn_min_Click);
            // 
            // App_Name
            // 
            this->App_Name->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->App_Name->AutoSize = true;
            this->App_Name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->App_Name->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->App_Name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->App_Name->Location = System::Drawing::Point(353, 22);
            this->App_Name->Name = L"App_Name";
            this->App_Name->Size = System::Drawing::Size(102, 28);
            this->App_Name->TabIndex = 1;
            this->App_Name->Text = L"ãÏíÑ ÇáãßÊÈÉ ";
            this->App_Name->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
            // 
            // btn_closed
            // 
            this->btn_closed->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->btn_closed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_closed.BackgroundImage")));
            this->btn_closed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->btn_closed->FlatAppearance->BorderSize = 0;
            this->btn_closed->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_closed->Location = System::Drawing::Point(661, 4);
            this->btn_closed->Name = L"btn_closed";
            this->btn_closed->Size = System::Drawing::Size(69, 46);
            this->btn_closed->TabIndex = 0;
            this->btn_closed->UseVisualStyleBackColor = true;
            this->btn_closed->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // btn_inf
            // 
            this->btn_inf->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->btn_inf->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_inf.BackgroundImage")));
            this->btn_inf->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->btn_inf->FlatAppearance->BorderSize = 0;
            this->btn_inf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_inf->Location = System::Drawing::Point(736, 4);
            this->btn_inf->Name = L"btn_inf";
            this->btn_inf->Size = System::Drawing::Size(69, 46);
            this->btn_inf->TabIndex = 0;
            this->btn_inf->UseVisualStyleBackColor = true;
            this->btn_inf->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // btn_maximize_window
            // 
            this->btn_maximize_window->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_maximize_window.BackgroundImage")));
            this->btn_maximize_window->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->btn_maximize_window->FlatAppearance->BorderSize = 0;
            this->btn_maximize_window->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_maximize_window->Location = System::Drawing::Point(70, 6);
            this->btn_maximize_window->Name = L"btn_maximize_window";
            this->btn_maximize_window->Size = System::Drawing::Size(54, 42);
            this->btn_maximize_window->TabIndex = 0;
            this->btn_maximize_window->UseVisualStyleBackColor = true;
            this->btn_maximize_window->Click += gcnew System::EventHandler(this, &MyForm::btn_maximize_window_Click);
            // 
            // btn_exit
            // 
            this->btn_exit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_exit.BackgroundImage")));
            this->btn_exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->btn_exit->FlatAppearance->BorderSize = 0;
            this->btn_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_exit->Location = System::Drawing::Point(3, 6);
            this->btn_exit->Name = L"btn_exit";
            this->btn_exit->Size = System::Drawing::Size(61, 42);
            this->btn_exit->TabIndex = 0;
            this->btn_exit->UseVisualStyleBackColor = true;
            this->btn_exit->Click += gcnew System::EventHandler(this, &MyForm::btn_exit_Click);
            // 
            // pn_st_bar
            // 
            this->pn_st_bar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->pn_st_bar->Controls->Add(this->Esh3arat);
            this->pn_st_bar->Controls->Add(this->V_1);
            this->pn_st_bar->Controls->Add(this->Real_What_Name);
            this->pn_st_bar->Controls->Add(this->What_Name);
            this->pn_st_bar->Controls->Add(this->Botton_User_Real_Name);
            this->pn_st_bar->Controls->Add(this->Botton_UserName);
            this->pn_st_bar->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->pn_st_bar->Location = System::Drawing::Point(0, 554);
            this->pn_st_bar->Name = L"pn_st_bar";
            this->pn_st_bar->Size = System::Drawing::Size(808, 48);
            this->pn_st_bar->TabIndex = 1;
            this->pn_st_bar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pn_st_bar_Paint);
            // 
            // Esh3arat
            // 
            this->Esh3arat->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->Esh3arat->AutoSize = true;
            this->Esh3arat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->Esh3arat->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->Esh3arat->ForeColor = System::Drawing::Color::MintCream;
            this->Esh3arat->Location = System::Drawing::Point(108, 14);
            this->Esh3arat->Name = L"Esh3arat";
            this->Esh3arat->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->Esh3arat->Size = System::Drawing::Size(212, 28);
            this->Esh3arat->TabIndex = 1;
            this->Esh3arat->Text = L"åäÇ ÊÚÑÖ ÇÔÚÇÑÇÊ ÇáÈÑäÇãÌ";
            this->Esh3arat->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
            // 
            // V_1
            // 
            this->V_1->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->V_1->AutoSize = true;
            this->V_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->V_1->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->V_1->ForeColor = System::Drawing::Color::Red;
            this->V_1->Location = System::Drawing::Point(12, 14);
            this->V_1->Name = L"V_1";
            this->V_1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->V_1->Size = System::Drawing::Size(58, 18);
            this->V_1->TabIndex = 1;
            this->V_1->Text = L"V 1.0.0";
            this->V_1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
            // 
            // Real_What_Name
            // 
            this->Real_What_Name->Anchor = System::Windows::Forms::AnchorStyles::Right;
            this->Real_What_Name->AutoSize = true;
            this->Real_What_Name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->Real_What_Name->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->Real_What_Name->ForeColor = System::Drawing::Color::Teal;
            this->Real_What_Name->Location = System::Drawing::Point(405, 14);
            this->Real_What_Name->Name = L"Real_What_Name";
            this->Real_What_Name->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->Real_What_Name->Size = System::Drawing::Size(43, 28);
            this->Real_What_Name->TabIndex = 1;
            this->Real_What_Name->Text = L"ãÏíÑ";
            this->Real_What_Name->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
            // 
            // What_Name
            // 
            this->What_Name->Anchor = System::Windows::Forms::AnchorStyles::Right;
            this->What_Name->AutoSize = true;
            this->What_Name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->What_Name->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->What_Name->ForeColor = System::Drawing::Color::DarkOrange;
            this->What_Name->Location = System::Drawing::Point(454, 14);
            this->What_Name->Name = L"What_Name";
            this->What_Name->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->What_Name->Size = System::Drawing::Size(88, 28);
            this->What_Name->TabIndex = 1;
            this->What_Name->Text = L"ÇáÕáÇÍíÉ :";
            this->What_Name->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
            // 
            // Botton_User_Real_Name
            // 
            this->Botton_User_Real_Name->Anchor = System::Windows::Forms::AnchorStyles::Right;
            this->Botton_User_Real_Name->AutoSize = true;
            this->Botton_User_Real_Name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->Botton_User_Real_Name->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->Botton_User_Real_Name->ForeColor = System::Drawing::Color::Teal;
            this->Botton_User_Real_Name->Location = System::Drawing::Point(556, 14);
            this->Botton_User_Real_Name->Name = L"Botton_User_Real_Name";
            this->Botton_User_Real_Name->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->Botton_User_Real_Name->Size = System::Drawing::Size(115, 28);
            this->Botton_User_Real_Name->TabIndex = 1;
            this->Botton_User_Real_Name->Text = L"Úáí ÇÈæ ÇáØíÈ";
            this->Botton_User_Real_Name->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
            // 
            // Botton_UserName
            // 
            this->Botton_UserName->Anchor = System::Windows::Forms::AnchorStyles::Right;
            this->Botton_UserName->AutoSize = true;
            this->Botton_UserName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->Botton_UserName->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->Botton_UserName->ForeColor = System::Drawing::Color::DarkOrange;
            this->Botton_UserName->Location = System::Drawing::Point(677, 14);
            this->Botton_UserName->Name = L"Botton_UserName";
            this->Botton_UserName->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->Botton_UserName->Size = System::Drawing::Size(119, 28);
            this->Botton_UserName->TabIndex = 1;
            this->Botton_UserName->Text = L" ÇÓã ÇáãÓÊÎÏã :";
            this->Botton_UserName->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
            // 
            // pn_nav_bar
            // 
            this->pn_nav_bar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->pn_nav_bar->Controls->Add(this->flowLayoutPanel1);
            this->pn_nav_bar->Controls->Add(this->panel1);
            this->pn_nav_bar->Dock = System::Windows::Forms::DockStyle::Right;
            this->pn_nav_bar->Location = System::Drawing::Point(608, 60);
            this->pn_nav_bar->Name = L"pn_nav_bar";
            this->pn_nav_bar->Size = System::Drawing::Size(200, 494);
            this->pn_nav_bar->TabIndex = 2;
            this->pn_nav_bar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pn_nav_bar_Paint);
            // 
            // flowLayoutPanel1
            // 
            this->flowLayoutPanel1->Controls->Add(this->btn_home);
            this->flowLayoutPanel1->Controls->Add(this->btn_studnet);
            this->flowLayoutPanel1->Controls->Add(this->btn_books);
            this->flowLayoutPanel1->Controls->Add(this->btn_cat);
            this->flowLayoutPanel1->Controls->Add(this->btn_sell);
            this->flowLayoutPanel1->Controls->Add(this->btn_borrow);
            this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
            this->flowLayoutPanel1->Location = System::Drawing::Point(0, 125);
            this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
            this->flowLayoutPanel1->Size = System::Drawing::Size(200, 369);
            this->flowLayoutPanel1->TabIndex = 1;
            this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::flowLayoutPanel1_Paint);
            // 
            // btn_home
            // 
            this->btn_home->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->btn_home->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_home->FlatAppearance->BorderSize = 0;
            this->btn_home->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_home->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btn_home->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btn_home->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_home.Image")));
            this->btn_home->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->btn_home->Location = System::Drawing::Point(3, 10);
            this->btn_home->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->btn_home->Name = L"btn_home";
            this->btn_home->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->btn_home->Size = System::Drawing::Size(197, 46);
            this->btn_home->TabIndex = 0;
            this->btn_home->Text = L"ÇáÑÆíÓíÉ";
            this->btn_home->UseVisualStyleBackColor = false;
            this->btn_home->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // btn_studnet
            // 
            this->btn_studnet->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->btn_studnet->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_studnet->FlatAppearance->BorderSize = 0;
            this->btn_studnet->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_studnet->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btn_studnet->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btn_studnet->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_studnet.Image")));
            this->btn_studnet->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->btn_studnet->Location = System::Drawing::Point(3, 69);
            this->btn_studnet->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->btn_studnet->Name = L"btn_studnet";
            this->btn_studnet->Size = System::Drawing::Size(197, 46);
            this->btn_studnet->TabIndex = 1;
            this->btn_studnet->Text = L"ÇáØáÇÈ";
            this->btn_studnet->UseVisualStyleBackColor = false;
            this->btn_studnet->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
            // 
            // btn_books
            // 
            this->btn_books->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->btn_books->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_books->FlatAppearance->BorderSize = 0;
            this->btn_books->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_books->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btn_books->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btn_books->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_books.Image")));
            this->btn_books->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->btn_books->Location = System::Drawing::Point(3, 128);
            this->btn_books->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->btn_books->Name = L"btn_books";
            this->btn_books->Size = System::Drawing::Size(197, 46);
            this->btn_books->TabIndex = 2;
            this->btn_books->Text = L"ÇáßÊÈ";
            this->btn_books->UseVisualStyleBackColor = false;
            this->btn_books->Click += gcnew System::EventHandler(this, &MyForm::btn_books_Click);
            // 
            // btn_cat
            // 
            this->btn_cat->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->btn_cat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_cat->FlatAppearance->BorderSize = 0;
            this->btn_cat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_cat->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btn_cat->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btn_cat->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_cat.Image")));
            this->btn_cat->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->btn_cat->Location = System::Drawing::Point(3, 187);
            this->btn_cat->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->btn_cat->Name = L"btn_cat";
            this->btn_cat->Size = System::Drawing::Size(197, 46);
            this->btn_cat->TabIndex = 3;
            this->btn_cat->Text = L"ÇáÇÕäÇÝ";
            this->btn_cat->UseVisualStyleBackColor = false;
            this->btn_cat->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
            // 
            // btn_sell
            // 
            this->btn_sell->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->btn_sell->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_sell->FlatAppearance->BorderSize = 0;
            this->btn_sell->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_sell->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btn_sell->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btn_sell->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_sell.Image")));
            this->btn_sell->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->btn_sell->Location = System::Drawing::Point(3, 246);
            this->btn_sell->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->btn_sell->Name = L"btn_sell";
            this->btn_sell->Size = System::Drawing::Size(197, 46);
            this->btn_sell->TabIndex = 4;
            this->btn_sell->Text = L"ÇáÈíÚ";
            this->btn_sell->UseVisualStyleBackColor = false;
            this->btn_sell->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
            // 
            // btn_borrow
            // 
            this->btn_borrow->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->btn_borrow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_borrow->FlatAppearance->BorderSize = 0;
            this->btn_borrow->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_borrow->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btn_borrow->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btn_borrow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_borrow.Image")));
            this->btn_borrow->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->btn_borrow->Location = System::Drawing::Point(3, 305);
            this->btn_borrow->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->btn_borrow->Name = L"btn_borrow";
            this->btn_borrow->Size = System::Drawing::Size(197, 46);
            this->btn_borrow->TabIndex = 5;
            this->btn_borrow->Text = L"ÇáÇÓÊÚÇÑÉ";
            this->btn_borrow->UseVisualStyleBackColor = false;
            this->btn_borrow->Click += gcnew System::EventHandler(this, &MyForm::btn_borrow_Click);
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->pn_info);
            this->panel1->Controls->Add(this->btn_col);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel1->Location = System::Drawing::Point(0, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(200, 125);
            this->panel1->TabIndex = 0;
            this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
            // 
            // pn_info
            // 
            this->pn_info->Controls->Add(this->Admin);
            this->pn_info->Controls->Add(this->UserName);
            this->pn_info->Controls->Add(this->pictureBox1);
            this->pn_info->Location = System::Drawing::Point(50, 3);
            this->pn_info->Name = L"pn_info";
            this->pn_info->Size = System::Drawing::Size(150, 119);
            this->pn_info->TabIndex = 3;
            this->pn_info->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pn_info_Paint);
            // 
            // Admin
            // 
            this->Admin->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->Admin->AutoSize = true;
            this->Admin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->Admin->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->Admin->ForeColor = System::Drawing::Color::Teal;
            this->Admin->Location = System::Drawing::Point(3, 97);
            this->Admin->Name = L"Admin";
            this->Admin->Size = System::Drawing::Size(32, 18);
            this->Admin->TabIndex = 2;
            this->Admin->Text = L"ãÏíÑ";
            this->Admin->Click += gcnew System::EventHandler(this, &MyForm::Admin_Click);
            // 
            // UserName
            // 
            this->UserName->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->UserName->AutoSize = true;
            this->UserName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->UserName->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->UserName->ForeColor = System::Drawing::Color::Orange;
            this->UserName->Location = System::Drawing::Point(41, 88);
            this->UserName->Name = L"UserName";
            this->UserName->Size = System::Drawing::Size(87, 18);
            this->UserName->TabIndex = 3;
            this->UserName->Text = L"Úáí ÃÈæ ÇáØíÈ";
            this->UserName->Click += gcnew System::EventHandler(this, &MyForm::UserName_Click);
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(32, 3);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(106, 82);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 4;
            this->pictureBox1->TabStop = false;
            this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
            // 
            // btn_col
            // 
            this->btn_col->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_col.BackgroundImage")));
            this->btn_col->FlatAppearance->BorderSize = 0;
            this->btn_col->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_col->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
            this->btn_col->Location = System::Drawing::Point(6, 6);
            this->btn_col->Name = L"btn_col";
            this->btn_col->Size = System::Drawing::Size(38, 40);
            this->btn_col->TabIndex = 2;
            this->btn_col->UseVisualStyleBackColor = true;
            this->btn_col->Click += gcnew System::EventHandler(this, &MyForm::btn_col_Click_1);
            // 
            // pn_co_bar
            // 
            this->pn_co_bar->AllowDrop = true;
            this->pn_co_bar->Controls->Add(this->pn_student);
            this->pn_co_bar->Controls->Add(this->pn_home);
            this->pn_co_bar->Controls->Add(this->pn_borrow);
            this->pn_co_bar->Controls->Add(this->pn_sell);
            this->pn_co_bar->Controls->Add(this->pn_cat);
            this->pn_co_bar->Controls->Add(this->pn_books);
            this->pn_co_bar->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pn_co_bar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->pn_co_bar->Location = System::Drawing::Point(0, 60);
            this->pn_co_bar->Name = L"pn_co_bar";
            this->pn_co_bar->Size = System::Drawing::Size(608, 494);
            this->pn_co_bar->TabIndex = 3;
            this->pn_co_bar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pn_co_bar_Paint);
            // 
            // pn_home
            // 
            this->pn_home->Controls->Add(this->panel2);
            this->pn_home->Controls->Add(this->flowLayoutPanel2);
            this->pn_home->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pn_home->Location = System::Drawing::Point(0, 0);
            this->pn_home->Name = L"pn_home";
            this->pn_home->Size = System::Drawing::Size(608, 494);
            this->pn_home->TabIndex = 0;
            this->pn_home->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pn_home_Paint);
            // 
            // panel2
            // 
            this->panel2->Controls->Add(this->button5);
            this->panel2->Controls->Add(this->button4);
            this->panel2->Controls->Add(this->button3);
            this->panel2->Controls->Add(this->button2);
            this->panel2->Controls->Add(this->button1);
            this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel2->Location = System::Drawing::Point(0, 390);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(608, 104);
            this->panel2->TabIndex = 3;
            this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
            // 
            // button5
            // 
            this->button5->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button5->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
            this->button5->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button5->Location = System::Drawing::Point(20, 10);
            this->button5->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(109, 86);
            this->button5->TabIndex = 3;
            this->button5->Text = L"ÇÖÇÝÉ";
            this->button5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button5->UseVisualStyleBackColor = false;
            this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
            // 
            // button4
            // 
            this->button4->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button4->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
            this->button4->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button4->Location = System::Drawing::Point(135, 10);
            this->button4->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(109, 86);
            this->button4->TabIndex = 3;
            this->button4->Text = L"ÇÖÇÝÉ";
            this->button4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
            // 
            // button3
            // 
            this->button3->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
            this->button3->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button3->Location = System::Drawing::Point(250, 10);
            this->button3->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(109, 86);
            this->button3->TabIndex = 2;
            this->button3->Text = L"ÇÖÇÝÉ";
            this->button3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
            // 
            // button2
            // 
            this->button2->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
            this->button2->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button2->Location = System::Drawing::Point(365, 10);
            this->button2->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(109, 86);
            this->button2->TabIndex = 1;
            this->button2->Text = L"ÇÖÇÝÉ";
            this->button2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
            // 
            // button1
            // 
            this->button1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
            this->button1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button1->Location = System::Drawing::Point(480, 10);
            this->button1->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(109, 86);
            this->button1->TabIndex = 1;
            this->button1->Text = L"ÇÖÇÝÉ";
            this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
            // 
            // flowLayoutPanel2
            // 
            this->flowLayoutPanel2->Controls->Add(this->panel3);
            this->flowLayoutPanel2->Controls->Add(this->panel4);
            this->flowLayoutPanel2->Controls->Add(this->panel5);
            this->flowLayoutPanel2->Controls->Add(this->panel6);
            this->flowLayoutPanel2->Controls->Add(this->panel7);
            this->flowLayoutPanel2->Controls->Add(this->panel8);
            this->flowLayoutPanel2->Controls->Add(this->panel9);
            this->flowLayoutPanel2->Controls->Add(this->panel10);
            this->flowLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Top;
            this->flowLayoutPanel2->Location = System::Drawing::Point(0, 0);
            this->flowLayoutPanel2->Margin = System::Windows::Forms::Padding(3, 10, 10, 10);
            this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
            this->flowLayoutPanel2->Size = System::Drawing::Size(608, 390);
            this->flowLayoutPanel2->TabIndex = 2;
            this->flowLayoutPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::flowLayoutPanel2_Paint);
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel3->Controls->Add(this->label7);
            this->panel3->Controls->Add(this->label1);
            this->panel3->Controls->Add(this->pictureBox2);
            this->panel3->Location = System::Drawing::Point(10, 10);
            this->panel3->Margin = System::Windows::Forms::Padding(10);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(226, 130);
            this->panel3->TabIndex = 0;
            this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
            // 
            // label7
            // 
            this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label7->AutoSize = true;
            this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::Color::Gold;
            this->label7->Location = System::Drawing::Point(6, 3);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(59, 32);
            this->label7->TabIndex = 1;
            this->label7->Text = L"100";
            this->label7->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
            // 
            // label1
            // 
            this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label1->Location = System::Drawing::Point(86, 89);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(92, 28);
            this->label1->TabIndex = 1;
            this->label1->Text = L"ÚÏÏ ÇáØáÇÈ";
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(132, 3);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(83, 69);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox2->TabIndex = 1;
            this->pictureBox2->TabStop = false;
            this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
            // 
            // panel4
            // 
            this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel4->Controls->Add(this->label8);
            this->panel4->Controls->Add(this->label9);
            this->panel4->Controls->Add(this->pictureBox3);
            this->panel4->Location = System::Drawing::Point(256, 10);
            this->panel4->Margin = System::Windows::Forms::Padding(10);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(226, 130);
            this->panel4->TabIndex = 1;
            this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel4_Paint);
            // 
            // label8
            // 
            this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label8->AutoSize = true;
            this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label8->ForeColor = System::Drawing::Color::Gold;
            this->label8->Location = System::Drawing::Point(6, 3);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(59, 32);
            this->label8->TabIndex = 1;
            this->label8->Text = L"100";
            this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
            // 
            // label9
            // 
            this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label9->AutoSize = true;
            this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label9->Location = System::Drawing::Point(86, 89);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(92, 28);
            this->label9->TabIndex = 1;
            this->label9->Text = L"ÚÏÏ ÇáØáÇÈ";
            this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // pictureBox3
            // 
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(132, 3);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(83, 69);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox3->TabIndex = 1;
            this->pictureBox3->TabStop = false;
            this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
            // 
            // panel5
            // 
            this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel5->Controls->Add(this->label10);
            this->panel5->Controls->Add(this->label11);
            this->panel5->Controls->Add(this->pictureBox4);
            this->panel5->Location = System::Drawing::Point(10, 160);
            this->panel5->Margin = System::Windows::Forms::Padding(10);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(226, 130);
            this->panel5->TabIndex = 2;
            this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel5_Paint);
            // 
            // label10
            // 
            this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label10->AutoSize = true;
            this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label10->ForeColor = System::Drawing::Color::Gold;
            this->label10->Location = System::Drawing::Point(6, 3);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(59, 32);
            this->label10->TabIndex = 1;
            this->label10->Text = L"100";
            this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
            // 
            // label11
            // 
            this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label11->AutoSize = true;
            this->label11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label11->Location = System::Drawing::Point(86, 89);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(92, 28);
            this->label11->TabIndex = 1;
            this->label11->Text = L"ÚÏÏ ÇáØáÇÈ";
            this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
            // 
            // pictureBox4
            // 
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(132, 3);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(83, 69);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox4->TabIndex = 1;
            this->pictureBox4->TabStop = false;
            this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
            // 
            // panel6
            // 
            this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel6->Controls->Add(this->label12);
            this->panel6->Controls->Add(this->label13);
            this->panel6->Controls->Add(this->pictureBox5);
            this->panel6->Location = System::Drawing::Point(256, 160);
            this->panel6->Margin = System::Windows::Forms::Padding(10);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(226, 130);
            this->panel6->TabIndex = 2;
            this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel6_Paint);
            // 
            // label12
            // 
            this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label12->AutoSize = true;
            this->label12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label12->ForeColor = System::Drawing::Color::Gold;
            this->label12->Location = System::Drawing::Point(6, 3);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(59, 32);
            this->label12->TabIndex = 1;
            this->label12->Text = L"100";
            this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
            // 
            // label13
            // 
            this->label13->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label13->AutoSize = true;
            this->label13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label13->Location = System::Drawing::Point(86, 89);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(92, 28);
            this->label13->TabIndex = 1;
            this->label13->Text = L"ÚÏÏ ÇáØáÇÈ";
            this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
            // 
            // pictureBox5
            // 
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(132, 3);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(83, 69);
            this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox5->TabIndex = 1;
            this->pictureBox5->TabStop = false;
            this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm::pictureBox5_Click);
            // 
            // panel7
            // 
            this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel7->Controls->Add(this->label14);
            this->panel7->Controls->Add(this->label15);
            this->panel7->Controls->Add(this->pictureBox6);
            this->panel7->Location = System::Drawing::Point(10, 310);
            this->panel7->Margin = System::Windows::Forms::Padding(10);
            this->panel7->Name = L"panel7";
            this->panel7->Size = System::Drawing::Size(226, 130);
            this->panel7->TabIndex = 3;
            this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel7_Paint);
            // 
            // label14
            // 
            this->label14->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label14->AutoSize = true;
            this->label14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label14->Font = (gcnew System::Drawing::Font(L"Arial", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label14->ForeColor = System::Drawing::Color::Gold;
            this->label14->Location = System::Drawing::Point(6, 3);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(59, 32);
            this->label14->TabIndex = 1;
            this->label14->Text = L"100";
            this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
            // 
            // label15
            // 
            this->label15->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label15->AutoSize = true;
            this->label15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label15->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label15->Location = System::Drawing::Point(86, 89);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(92, 28);
            this->label15->TabIndex = 1;
            this->label15->Text = L"ÚÏÏ ÇáØáÇÈ";
            this->label15->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
            // 
            // pictureBox6
            // 
            this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
            this->pictureBox6->Location = System::Drawing::Point(132, 3);
            this->pictureBox6->Name = L"pictureBox6";
            this->pictureBox6->Size = System::Drawing::Size(83, 69);
            this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox6->TabIndex = 1;
            this->pictureBox6->TabStop = false;
            this->pictureBox6->Click += gcnew System::EventHandler(this, &MyForm::pictureBox6_Click);
            // 
            // panel8
            // 
            this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel8->Controls->Add(this->label16);
            this->panel8->Controls->Add(this->label17);
            this->panel8->Controls->Add(this->pictureBox7);
            this->panel8->Location = System::Drawing::Point(256, 310);
            this->panel8->Margin = System::Windows::Forms::Padding(10);
            this->panel8->Name = L"panel8";
            this->panel8->Size = System::Drawing::Size(226, 130);
            this->panel8->TabIndex = 4;
            this->panel8->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel8_Paint);
            // 
            // label16
            // 
            this->label16->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label16->AutoSize = true;
            this->label16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label16->Font = (gcnew System::Drawing::Font(L"Arial", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label16->ForeColor = System::Drawing::Color::Gold;
            this->label16->Location = System::Drawing::Point(6, 3);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(59, 32);
            this->label16->TabIndex = 1;
            this->label16->Text = L"100";
            this->label16->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
            // 
            // label17
            // 
            this->label17->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label17->AutoSize = true;
            this->label17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label17->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label17->Location = System::Drawing::Point(86, 89);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(92, 28);
            this->label17->TabIndex = 1;
            this->label17->Text = L"ÚÏÏ ÇáØáÇÈ";
            this->label17->Click += gcnew System::EventHandler(this, &MyForm::label17_Click);
            // 
            // pictureBox7
            // 
            this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
            this->pictureBox7->Location = System::Drawing::Point(132, 3);
            this->pictureBox7->Name = L"pictureBox7";
            this->pictureBox7->Size = System::Drawing::Size(83, 69);
            this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox7->TabIndex = 1;
            this->pictureBox7->TabStop = false;
            this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click);
            // 
            // panel9
            // 
            this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel9->Controls->Add(this->label18);
            this->panel9->Controls->Add(this->label19);
            this->panel9->Controls->Add(this->pictureBox8);
            this->panel9->Location = System::Drawing::Point(10, 460);
            this->panel9->Margin = System::Windows::Forms::Padding(10);
            this->panel9->Name = L"panel9";
            this->panel9->Size = System::Drawing::Size(226, 130);
            this->panel9->TabIndex = 5;
            this->panel9->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel9_Paint);
            // 
            // label18
            // 
            this->label18->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label18->AutoSize = true;
            this->label18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label18->Font = (gcnew System::Drawing::Font(L"Arial", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label18->ForeColor = System::Drawing::Color::Gold;
            this->label18->Location = System::Drawing::Point(6, 3);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(59, 32);
            this->label18->TabIndex = 1;
            this->label18->Text = L"100";
            this->label18->Click += gcnew System::EventHandler(this, &MyForm::label18_Click);
            // 
            // label19
            // 
            this->label19->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label19->AutoSize = true;
            this->label19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label19->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label19->Location = System::Drawing::Point(86, 89);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(92, 28);
            this->label19->TabIndex = 1;
            this->label19->Text = L"ÚÏÏ ÇáØáÇÈ";
            this->label19->Click += gcnew System::EventHandler(this, &MyForm::label19_Click);
            // 
            // pictureBox8
            // 
            this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
            this->pictureBox8->Location = System::Drawing::Point(132, 3);
            this->pictureBox8->Name = L"pictureBox8";
            this->pictureBox8->Size = System::Drawing::Size(83, 69);
            this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox8->TabIndex = 1;
            this->pictureBox8->TabStop = false;
            this->pictureBox8->Click += gcnew System::EventHandler(this, &MyForm::pictureBox8_Click);
            // 
            // panel10
            // 
            this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel10->Controls->Add(this->label20);
            this->panel10->Controls->Add(this->label21);
            this->panel10->Controls->Add(this->pictureBox9);
            this->panel10->Location = System::Drawing::Point(256, 460);
            this->panel10->Margin = System::Windows::Forms::Padding(10);
            this->panel10->Name = L"panel10";
            this->panel10->Size = System::Drawing::Size(226, 130);
            this->panel10->TabIndex = 6;
            this->panel10->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel10_Paint);
            // 
            // label20
            // 
            this->label20->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label20->AutoSize = true;
            this->label20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label20->Font = (gcnew System::Drawing::Font(L"Arial", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label20->ForeColor = System::Drawing::Color::Gold;
            this->label20->Location = System::Drawing::Point(6, 3);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(59, 32);
            this->label20->TabIndex = 1;
            this->label20->Text = L"100";
            this->label20->Click += gcnew System::EventHandler(this, &MyForm::label20_Click);
            // 
            // label21
            // 
            this->label21->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label21->AutoSize = true;
            this->label21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label21->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label21->Location = System::Drawing::Point(86, 89);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(92, 28);
            this->label21->TabIndex = 1;
            this->label21->Text = L"ÚÏÏ ÇáØáÇÈ";
            this->label21->Click += gcnew System::EventHandler(this, &MyForm::label21_Click);
            // 
            // pictureBox9
            // 
            this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
            this->pictureBox9->Location = System::Drawing::Point(132, 3);
            this->pictureBox9->Name = L"pictureBox9";
            this->pictureBox9->Size = System::Drawing::Size(83, 69);
            this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox9->TabIndex = 1;
            this->pictureBox9->TabStop = false;
            this->pictureBox9->Click += gcnew System::EventHandler(this, &MyForm::pictureBox9_Click);
            // 
            // pn_borrow
            // 
            this->pn_borrow->Controls->Add(this->label2);
            this->pn_borrow->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pn_borrow->Location = System::Drawing::Point(0, 0);
            this->pn_borrow->Name = L"pn_borrow";
            this->pn_borrow->Size = System::Drawing::Size(608, 494);
            this->pn_borrow->TabIndex = 5;
            this->pn_borrow->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pn_borrow_Paint);
            // 
            // label2
            // 
            this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label2->Location = System::Drawing::Point(312, 21);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(81, 28);
            this->label2->TabIndex = 2;
            this->label2->Text = L"ÇáÇÓÊÚÇÑÉ ";
            this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
            // 
            // pn_sell
            // 
            this->pn_sell->Controls->Add(this->label3);
            this->pn_sell->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pn_sell->Location = System::Drawing::Point(0, 0);
            this->pn_sell->Name = L"pn_sell";
            this->pn_sell->Size = System::Drawing::Size(608, 494);
            this->pn_sell->TabIndex = 4;
            this->pn_sell->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pn_sell_Paint);
            // 
            // label3
            // 
            this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label3->Location = System::Drawing::Point(349, 81);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(44, 28);
            this->label3->TabIndex = 2;
            this->label3->Text = L"ÇáÈíÚ";
            this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
            // 
            // pn_cat
            // 
            this->pn_cat->Controls->Add(this->label4);
            this->pn_cat->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pn_cat->Location = System::Drawing::Point(0, 0);
            this->pn_cat->Name = L"pn_cat";
            this->pn_cat->Size = System::Drawing::Size(608, 494);
            this->pn_cat->TabIndex = 3;
            this->pn_cat->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pn_cat_Paint);
            // 
            // label4
            // 
            this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label4->Location = System::Drawing::Point(312, 81);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(72, 28);
            this->label4->TabIndex = 2;
            this->label4->Text = L"ÇáÇÕäÇÝ";
            this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
            // 
            // pn_books
            // 
            this->pn_books->Controls->Add(this->label5);
            this->pn_books->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pn_books->Location = System::Drawing::Point(0, 0);
            this->pn_books->Name = L"pn_books";
            this->pn_books->Size = System::Drawing::Size(608, 494);
            this->pn_books->TabIndex = 2;
            this->pn_books->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pn_books_Paint);
            // 
            // label5
            // 
            this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label5->Location = System::Drawing::Point(292, 53);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(51, 28);
            this->label5->TabIndex = 2;
            this->label5->Text = L"ÇáßÊÈ";
            this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
            // 
            // pn_student
            // 
            this->pn_student->Controls->Add(this->panel19);
            this->pn_student->Controls->Add(this->flowLayoutPanel3);
            this->pn_student->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pn_student->Location = System::Drawing::Point(0, 0);
            this->pn_student->Name = L"pn_student";
            this->pn_student->Size = System::Drawing::Size(608, 494);
            this->pn_student->TabIndex = 1;
            this->pn_student->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pn_student_Paint);
            // 
            // flowLayoutPanel3
            // 
            this->flowLayoutPanel3->Controls->Add(this->panel11);
            this->flowLayoutPanel3->Controls->Add(this->panel12);
            this->flowLayoutPanel3->Controls->Add(this->panel13);
            this->flowLayoutPanel3->Controls->Add(this->panel14);
            this->flowLayoutPanel3->Controls->Add(this->panel15);
            this->flowLayoutPanel3->Controls->Add(this->panel16);
            this->flowLayoutPanel3->Controls->Add(this->panel17);
            this->flowLayoutPanel3->Controls->Add(this->panel18);
            this->flowLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Top;
            this->flowLayoutPanel3->Location = System::Drawing::Point(0, 0);
            this->flowLayoutPanel3->Margin = System::Windows::Forms::Padding(3, 10, 10, 10);
            this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
            this->flowLayoutPanel3->Size = System::Drawing::Size(608, 390);
            this->flowLayoutPanel3->TabIndex = 3;
            // 
            // panel11
            // 
            this->panel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel11->Controls->Add(this->label24);
            this->panel11->Controls->Add(this->label23);
            this->panel11->Controls->Add(this->label6);
            this->panel11->Controls->Add(this->label22);
            this->panel11->Controls->Add(this->pictureBox10);
            this->panel11->Location = System::Drawing::Point(10, 10);
            this->panel11->Margin = System::Windows::Forms::Padding(10);
            this->panel11->Name = L"panel11";
            this->panel11->Size = System::Drawing::Size(269, 171);
            this->panel11->TabIndex = 0;
            // 
            // label6
            // 
            this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::Color::Orange;
            this->label6->Location = System::Drawing::Point(166, 13);
            this->label6->Name = L"label6";
            this->label6->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label6->Size = System::Drawing::Size(92, 28);
            this->label6->TabIndex = 1;
            this->label6->Text = L"ÇáÚãÑ : 19";
            this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
            // 
            // label22
            // 
            this->label22->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label22->AutoSize = true;
            this->label22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label22->Font = (gcnew System::Drawing::Font(L"Arial", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label22->Location = System::Drawing::Point(36, 126);
            this->label22->Name = L"label22";
            this->label22->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label22->Size = System::Drawing::Size(205, 36);
            this->label22->TabIndex = 1;
            this->label22->Text = L"ÇáÇÓã : áÇÑÇ ãÚäÞí";
            this->label22->Click += gcnew System::EventHandler(this, &MyForm::label22_Click);
            // 
            // pictureBox10
            // 
            this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
            this->pictureBox10->Location = System::Drawing::Point(7, 10);
            this->pictureBox10->Name = L"pictureBox10";
            this->pictureBox10->Size = System::Drawing::Size(123, 83);
            this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox10->TabIndex = 1;
            this->pictureBox10->TabStop = false;
            // 
            // panel19
            // 
            this->panel19->Controls->Add(this->button7);
            this->panel19->Controls->Add(this->button8);
            this->panel19->Controls->Add(this->button9);
            this->panel19->Controls->Add(this->button10);
            this->panel19->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel19->Location = System::Drawing::Point(0, 390);
            this->panel19->Name = L"panel19";
            this->panel19->Size = System::Drawing::Size(608, 104);
            this->panel19->TabIndex = 4;
            // 
            // button7
            // 
            this->button7->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button7->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
            this->button7->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button7->Location = System::Drawing::Point(78, 10);
            this->button7->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(109, 91);
            this->button7->TabIndex = 3;
            this->button7->Text = L"ÊÝÇÕíá";
            this->button7->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button7->UseVisualStyleBackColor = false;
            // 
            // button8
            // 
            this->button8->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button8->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->button8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
            this->button8->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button8->Location = System::Drawing::Point(193, 10);
            this->button8->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(109, 91);
            this->button8->TabIndex = 2;
            this->button8->Text = L"ÊÚÏíá";
            this->button8->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button8->UseVisualStyleBackColor = false;
            // 
            // button9
            // 
            this->button9->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button9->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->button9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
            this->button9->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button9->Location = System::Drawing::Point(308, 10);
            this->button9->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(107, 91);
            this->button9->TabIndex = 1;
            this->button9->Text = L"ãÓÍ";
            this->button9->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button9->UseVisualStyleBackColor = false;
            // 
            // button10
            // 
            this->button10->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button10->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->button10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
            this->button10->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button10->Location = System::Drawing::Point(421, 10);
            this->button10->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(116, 94);
            this->button10->TabIndex = 1;
            this->button10->Text = L"ÇÖÇÝÉ";
            this->button10->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button10->UseVisualStyleBackColor = false;
            this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click_1);
            // 
            // label23
            // 
            this->label23->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label23->AutoSize = true;
            this->label23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label23->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label23->ForeColor = System::Drawing::Color::Orange;
            this->label23->Location = System::Drawing::Point(144, 52);
            this->label23->Name = L"label23";
            this->label23->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label23->Size = System::Drawing::Size(117, 28);
            this->label23->TabIndex = 1;
            this->label23->Text = L"ÇáÕÝ : ÇáÚÇÔÑ";
            this->label23->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
            // 
            // label24
            // 
            this->label24->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label24->AutoSize = true;
            this->label24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label24->Font = (gcnew System::Drawing::Font(L"Arial", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label24->ForeColor = System::Drawing::Color::Orange;
            this->label24->Location = System::Drawing::Point(166, 89);
            this->label24->Name = L"label24";
            this->label24->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label24->Size = System::Drawing::Size(88, 25);
            this->label24->TabIndex = 1;
            this->label24->Text = L"ÇáÓßä : ....";
            this->label24->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
            // 
            // panel12
            // 
            this->panel12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->panel12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel12->Controls->Add(this->label25);
            this->panel12->Controls->Add(this->label26);
            this->panel12->Controls->Add(this->label27);
            this->panel12->Controls->Add(this->label28);
            this->panel12->Controls->Add(this->pictureBox11);
            this->panel12->Location = System::Drawing::Point(299, 10);
            this->panel12->Margin = System::Windows::Forms::Padding(10);
            this->panel12->Name = L"panel12";
            this->panel12->Size = System::Drawing::Size(269, 171);
            this->panel12->TabIndex = 1;
            // 
            // label25
            // 
            this->label25->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label25->AutoSize = true;
            this->label25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label25->Font = (gcnew System::Drawing::Font(L"Arial", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label25->ForeColor = System::Drawing::Color::Orange;
            this->label25->Location = System::Drawing::Point(166, 89);
            this->label25->Name = L"label25";
            this->label25->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label25->Size = System::Drawing::Size(88, 25);
            this->label25->TabIndex = 1;
            this->label25->Text = L"ÇáÓßä : ....";
            // 
            // label26
            // 
            this->label26->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label26->AutoSize = true;
            this->label26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label26->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label26->ForeColor = System::Drawing::Color::Orange;
            this->label26->Location = System::Drawing::Point(144, 52);
            this->label26->Name = L"label26";
            this->label26->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label26->Size = System::Drawing::Size(117, 28);
            this->label26->TabIndex = 1;
            this->label26->Text = L"ÇáÕÝ : ÇáÚÇÔÑ";
            // 
            // label27
            // 
            this->label27->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label27->AutoSize = true;
            this->label27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label27->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label27->ForeColor = System::Drawing::Color::Orange;
            this->label27->Location = System::Drawing::Point(166, 13);
            this->label27->Name = L"label27";
            this->label27->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label27->Size = System::Drawing::Size(92, 28);
            this->label27->TabIndex = 1;
            this->label27->Text = L"ÇáÚãÑ : 19";
            // 
            // label28
            // 
            this->label28->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label28->AutoSize = true;
            this->label28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label28->Font = (gcnew System::Drawing::Font(L"Arial", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label28->Location = System::Drawing::Point(36, 126);
            this->label28->Name = L"label28";
            this->label28->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label28->Size = System::Drawing::Size(205, 36);
            this->label28->TabIndex = 1;
            this->label28->Text = L"ÇáÇÓã : áÇÑÇ ãÚäÞí";
            // 
            // pictureBox11
            // 
            this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
            this->pictureBox11->Location = System::Drawing::Point(7, 10);
            this->pictureBox11->Name = L"pictureBox11";
            this->pictureBox11->Size = System::Drawing::Size(123, 83);
            this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox11->TabIndex = 1;
            this->pictureBox11->TabStop = false;
            this->pictureBox11->Click += gcnew System::EventHandler(this, &MyForm::pictureBox11_Click);
            // 
            // panel13
            // 
            this->panel13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel13->Controls->Add(this->label29);
            this->panel13->Controls->Add(this->label30);
            this->panel13->Controls->Add(this->label31);
            this->panel13->Controls->Add(this->label32);
            this->panel13->Controls->Add(this->pictureBox12);
            this->panel13->Location = System::Drawing::Point(10, 201);
            this->panel13->Margin = System::Windows::Forms::Padding(10);
            this->panel13->Name = L"panel13";
            this->panel13->Size = System::Drawing::Size(269, 171);
            this->panel13->TabIndex = 2;
            // 
            // label29
            // 
            this->label29->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label29->AutoSize = true;
            this->label29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label29->Font = (gcnew System::Drawing::Font(L"Arial", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label29->ForeColor = System::Drawing::Color::Orange;
            this->label29->Location = System::Drawing::Point(166, 89);
            this->label29->Name = L"label29";
            this->label29->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label29->Size = System::Drawing::Size(88, 25);
            this->label29->TabIndex = 1;
            this->label29->Text = L"ÇáÓßä : ....";
            // 
            // label30
            // 
            this->label30->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label30->AutoSize = true;
            this->label30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label30->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label30->ForeColor = System::Drawing::Color::Orange;
            this->label30->Location = System::Drawing::Point(144, 52);
            this->label30->Name = L"label30";
            this->label30->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label30->Size = System::Drawing::Size(117, 28);
            this->label30->TabIndex = 1;
            this->label30->Text = L"ÇáÕÝ : ÇáÚÇÔÑ";
            // 
            // label31
            // 
            this->label31->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label31->AutoSize = true;
            this->label31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label31->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label31->ForeColor = System::Drawing::Color::Orange;
            this->label31->Location = System::Drawing::Point(166, 13);
            this->label31->Name = L"label31";
            this->label31->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label31->Size = System::Drawing::Size(92, 28);
            this->label31->TabIndex = 1;
            this->label31->Text = L"ÇáÚãÑ : 19";
            // 
            // label32
            // 
            this->label32->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label32->AutoSize = true;
            this->label32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label32->Font = (gcnew System::Drawing::Font(L"Arial", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label32->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label32->Location = System::Drawing::Point(36, 126);
            this->label32->Name = L"label32";
            this->label32->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label32->Size = System::Drawing::Size(205, 36);
            this->label32->TabIndex = 1;
            this->label32->Text = L"ÇáÇÓã : áÇÑÇ ãÚäÞí";
            // 
            // pictureBox12
            // 
            this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
            this->pictureBox12->Location = System::Drawing::Point(7, 10);
            this->pictureBox12->Name = L"pictureBox12";
            this->pictureBox12->Size = System::Drawing::Size(123, 83);
            this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox12->TabIndex = 1;
            this->pictureBox12->TabStop = false;
            // 
            // panel14
            // 
            this->panel14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->panel14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel14->Controls->Add(this->label33);
            this->panel14->Controls->Add(this->label34);
            this->panel14->Controls->Add(this->label35);
            this->panel14->Controls->Add(this->label36);
            this->panel14->Controls->Add(this->pictureBox13);
            this->panel14->Location = System::Drawing::Point(299, 201);
            this->panel14->Margin = System::Windows::Forms::Padding(10);
            this->panel14->Name = L"panel14";
            this->panel14->Size = System::Drawing::Size(269, 171);
            this->panel14->TabIndex = 3;
            // 
            // label33
            // 
            this->label33->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label33->AutoSize = true;
            this->label33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label33->Font = (gcnew System::Drawing::Font(L"Arial", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label33->ForeColor = System::Drawing::Color::Orange;
            this->label33->Location = System::Drawing::Point(166, 89);
            this->label33->Name = L"label33";
            this->label33->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label33->Size = System::Drawing::Size(88, 25);
            this->label33->TabIndex = 1;
            this->label33->Text = L"ÇáÓßä : ....";
            // 
            // label34
            // 
            this->label34->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label34->AutoSize = true;
            this->label34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label34->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label34->ForeColor = System::Drawing::Color::Orange;
            this->label34->Location = System::Drawing::Point(144, 52);
            this->label34->Name = L"label34";
            this->label34->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label34->Size = System::Drawing::Size(117, 28);
            this->label34->TabIndex = 1;
            this->label34->Text = L"ÇáÕÝ : ÇáÚÇÔÑ";
            // 
            // label35
            // 
            this->label35->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label35->AutoSize = true;
            this->label35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label35->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label35->ForeColor = System::Drawing::Color::Orange;
            this->label35->Location = System::Drawing::Point(166, 13);
            this->label35->Name = L"label35";
            this->label35->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label35->Size = System::Drawing::Size(92, 28);
            this->label35->TabIndex = 1;
            this->label35->Text = L"ÇáÚãÑ : 19";
            // 
            // label36
            // 
            this->label36->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label36->AutoSize = true;
            this->label36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label36->Font = (gcnew System::Drawing::Font(L"Arial", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label36->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label36->Location = System::Drawing::Point(36, 126);
            this->label36->Name = L"label36";
            this->label36->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label36->Size = System::Drawing::Size(205, 36);
            this->label36->TabIndex = 1;
            this->label36->Text = L"ÇáÇÓã : áÇÑÇ ãÚäÞí";
            // 
            // pictureBox13
            // 
            this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
            this->pictureBox13->Location = System::Drawing::Point(7, 10);
            this->pictureBox13->Name = L"pictureBox13";
            this->pictureBox13->Size = System::Drawing::Size(123, 83);
            this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox13->TabIndex = 1;
            this->pictureBox13->TabStop = false;
            // 
            // panel15
            // 
            this->panel15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->panel15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel15->Controls->Add(this->label37);
            this->panel15->Controls->Add(this->label38);
            this->panel15->Controls->Add(this->label39);
            this->panel15->Controls->Add(this->label40);
            this->panel15->Controls->Add(this->pictureBox14);
            this->panel15->Location = System::Drawing::Point(10, 392);
            this->panel15->Margin = System::Windows::Forms::Padding(10);
            this->panel15->Name = L"panel15";
            this->panel15->Size = System::Drawing::Size(269, 171);
            this->panel15->TabIndex = 4;
            // 
            // label37
            // 
            this->label37->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label37->AutoSize = true;
            this->label37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label37->Font = (gcnew System::Drawing::Font(L"Arial", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label37->ForeColor = System::Drawing::Color::Orange;
            this->label37->Location = System::Drawing::Point(166, 89);
            this->label37->Name = L"label37";
            this->label37->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label37->Size = System::Drawing::Size(88, 25);
            this->label37->TabIndex = 1;
            this->label37->Text = L"ÇáÓßä : ....";
            // 
            // label38
            // 
            this->label38->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label38->AutoSize = true;
            this->label38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label38->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label38->ForeColor = System::Drawing::Color::Orange;
            this->label38->Location = System::Drawing::Point(144, 52);
            this->label38->Name = L"label38";
            this->label38->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label38->Size = System::Drawing::Size(117, 28);
            this->label38->TabIndex = 1;
            this->label38->Text = L"ÇáÕÝ : ÇáÚÇÔÑ";
            // 
            // label39
            // 
            this->label39->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label39->AutoSize = true;
            this->label39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label39->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label39->ForeColor = System::Drawing::Color::Orange;
            this->label39->Location = System::Drawing::Point(166, 13);
            this->label39->Name = L"label39";
            this->label39->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label39->Size = System::Drawing::Size(92, 28);
            this->label39->TabIndex = 1;
            this->label39->Text = L"ÇáÚãÑ : 19";
            // 
            // label40
            // 
            this->label40->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label40->AutoSize = true;
            this->label40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label40->Font = (gcnew System::Drawing::Font(L"Arial", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label40->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label40->Location = System::Drawing::Point(36, 126);
            this->label40->Name = L"label40";
            this->label40->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label40->Size = System::Drawing::Size(205, 36);
            this->label40->TabIndex = 1;
            this->label40->Text = L"ÇáÇÓã : áÇÑÇ ãÚäÞí";
            // 
            // pictureBox14
            // 
            this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
            this->pictureBox14->Location = System::Drawing::Point(7, 10);
            this->pictureBox14->Name = L"pictureBox14";
            this->pictureBox14->Size = System::Drawing::Size(123, 83);
            this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox14->TabIndex = 1;
            this->pictureBox14->TabStop = false;
            // 
            // panel16
            // 
            this->panel16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->panel16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel16->Controls->Add(this->label41);
            this->panel16->Controls->Add(this->label42);
            this->panel16->Controls->Add(this->label43);
            this->panel16->Controls->Add(this->label44);
            this->panel16->Controls->Add(this->pictureBox15);
            this->panel16->Location = System::Drawing::Point(299, 392);
            this->panel16->Margin = System::Windows::Forms::Padding(10);
            this->panel16->Name = L"panel16";
            this->panel16->Size = System::Drawing::Size(269, 171);
            this->panel16->TabIndex = 5;
            // 
            // label41
            // 
            this->label41->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label41->AutoSize = true;
            this->label41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label41->Font = (gcnew System::Drawing::Font(L"Arial", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label41->ForeColor = System::Drawing::Color::Orange;
            this->label41->Location = System::Drawing::Point(166, 89);
            this->label41->Name = L"label41";
            this->label41->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label41->Size = System::Drawing::Size(88, 25);
            this->label41->TabIndex = 1;
            this->label41->Text = L"ÇáÓßä : ....";
            // 
            // label42
            // 
            this->label42->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label42->AutoSize = true;
            this->label42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label42->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label42->ForeColor = System::Drawing::Color::Orange;
            this->label42->Location = System::Drawing::Point(144, 52);
            this->label42->Name = L"label42";
            this->label42->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label42->Size = System::Drawing::Size(117, 28);
            this->label42->TabIndex = 1;
            this->label42->Text = L"ÇáÕÝ : ÇáÚÇÔÑ";
            // 
            // label43
            // 
            this->label43->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label43->AutoSize = true;
            this->label43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label43->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label43->ForeColor = System::Drawing::Color::Orange;
            this->label43->Location = System::Drawing::Point(166, 13);
            this->label43->Name = L"label43";
            this->label43->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label43->Size = System::Drawing::Size(92, 28);
            this->label43->TabIndex = 1;
            this->label43->Text = L"ÇáÚãÑ : 19";
            // 
            // label44
            // 
            this->label44->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label44->AutoSize = true;
            this->label44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label44->Font = (gcnew System::Drawing::Font(L"Arial", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label44->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label44->Location = System::Drawing::Point(36, 126);
            this->label44->Name = L"label44";
            this->label44->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label44->Size = System::Drawing::Size(205, 36);
            this->label44->TabIndex = 1;
            this->label44->Text = L"ÇáÇÓã : áÇÑÇ ãÚäÞí";
            // 
            // pictureBox15
            // 
            this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
            this->pictureBox15->Location = System::Drawing::Point(7, 10);
            this->pictureBox15->Name = L"pictureBox15";
            this->pictureBox15->Size = System::Drawing::Size(123, 83);
            this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox15->TabIndex = 1;
            this->pictureBox15->TabStop = false;
            // 
            // panel17
            // 
            this->panel17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->panel17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel17->Controls->Add(this->label45);
            this->panel17->Controls->Add(this->label46);
            this->panel17->Controls->Add(this->label47);
            this->panel17->Controls->Add(this->label48);
            this->panel17->Controls->Add(this->pictureBox16);
            this->panel17->Location = System::Drawing::Point(10, 583);
            this->panel17->Margin = System::Windows::Forms::Padding(10);
            this->panel17->Name = L"panel17";
            this->panel17->Size = System::Drawing::Size(269, 171);
            this->panel17->TabIndex = 6;
            // 
            // label45
            // 
            this->label45->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label45->AutoSize = true;
            this->label45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label45->Font = (gcnew System::Drawing::Font(L"Arial", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label45->ForeColor = System::Drawing::Color::Orange;
            this->label45->Location = System::Drawing::Point(166, 89);
            this->label45->Name = L"label45";
            this->label45->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label45->Size = System::Drawing::Size(88, 25);
            this->label45->TabIndex = 1;
            this->label45->Text = L"ÇáÓßä : ....";
            // 
            // label46
            // 
            this->label46->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label46->AutoSize = true;
            this->label46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label46->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label46->ForeColor = System::Drawing::Color::Orange;
            this->label46->Location = System::Drawing::Point(144, 52);
            this->label46->Name = L"label46";
            this->label46->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label46->Size = System::Drawing::Size(117, 28);
            this->label46->TabIndex = 1;
            this->label46->Text = L"ÇáÕÝ : ÇáÚÇÔÑ";
            // 
            // label47
            // 
            this->label47->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label47->AutoSize = true;
            this->label47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label47->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label47->ForeColor = System::Drawing::Color::Orange;
            this->label47->Location = System::Drawing::Point(166, 13);
            this->label47->Name = L"label47";
            this->label47->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label47->Size = System::Drawing::Size(92, 28);
            this->label47->TabIndex = 1;
            this->label47->Text = L"ÇáÚãÑ : 19";
            // 
            // label48
            // 
            this->label48->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label48->AutoSize = true;
            this->label48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label48->Font = (gcnew System::Drawing::Font(L"Arial", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label48->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label48->Location = System::Drawing::Point(36, 126);
            this->label48->Name = L"label48";
            this->label48->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label48->Size = System::Drawing::Size(205, 36);
            this->label48->TabIndex = 1;
            this->label48->Text = L"ÇáÇÓã : áÇÑÇ ãÚäÞí";
            // 
            // pictureBox16
            // 
            this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
            this->pictureBox16->Location = System::Drawing::Point(7, 10);
            this->pictureBox16->Name = L"pictureBox16";
            this->pictureBox16->Size = System::Drawing::Size(123, 83);
            this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox16->TabIndex = 1;
            this->pictureBox16->TabStop = false;
            // 
            // panel18
            // 
            this->panel18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->panel18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel18->Controls->Add(this->label49);
            this->panel18->Controls->Add(this->label50);
            this->panel18->Controls->Add(this->label51);
            this->panel18->Controls->Add(this->label52);
            this->panel18->Controls->Add(this->pictureBox17);
            this->panel18->Location = System::Drawing::Point(299, 583);
            this->panel18->Margin = System::Windows::Forms::Padding(10);
            this->panel18->Name = L"panel18";
            this->panel18->Size = System::Drawing::Size(269, 171);
            this->panel18->TabIndex = 7;
            // 
            // label49
            // 
            this->label49->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label49->AutoSize = true;
            this->label49->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label49->Font = (gcnew System::Drawing::Font(L"Arial", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label49->ForeColor = System::Drawing::Color::Orange;
            this->label49->Location = System::Drawing::Point(166, 89);
            this->label49->Name = L"label49";
            this->label49->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label49->Size = System::Drawing::Size(88, 25);
            this->label49->TabIndex = 1;
            this->label49->Text = L"ÇáÓßä : ....";
            // 
            // label50
            // 
            this->label50->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label50->AutoSize = true;
            this->label50->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label50->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label50->ForeColor = System::Drawing::Color::Orange;
            this->label50->Location = System::Drawing::Point(144, 52);
            this->label50->Name = L"label50";
            this->label50->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label50->Size = System::Drawing::Size(117, 28);
            this->label50->TabIndex = 1;
            this->label50->Text = L"ÇáÕÝ : ÇáÚÇÔÑ";
            // 
            // label51
            // 
            this->label51->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label51->AutoSize = true;
            this->label51->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label51->Font = (gcnew System::Drawing::Font(L"Arial", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label51->ForeColor = System::Drawing::Color::Orange;
            this->label51->Location = System::Drawing::Point(166, 13);
            this->label51->Name = L"label51";
            this->label51->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label51->Size = System::Drawing::Size(92, 28);
            this->label51->TabIndex = 1;
            this->label51->Text = L"ÇáÚãÑ : 19";
            // 
            // label52
            // 
            this->label52->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label52->AutoSize = true;
            this->label52->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label52->Font = (gcnew System::Drawing::Font(L"Arial", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label52->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label52->Location = System::Drawing::Point(36, 126);
            this->label52->Name = L"label52";
            this->label52->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label52->Size = System::Drawing::Size(205, 36);
            this->label52->TabIndex = 1;
            this->label52->Text = L"ÇáÇÓã : áÇÑÇ ãÚäÞí";
            // 
            // pictureBox17
            // 
            this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
            this->pictureBox17->Location = System::Drawing::Point(7, 10);
            this->pictureBox17->Name = L"pictureBox17";
            this->pictureBox17->Size = System::Drawing::Size(123, 83);
            this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox17->TabIndex = 1;
            this->pictureBox17->TabStop = false;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(12, 23);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->ClientSize = System::Drawing::Size(808, 602);
            this->Controls->Add(this->pn_co_bar);
            this->Controls->Add(this->pn_nav_bar);
            this->Controls->Add(this->pn_st_bar);
            this->Controls->Add(this->pn_title_bar);
            this->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
            this->Name = L"MyForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"MyForm";
            this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
            this->pn_title_bar->ResumeLayout(false);
            this->pn_title_bar->PerformLayout();
            this->pn_st_bar->ResumeLayout(false);
            this->pn_st_bar->PerformLayout();
            this->pn_nav_bar->ResumeLayout(false);
            this->flowLayoutPanel1->ResumeLayout(false);
            this->panel1->ResumeLayout(false);
            this->pn_info->ResumeLayout(false);
            this->pn_info->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->pn_co_bar->ResumeLayout(false);
            this->pn_home->ResumeLayout(false);
            this->panel2->ResumeLayout(false);
            this->flowLayoutPanel2->ResumeLayout(false);
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            this->panel5->ResumeLayout(false);
            this->panel5->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            this->panel6->ResumeLayout(false);
            this->panel6->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            this->panel7->ResumeLayout(false);
            this->panel7->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
            this->panel8->ResumeLayout(false);
            this->panel8->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
            this->panel9->ResumeLayout(false);
            this->panel9->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
            this->panel10->ResumeLayout(false);
            this->panel10->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
            this->pn_borrow->ResumeLayout(false);
            this->pn_borrow->PerformLayout();
            this->pn_sell->ResumeLayout(false);
            this->pn_sell->PerformLayout();
            this->pn_cat->ResumeLayout(false);
            this->pn_cat->PerformLayout();
            this->pn_books->ResumeLayout(false);
            this->pn_books->PerformLayout();
            this->pn_student->ResumeLayout(false);
            this->flowLayoutPanel3->ResumeLayout(false);
            this->panel11->ResumeLayout(false);
            this->panel11->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
            this->panel19->ResumeLayout(false);
            this->panel12->ResumeLayout(false);
            this->panel12->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
            this->panel13->ResumeLayout(false);
            this->panel13->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
            this->panel14->ResumeLayout(false);
            this->panel14->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
            this->panel15->ResumeLayout(false);
            this->panel15->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
            this->panel16->ResumeLayout(false);
            this->panel16->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
            this->panel17->ResumeLayout(false);
            this->panel17->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
            this->panel18->ResumeLayout(false);
            this->panel18->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion

	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}



private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
         pn_home->BringToFront();
	}

private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	 pn_student->BringToFront();
    }


private: System::Void btn_books_Click(System::Object^ sender, System::EventArgs^ e) {
	 pn_books->BringToFront();
    }


private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	 pn_cat->BringToFront();
    }


private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	 pn_sell->BringToFront();
    }

private: System::Void btn_borrow_Click(System::Object^ sender, System::EventArgs^ e) {
		   pn_borrow->BringToFront();
	   }


private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}




private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
    Environment::Exit(0);   
}

private: System::Void btn_maximize_window_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->WindowState==FormWindowState::Maximized) {


        this->WindowState = FormWindowState::Normal;

    }
    else
    {
        this->WindowState = FormWindowState::Maximized;

    }
}

 
private: System::Void btn_min_Click(System::Object^ sender, System::EventArgs^ e) {
    this->WindowState = FormWindowState::Minimized;

}



private: System::Void btn_col_Click_1(System::Object^ sender, System::EventArgs^ e) {

    if (pn_nav_bar->Width == 200) {
        pn_nav_bar->Width = 55;
        btn_home->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
        btn_studnet->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
        btn_books->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
        btn_cat->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
        btn_sell->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
        btn_borrow->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
        pn_info->Visible = false;
    }
    else
    {
        pn_nav_bar->Width = 200;
        btn_home->RightToLeft = System::Windows::Forms::RightToLeft::No;
        btn_studnet->RightToLeft = System::Windows::Forms::RightToLeft::No;
        btn_books->RightToLeft = System::Windows::Forms::RightToLeft::No;
        btn_cat->RightToLeft = System::Windows::Forms::RightToLeft::No;
        btn_sell->RightToLeft = System::Windows::Forms::RightToLeft::No;
        btn_borrow->RightToLeft = System::Windows::Forms::RightToLeft::No; 
        pn_info->Visible = true;
    }
                    }




private: System::Void UserName_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void flowLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pn_title_bar_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pn_st_bar_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pn_nav_bar_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pn_info_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Admin_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pn_co_bar_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pn_home_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel8_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel9_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel10_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label21_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pn_borrow_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pn_sell_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pn_cat_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pn_books_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pn_student_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click_1(System::Object^ sender, System::EventArgs^ e) {

    MyForm1^ frm1 = gcnew MyForm1;
    frm1->Show();

}
};
}
