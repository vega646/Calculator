#include "SumCommand.h"
#include <iostream>
#include "Processor.h"

void SumCommand::Execute()
{
	Processor* p = Processor::GetInstance();
	p->SetData(_n1 + _n2);
}
