#include "interface.hpp"
#include "board.cpp"
#include "player.cpp"
#include "human.cpp"
#include "computer.cpp"

int main()
{
    printf("%s\n\tTIC-TAC-TOE%s\n\t===========\n\n", GREEN, RESET);

    Board* b = new Board();
    HumanPlayer* h = new HumanPlayer(b, 'x');
    ComputerPlayer* c = new ComputerPlayer( b, 'o');
    

    b->display();
    h->turn();
    b->display();

    while(b->isWon() == 0)
    {
        b->display();
        h->turn();
        c->turn();
    }
    
    /*
    char* c = b->getData();
    for(int i = 0; i < 9; i++) printf("%i\n", c[i]);
    */
}