
int max(int *tab, unsigned int len)
{
    unsigned  i = 0;
    int tmp = 0;
    if(len == 0)
        return 0;

    while(i < len)
    {
        if(tmp < tab[i])
        {
            tmp = tab[i];
        }
        i++;
    }
    return(tmp);
}

