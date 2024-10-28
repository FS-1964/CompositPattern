#include "Mouse.h"

double Mouse::GetPrice() const
{
    return _price;
}

void Mouse::Display(const string& indent) const
{
    cout << indent << "mouse: $ " << _price << endl;
}
