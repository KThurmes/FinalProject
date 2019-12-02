#include "Gravestone.hpp"
#include "Space.hpp"
#include <iostream>
#include "getNumberBetween.hpp"
using std::cout;
using std::endl;

Gravestone::Gravestone()
{

    passable = false;
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
    cout << " ± ";
}
void Gravestone::printSpaceBottom()
{
    cout << "   ";
}

void Gravestone::interact()
{
    cout << "This gravestone looks a little wobbly. Knock it over?" << endl;
    cout << "1. Yeah!" << endl;
    cout << "2. No, thanks." << endl;
    int selection = getNumberBetween(1, 2);
    if (selection == 1)
    {
        cout << "Dude. Not cool. Now you've angered the spirit of this poor dead person." << endl;
        cout << "Serves you right." << endl;
        //###TODO: Spawn a baddie
        passable = true;
        //###TODO: update printout
    }
    else if (selection == 2)
    {
        cout << "Hmmm... This gravestone looks a little dirty. Clean it off?" << endl;
        cout << "1. Yeah, I'm sure this person's family will appreciate it." << endl;
        cout << "2. Naw, let's get back to looking for my sister." << endl;
        //###TODO: include narrative about looking for sister

        selection = getNumberBetween(1, 2);
        if (selection == 1)
        {
            cout << "Here's what the gravestone says: " << endl;
            //###TODO Format message
            //###TODO Make messages for gravestones
        }
    }
}