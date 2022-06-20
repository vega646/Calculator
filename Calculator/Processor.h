#pragma once
#include <iostream>
#include <string>
#include "wx\wx.h"

using namespace std;


class Processor
{
private:
	Processor() {};
	static Processor* _processor;


public:

	string result;
	double num1;
	double num2;

	static Processor* GetInstance()
	{
		if (_processor == nullptr)
		{
			_processor = new Processor();
		}

		return _processor;
	}

	Processor(Processor& other) = delete; // copy const
	void operator=(const Processor& other) = delete; //asignment op

	void GetData(string x, int &count)
	{
		count++;

		if (count % 2 != 0)
		{
			Processor::num1 = stod(x);
		}
	}

	double GetSum()
	{
		return Processor::num1 + Processor::num2;
	}

	double GetMult()
	{
		return Processor::num1 * Processor::num2;
	}

	double GetDiv()
	{
		return Processor::num1 / Processor::num2;
	}

	double GetSub()
	{
		return Processor::num1 - Processor::num2;
	}

	void Equals( wxTextCtrl* t)
	{
		t->Clear();
		t->AppendText(result);
	}

	string DoOps(string t, wxTextCtrl* x)
	{
		

		string p;
		p = x->GetValue();

		char c = '+';
		char i = '-';
		char w = '*';
		char z = '/';

		if (p.find(c) != string::npos)
		{
			Processor::num2 = stod(t);
			return Processor::result = to_string(GetSum());
		}
		else if (p.find(i) != string::npos)
		{
			Processor::num2 = stod(t);
			return Processor::result = to_string(GetSub());
		}

		else if (p.find(w) != string::npos)
		{
			Processor::num2 = stod(t);
			return Processor::result = to_string(GetMult());
		}
		else if (p.find(z) != string::npos)
		{
			Processor::num2 = stod(t);
			return Processor::result = to_string(GetDiv());
		}
		return "";
	}

};
Processor* Processor::_processor = nullptr;

