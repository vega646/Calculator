#pragma once
#include <iostream>
#include <string>
#include "wx\wx.h"
#include "IBaseCommand.h"
#include "SumCommand.h"
#include "DivisionCommand.h"
#include "MultiplicationCommand.h"
#include "SubtractionCommand.h"

using namespace std;


class Processor : public IBaseCommand
{
private:
	Processor() {};
	


public:

	static Processor* _processor;
	vector<IBaseCommand*> commands;

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

	void SetData(int answer)
	{
		result = to_string(answer);
	}

	void GetSum()
	{
		SumCommand* sc = new SumCommand(num1, num2);
		commands.push_back(sc);
	}

	void GetMult()
	{
		MultiplicationCommand* sc = new MultiplicationCommand(num1, num2);
		commands.push_back(sc);
	}

	void GetDiv()
	{
		DivisionCommand *sc = new DivisionCommand(num1, num2);
		commands.push_back(sc);
	}

	void GetSub()
	{
		SubtractionCommand* sc = new SubtractionCommand(num1, num2);
		commands.push_back(sc);
	}

	void Equals( wxTextCtrl* t)
	{
		t->Clear();
		t->AppendText(result);
	}

	


	void DoOps(string t, wxTextCtrl* x)
	{

		string p;
		p = x->GetValue();

		Processor::num2 = stod(t);

		char c = '+';
		char i = '-';
		char w = '*';
		char z = '/';

		if (p.find(c) != string::npos)
		{
			GetSum();

		}

		else if (p.find(i) != string::npos)
		{
			GetSub();
		}

		else if (p.find(w) != string::npos)
		{
			GetMult();
		}
		else if (p.find(z) != string::npos)
		{			
			GetDiv();
		}
		
		for (int i = 0; i < commands.size(); i++)
		{
			commands[i]->Execute();
			commands.clear();
		}
	}

};


