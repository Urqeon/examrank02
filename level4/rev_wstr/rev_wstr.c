#include "stdlib.h"
#include "unistd.h"

void ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        write(1,&str[i],1);
        i++;
    }
}

char    **ft_split(char *str)
{
    int i = 0;
    int k = 0;
    int j = 0;
    char **res = malloc(sizeof(char **) * 1000);
    if(!res)
        return NULL;
    while(str[i] <= 32 && str[i] >0)
        i++;

    while(str[i])
    {
        j = 0;
        if(str[i] > 32)
        {
            res[k] = malloc(sizeof(char *) * 1000);
            if(!res[k])
                return NULL;
            while(str[i]> 32)
            {
                res[k][j] = str[i];
                j++;
                i++;
            }
            res[k][j] = 0;
            k++;
        }
        else
        {
            i++;
        }
    
    }
    res[k]= 0;
    return (res);
}


#include "stdio.h"
int main(int argc, char **argv)
{
    if(argc == 2)
    {
        char **str = ft_split(argv[1]);
        int len = 0;

        while(str[len])
            len++;
        len --;
        while(len >=0)
        {
            ft_putstr(str[len]);
            if(len != 0)
                write(1," ",1);
            len --;
        }
    }
    write(1,"\n",1);
}