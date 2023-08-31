#include "unistd.h"

void printhex(int n)
{
    char *hex="0123456789abcdef";

    if(n > 16)
        printhex(n / 16);
    write(1,&hex[n % 16],1);
}


int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;

    while(str[i] >= '0' && str[i] <= '9')
    {
        res = (res * 10) + str[i] - 48;
        i++;
    }
    return res;
}

#include "stdio.h"

int main(int argc, char **argv)
{
   if(argc == 2)
   {
    int num = ft_atoi(argv[1]);
    printhex (num);
   }
   write(1,"\n",1);
}