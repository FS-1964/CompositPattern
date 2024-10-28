#include "SSD.h"

double SSD::GetPrice() const
{
	return _price;
}

void SSD::Display(const string& indent) const
{
	cout << indent << "SSD: $ " << _price << endl;
}
