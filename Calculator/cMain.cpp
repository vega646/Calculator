#include "cMain.h"
#include <iostream>
#include "ButtonFactory.h"


wxBEGIN_EVENT_TABLE(cMain, wxFrame)
EVT_BUTTON(0, cMain::OnButtonClicked)
EVT_BUTTON(1, cMain::OnButtonClicked)
EVT_BUTTON(2, cMain::OnButtonClicked)
EVT_BUTTON(3, cMain::OnButtonClicked)
EVT_BUTTON(4, cMain::OnButtonClicked)
EVT_BUTTON(5, cMain::OnButtonClicked)
EVT_BUTTON(6, cMain::OnButtonClicked)
EVT_BUTTON(7, cMain::OnButtonClicked)
EVT_BUTTON(8, cMain::OnButtonClicked)
EVT_BUTTON(9, cMain::OnButtonClicked)
EVT_BUTTON(10, cMain::OnButtonClicked)
EVT_BUTTON(11, cMain::OnButtonClicked)
EVT_BUTTON(12, cMain::OnButtonClicked)
EVT_BUTTON(13, cMain::OnButtonClicked)
EVT_BUTTON(14, cMain::OnButtonClicked)
EVT_BUTTON(15, cMain::OnButtonClicked)
EVT_BUTTON(16, cMain::OnButtonClicked)
EVT_BUTTON(17, cMain::OnButtonClicked)
EVT_BUTTON(18, cMain::OnButtonClicked)
EVT_BUTTON(19, cMain::OnButtonClicked)
EVT_BUTTON(20, cMain::OnButtonClicked)
EVT_BUTTON(21, cMain::OnButtonClicked)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Estela's Calculator", wxPoint(-1, -1), wxSize(600, 550))
{
	ButtonFactory factory;
	gs = new wxGridSizer(5, 5, 3, 3);

	sizer = new wxBoxSizer(wxVERTICAL);

	display = new wxTextCtrl(this, -1, wxT(""), wxPoint(-1, -1),
		wxSize(100, 100), wxTE_RIGHT);

	sizer->Add(display, 0, wxEXPAND | wxTOP | wxBOTTOM, 4);
	int id[22]{ 17, 18, 19, 20, 21,7, 8, 9, 16, 4, 5, 6, 15, 1, 2, 3, 14, 13, 0, 11, 10 };
	wxString label[22]{ "Make negative", "hex", "dec", "bin", "mod", "7", "8", "9", "/", "*", "5", "6", "4", "c", "-", "1", "2", "3", "+", "=", "0"};

	for (int i = 0; i < 22; i++)
	{
		factory.CreateButton(gs, this, id[i], label[i]);
	}

	sizer->Add(gs, 1, wxEXPAND); 
	this->SetSizer(sizer);

}

cMain::~cMain()
{

}

void cMain::OnButtonClicked(wxCommandEvent& evt)
{
	int id = evt.GetId();

	switch (id)
	{
	case 0:
	{
		display->AppendText("+");
		break;
	}
	case 1:
	{
		display->AppendText("c");
		break;
	}
	case 2:
	{
		display->AppendText("-");
		break;
	}
	case 3:
	{
		display->AppendText("1");
		break;
	}
	case 4:
	{
		display->AppendText("*");
		break;
	}
	case 5:
	{
		display->AppendText("5");
		break;
	}
	case 6:
	{
		display->AppendText("6");
		break;
	}
	case 7:
	{
		display->AppendText("7");
		break;
	}
	case 8:
	{
		display->AppendText("8");
		break;
	}
	case 9:
	{
		display->AppendText("9");
		break;
	}
	case 10:
	{
		display->AppendText("0");
		//+
		break;
	}
	case 11:
	{
		display->AppendText("=");
		//=
		break;
	}
	case 12:
	{
		//textctrl
		break;
	}
	case 13:
	{
		display->AppendText("3");
		//c
		break;
	}
	case 14:
	{
		display->AppendText("2");
		//-
		break;
	}
	case 15:
	{
		display->AppendText("4");
		//*
		break;
	}
	case 16:
	{
		display->AppendText("/");
		// /
		break;
	}
	case 17:
	{
		//make n
		break;
	}
	case 18:
	{
		display->AppendText("hex");

		//hex
		break;
	}
	case 19:
	{
		display->AppendText("dec");

		//dec 
		break;
	}
	case 20:
	{
		display->AppendText("bin");

		//bin 
		break;
	}
	case 21:
	{
		display->AppendText("mod");

		//mod
		break;
	}

	}
	//evt.GetEventobject // cast// wxbutton // getlabel


	evt.Skip();

}
