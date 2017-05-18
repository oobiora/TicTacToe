HumanPlayer::HumanPlayer(Board* _b, char _m) : board(_b), marker(_m) {}

void HumanPlayer::getTurn()
{
    int i;
    printf("Enter your tile number (0-8): ");
    scanf("%i", &i);
    printf("\n");
    if(board->getData(i) != 32) 
    {
        printf("Error: Tile already taken!\n");
        getTurn();
    }
    if(i < 0 || i > 8)
    {
        printf("Error: Tile index out of range!\n");
        getTurn();
    }
    board->setData(marker);
}