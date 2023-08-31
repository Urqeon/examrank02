#include "stdlib.h"

int *ft_rrange(int start, int end)
{
    int dif = abs(start - end) +1;
    int *res = malloc(sizeof(int)*dif +1 );
    int i = 0;

    if(start < end)
    {
        while(i < dif)
        {
            res[i] = end;
            end--;
            i++;
        }
    }
    else
    {
        while(i < dif)
        {
            res[i] = end;
            end++;
            i++;
        }
    }
    res[i] = 0;
    return res;
}
