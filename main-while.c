#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "zh_CN.UTF-8");
    int i = 0;
    int sum = 0;
    while (i < 101)
    {
        /* code */
        sum += i;
        i++;
    }
    printf("1~100的和为%d\n", sum);
    system("pause");
    return 0;
}
