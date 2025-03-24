#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int sub(int a, int b)
{
    return a + b;
}

int main()
{
    setlocale(LC_ALL, "zh_CN.UTF-8");

    int (*xijunFun)(int a, int b) = sub;
    printf("和:%d\n", xijunFun(3, 2));

    system("pause");
    return 0;
}
