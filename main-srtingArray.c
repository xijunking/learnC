#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "zh_CN.UTF-8");
    int arr[3] = {1, 2, 3};
    size_t length = sizeof(arr) / sizeof(arr[0]);
    for (size_t i = 0; i < length; i++)
    {
        printf("%d array content\n", arr[i]); // 添加换行符并修正格式化字符串
    }

    system("pause");
    return 0;
}