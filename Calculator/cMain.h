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

	int* nf = nullptr;
	bool fc = true;

	void OnButtonClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();

};

