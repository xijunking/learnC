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