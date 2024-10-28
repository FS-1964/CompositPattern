#pragma once
#include "ComputerComponent.h"
#include <vector>
class MotherBoard: public ComputerComponent
{
private:
	vector<shared_ptr<ComputerComponent>> components;
	double _price;
public:
	
	MotherBoard(double price) :_price(price){}
	double GetPrice() const override;
	void AddComponent(shared_ptr<ComputerComponent> component) override;
	void Display(const string& indent = "") const override;
};

