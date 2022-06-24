#include "DivisionCommand.h"
#include <iostream>
#include "Processor.h"

void DivisionCommand::Execute()
{
	Processor* p = Processor::GetInstance();

		p->SetData(_n1 / _n2);
	
}