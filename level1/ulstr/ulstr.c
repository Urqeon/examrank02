#include "unistd.h"

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i = 0;
        while(argv[1][i])
        {
            char str = argv[1][i];

            if(str >= 'a' && str <= 'z')
            {
                str = str - 32;
                write(1,&str,1);
            }
            else if(str >= 'A' && str <= 'Z')
            {
                str = str + 32;
                write(1,&str,1);
            }
            else
            {
                write(1,&str,1);
            }
            i++;
        }
    }
    write(1,"\n",1);
}