#include "SubtractionCommand.h"
#include <iostream>
#include "Processor.h"

void SubtractionCommand::Execute()
{
	Processor* p = Processor::GetInstance();
	p->SetData(_n1 - _n2);
}