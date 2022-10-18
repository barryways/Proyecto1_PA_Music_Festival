﻿#pragma once
#include "Pila.h"
#include "Queue.h"

namespace PAProyecto1CarlosDiego {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for FrontEnd
	/// </summary>
	public ref class FrontEnd : public System::Windows::Forms::Form
	{
	public:
		//variables globales
		int cantidadColumnas;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::TextBox^ tbCancion;
	private: System::Windows::Forms::TextBox^ tbArtista;
	private: System::Windows::Forms::Button^ btnAgregar;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;

	public:
		Pila^ playlist = gcnew Pila();
		Cola^ colaReproduccion = gcnew Cola();


		FrontEnd(void)
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
		~FrontEnd()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlLateral;
	protected:
	private: System::Windows::Forms::Panel^ pnlSubMenu;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ btnGuardarPlaylist;

	private: System::Windows::Forms::Button^ btnAbrirArchivo;

	private: System::Windows::Forms::Panel^ pnlLogo;
	private: System::Windows::Forms::Panel^ pnlReproductor;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ lbPlaylist;
	private: System::Windows::Forms::ListBox^ lbCola;



	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::TextBox^ tbPath;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FrontEnd::typeid));
			this->pnlLateral = (gcnew System::Windows::Forms::Panel());
			this->pnlSubMenu = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btnGuardarPlaylist = (gcnew System::Windows::Forms::Button());
			this->btnAbrirArchivo = (gcnew System::Windows::Forms::Button());
			this->pnlLogo = (gcnew System::Windows::Forms::Panel());
			this->pnlReproductor = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbPlaylist = (gcnew System::Windows::Forms::ListBox());
			this->lbCola = (gcnew System::Windows::Forms::ListBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tbPath = (gcnew System::Windows::Forms::TextBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->tbCancion = (gcnew System::Windows::Forms::TextBox());
			this->tbArtista = (gcnew System::Windows::Forms::TextBox());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pnlLateral->SuspendLayout();
			this->pnlSubMenu->SuspendLayout();
			this->pnlReproductor->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlLateral
			// 
			this->pnlLateral->AutoScroll = true;
			this->pnlLateral->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->pnlLateral->Controls->Add(this->label5);
			this->pnlLateral->Controls->Add(this->label4);
			this->pnlLateral->Controls->Add(this->label3);
			this->pnlLateral->Controls->Add(this->btnAgregar);
			this->pnlLateral->Controls->Add(this->pnlSubMenu);
			this->pnlLateral->Controls->Add(this->tbCancion);
			this->pnlLateral->Controls->Add(this->tbArtista);
			this->pnlLateral->Controls->Add(this->btnAbrirArchivo);
			this->pnlLateral->Controls->Add(this->pnlLogo);
			this->pnlLateral->Dock = System::Windows::Forms::DockStyle::Left;
			this->pnlLateral->Location = System::Drawing::Point(0, 0);
			this->pnlLateral->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pnlLateral->Name = L"pnlLateral";
			this->pnlLateral->Size = System::Drawing::Size(188, 527);
			this->pnlLateral->TabIndex = 0;
			// 
			// pnlSubMenu
			// 
			this->pnlSubMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->pnlSubMenu->Controls->Add(this->button5);
			this->pnlSubMenu->Controls->Add(this->button4);
			this->pnlSubMenu->Controls->Add(this->button3);
			this->pnlSubMenu->Controls->Add(this->btnGuardarPlaylist);
			this->pnlSubMenu->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlSubMenu->Location = System::Drawing::Point(0, 165);
			this->pnlSubMenu->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pnlSubMenu->Name = L"pnlSubMenu";
			this->pnlSubMenu->Size = System::Drawing::Size(188, 147);
			this->pnlSubMenu->TabIndex = 1;
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Dock = System::Windows::Forms::DockStyle::Top;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(0, 96);
			this->button5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button5->Name = L"button5";
			this->button5->Padding = System::Windows::Forms::Padding(26, 0, 0, 0);
			this->button5->Size = System::Drawing::Size(188, 32);
			this->button5->TabIndex = 4;
			this->button5->Text = L"button5";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Dock = System::Windows::Forms::DockStyle::Top;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(0, 64);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Padding = System::Windows::Forms::Padding(26, 0, 0, 0);
			this->button4->Size = System::Drawing::Size(188, 32);
			this->button4->TabIndex = 3;
			this->button4->Text = L"button4";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Dock = System::Windows::Forms::DockStyle::Top;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(0, 32);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Padding = System::Windows::Forms::Padding(26, 0, 0, 0);
			this->button3->Size = System::Drawing::Size(188, 32);
			this->button3->TabIndex = 2;
			this->button3->Text = L"button3";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// btnGuardarPlaylist
			// 
			this->btnGuardarPlaylist->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnGuardarPlaylist->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnGuardarPlaylist->FlatAppearance->BorderSize = 0;
			this->btnGuardarPlaylist->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->btnGuardarPlaylist->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->btnGuardarPlaylist->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGuardarPlaylist->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGuardarPlaylist->ForeColor = System::Drawing::Color::White;
			this->btnGuardarPlaylist->Location = System::Drawing::Point(0, 0);
			this->btnGuardarPlaylist->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnGuardarPlaylist->Name = L"btnGuardarPlaylist";
			this->btnGuardarPlaylist->Padding = System::Windows::Forms::Padding(26, 0, 0, 0);
			this->btnGuardarPlaylist->Size = System::Drawing::Size(188, 32);
			this->btnGuardarPlaylist->TabIndex = 1;
			this->btnGuardarPlaylist->Text = L"Exportar";
			this->btnGuardarPlaylist->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGuardarPlaylist->UseVisualStyleBackColor = true;
			this->btnGuardarPlaylist->Click += gcnew System::EventHandler(this, &FrontEnd::btnGuardarPlaylist_Click);
			// 
			// btnAbrirArchivo
			// 
			this->btnAbrirArchivo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->btnAbrirArchivo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAbrirArchivo->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnAbrirArchivo->FlatAppearance->BorderSize = 0;
			this->btnAbrirArchivo->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->btnAbrirArchivo->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->btnAbrirArchivo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAbrirArchivo->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAbrirArchivo->ForeColor = System::Drawing::Color::White;
			this->btnAbrirArchivo->Location = System::Drawing::Point(0, 124);
			this->btnAbrirArchivo->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnAbrirArchivo->Name = L"btnAbrirArchivo";
			this->btnAbrirArchivo->Padding = System::Windows::Forms::Padding(8, 0, 0, 0);
			this->btnAbrirArchivo->Size = System::Drawing::Size(188, 41);
			this->btnAbrirArchivo->TabIndex = 1;
			this->btnAbrirArchivo->Text = L"Abrir Archivo";
			this->btnAbrirArchivo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAbrirArchivo->UseVisualStyleBackColor = false;
			this->btnAbrirArchivo->Click += gcnew System::EventHandler(this, &FrontEnd::btnAbrirArchivo_Click);
			// 
			// pnlLogo
			// 
			this->pnlLogo->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pnlLogo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pnlLogo.BackgroundImage")));
			this->pnlLogo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pnlLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlLogo->Location = System::Drawing::Point(0, 0);
			this->pnlLogo->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pnlLogo->Name = L"pnlLogo";
			this->pnlLogo->Size = System::Drawing::Size(188, 124);
			this->pnlLogo->TabIndex = 0;
			// 
			// pnlReproductor
			// 
			this->pnlReproductor->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pnlReproductor->Controls->Add(this->button7);
			this->pnlReproductor->Controls->Add(this->button6);
			this->pnlReproductor->Controls->Add(this->button1);
			this->pnlReproductor->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pnlReproductor->Location = System::Drawing::Point(188, 452);
			this->pnlReproductor->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pnlReproductor->Name = L"pnlReproductor";
			this->pnlReproductor->Size = System::Drawing::Size(806, 75);
			this->pnlReproductor->TabIndex = 1;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(394, 19);
			this->button7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(56, 46);
			this->button7->TabIndex = 2;
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(325, 19);
			this->button6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(58, 46);
			this->button6->TabIndex = 1;
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(256, 19);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 46);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(20, 20);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(296, 37);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Editor de Playlist";
			// 
			// lbPlaylist
			// 
			this->lbPlaylist->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->lbPlaylist->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lbPlaylist->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPlaylist->ForeColor = System::Drawing::Color::White;
			this->lbPlaylist->FormattingEnabled = true;
			this->lbPlaylist->ItemHeight = 19;
			this->lbPlaylist->Location = System::Drawing::Point(306, 211);
			this->lbPlaylist->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->lbPlaylist->Name = L"lbPlaylist";
			this->lbPlaylist->Size = System::Drawing::Size(416, 209);
			this->lbPlaylist->TabIndex = 4;
			// 
			// lbCola
			// 
			this->lbCola->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->lbCola->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lbCola->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCola->ForeColor = System::Drawing::Color::White;
			this->lbCola->FormattingEnabled = true;
			this->lbCola->ItemHeight = 19;
			this->lbCola->Location = System::Drawing::Point(10, 108);
			this->lbCola->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->lbCola->Name = L"lbCola";
			this->lbCola->Size = System::Drawing::Size(146, 323);
			this->lbCola->TabIndex = 5;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->lbCola);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(830, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(164, 452);
			this->panel1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(26, 54);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 34);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Cola de \r\nReproduccion";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(188, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(642, 81);
			this->panel2->TabIndex = 5;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// tbPath
			// 
			this->tbPath->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->tbPath->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPath->Location = System::Drawing::Point(306, 424);
			this->tbPath->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tbPath->Name = L"tbPath";
			this->tbPath->Size = System::Drawing::Size(416, 13);
			this->tbPath->TabIndex = 6;
			// 
			// tbCancion
			// 
			this->tbCancion->Location = System::Drawing::Point(22, 443);
			this->tbCancion->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tbCancion->Name = L"tbCancion";
			this->tbCancion->Size = System::Drawing::Size(143, 20);
			this->tbCancion->TabIndex = 7;
			this->tbCancion->TextChanged += gcnew System::EventHandler(this, &FrontEnd::tbCancion_TextChanged);
			// 
			// tbArtista
			// 
			this->tbArtista->Location = System::Drawing::Point(22, 386);
			this->tbArtista->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tbArtista->Name = L"tbArtista";
			this->tbArtista->Size = System::Drawing::Size(143, 20);
			this->tbArtista->TabIndex = 8;
			this->tbArtista->TextChanged += gcnew System::EventHandler(this, &FrontEnd::tbArtista_TextChanged);
			// 
			// btnAgregar
			// 
			this->btnAgregar->BackColor = System::Drawing::Color::White;
			this->btnAgregar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAgregar->Location = System::Drawing::Point(50, 477);
			this->btnAgregar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(86, 35);
			this->btnAgregar->TabIndex = 9;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = false;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &FrontEnd::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(19, 356);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 18);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Artista";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(19, 413);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 18);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Cancion";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(27, 326);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(138, 18);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Añadir a Playlist";
			// 
			// FrontEnd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(68)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->ClientSize = System::Drawing::Size(994, 527);
			this->Controls->Add(this->tbPath);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->lbPlaylist);
			this->Controls->Add(this->pnlReproductor);
			this->Controls->Add(this->pnlLateral);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"FrontEnd";
			this->Opacity = 0.98;
			this->ShowIcon = false;
			this->Text = L"Music Festival";
			this->TransparencyKey = System::Drawing::Color::Silver;
			this->pnlLateral->ResumeLayout(false);
			this->pnlLateral->PerformLayout();
			this->pnlSubMenu->ResumeLayout(false);
			this->pnlReproductor->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void meterAListBoxPila(ListBox^ playlist, Pila^ stack) {
			Nodo^ nodoActual = stack->head;
			playlist->Items->Clear();
			while (nodoActual != nullptr)
			{
				String^ cancionActual = nodoActual->name + "-" + nodoActual->artist;
				playlist->Items->Add(cancionActual);
				nodoActual = nodoActual->next;
			}
		}
		void meterAListBoxCola(ListBox^ colaReproduccion, Cola^ queue) {
			Nodo^ nodoActual = queue->head;
			colaReproduccion->Items->Clear();
			while (nodoActual != nullptr)
			{
				String^ cancionActual = nodoActual->name + "-" + nodoActual->artist;
				colaReproduccion->Items->Add(cancionActual);
				nodoActual = nodoActual->next;
			}
		}


	private: System::Void btnAbrirArchivo_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			openFileDialog1->Filter = "Archivos separados por coma (csv) | *.csv";
			openFileDialog1->FileName = "";
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				if (lbPlaylist->Items->Count > 1)
				{
					lbPlaylist->Items->Clear();
				}
				tbPath->Text = openFileDialog1->FileName;

				array<String^>^ archivo = File::ReadAllLines(openFileDialog1->FileName);
				if (archivo->Length > 0) {
					for (int i = 0; i < archivo->Length; i++)
					{
						array<String^>^ Columna = archivo[i]->Split(',');
						for (int j = 0; j < Columna->Length; j++)
						{
							if (Columna[j] != "") {
								array<String^>^ cancion = Columna[j]->Split('-');
								if (cancion[0] != "")
								{
									if (cancion[1] == "")
									{
										playlist->PushTo("Desconocido", cancion[0]);
									}
									else {
										playlist->PushTo(cancion[1], cancion[0]);
									}
								}
								else {
									j = Columna->Length;
									i = archivo->Length;
									MessageBox::Show("El nombre de la cancion no es valido",
										"Error",
										MessageBoxButtons::OK,
										MessageBoxIcon::Warning);
								}
							}
						}
					}
					meterAListBoxPila(lbPlaylist, playlist);
					array<String^>^ archivoColumna = archivo[0]->Split(',');
					if (archivoColumna->Length > 0) {
						cantidadColumnas = archivoColumna->Length;
					}
				}
			}
			else {
				MessageBox::Show("Porfavor elija un archivo para abrir",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show("No se pudo abrir el archivo",
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
	};
		private: System::Void btnGuardarPlaylist_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (!playlist->IsEmpty())
			{
				saveFileDialog1->Filter = "Archivos separados por coma (csv) | *.csv";
				if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					int i = 0;
					int j = 0;
					String^ lineas = "";
					
					while (i < playlist->Count())
					{
						if (j < cantidadColumnas - 1)
						{
							lineas += "" + playlist->GetNombre(i) + "-" + playlist->GetArtista(i) + ",";
						}
						else {
							lineas += "" + playlist->GetNombre(i) + "-" + playlist->GetArtista(i) + "\r\n";
							j = 0;
						}
						j++;
						i++;
					}
					//Se escribe el archivo con el nombre indicado y con los elementos.
					File::WriteAllText(saveFileDialog1->FileName, lineas);
					MessageBox::Show("Archivo guardado exitosamente"
						, "Operacion exitosa"
						, MessageBoxButtons::OK
						, MessageBoxIcon::Information);
				}
			}
			else {
				MessageBox::Show("La playlist esta vacia",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Exclamation);
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show("No se pudo guardar el archivo"
				, "Error"
				, MessageBoxButtons::OK
				, MessageBoxIcon::Error);
		}
		};

		private: System::Void tbArtista_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
		}

		private: System::Void tbCancion_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
		}

		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			try
			{
				String^ cancion = tbCancion->Text;
				String^ artista = tbArtista->Text;
				if (cancion!="")
				{
					if (artista=="")
					{
						artista = "Desconocido";
					}
					colaReproduccion->PushTo(artista, cancion);
					meterAListBoxCola(lbCola,colaReproduccion);
				}
				else {
					MessageBox::Show("No se puede meter a la playlist un artista sin una cancion"
						, "Error"
						, MessageBoxButtons::OK
						, MessageBoxIcon::Error);
				}

			}
			catch (Exception^ e)
			{
				MessageBox::Show("No se pudo meter a la cola de reproduccion su cancion"
					, "Error"
					, MessageBoxButtons::OK
					, MessageBoxIcon::Error);
			}
		}
	};
}

