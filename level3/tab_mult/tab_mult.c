#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb > 9)
        ft_putnbr(nb / 10);
    write(1, &"0123456789"[nb % 10], 1);
}
int ft_atoi(char *s)
{
    int res = 0;
    while (*s == ' ' && (*s >= 9 && *s <= 13))
        s++;
    while (*s >= '0' && *s <= '9')
    {
        res = res * 10 + *s - 48;
        s++;
    }
    return (res);
}

int main(int ac, char **av)
{
    int i;
    int n = 1;
    if (ac == 2)
    {
        i = ft_atoi(av[1]);
        while(n <= 9)
        {

            ft_putnbr(n);
            ft_putchar(' ');
            ft_putchar('x');
            ft_putchar(' ');
            ft_putnbr(i);
            ft_putchar(' ');
            ft_putchar('=');
            ft_putchar(' ');
            ft_putnbr(i * n);
            ft_putchar('\n');
            n++;
        }
    }
    else
        write(1, "\n", 1);
}