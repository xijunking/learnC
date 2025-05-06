#include <stdbool.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return *(char *)a - *(char *)b;
}

int Func()
{

    int x = 1;
    int y = 2;
    {
        int x = 3;
        int y = 4;

        x = x * 2;
        y = y / 2;
    }

    x = x + 10, y = y * 10;
    return x + y;
}
