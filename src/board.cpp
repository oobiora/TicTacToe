/** CONSTRUCTORS **/

Board::Board()
{
    for(int i = 0; i < 9; i++) data[i] = 32;
}

/** ACCESSORS **/

char Board::getData(int i)
{
    return data[i];
}
char* Board::getData()
{
    return data;
}

/** MUTATORS **/

void Board::setData(int i, char c)
{
    data[i] = c;
}

/** EXTRA **/

void Board::display()
{
    for(int i = 0; i < 3; i++)
    {
        printf("\t %c | %c | %c  (%i-%i)\n", data[3*i], data[3*i+1], data[3*i+2], 3*i+1, 3*i+3);
        if(i != 2) printf("\t---+---+---\n");
    }
    printf("\n");
}
bool Board::isFull()
{
    //TODO
    return false;
}
char Board::isWon()
{
    //TODO
    return 0;
}