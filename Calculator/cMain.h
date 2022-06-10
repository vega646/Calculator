#pragma once
#include "wx/wx.h"

class cMain : public wxFrame
{
public:

	cMain();
	~cMain();

public:

	int w = 4;
	int h = 5;
	wxButton** b;

	wxTextCtrl* tb = new wxTextCtrl(this, 12, wxT("Enter number..."));
	void OnButtonClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();

};

