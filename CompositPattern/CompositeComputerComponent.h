#pragma once
#include "ComputerComponent.h"
class CompositeComputerComponent : public ComputerComponent
{
private:
	string _name;
	vector<shared_ptr<ComputerComponent>> components;
public:

	CompositeComputerComponent(const string& name):_name(name){}
	void AddComponent(shared_ptr<ComputerComponent> component) override;
	double GetPrice() const override;
	void Display(const string& indent = "") const override;
};

