#include "CompositeComputerComponent.h"

void CompositeComputerComponent::AddComponent(shared_ptr<ComputerComponent> component)
{
	components.push_back(component);
}

double CompositeComputerComponent::GetPrice() const
{
    double total = 0;
    for (const auto& component : components)
    {
        total += component->GetPrice();
    }
    return total;
}

void CompositeComputerComponent::Display(const string& indent) const
{
    cout << indent << _name << ":" << endl;
    for (const auto& component : components)
    {
        component->Display(indent + " ");
    }
    cout << indent << "Total price: $ " << GetPrice() << endl;
}
