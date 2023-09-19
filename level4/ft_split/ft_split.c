#include "stdlib.h"

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

