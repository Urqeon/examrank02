#include "stdio.h"
#include "stdlib.h"

int main(int argc, char **argv)
{
    if(argc == 4)
    {
        int n1=atoi(argv[1]);
        int n2=atoi(argv[3]);

        if(argv[2][0] == '+')
            printf("%d", n1+n2);
        else if(argv[2][0] == '-')
            printf("%d", n1-n2);
        else if(argv[2][0] == '/')
            printf("%d", n1/n2);
        else if(argv[2][0] == '*')
            printf("%d", n1*n2);
        else if(argv[2][0] == '%')
            printf("%d", n1%n2);
    }
    printf("\n");
}