#include <stdio.h>

enum week
{
    Monday = 4,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};


int main()
{
    enum week Monday = 6;
    // enum week today = -1;
    // Monday = -1;
    printf("Today is %d\n", Monday);
    // printf("Nextday is %d", nextday);
    return 0;
}