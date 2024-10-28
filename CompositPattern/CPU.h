#pragma once
#include "ComputerComponent.h"
class CPU: public ComputerComponent
{
private:
	double _price = 0;
public:
	CPU(double price) :_price(price) {}
	double GetPrice() const override;
	void Display(const string& indent = "") const override;
};

