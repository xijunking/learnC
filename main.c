#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "zh_CN.UTF-8");

    printf("你好，世界！\c");

    system("pause");
    return 0;
}
