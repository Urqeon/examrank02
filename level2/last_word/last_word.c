#include <unistd.h>

int		main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i = 0;
        int j = 0;
        while(argv[1][i])
        {
            if((argv[1][i] == 32 || argv[1][i] == 9) && argv[1][i + 1] > 32)
                j = i + 1;
            i++;
        }
        while(argv[1][j] > 32 && argv[1][j] <= 127)
        {
            write(1,&argv[1][j],1);
            j++;
        }
    }
    write(1,"\n",1);
}