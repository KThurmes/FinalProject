#include "Ghost.hpp"
#include "NPC.hpp"
#include "Character.hpp"
#include <iostream>
#include "getRandomInt.hpp"
#include "enterToContinue.hpp"
#include <cstdlib>
#include <ctime>
using std::cout;
using std::endl;

Ghost::Ghost()
{
    location = 0;
    symbol = "G";
    glareRay = true;
}

Ghost::~Ghost()
{
}

Space *Ghost::move()
{
    srand(time(NULL));
    //Randomly choose to turn or step
    int moveOption = getRandomInt(0, 1);

    //turn
    if (moveOption == 0)
    {
        //choose to turn right or left
        moveOption = getRandomInt(0, 1);
        turn(moveOption);
        return location;
    }
    //step forward
    else
    {
        return step();
    }
}

int Ghost::interact()
{
    cout << endl
         << "Was that a cool breeze or the clammy embrace of the undead?" << endl
         << endl;
    cout << "Either way, you are left feeling slightly worse now than before the \nchill came over you." << endl;
    cout << endl;

    enterToContinue();
    return -1;
}
