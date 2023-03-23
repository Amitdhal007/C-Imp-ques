#include <stdio.h>

void ReachHome(int dest, int src)
{
    printf("source %d destination %d \n", src,dest);

    if (src == dest)
    {
        printf("puntch gya!!");
        return;
    }

    ReachHome(dest, src + 1);
}

int main()
{
    int dest = 10;
    int src = 1;

    ReachHome(dest, src);
}