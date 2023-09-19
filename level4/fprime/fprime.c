#include "stdlib.h"
#include "stdio.h"

int main(int argc,char **argv)
{   
    if(argc == 2)
    {
        int num = atoi(argv[1]);
        int i = 2;
        if(num <= 0)
        {
            printf("\n");
            return(0);
        }
        if(num == 1)
        {
            printf("1\n");
            return(0);
        }

        while(i  <= num)
        {
            if(num % i == 0)
            {
                printf("%d",i);
                if(i < num)
                printf("*");
                num = num / i;
            }
            else
            {
                i++;
            }

        }
    }
    printf("\n");
}