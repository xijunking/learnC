#include <stdio.h>
#include <stdlib.h> // 加入头文件
#include <locale.h>
int main()
{
    int year;
    setlocale(LC_ALL, "zh_CN.UTF-8");
    printf("请输入年份：");
    scanf("%d", &year);

    if (year / 400 == 0 || (year / 100 != 0 && year / 4 == 0))
    {
        printf("%d是闰年\n", year);
    }
    else
    {
        printf("%d不是闰年\n", year);
    };

    system("pause"); // 让程序暂停，等待用户按任意键
    return 0;
}
