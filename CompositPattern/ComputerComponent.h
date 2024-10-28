#pragma once
#include <memory>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class ComputerComponent
{

public:
	virtual double GetPrice() const = 0;
    virtual void AddComponent(shared_ptr<ComputerComponent>);
	virtual void Display(const string& indent = "") const = 0;
	virtual ~ComputerComponent() = default;
};

