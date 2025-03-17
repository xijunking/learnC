#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Student
{
    char name[20];
    int age;
    float score;
};
void clearInputBuffer()
{
    while (getchar() != '\n')
        ;
}

int main()
{
    setlocale(LC_ALL, "zh_CN.UTF-8");

    FILE *fp = fopen("student.txt", "w"); //a 以追加模式打开文件 //w 直接覆盖写入
    if (fp == NULL)
    {
        printf("文件打开失败！");
        return -1;
    }

    struct Student students[3];
    for (size_t i = 0; i < 3; i++)
    {
        printf("请输入%d学生姓名：\t年龄：\t成绩：\n", i + 1);
        scanf("%19s %d %f", &students[i].name, &students[i].age, &students[i].score);
    };

    for (size_t i = 0; i < 3; i++)
    {
        fprintf(fp, "%s\t%d\t%.1f\n", students[i].name, students[i].age, students[i].score);
    };

    fclose(fp);

    printf("文件写入成功！");

    system("pause");
    return 0;
}
