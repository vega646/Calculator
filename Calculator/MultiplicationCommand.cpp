#include "MultiplicationCommand.h"
#include <iostream>
#include "Processor.h"


void MultiplicationCommand::Execute()
{
	Processor* p = Processor::GetInstance();
	p->SetData(_n1 * _n2);
}