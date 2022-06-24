#pragma once

#include <iostream>
#include <string>
#include "wx\wx.h"
#include "IBaseCommand.h"


using namespace std;


class SumCommand : public IBaseCommand
{
private:
	double _n1;
	double _n2;
public:

	 SumCommand(double n, double i)
	 {
		 _n1 = n;
		 _n2 = i;
	 }

	 void Execute();

};

