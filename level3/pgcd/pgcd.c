#include "stdio.h"
#include "stdlib.h"

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        int n1= atoi(argv[1]);
        int n2= atoi(argv[2]);
        int i = n2;
        if(n1 < n2 )
            i = n1;
        while(i > 0)
        {
            if(n1 % i == 0 && n2 % i == 0)
            {
                printf("%d",i);
                printf("\n");
                return(0);
            }
            i--;
        }
    }
    printf("\n");
}
