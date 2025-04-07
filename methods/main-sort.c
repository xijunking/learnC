#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "zh_CN.UTF-8");

    int array[8] = {6, 5, 8, 9, 1, 3, 2, 4, 7};

    for (size_t i = 0; i < 8; i++)
    {
        if (array[i] > array[i + 1])
        {
            array[i + 1] = array[i];
            array[i] = array[i + 1];
        }
        
    }
    

    system("pause");
    return 0;
}
