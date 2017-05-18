HumanPlayer::HumanPlayer(Board* _b, char _m) : Player(_b, _m)
{
    //Player(_b, _m);
}

void HumanPlayer::getTurn()
{
    int i;
    printf("Enter your tile number (1-9): ");
    scanf("%i", &i);
    //printf("\n");
    i--;
    if(i < 0 || i > 8)
    {
        printf("Error: Tile index out of range!\n");
        getTurn();
    }   
    if(board->getData(i) != 32) 
    {
        printf("Error: Tile already taken!\n");
        getTurn();
    }
    
    board->setData(i, marker);
}