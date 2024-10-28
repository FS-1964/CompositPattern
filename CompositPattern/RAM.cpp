#include "RAM.h"

double RAM::GetPrice() const
{
    return _price;
}

void RAM::Display(const string& indent) const
{
    cout << indent << "RAM: $ " << _price << endl;
}
