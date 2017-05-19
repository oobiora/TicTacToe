HumanPlayer::HumanPlayer(Board* _b, char _m) : Player(_b, _m) {}

void HumanPlayer::turn()
{
    int i;
    printf("%sEnter your tile number (1-9): %s", YELLOW, RESET);
    scanf("%i", &i);
    printf("\n");
    i--;
    if(i < 0 || i > 8)  
    {
        printf("Error: Tile index out of range!\n\n");
        board->display();
        turn();
    }   
    if(board->getData(i) != 32) 
    {
        printf("Error: Tile already taken!\n\n");
        board->display();
        turn();
    }
    
    board->setData(i, marker);
}