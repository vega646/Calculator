#include "pch.h"
#include "CppUnitTest.h"
#include "../Calculator/ButtonFactory.h"
#include "../Calculator/Processor.h"
#include "../Calculator/cMain.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			wxGridSizer* i = new wxGridSizer(1,1 ,2,2);
			cMain m;
			int y=0;
			wxString o;
			ButtonFactory bf;
			bf.CreateButton(i, &m, y, o);

			Assert::AreEqual((int)i->GetItemCount(), 1);

		}

		TEST_METHOD(TestMethod162)
		{
			int y = 0;
			cMain m;
			Processor* p = Processor::GetInstance();
			wxTextCtrl* x = new wxTextCtrl(&m, -1, wxT(""), wxPoint(-1, -1),
				wxSize(100, 100), wxTE_RIGHT);
			p->GetData("7", y);
			x->SetValue("7+");

			p->DoOps("12", x);

			Assert::AreEqual("19", p->result.c_str());

		}

		TEST_METHOD(TestMethod142)
		{
			int y = 0;
			cMain m;
			Processor* p = Processor::GetInstance();
			wxTextCtrl* x = new wxTextCtrl(&m, -1, wxT(""), wxPoint(-1, -1),
				wxSize(100, 100), wxTE_RIGHT);
			p->GetData("3", y);
			x->SetValue("3*");

			p->DoOps("12", x);

			Assert::AreEqual("36", p->result.c_str());

		}
		TEST_METHOD(TestMethod11512)
		{
			int y = 0;
			cMain m;
			Processor* p = Processor::GetInstance();
			wxTextCtrl* x = new wxTextCtrl(&m, -1, wxT(""), wxPoint(-1, -1),
				wxSize(100, 100), wxTE_RIGHT);
			p->GetData("30", y);
			x->SetValue("30-");

			p->DoOps("10", x);

			Assert::AreEqual("20", p->result.c_str());

		}

		TEST_METHOD(TestMethod12)
		{
			int y = 0;
			cMain m;
			Processor* p = Processor::GetInstance();
			wxTextCtrl* x = new wxTextCtrl(&m, -1, wxT(""), wxPoint(-1, -1),
				wxSize(100, 100), wxTE_RIGHT);
			p->GetData("3", y);
			x->SetValue("3+");

			p->DoOps("1",x);

			Assert::AreEqual("4", p->result.c_str());

		}

		TEST_METHOD(TestMethod1112)
		{
			int y = 0;
			cMain m;
			Processor* p = Processor::GetInstance();
			wxTextCtrl* x = new wxTextCtrl(&m, -1, wxT(""), wxPoint(-1, -1),
				wxSize(100, 100), wxTE_RIGHT);
			p->GetData("4", y);
			x->SetValue("4-");

			p->DoOps("1", x);

			Assert::AreEqual("3", p->result.c_str());

		}

		TEST_METHOD(TestMethod123)
		{
			int y = 0;
			cMain m;
			Processor* p = Processor::GetInstance();
			wxTextCtrl* x = new wxTextCtrl(&m, -1, wxT(""), wxPoint(-1, -1),
				wxSize(100, 100), wxTE_RIGHT);
			p->GetData("6", y);
			x->SetValue("6/");

			p->DoOps("1", x);

			Assert::AreEqual("6", p->result.c_str());

		}

		TEST_METHOD(TestMethod124)
		{
			int y = 0;
			cMain m;
			Processor* p = Processor::GetInstance();
			wxTextCtrl* x = new wxTextCtrl(&m, -1, wxT(""), wxPoint(-1, -1),
				wxSize(100, 100), wxTE_RIGHT);
			p->GetData("3", y);
			x->SetValue("3*");

			p->DoOps("1", x);

			Assert::AreEqual("3", p->result.c_str());

		}

		TEST_METHOD(TestMethod12665)
		{
			int y = 0;
			cMain m;
			Processor* p = Processor::GetInstance();
			wxTextCtrl* x = new wxTextCtrl(&m, -1, wxT(""), wxPoint(-1, -1),
				wxSize(100, 100), wxTE_RIGHT);
			p->GetData("38", y);
			x->SetValue("38/");

			p->DoOps("2", x);

			Assert::AreEqual("19", p->result.c_str());

		}


		TEST_METHOD(TestMethod12666)
		{
			int y = 0;
			cMain m;
			Processor* p = Processor::GetInstance();
			wxTextCtrl* x = new wxTextCtrl(&m, -1, wxT(""), wxPoint(-1, -1),
				wxSize(100, 100), wxTE_RIGHT);
			p->GetData("41", y);
			x->SetValue("41+");

			p->DoOps("1", x);

			Assert::AreEqual("42", p->result.c_str());

		}
	};
}
