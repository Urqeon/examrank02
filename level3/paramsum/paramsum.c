#include "unistd.h"
void ft_putnbr(int n)
{
    char *num="0123456789";
    if(n > 9)
        ft_putnbr(n / 10);
    write(1,&num[n % 10],1);
}

int main(int argc, char **argv)
{
    if(argc<0)
        write(1,&argv[1][0],1);
    ft_putnbr(argc-1);
    write(1,"\n",1);
}