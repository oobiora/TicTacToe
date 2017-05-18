Board::Board()
{
    for(int i = 0; i < 9; i++) data[i] = 32;
}
void Board::display()
{
    for(int i = 0; i < 3; i++)
    {
        printf(" %c | %c | %c\n", data[3*i], data[3*i+1], data[3*i+2]);
        if(i != 2) printf("---+---+---\n");
    }
}
char Board::getData(int i)
{
    return data[i];
}
void Board::setData(int i, char c)
{
    data[i] = c;
}