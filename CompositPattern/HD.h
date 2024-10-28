#pragma once
#include "ComputerComponent.h"
class HD : public ComputerComponent
{
private:
	double _price = 0;
public:
	HD(double price) :_price(price) {}
	double GetPrice() const override;
	void Display(const string& indent = "") const override;
};

