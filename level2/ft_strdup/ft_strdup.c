#include "stdlib.h"

char *ft_strdup(char *src)
{
    int i = 0;
    while(src[i])
        i++;
    char *tmp= malloc(sizeof(char)* i + 1);
    i=0;
    while(src[i])
    {
        tmp[i] = src[i];
        i++;
    }
    tmp[i] = 0;
    return(tmp);
}