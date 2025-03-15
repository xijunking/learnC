#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct worker
{
    char name[40];
    int age;
    float salary;
};

int main()
{
    setlocale(LC_ALL, "zh_CN.UTF-8");

    struct worker joins[3] = {
        {"张三", 18, 5000.00},
        {"李四", 60, 6000.00},
        {"王麻子", 99, 9000.99},
    };

    for (size_t i = 0; i < 3; i++)
    {
        printf("姓名：%s\n", joins[i].name);
        printf("年龄：%d\n", joins[i].age);
        printf("薪水：%.3f\n", joins[i].salary);
    }

    system("pause");
    return 0;
}
