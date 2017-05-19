#include <stdio.h>
#include <stdlib.h>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */

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
        /*
        turn() has two parts:
        1) figure out what number tile to select
        2) set the board accordingly

        (1) is going to be different for human and computer, but (2) should be the same
        */
        void turn();
        /*
        constructor since I couldn't figure out how to make Player totally abstract
        */
        Player(Board* _b, char _m);

    protected:
        /*
        pointer to the board being operated on
        IMPORTANT that it is a pointer, so that multiple players all work with same board
        */
        Board* board;
        /*
        ASCII characer used to mark tiles on the board
        */
        char marker;
};

class HumanPlayer : public Player
{
    public:
        HumanPlayer(Board* _b, char _m);
        void turn(); 
};

class ComputerPlayer : public Player
{
    public:
        ComputerPlayer(Board* _b, char _m);
        void turn();
};