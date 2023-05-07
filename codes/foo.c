#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[])
{
    for (int i = 0 ; i < 3 ; i++)
    {
        int pid = fork();
        if (pid == 0)
        {
            for (long int j = 0 ; j < 3000000000 ; j++)
            {
                int temp = 3;
                temp*=100;
            }
            exit();
        }
    }
    while (wait());
    return 0;
}