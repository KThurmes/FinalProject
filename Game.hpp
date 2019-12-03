#ifndef GAME_HPP
#define GAME_HPP
#include "Player.hpp"
#include "GameBoard.hpp"
#include "Space.hpp"
#include "Sister.hpp"
#include "Character.hpp"
#include "Item.hpp"
#include "NPC.hpp"
#include <list>
using std::list;

class Game
{
private:
    Player player;
    Sister sister;
    GameBoard gb;
    list<NPC *> NPCList;
    list<Item *> itemList;
    bool gameOver;
    bool playerHasSheet;
    bool playerHasKey;

public:
    Game();
    void printGameBoard();
    void deleteGame();
    void turn();
    void setCharacter(Character *, int, int);
    void setCharacter(Character *, Space *);
    void interaction(Space *);
    void interactionCheck();
    void showBackpackContents();
    void printBoardKey();
    void spawnGhost(int, int);
    void spawnGhost(Space *);
    bool checkGameOver();
    void printPlayerHealth();
    void moveCharacter(Character *, Space *);
};
#endif