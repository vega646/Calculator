#include "cMain.h"

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

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Estela's Calculator", wxPoint(30, 30), wxSize(800, 600))
{
	wxGridSizer* gs = new wxGridSizer(4, 4, 3, 3);

	gs->Add(new wxButton(this, 17, wxT("Make\n negative")), 0, wxEXPAND);
	gs->Add(new wxStaticText(this, -1, wxT("")), 0, wxEXPAND);
	gs->Add(new wxStaticText(this, -1, wxT("")), 0, wxEXPAND);
	gs->Add(tb, 0, wxEXPAND);
	gs->Add(new wxButton(this, 18, wxT("hex")), 0, wxEXPAND);
	gs->Add(new wxButton(this, 19, wxT("dec")), 0, wxEXPAND);
	gs->Add(new wxButton(this, 20, wxT("bin")), 0, wxEXPAND);
	gs->Add(new wxButton(this, 21, wxT("mod")), 0, wxEXPAND);
	gs->Add(new wxButton(this, 7, wxT("7")), 0, wxEXPAND);
	gs->Add(new wxButton(this, 8, wxT("8")), 0, wxEXPAND);
	gs->Add(new wxButton(this, 9, wxT("9")), 0, wxEXPAND);
	gs->Add(new wxButton(this, 16, wxT("/")), 0, wxEXPAND);
	gs->Add(new wxButton(this, 4, wxT("4")), 0, wxEXPAND);
	gs->Add(new wxButton(this, 5, wxT("5")), 0, wxEXPAND);
	gs->Add(new wxButton(this, 6, wxT("6")), 0, wxEXPAND);
	gs->Add(new wxButton(this, 15, wxT("*")), 0, wxEXPAND);
	gs->Add(new wxButton(this, 1, wxT("1")), 0, wxEXPAND);
	gs->Add(new wxButton(this, 2, wxT("2")), 0, wxEXPAND);
	gs->Add(new wxButton(this, 3, wxT("3")), 0, wxEXPAND);
	gs->Add(new wxButton(this, 14, wxT("-")), 0, wxEXPAND);
	gs->Add(new wxButton(this, 13, wxT("c")), 0, wxEXPAND);
	gs->Add(new wxButton(this, 0, wxT("0")), 0, wxEXPAND);
	gs->Add(new wxButton(this, 11, wxT("=")), 0, wxEXPAND);
	gs->Add(new wxButton(this, 10, wxT("+")), 0, wxEXPAND);


	this->SetSizer(gs);
	gs->Layout();

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
		tb->AppendText("0");
		break;
	}
	case 1:
	{
		tb->AppendText("1");
		break;
	}
	case 2:
	{
		tb->AppendText("2");
		break;
	}
	case 3:
	{
		tb->AppendText("3");
		break;
	}
	case 4:
	{
		tb->AppendText("4");
		break;
	}
	case 5:
	{
		tb->AppendText("5");
		break;
	}
	case 6:
	{
		tb->AppendText("6");
		break;
	}
	case 7:
	{
		tb->AppendText("7");
		break;
	}
	case 8:
	{
		tb->AppendText("8");
		break;
	}
	case 9:
	{
		tb->AppendText("9");
		break;
	}
	case 10:
	{
		tb->AppendText("+");
		//+
		break;
	}
	case 11:
	{
		tb->AppendText("=");
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
		tb->AppendText("c");
		//c
		break;
	}
	case 14:
	{
		tb->AppendText("-");
		//-
		break;
	}
	case 15:
	{
		tb->AppendText("*");
		//*
		break;
	}
	case 16:
	{
		tb->AppendText("/");
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
		tb->AppendText("hex");

		//hex
		break;
	}
	case 19:
	{
		tb->AppendText("dec");

		//dec 
		break;
	}
	case 20:
	{
		tb->AppendText("bin");

		//bin 
		break;
	}
	case 21:
	{
		tb->AppendText("mod");

		//mod
		break;
	}

	}
	//evt.GetEventobject // cast// wxbutton // getlabel


	evt.Skip();

}
