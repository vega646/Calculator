#pragma once

#include <iostream>
#include <string>
#include "IBaseCommand.h"
#include "wx\wx.h"


using namespace std;


class MultiplicationCommand : public IBaseCommand
{
private:
	int _n1;
	int _n2;
public:

	MultiplicationCommand(int n, int i)
	{
		_n1 = n;
		_n2 = i;
	}

	void Execute();

};

