char *ft_strrev(char *str)
{
    int j = 0;
    int i = 0;
    char tmp;

    while(str[j])
    {
        j++;
    }
    j--;
    while(i<j)
    {
        tmp = str[j];
        str[j]= str[i];
        str[i] = tmp;
        i++;
        j--;
    }
    return(str);
}