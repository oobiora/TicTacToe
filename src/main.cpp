#include "interface.hpp"
#include "board.cpp"
#include "player.cpp"
#include "human.cpp"

int main()
{
    Board* b = new Board();
    HumanPlayer* h = new HumanPlayer(b, 'x');
    
    b->display();
    h->getTurn();
    b->display();
    
}