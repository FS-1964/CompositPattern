#pragma once
#include "ComputerComponent.h"
class SSD : public ComputerComponent
{
private:
	double _price = 0;
public:
	SSD(double price) :_price(price) {}
	double GetPrice() const override;
	void Display(const string& indent = "") const override;
};

