#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Worker
{
    char name[30];
    int age;
    float salary;
};

int main()
{
    setlocale(LC_ALL, "zh_CN.UTF-8");

    struct Worker workerItem = {"张三", 22, 100};
    struct Worker *workerPtr = &workerItem;
    printf("姓名：%s\n", workerItem.name);
    printf("姓名2： %s\n", *workerPtr->name);

    system("pause");
    return 0;
}
