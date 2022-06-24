#pragma once

#include <iostream>
#include <string>
#include "wx\wx.h"
#include "IBaseCommand.h"


using namespace std;


class DivisionCommand : public IBaseCommand
{
private:
	int _n1;
	int _n2;
public:

	DivisionCommand(int n, int i)
	{
		_n1 = n;
		_n2 = i;
	}

	void Execute();

};

