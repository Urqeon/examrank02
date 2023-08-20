#include "unistd.h"

int main(int argc , char **argv)
{
    if(argc == 2)
    {
        int i = 0;
        while(argv[1][i])
        {
        if(argv[1][i]>= 'a' && argv[1][i] <= 'z' )
        {
            int rep = argv[1][i] - 96;
            while(rep)
            {
            write(1,&argv[1][i],1);
            rep--;
            }
        }
        else if(argv[1][i]>= 'A' && argv[1][i] <= 'Z' )
        {
            int rep = argv[1][i] - 64;
            while(rep)
            {
            write(1,&argv[1][i],1);
            rep--;
            }
        }
        else
        {
            write(1,&argv[1][i],1);
        }
          i++;
        }
    }
    write(1,"\n",1);
}
