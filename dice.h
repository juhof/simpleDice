#ifndef DICE_H
#define DICE_H

class Dice
{
public:
    int rollDice();
    void reset();


private:
    int numberOfSides_ = 6;
};


#endif // DICE_H
