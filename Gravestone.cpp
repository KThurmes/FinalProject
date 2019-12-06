#include "Gravestone.hpp"
#include "Space.hpp"
#include <iostream>
#include "getNumberBetween.hpp"
#include "Inventory.hpp"
using std::cout;
using std::endl;

Gravestone::Gravestone()
{
    hasKey = false;
    passable = false;
    printSymbol = "±";
}
Gravestone::~Gravestone()
{
}
void Gravestone::printSpaceTop()
{
    cout << "   ";
}
void Gravestone::printSpaceMiddle()
{
    cout << " " << printSymbol << " ";
}
void Gravestone::printSpaceBottom()
{
    cout << "   ";
}

void Gravestone::interact(Inventory *playersInventory)
{
    cout << "This gravestone looks a little wobbly. Knock it over?" << endl;
    cout << "1. Yeah!" << endl;
    cout << "2. No, thanks." << endl;
    int selection = getNumberBetween(1, 2);
    if (selection == 1)
    {
        cout << "Dude. Not cool. Now you've angered the spirit of this poor dead person." << endl;
        cout << "Serves you right." << endl;
        //Set the flag to spawn a ghost.
        spawnGhostEvent = true;
        passable = true;
        //###TODO: update printout

        if (hasKey)
        {
            cout << "But hey! It looks like there was a key under there!" << endl;
            cout << "You'll have to wait until the ghost leaves to get it, though." << endl;
        }
    }
    else if (selection == 2)
    {
        if (!cleaned)
        {
            cout << "Hmmm... This gravestone looks a little dirty. Clean it off?" << endl;
            cout << "1. Yeah, I'm sure this person's family will appreciate it." << endl;
            cout << "2. Naw, let's get back to looking for my sister." << endl;
            //###TODO: include narrative about looking for sister
            cleaned = true;
            selection = getNumberBetween(1, 2);
            if (selection == 1)
            {
                cout << "Here's what the gravestone says: " << endl;
                //###TODO Format message
                //###TODO Make messages for gravestones
            }
        }
    }
}

void Gravestone::setHasKey(bool key)
{
    this->hasKey = key;
}

void Gravestone::changeToDefaultSymbol()
{
    printSymbol = "±";
}