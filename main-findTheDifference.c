#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char *findTheDifference(char *s, char *t)
{
    int count[26] = {0};

    for (size_t i = 0; s[i] != '\0'; i++)
    {
        // 将字符转换为对应的索引
        // 'a'的ASCII码是97，'b'是98，依此类推
        // 通过减去'a'的ASCII码来获取索引
        // 例如，'a' - 'a' = 0，'b' - 'a' = 1，...，'z' - 'a' = 25
        count[s[i] - 'a'] = count[s[i] - 'a'] + 1;
    }

    for (size_t i = 0; t[i] != '\0'; i++)
    {
        count[t[i] - 'a'] = count[t[i] - 'a'] - 1;
        if (count[t[i] - 'a'] < 0)
        {
            return t[i]; // 如果出现负数，说明字符不匹配
        }
    }

    return '\0';
}