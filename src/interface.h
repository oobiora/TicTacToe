#include <stdio.h>
#include <stdlib.h>

class Board
{
    public:
        Board();
        void display();
        char getData(int i);
        void setData(int i, char c);
    protected:
        char data[9];
};

/*
Abstract player class
*/
class Player
{
    public:
        void getTurn();
    protected:
        Board* board;
        char marker;
};

class HumanPlayer : public Player
{
    public:
        HumanPlayer(Board* _b, char _m);
};

class ComputerPlayer : public Player
{
    public:
        ComputerPlayer(Board* _b, char _m);
};