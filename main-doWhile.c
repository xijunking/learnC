#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "zh_CN.UTF-8");
    int i = 0;
    int b = 0;

    do
    {
        /* code */
        printf("请输入一个数字\n");
        scanf("%d", &b);
        printf("输入的数字是%d\n", b);
        if (b != 10)
        {
            /* code */
            printf("输入错误\n");
        }
    } while (b != 10);

    system("pause");
    return 0;
}
