#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Nhap vao 3 so nguyen a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    int max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }

    printf("So lon nhat la: %d\n", max);
    return 0;
}