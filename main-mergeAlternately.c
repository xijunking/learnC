#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char* mergeAlternately(char* word1, char* word2) {
    // 获取两个字符的长度
    int leth1 = strlen(word1);
    int leth2 = strlen(word2);

    // 为定义的返回值分配内存
    char* resStr = (char*)malloc((leth1 + leth2 + 1)*sizeof(char));

    // 判断内存分配是否成功
    if(resStr == NULL){
        return NULL;
    };

    // 定义三个值用于循环，及存储新数组
    int i= 0,j=0,k=0;

    // 交替添加字符
    while(i<leth1 && j<leth2){
        resStr[k++] = word1[i++];
        resStr[k++] = word2[j++];
    };

    // 判断两个字符组有没有剩余内容
    while(i<leth1){
        resStr[k++] = word1[i++];
    };

    while(j<leth2){
        resStr[k++] = word2[j++];
    }
    
    // 字符 必须以终止符 结尾，否则可能出现意外情况
    
    resStr[k] = '\0';
    return resStr;
}
