#ifndef SPACE_HPP
#define SPACE_HPP
#include <string>
#include "Item.hpp"
#include "Inventory.hpp"
//#include "Character.hpp"
using std::string;

class Space
{
protected:
    Space *top;
    Space *right;
    Space *bottom;
    Space *left;
    bool hasCharacter;
    bool passable;
    string printSymbol;
    int idNum;
    Item *item;
    //Character* character;
    string spaceType;
    bool collision;

public:
    Space();
    virtual void printSpaceTop() = 0;
    virtual void printSpaceMiddle() = 0;
    virtual void printSpaceBottom() = 0;
    virtual ~Space(){};
    void setTop(Space *);
    void setRight(Space *);
    void setBottom(Space *);
    void setLeft(Space *);
    void setHasCharacter(bool);
    void setPrintSymbol(string);
    Space *getTop();
    Space *getRight();
    Space *getBottom();
    Space *getLeft();
    bool getPassable();
    bool getHasCharacter();
    void setIDNum(int);
    int getIDNum();
    virtual void interact(Inventory *) = 0;
    void dropItem(Item *);
    Item *pickUpItem();
    bool hasItem();
    string getSpaceType();
};

#endif