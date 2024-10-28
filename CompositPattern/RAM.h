#pragma once
#include "ComputerComponent.h"
class RAM : public ComputerComponent
{
private:
	double _price = 0;
public:
	RAM(double price) :_price(price) {}
	double GetPrice() const override;
	void Display(const string& indent = "") const override;
};

