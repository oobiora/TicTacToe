#include <stdio.h>
#include <stdlib.h>

class Board
{
    public:
        void turn();
        void display();
    protected:
        Player playerOne;
        Player playerTwo;
        char data[9];
        int turns;
};

/*
Abstract player class
*/
class Player
{
    public:
        virtual int getTurn() = 0;
};

class HumanPlayer : public Player
{
    public:
        int getTurn();
};

class ComputerPlayer : public Player
{
    public:
        int getTurn();
};