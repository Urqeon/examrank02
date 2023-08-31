#include "stdlib.h"

int *ft_range(int start, int end)
{
    int dif = abs(start - end) +1;
    int *res = malloc(sizeof(int )* dif +1);
    int i = 0;
    if(end > start)
    {
        while(i < dif)
        {
            res[i] = start;
            start++;
            i++;
        }
    }
    else
    {
        while(i < dif)
        {
            res[i] = start;
            start--;
            i++;
        }
    }
    res[i] = 0;
    return res;
}

