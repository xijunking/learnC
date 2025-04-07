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

char findIndex(char *haystack, char *needle)
{

    int len1 = strlen(haystack);
    int len2 = strlen(needle);

    if (len2 == 0)
    {
        return 0;
    }

    for (size_t i = 0; i <= len1 - len2; i++)
    {
        int i2;
        for (i2 = 0; i2 < len2; i2++)
        {
            if (haystack[i + i2] != needle[i2])
            {
                break;
            }
        }

        if (i2 == len2)
        {
            return i;
        }
    }

    return -1;
}