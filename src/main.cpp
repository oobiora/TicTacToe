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
    

    b->display();
    h->turn();
    b->display();
    
    /*
    char* c = b->getData();
    for(int i = 0; i < 9; i++) printf("%i\n", c[i]);
    */
}