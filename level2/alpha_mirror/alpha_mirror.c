#include "unistd.h"

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i = 0;
        while(argv[1][i])
        {
            char str= argv[1][i];
            if(str >= 'a' && str <= 'm')
            {
                str = 122 - (str - 97);
            }
            else if(str >= 'A' && str <= 'M')
            {
                str = 90 - (str - 65);
            }
            else if(str >= 'N' && str <= 'Z')
            {
                str = 65 + (90 - str);
            }
            else if(str >= 'n' && str <= 'z')
            {
                str = 97 + (122 -str);
            }

            write(1,&str,1);
            i++;
        }
    }
    write(1,"\n",1);
}