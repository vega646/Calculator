#pragma once
#include "cMain.h"
#include <iostream>
#include <string>
#include "wx/wx.h"

class ButtonFactory
{
public:
	void CreateButton(wxGridSizer* x, cMain* p, int f, wxString o);
};

