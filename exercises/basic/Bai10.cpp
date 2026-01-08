// Viết chương trình in ra màn hình bảng cửu chương từ 2 đến 9.

// input :
// Output:

#include <stdio.h>

int main()
{

    printf("Bang cuu chuong tu 2 den 9\n");

    for (int i = 2; i <= 9; i++)
    {
        printf("Bang cuu chuong %d\n", i);

        for (int j = 1; j <= 10; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("~~~~~~~~~~~~~~\n");
    }
    return 0;
}
