#include <iostream>
#include <stdlib.h>
#include "dice.h"
#include "random.h"

int Dice::rollDice()
{
    /*
    unsigned int randomNumber = 0;
    for (int i; i < 10; i++)
    {
       randomNumber = Interface::Random::RANDOM.die();
       std::cout << randomNumber << std::endl;
    }
    std::cout << randomNumber << std::endl;
    */
    return Interface::Random::RANDOM.die();
}

void Dice::reset()
{
    std::cout << "reseting dice ..." << std::endl;
}

