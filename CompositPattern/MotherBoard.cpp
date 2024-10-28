#include "MotherBoard.h"

double MotherBoard::GetPrice() const
{
    double total = _price;
    for (const auto& component:components)
    {
        total += component->GetPrice();
    }
    return total;
}

void MotherBoard::AddComponent(shared_ptr<ComputerComponent> component)
{
    components.push_back(component);
}

//void MotherBoard::Add(shared_ptr<ComputerComponent> component)
//{
//    components.push_back(component);
//}

void MotherBoard::Display(const string& indent) const
{
    cout << indent << "Motherboard: $ " << _price << endl;
    for (const auto& component : components)
    {
        component->Display(indent+" ");
    }
    cout << indent << "Total price: $ " << GetPrice() << endl;
}
