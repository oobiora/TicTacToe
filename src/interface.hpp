#include <stdio.h>
#include <stdlib.h>

class Board
{
    public:

    /** CONSTRUCTORS **/

        /*
        default constructor, set all values to 32 (ASCII space code)
        */
        Board();

    /** ACCESSORS **/
        
        /*
        return the data point at i
        */
        char getData(int i);
        /*
        return all the data
        */
        char* getData();

    /** MUTATORS **/

        /*
        set value of data point at i
        */
        void setData(int i, char c);

    /** OTHER */

        /*
        print the board out with printf
        because don't want to deal wiht namespaces
        */
        void display();
        /*
        return whether all tiles have been taken
        */
        bool isFull();
        /*
        return 0 if not yet won
        return char value of winner if won
        */
        char isWon();

    protected:
        /*
        one dimensional array so we don't have to deal with double pointers
        */
        char data[9];
};

/*
abstract (not really) player class
*/
class Player
{
    public:
        void getTurn();
        Player(Board* _b, char _m);
    protected:
        Board* board;
        char marker;
};

class HumanPlayer : public Player
{
    public:
        HumanPlayer(Board* _b, char _m);
        void getTurn(); 
};

class ComputerPlayer : public Player
{
    public:
        ComputerPlayer(Board* _b, char _m);
};