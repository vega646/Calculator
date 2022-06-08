#include "cMain.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Estela's Calculator", wxPoint(30, 30), wxSize(800, 600))
{
	b = new wxButton * [w * h];
	wxGridSizer* gs = new wxGridSizer(4, 4, 3, 3);
	

	nf = new int[w * h];

	wxFont font(24, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);

	
	gs->Add(new wxButton(this, -1, wxT("Make\n negative")), 0, wxEXPAND);
	gs->Add(new wxStaticText(this, -1, wxT("")), 0, wxEXPAND);
	gs->Add(new wxStaticText(this, -1, wxT("")), 0, wxEXPAND);;
	gs->Add(new wxTextCtrl(this, -1, wxT("Enter number...")), 0, wxEXPAND);
	gs->Add(new wxButton(this, -1, wxT("hex")), 0, wxEXPAND); 
	gs->Add(new wxButton(this, -1, wxT("dec")), 0, wxEXPAND);
	gs->Add(new wxButton(this, -1, wxT("bin")), 0, wxEXPAND);
	gs->Add(new wxButton(this, -1, wxT("mod")), 0, wxEXPAND);
	gs->Add(new wxButton(this, -1, wxT("7")), 0, wxEXPAND);
	gs->Add(new wxButton(this, -1, wxT("8")), 0, wxEXPAND);
	gs->Add(new wxButton(this, -1, wxT("9")), 0, wxEXPAND);
	gs->Add(new wxButton(this, -1, wxT("/")), 0, wxEXPAND);
	gs->Add(new wxButton(this, -1, wxT("4")), 0, wxEXPAND);
	gs->Add(new wxButton(this, -1, wxT("5")), 0, wxEXPAND);
	gs->Add(new wxButton(this, -1, wxT("6")), 0, wxEXPAND);
	gs->Add(new wxButton(this, -1, wxT("*")), 0, wxEXPAND);
	gs->Add(new wxButton(this, -1, wxT("1")), 0, wxEXPAND);
	gs->Add(new wxButton(this, -1, wxT("2")), 0, wxEXPAND);
	gs->Add(new wxButton(this, -1, wxT("3")), 0, wxEXPAND);
	gs->Add(new wxButton(this, -1, wxT("-")), 0, wxEXPAND);
	gs->Add(new wxButton(this, -1, wxT(".")), 0, wxEXPAND);
	gs->Add(new wxButton(this, -1, wxT("0")), 0, wxEXPAND);
	gs->Add(new wxButton(this, -1, wxT("=")), 0, wxEXPAND);
	gs->Add(new wxButton(this, -1, wxT("+")), 0, wxEXPAND);

	this->SetSizer(gs);
	gs->Layout();

}

cMain::~cMain()
{
	delete[]b;
}

void cMain::OnButtonClicked(wxCommandEvent& evt)
{
	int x = (evt.GetId() - 10000) % w;
	int y = (evt.GetId() - 10000) / w;


if (fc)
{
	int mines = 30;

	while (mines)
	{
		int rx = rand() % w;
		int ry = rand() % h;

		if (nf[ry * w + rx] == 0 && rx != x && ry != y)
		{
			nf[ry * w + rx] = -1;
			mines--;
		}

	}
	fc = false;
}

b[y * w + x]->Enable(false);

if (nf[y * w + x] == -1)
{
	wxMessageBox("GAME OVER!");
	fc = true;

	for (int i = 0; i < w; i++)
	{
		for (int y = 0; y < h; y++)
		{
			nf[y * w + i] = 0;
			b[y * w + i]->SetLabel("");
			b[y * w + i]->Enable(true);
		}
	}
}
else
{
	int count = 0;

	for (int o = -1; o < 2; o++)
	{
		for (int u = -1; u < 2; u++)
		{
			if (x + o >= 0 && x + o < w && y + u >= 0 && y + u < h)
			{
				if (nf[(y + u) * w + (x + o)] == -1)
				{
					count++;
				}
			}
		}

		if (count > 0)
		{
			b[y * w + x]->SetLabel(std::to_string(count));
		}

	}
}


evt.Skip();
	
}
