#include "CPU.h"

double CPU::GetPrice() const
{
    return _price;
}

void CPU::Display(const string& indent) const
{
    cout << indent << "CPU: $ " << _price << endl;
}
