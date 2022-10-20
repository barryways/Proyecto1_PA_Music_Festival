#pragma once
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
	int posicionCola;
	Cola^ colaReproduccion = gcnew Cola();
	Pila^ playlist = gcnew Pila();
	Pila^ playlistOriginal = gcnew Pila();



	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::TextBox^ tbCancion;
	private: System::Windows::Forms::TextBox^ tbArtista;
	private: System::Windows::Forms::Button^ btnAgregar;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	public:
	private: System::Windows::Forms::Label^ lblReproductor;
	private: System::Windows::Forms::RadioButton^ rdbArtistaAscendente;
	private: System::Windows::Forms::RadioButton^ rdbArtistaDescendente;
	private: System::Windows::Forms::RadioButton^ rdbCancionAscendente;
	private: System::Windows::Forms::RadioButton^ rdbCancionDescendente;
	public:







	private: System::Windows::Forms::Label^ lblOrdenar;
	private: System::Windows::Forms::Button^ btnBorrar;
	private: System::Windows::Forms::Button^ btnSincronizar;
	private: System::Windows::Forms::Label^ lblPrevisualizar;
	private: System::Windows::Forms::Button^ btnReproducirPlaylist;
	private: System::Windows::Forms::Panel^ pnlLateral1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::ListBox^ lbPlaylistOriginal;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btnSync;

	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Label^ lblPlaylist;





	public:







		   


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
	private: System::Windows::Forms::Button^ btnPlayPlaylist;

	private: System::Windows::Forms::Button^ btnBorrarCancion;



	private: System::Windows::Forms::Button^ btnOrdenar;

	private: System::Windows::Forms::Button^ btnGuardarPlaylist;	private: System::Windows::Forms::Button^ btnAbrirArchivo;

	private: System::Windows::Forms::Panel^ pnlLogo;
	private: System::Windows::Forms::Panel^ pnlReproductor;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ lbPlaylist;
	private: System::Windows::Forms::ListBox^ lbCola;



	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnNext;

	private: System::Windows::Forms::Button^ btnPlay;
	private: System::Windows::Forms::Button^ btnBack;


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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->pnlSubMenu = (gcnew System::Windows::Forms::Panel());
			this->btnPlayPlaylist = (gcnew System::Windows::Forms::Button());
			this->btnBorrarCancion = (gcnew System::Windows::Forms::Button());
			this->btnOrdenar = (gcnew System::Windows::Forms::Button());
			this->btnGuardarPlaylist = (gcnew System::Windows::Forms::Button());
			this->tbCancion = (gcnew System::Windows::Forms::TextBox());
			this->tbArtista = (gcnew System::Windows::Forms::TextBox());
			this->btnAbrirArchivo = (gcnew System::Windows::Forms::Button());
			this->pnlLogo = (gcnew System::Windows::Forms::Panel());
			this->pnlReproductor = (gcnew System::Windows::Forms::Panel());
			this->lblReproductor = (gcnew System::Windows::Forms::Label());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnPlay = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbPlaylist = (gcnew System::Windows::Forms::ListBox());
			this->lbCola = (gcnew System::Windows::Forms::ListBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnSync = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tbPath = (gcnew System::Windows::Forms::TextBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->rdbArtistaAscendente = (gcnew System::Windows::Forms::RadioButton());
			this->rdbArtistaDescendente = (gcnew System::Windows::Forms::RadioButton());
			this->rdbCancionAscendente = (gcnew System::Windows::Forms::RadioButton());
			this->rdbCancionDescendente = (gcnew System::Windows::Forms::RadioButton());
			this->lblOrdenar = (gcnew System::Windows::Forms::Label());
			this->lblPlaylist = (gcnew System::Windows::Forms::Label());
			this->lbPlaylistOriginal = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->pnlLateral->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlLateral->Name = L"pnlLateral";
			this->pnlLateral->Size = System::Drawing::Size(251, 649);
			this->pnlLateral->TabIndex = 0;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(36, 401);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(175, 23);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Añadir a Playlist";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(25, 508);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 23);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Cancion";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(25, 438);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 23);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Artista";
			// 
			// btnAgregar
			// 
			this->btnAgregar->BackColor = System::Drawing::Color::Transparent;
			this->btnAgregar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAgregar->ForeColor = System::Drawing::Color::White;
			this->btnAgregar->Location = System::Drawing::Point(67, 587);
			this->btnAgregar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(115, 43);
			this->btnAgregar->TabIndex = 9;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = false;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &FrontEnd::button2_Click);
			// 
			// pnlSubMenu
			// 
			this->pnlSubMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->pnlSubMenu->Controls->Add(this->btnPlayPlaylist);
			this->pnlSubMenu->Controls->Add(this->btnBorrarCancion);
			this->pnlSubMenu->Controls->Add(this->btnOrdenar);
			this->pnlSubMenu->Controls->Add(this->btnGuardarPlaylist);
			this->pnlSubMenu->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlSubMenu->Location = System::Drawing::Point(0, 203);
			this->pnlSubMenu->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlSubMenu->Name = L"pnlSubMenu";
			this->pnlSubMenu->Size = System::Drawing::Size(251, 181);
			this->pnlSubMenu->TabIndex = 1;
			// 
			// btnPlayPlaylist
			// 
			this->btnPlayPlaylist->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPlayPlaylist->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnPlayPlaylist->FlatAppearance->BorderSize = 0;
			this->btnPlayPlaylist->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->btnPlayPlaylist->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->btnPlayPlaylist->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPlayPlaylist->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlayPlaylist->ForeColor = System::Drawing::Color::White;
			this->btnPlayPlaylist->Location = System::Drawing::Point(0, 117);
			this->btnPlayPlaylist->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnPlayPlaylist->Name = L"btnPlayPlaylist";
			this->btnPlayPlaylist->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->btnPlayPlaylist->Size = System::Drawing::Size(251, 39);
			this->btnPlayPlaylist->TabIndex = 4;
			this->btnPlayPlaylist->Text = L"Reproducir Playlist";
			this->btnPlayPlaylist->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnPlayPlaylist->UseVisualStyleBackColor = true;
			this->btnPlayPlaylist->Click += gcnew System::EventHandler(this, &FrontEnd::btnPlayPlaylist_Click);
			// 
			// btnBorrarCancion
			// 
			this->btnBorrarCancion->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnBorrarCancion->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnBorrarCancion->FlatAppearance->BorderSize = 0;
			this->btnBorrarCancion->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->btnBorrarCancion->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->btnBorrarCancion->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBorrarCancion->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBorrarCancion->ForeColor = System::Drawing::Color::White;
			this->btnBorrarCancion->Location = System::Drawing::Point(0, 78);
			this->btnBorrarCancion->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnBorrarCancion->Name = L"btnBorrarCancion";
			this->btnBorrarCancion->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->btnBorrarCancion->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btnBorrarCancion->Size = System::Drawing::Size(251, 39);
			this->btnBorrarCancion->TabIndex = 3;
			this->btnBorrarCancion->Text = L"Borrar Cancion";
			this->btnBorrarCancion->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnBorrarCancion->UseVisualStyleBackColor = true;
			this->btnBorrarCancion->Click += gcnew System::EventHandler(this, &FrontEnd::btnBorrarCancion_Click);
			// 
			// btnOrdenar
			// 
			this->btnOrdenar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnOrdenar->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnOrdenar->FlatAppearance->BorderSize = 0;
			this->btnOrdenar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->btnOrdenar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->btnOrdenar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOrdenar->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOrdenar->ForeColor = System::Drawing::Color::White;
			this->btnOrdenar->Location = System::Drawing::Point(0, 39);
			this->btnOrdenar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnOrdenar->Name = L"btnOrdenar";
			this->btnOrdenar->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->btnOrdenar->Size = System::Drawing::Size(251, 39);
			this->btnOrdenar->TabIndex = 2;
			this->btnOrdenar->Text = L"Ordenar";
			this->btnOrdenar->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnOrdenar->UseVisualStyleBackColor = true;
			this->btnOrdenar->Click += gcnew System::EventHandler(this, &FrontEnd::btnOrdenar_Click);
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
			this->btnGuardarPlaylist->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnGuardarPlaylist->Name = L"btnGuardarPlaylist";
			this->btnGuardarPlaylist->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->btnGuardarPlaylist->Size = System::Drawing::Size(251, 39);
			this->btnGuardarPlaylist->TabIndex = 1;
			this->btnGuardarPlaylist->Text = L"Exportar";
			this->btnGuardarPlaylist->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGuardarPlaylist->UseVisualStyleBackColor = true;
			this->btnGuardarPlaylist->Click += gcnew System::EventHandler(this, &FrontEnd::btnGuardarPlaylist_Click);
			// 
			// tbCancion
			// 
			this->tbCancion->Location = System::Drawing::Point(29, 545);
			this->tbCancion->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbCancion->Name = L"tbCancion";
			this->tbCancion->Size = System::Drawing::Size(189, 22);
			this->tbCancion->TabIndex = 7;
			this->tbCancion->TextChanged += gcnew System::EventHandler(this, &FrontEnd::tbCancion_TextChanged);
			// 
			// tbArtista
			// 
			this->tbArtista->Location = System::Drawing::Point(29, 475);
			this->tbArtista->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbArtista->Name = L"tbArtista";
			this->tbArtista->Size = System::Drawing::Size(189, 22);
			this->tbArtista->TabIndex = 8;
			this->tbArtista->TextChanged += gcnew System::EventHandler(this, &FrontEnd::tbArtista_TextChanged);
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
			this->btnAbrirArchivo->Location = System::Drawing::Point(0, 153);
			this->btnAbrirArchivo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAbrirArchivo->Name = L"btnAbrirArchivo";
			this->btnAbrirArchivo->Padding = System::Windows::Forms::Padding(11, 0, 0, 0);
			this->btnAbrirArchivo->Size = System::Drawing::Size(251, 50);
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
			this->pnlLogo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlLogo->Name = L"pnlLogo";
			this->pnlLogo->Size = System::Drawing::Size(251, 153);
			this->pnlLogo->TabIndex = 0;
			this->pnlLogo->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FrontEnd::pnlLogo_Paint);
			// 
			// pnlReproductor
			// 
			this->pnlReproductor->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pnlReproductor->Controls->Add(this->lblReproductor);
			this->pnlReproductor->Controls->Add(this->btnNext);
			this->pnlReproductor->Controls->Add(this->btnPlay);
			this->pnlReproductor->Controls->Add(this->btnBack);
			this->pnlReproductor->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pnlReproductor->Location = System::Drawing::Point(251, 557);
			this->pnlReproductor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlReproductor->Name = L"pnlReproductor";
			this->pnlReproductor->Size = System::Drawing::Size(1074, 92);
			this->pnlReproductor->TabIndex = 1;
			// 
			// lblReproductor
			// 
			this->lblReproductor->AutoSize = true;
			this->lblReproductor->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblReproductor->ForeColor = System::Drawing::Color::White;
			this->lblReproductor->Location = System::Drawing::Point(353, 22);
			this->lblReproductor->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblReproductor->Name = L"lblReproductor";
			this->lblReproductor->Size = System::Drawing::Size(170, 23);
			this->lblReproductor->TabIndex = 13;
			this->lblReproductor->Text = L"Reproduciendo:";
			// 
			// btnNext
			// 
			this->btnNext->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->btnNext->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnNext.BackgroundImage")));
			this->btnNext->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnNext->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnNext->FlatAppearance->BorderSize = 0;
			this->btnNext->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->btnNext->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->btnNext->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNext->Location = System::Drawing::Point(221, 22);
			this->btnNext->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(75, 57);
			this->btnNext->TabIndex = 2;
			this->btnNext->UseVisualStyleBackColor = false;
			this->btnNext->Click += gcnew System::EventHandler(this, &FrontEnd::btnNext_Click);
			// 
			// btnPlay
			// 
			this->btnPlay->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->btnPlay->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPlay.BackgroundImage")));
			this->btnPlay->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnPlay->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPlay->FlatAppearance->BorderSize = 0;
			this->btnPlay->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->btnPlay->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->btnPlay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPlay->Location = System::Drawing::Point(129, 22);
			this->btnPlay->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnPlay->Name = L"btnPlay";
			this->btnPlay->Size = System::Drawing::Size(77, 57);
			this->btnPlay->TabIndex = 1;
			this->btnPlay->UseVisualStyleBackColor = false;
			this->btnPlay->Click += gcnew System::EventHandler(this, &FrontEnd::button6_Click);
			// 
			// btnBack
			// 
			this->btnBack->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->btnBack->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBack.BackgroundImage")));
			this->btnBack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnBack->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnBack->FlatAppearance->BorderSize = 0;
			this->btnBack->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->btnBack->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->btnBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBack->Location = System::Drawing::Point(37, 22);
			this->btnBack->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(75, 57);
			this->btnBack->TabIndex = 0;
			this->btnBack->UseVisualStyleBackColor = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &FrontEnd::btnBack_Click_2);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(28, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(371, 45);
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
			this->lbPlaylist->ItemHeight = 21;
			this->lbPlaylist->Location = System::Drawing::Point(517, 117);
			this->lbPlaylist->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->lbPlaylist->Name = L"lbPlaylist";
			this->lbPlaylist->Size = System::Drawing::Size(555, 168);
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
			this->lbCola->ItemHeight = 21;
			this->lbCola->Location = System::Drawing::Point(12, 83);
			this->lbCola->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->lbCola->Name = L"lbCola";
			this->lbCola->Size = System::Drawing::Size(195, 378);
			this->lbCola->TabIndex = 5;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->panel1->Controls->Add(this->btnSync);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->lbCola);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(1106, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(219, 557);
			this->panel1->TabIndex = 0;
			// 
			// btnSync
			// 
			this->btnSync->BackColor = System::Drawing::Color::Transparent;
			this->btnSync->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSync->ForeColor = System::Drawing::Color::White;
			this->btnSync->Location = System::Drawing::Point(40, 488);
			this->btnSync->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnSync->Name = L"btnSync";
			this->btnSync->Size = System::Drawing::Size(144, 43);
			this->btnSync->TabIndex = 13;
			this->btnSync->Text = L"Sincronizar";
			this->btnSync->UseVisualStyleBackColor = false;
			this->btnSync->Click += gcnew System::EventHandler(this, &FrontEnd::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(36, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 44);
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
			this->panel2->Location = System::Drawing::Point(251, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(855, 81);
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
			this->tbPath->Location = System::Drawing::Point(517, 295);
			this->tbPath->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbPath->Name = L"tbPath";
			this->tbPath->ReadOnly = true;
			this->tbPath->Size = System::Drawing::Size(555, 15);
			this->tbPath->TabIndex = 6;
			// 
			// rdbArtistaAscendente
			// 
			this->rdbArtistaAscendente->AutoSize = true;
			this->rdbArtistaAscendente->ForeColor = System::Drawing::Color::White;
			this->rdbArtistaAscendente->Location = System::Drawing::Point(288, 222);
			this->rdbArtistaAscendente->Margin = System::Windows::Forms::Padding(4);
			this->rdbArtistaAscendente->Name = L"rdbArtistaAscendente";
			this->rdbArtistaAscendente->Size = System::Drawing::Size(148, 21);
			this->rdbArtistaAscendente->TabIndex = 7;
			this->rdbArtistaAscendente->TabStop = true;
			this->rdbArtistaAscendente->Text = L"Artista Ascendente";
			this->rdbArtistaAscendente->UseVisualStyleBackColor = true;
			// 
			// rdbArtistaDescendente
			// 
			this->rdbArtistaDescendente->AutoSize = true;
			this->rdbArtistaDescendente->ForeColor = System::Drawing::Color::White;
			this->rdbArtistaDescendente->Location = System::Drawing::Point(288, 261);
			this->rdbArtistaDescendente->Margin = System::Windows::Forms::Padding(4);
			this->rdbArtistaDescendente->Name = L"rdbArtistaDescendente";
			this->rdbArtistaDescendente->Size = System::Drawing::Size(157, 21);
			this->rdbArtistaDescendente->TabIndex = 8;
			this->rdbArtistaDescendente->TabStop = true;
			this->rdbArtistaDescendente->Text = L"Artista Descendente";
			this->rdbArtistaDescendente->UseVisualStyleBackColor = true;
			// 
			// rdbCancionAscendente
			// 
			this->rdbCancionAscendente->AutoSize = true;
			this->rdbCancionAscendente->ForeColor = System::Drawing::Color::White;
			this->rdbCancionAscendente->Location = System::Drawing::Point(288, 300);
			this->rdbCancionAscendente->Margin = System::Windows::Forms::Padding(4);
			this->rdbCancionAscendente->Name = L"rdbCancionAscendente";
			this->rdbCancionAscendente->Size = System::Drawing::Size(159, 21);
			this->rdbCancionAscendente->TabIndex = 9;
			this->rdbCancionAscendente->TabStop = true;
			this->rdbCancionAscendente->Text = L"Cancion Ascendente";
			this->rdbCancionAscendente->UseVisualStyleBackColor = true;
			// 
			// rdbCancionDescendente
			// 
			this->rdbCancionDescendente->AutoSize = true;
			this->rdbCancionDescendente->ForeColor = System::Drawing::Color::White;
			this->rdbCancionDescendente->Location = System::Drawing::Point(288, 340);
			this->rdbCancionDescendente->Margin = System::Windows::Forms::Padding(4);
			this->rdbCancionDescendente->Name = L"rdbCancionDescendente";
			this->rdbCancionDescendente->Size = System::Drawing::Size(168, 21);
			this->rdbCancionDescendente->TabIndex = 10;
			this->rdbCancionDescendente->TabStop = true;
			this->rdbCancionDescendente->Text = L"Cancion Descendente";
			this->rdbCancionDescendente->UseVisualStyleBackColor = true;
			// 
			// lblOrdenar
			// 
			this->lblOrdenar->AutoSize = true;
			this->lblOrdenar->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblOrdenar->ForeColor = System::Drawing::Color::White;
			this->lblOrdenar->Location = System::Drawing::Point(283, 166);
			this->lblOrdenar->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblOrdenar->Name = L"lblOrdenar";
			this->lblOrdenar->Size = System::Drawing::Size(92, 23);
			this->lblOrdenar->TabIndex = 14;
			this->lblOrdenar->Text = L"Ordenar";
			// 
			// lblPlaylist
			// 
			this->lblPlaylist->AutoSize = true;
			this->lblPlaylist->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPlaylist->ForeColor = System::Drawing::Color::White;
			this->lblPlaylist->Location = System::Drawing::Point(513, 92);
			this->lblPlaylist->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPlaylist->Name = L"lblPlaylist";
			this->lblPlaylist->Size = System::Drawing::Size(155, 23);
			this->lblPlaylist->TabIndex = 15;
			this->lblPlaylist->Text = L"Playlist Actual";
			// 
			// lbPlaylistOriginal
			// 
			this->lbPlaylistOriginal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)),
				static_cast<System::Int32>(static_cast<System::Byte>(106)), static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->lbPlaylistOriginal->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lbPlaylistOriginal->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPlaylistOriginal->ForeColor = System::Drawing::Color::White;
			this->lbPlaylistOriginal->FormattingEnabled = true;
			this->lbPlaylistOriginal->ItemHeight = 21;
			this->lbPlaylistOriginal->Location = System::Drawing::Point(517, 363);
			this->lbPlaylistOriginal->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->lbPlaylistOriginal->Name = L"lbPlaylistOriginal";
			this->lbPlaylistOriginal->Size = System::Drawing::Size(555, 168);
			this->lbPlaylistOriginal->TabIndex = 16;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(513, 328);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(173, 23);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Playlist Original";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(337, 438);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 43);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Sincronizar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FrontEnd::button1_Click_1);
			// 
			// FrontEnd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(68)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->ClientSize = System::Drawing::Size(1325, 649);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->lbPlaylistOriginal);
			this->Controls->Add(this->lblPlaylist);
			this->Controls->Add(this->lblOrdenar);
			this->Controls->Add(this->rdbCancionDescendente);
			this->Controls->Add(this->rdbCancionAscendente);
			this->Controls->Add(this->rdbArtistaDescendente);
			this->Controls->Add(this->rdbArtistaAscendente);
			this->Controls->Add(this->tbPath);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->lbPlaylist);
			this->Controls->Add(this->pnlReproductor);
			this->Controls->Add(this->pnlLateral);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"FrontEnd";
			this->Opacity = 0.98;
			this->ShowIcon = false;
			this->Text = L"Music Festival";
			this->TransparencyKey = System::Drawing::Color::Silver;
			this->pnlLateral->ResumeLayout(false);
			this->pnlLateral->PerformLayout();
			this->pnlSubMenu->ResumeLayout(false);
			this->pnlReproductor->ResumeLayout(false);
			this->pnlReproductor->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		void Swap(Nodo^ nodo1, Nodo^ nodo2) {
			String^ name = nodo1->name;
			String^ artista = nodo1->artist;
			nodo1->name = nodo2->name;
			nodo2->name = name;
			nodo1->artist = nodo2->artist;
			nodo2->artist = artista;
		}

		bool rdbCheck() {
			if (rdbArtistaAscendente->Checked || rdbArtistaDescendente->Checked || rdbCancionAscendente->Checked || rdbCancionDescendente->Checked)
			{
				return true;
			}
			return false;
		}
		void pasarAPlaylist() {
			while (!colaReproduccion->IsEmpty())
			{
				String^ nombreCancion = colaReproduccion->GetNombre(0);
				String^ nombreArtista = colaReproduccion->GetArtista(0);
				playlist->PushTo(nombreArtista, nombreCancion);
				colaReproduccion->Pop();
			}
			if (rdbCheck())
			{
				BubbleSort(playlist);
			}
		}

		void unknowVerified(Pila^ playlistOrdenada) {
			int items = playlistOrdenada->Count();
			Nodo^ nodoActual = playlistOrdenada->head;
			while (nodoActual != nullptr)
			{
				if (nodoActual->artist=="Desconocido")
				{
					MessageBox::Show("Selecciona una opcion para poder ordenar.",
						"Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Exclamation);
				}
				else {
					MessageBox::Show("Selecciona una opcion para poder ordenar.",
						"Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Exclamation);
				}
				nodoActual = nodoActual->next;
			}
		}

		void BubbleSort(Pila^ playlistBubble) {
			int swapped;
			Nodo^ izquierda;
			Nodo^ derecha = playlistBubble->tail->next;
			do
			{
				swapped = 0;
				izquierda = playlistBubble->head;
				while (izquierda->next != derecha)
				{
					if (rdbArtistaAscendente->Checked)
					{
						if (izquierda->artist[0] > izquierda->next->artist[0])
						{
							Swap(izquierda, izquierda->next);
							swapped = 1;
						}
						if (izquierda->artist == "desconocido")
						{
							Swap(izquierda, izquierda->next);
							swapped = 1;
						}
						izquierda = izquierda->next;
					}
					else if (rdbArtistaDescendente->Checked)
					{
						if (izquierda->artist[0] < izquierda->next->artist[0])
						{
							Swap(izquierda->next, izquierda);
							swapped = 1;
						}
						if (izquierda->artist == "desconocido")
						{
							Swap(izquierda, izquierda->next);
							swapped = 1;
						}
						izquierda = izquierda->next;
					}
					else if (rdbCancionAscendente->Checked)
					{
						if (izquierda->name[0] > izquierda->next->name[0])
						{
							Swap(izquierda->next, izquierda);
							swapped = 1;
						}
						izquierda = izquierda->next;
					}
					else if (rdbCancionDescendente->Checked)
					{
						if (izquierda->name[0] < izquierda->next->name[0])
						{
							Swap(izquierda->next, izquierda);
							swapped = 1;
						}
						izquierda = izquierda->next;
					}
				}
				derecha = izquierda;
			} while (swapped);
		}


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
										playlistOriginal->PushTo("Desconocido", cancion[0]);
										playlist->PushTo("Desconocido", cancion[0]);
									}
									else {
										playlistOriginal->PushTo(cancion[1], cancion[0]);
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
					meterAListBoxPila(lbPlaylistOriginal, playlistOriginal);

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
					int contadorPosiciones = 0;
					int contadorColumnas = 0;
					String^ lineas = "";
					
					while (contadorPosiciones < playlist->Count())
					{
						if (contadorColumnas < cantidadColumnas - 1)
						{
							lineas += "" + playlist->GetNombre(contadorPosiciones) + "-" + playlist->GetArtista(contadorPosiciones) + ",";
						}
						else {
							lineas += "" + playlist->GetNombre(contadorPosiciones) + "-" + playlist->GetArtista(contadorPosiciones) + "\r\n";
							contadorColumnas = 0;
						}
						contadorColumnas++;
						contadorPosiciones++;
					}
					File::WriteAllText(saveFileDialog1->FileName, lineas);
					MessageBox::Show("Archivo guardado exitosamente"
						, "Operacion Realizada"
						, MessageBoxButtons::OK
						, MessageBoxIcon::Information);
				}
			}
			else {
				MessageBox::Show("La playlist no se puede guardar porque esta vacia",
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
					tbCancion->Text = "";
					tbArtista->Text = "";
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
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void btnOrdenar_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (rdbCheck())
		{
			//Se verifica que se haya seleccionado una opción de ordenamiento.
			BubbleSort(playlist);
			unknowVerified(playlist);
			meterAListBoxPila(lbPlaylist, playlist);
		}
		else {
			MessageBox::Show("Selecciona una opcion para poder ordenar.",
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Exclamation);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("No se puede ordenar la playlist",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Error);
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (!colaReproduccion->IsEmpty())
		{
			String^ nombre = colaReproduccion->GetNombre(posicionCola);
			String^ artista = colaReproduccion->GetArtista(posicionCola);

			lblReproductor->Text = "Reproduciendo: " + nombre + "-" + artista;

			colaReproduccion->PopAt(posicionCola);
			meterAListBoxCola(lbCola, colaReproduccion);
		}
		else {
			lblReproductor->Text = "Aun no hay ninguna cancion";
			MessageBox::Show("La cola de reproducción esta vacia",
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Exclamation);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("No se puede reproducir la cancion",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Exclamation);
	}

}
private: System::Void btnNext_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (!colaReproduccion->IsEmpty())
		{
			posicionCola++;
			if (posicionCola > colaReproduccion->Count() - 1)
			{
				posicionCola = 0;
			}
			String ^ textoLabel ="Reproduciendo: " + colaReproduccion->GetNombre(posicionCola) + "-" + colaReproduccion->GetArtista(posicionCola);
			lblReproductor->Text = textoLabel;
		}
		else {
			MessageBox::Show("No se pudo cambiar a la siguiente cancion porque no hay canciones",
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("No se pudo cambiar a la siguiente cancion",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Error);
	}
}
private: System::Void btnBorrar_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (!colaReproduccion->IsEmpty())
		{
			posicionCola--;
			if (posicionCola < 0)
			{
				posicionCola = colaReproduccion->Count() - 1;
			}
			
			String^ textoLabel = "Reproduciendo: " + colaReproduccion->GetNombre(posicionCola) + "-" + colaReproduccion->GetArtista(posicionCola);
			lblPrevisualizar->Text = textoLabel;
		}
		else {
			MessageBox::Show("La cola de reproducción esta vacia",
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("No se pudo reproducir la cancion anterior",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Error);
	}
}
private: System::Void btnReproducirPlaylist_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void pnlSubMenu_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void btnBack_Click_1(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void pnlLogo_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void btnBack_Click_2(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (!colaReproduccion->IsEmpty())
		{
			posicionCola--;
			if (posicionCola < 0)
			{
				//Se cambia el valor de la posici�n por el de la cantidad de elementos, va al final
				posicionCola = colaReproduccion->Count() - 1;
			}
			String^ mensaje = "Previsualizando: " + colaReproduccion->GetNombre(posicionCola) + "-" + colaReproduccion->GetArtista(posicionCola);
			lblReproductor->Text = mensaje;
		}
		else {
			MessageBox::Show("La cola de reproduccion esta vacia",
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Exclamation);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("No se pudo regresar a la cancion anterior",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Error);
	}




}
private: System::Void btnPlayPlaylist_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (!playlist->IsEmpty())
		{
			String^ nombreCancion = playlist->GetNombre(0);
			String^ nombreArtista = playlist->GetArtista(0);

			lblReproductor->Text = "Reproduciendo: " + nombreCancion + " - " + nombreArtista;
			playlist->Pop();
			meterAListBoxPila(lbPlaylist, playlist);
		}
		else {
			if (!colaReproduccion->IsEmpty())
			{
				pasarAPlaylist();
				meterAListBoxPila(lbPlaylist, playlist);
				meterAListBoxCola(lbCola, colaReproduccion);
			}
			else {
				MessageBox::Show("No se pudo reproducir algo, porque la playlist y la cola de reproduccion estan vacias",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
			}
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("No se pudo reproducir la cancion",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Error);
	}
}
private: System::Void btnBorrarCancion_Click(System::Object^ sender, System::EventArgs^ e) {
	
	try
	{
		if (!colaReproduccion->IsEmpty())
		{
			colaReproduccion->PopAt(posicionCola);
			meterAListBoxCola(lbCola, colaReproduccion);
			lblReproductor->Text = "";
		}
		else {
			MessageBox::Show("La fila de reproducción esta vacia",
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Exclamation);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("No se pudo borrar la cancion",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Exclamation);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	pasarAPlaylist();
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	unknowVerified(playlistOriginal);
}
};
}

