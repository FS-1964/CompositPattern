// CompositPattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ComputerComponent.h"
#include "Mouse.h"
#include "HD.h"
#include "CPU.h"
#include "RAM.h"
#include "SSD.h"
#include "MotherBoard.h"
#include "CompositeComputerComponent.h"
using namespace std;
int main()
{
    shared_ptr<ComputerComponent> mouse = make_shared<Mouse>(25.0);
    shared_ptr<ComputerComponent> hd = make_shared<HD>(35.0);
    shared_ptr<ComputerComponent> ram = make_shared<RAM>(45.0);
    shared_ptr<ComputerComponent> cpu = make_shared<CPU>(55.0);
    shared_ptr<ComputerComponent> ssd = make_shared<SSD>(65.0);
    shared_ptr<MotherBoard> motherboard = make_shared<MotherBoard>(115.0);
    
    motherboard->AddComponent(ram);
    motherboard->AddComponent(cpu);
   
    shared_ptr<CompositeComputerComponent> computer = make_shared<CompositeComputerComponent>("computer");
    computer->AddComponent(ssd);
    computer->AddComponent(mouse);
    computer->AddComponent(motherboard);
    computer->Display();
    return 0;
}

