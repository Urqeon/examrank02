#include "unistd.h"

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        int len = 0;
        int count = 0;
        int i = 0;
        int j = 0;

        while(argv[1][len])
            len++;
        
        while(argv[1][i])
        {
            while(argv[2][j])
            {
                if(argv[1][i] == argv[2][j])
                {
                    count++;
                    break;
                }
                j++;
            }
            i++;
        }
        if(count == len)
            write(1,"1",1);
        else
            write(1,"0",1);
    }
    write(1,"\n",1);
}