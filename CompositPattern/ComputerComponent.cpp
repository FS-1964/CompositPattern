#include "ComputerComponent.h"

void ComputerComponent::AddComponent(shared_ptr<ComputerComponent>)
{
	throw runtime_error("can not add!");
}
