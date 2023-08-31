#include "unistd.h"
int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;

    if(str[i] == '-')
        sign = -1;
    while(str[i] == '-' || str[i] == '+')
        i++;
    while((str[i] >= '0' && str[i] <= '9') && str[i])
    {
        res = (res * 10) + str[i] - 48;
        i++;
    }
    return(res * sign);
}

int isprime(int n)
{
    int i = 2;

    while(i * i <= n)
    {
        if(n % i == 0)
            return (0);
        i++;
    }
    return(1);
}

void ft_putnbr(int num)
{
    char *n ="0123456789";

    if(num > 9)
        ft_putnbr(num / 10);
    write(1,&n[num % 10],1);
    
}




int main(int argc, char **argv)
{
    

    if(argc == 2)
    {
    int num = ft_atoi(argv[1]);
    int i = 2;
    int sum = 0;

    while(i <= num)
    {
        if(isprime(i))
        {
            sum = sum + i;
        }
        i++;
    }
    ft_putnbr(sum);
    }
    else
    {
        write(1,"0",1);
    }
    write(1,"\n",1);
}