#pragma once
#include <iostream>
#include <string>
#include "wx\wx.h"
#include <vector>

using namespace std;


class IBaseCommand
{
public:
	virtual void Execute() {};
};

