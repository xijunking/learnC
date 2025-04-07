#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "zh_CN.UTF-8");

    char *strs1 = "hello";
    char *strs2 = "world";

    char *resStrs = getMergeStrs(strs1, strs2);

    printf("%s\n", resStrs);
    free(resStrs);

    system("pause");
    return 0;
}

char *getMergeStrs(char *strs1, char *strs2)
{

    // 获取两个字符串的长度
    int len1 = strlen(strs1);
    int len2 = strlen(strs2);

    // 定义返回值，分配内存

    char *resStrs = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

    // 定义循环次数的值
    int i = 0, j = 0, k = 0;

    // 根据循环拼接字符串

    while (i < len1 && j < len2)
    {
        resStrs[k++] = strs1[i++];
        resStrs[k++] = strs2[j++];
    }

    // 拼接剩余字符串

    while (i < len1)
    {
        resStrs[k++] = strs1[i++];
    }

    while (j < len2)
    {
        resStrs[k++] = strs2[j++];
    }

    resStrs[k] = '\0';

    return resStrs;
}