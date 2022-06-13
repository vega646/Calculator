#include "ButtonFactory.h"
#include <vector>
#include "wx/wx.h"
#include "cMain.h"
#include <string>

//ButtonFactory::ButtonFactory(cMain* _frame)
//{

//}

void ButtonFactory::CreateButton(wxGridSizer *x, cMain* p, int f, wxString o)
{
	x->Add(new wxButton(p, f, o), 0, wxEXPAND);	
}
