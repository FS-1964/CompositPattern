#pragma once
#include "ComputerComponent.h"
class Mouse : public ComputerComponent
{
private:
	double _price = 0;
public:
	Mouse(double price) :_price(price){}
	double GetPrice() const override;
	void Display(const string& indent = "") const override;
};

