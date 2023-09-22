#include <stdlib.h>
#include <unistd.h>
#define max 1000
#define max2 1000
char    **ft_split(char *str)
{
    int i = 0;
    int k = 0;
    int j;

    char **s;
    s = (char **)malloc(sizeof(**s) * max);
    if (!s)
        return (NULL);
    while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        i++;
    while(str[i])
    {
        if (str[i] > 32)
        {
            j = 0;
            s[k] = (char*)malloc(sizeof(char) * max2);
            if(!s[k])
                return (NULL);
            while(str[i] > 32)
            {
                s[k][j] = str[i];
                i++;
                j++;
            }
            s[k][j] = '\0';
            k++;
        }
        else
            i++;
    }
    s[k] = 0;
    return (s);
}
void    ft_putstr(char *s)
{
    int i = 0;
    while(s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
}
int main(int ac, char **av)
{
    int i = 1;
    char **s;
    if (ac > 1)
    {
        s = ft_split(av[1]);
        while(s[i])
        {
            ft_putstr(s[i]);
            write(1, " ", 1);
            i++;
        }
        ft_putstr(s[0]);
    }
    write(1, "\n", 1);
}