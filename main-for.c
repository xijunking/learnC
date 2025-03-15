#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "zh_CN.UTF-8");

    for (size_t i = 0; i < 100; i++)
    {
        /* code */
        if (i % 2 == 0)
        {
            /* code */
            printf("%d是偶数\n", i);
        }
    };

    system("pause");
    return 0;
}
