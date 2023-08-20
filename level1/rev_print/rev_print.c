#include "unistd.h"

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int len = 0;
        while(argv[1][len])
        {
            len++;
        }
        while(len)
        {
            write(1,&argv[1][len -1],1);
            len--;
        }
    }
    write(1,"\n",1);
}