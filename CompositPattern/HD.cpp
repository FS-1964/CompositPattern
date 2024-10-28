#include "HD.h"

double HD::GetPrice() const
{
    return _price;
}

void HD::Display(const string& indent) const
{
    cout << indent << "HD: $ " << _price << endl;
}
