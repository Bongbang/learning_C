// Bài 2: Viết chương trình nhập vào 3 số nguyên 𝑎, 𝑏, 𝑐. Tìm và in ra màn hình số lớn nhất trong
// ba số này

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Nhap so nguyen a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("a = %d, b = %d, c = %d\n", a, b, c);

    int max;

    max = a;

    if (b > max)
    {
        max = b;
    }

    if (c > max)
    {
        max = c;
    }

    printf("So lon nhat = %d", max);

    return 0;
}
