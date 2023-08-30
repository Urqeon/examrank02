#include "unistd.h"

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i = 0;
        while(argv[1][i])
        {
            char str = argv[1][i];
            if(str >= 'A' && str <= 'Z')
            {
                write(1,"_",1);
                str = str + 32;
            }
            write(1,&str,1);
            i++;
        }
    }
    write(1,"\n",1);
}