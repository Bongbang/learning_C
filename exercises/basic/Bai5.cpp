// Bài 5: Viết chương trình nhập vào một số nguyên dương 𝑁. Tính và in ra tổng 𝑆 = 1 + 2 + 3 +
// ⋯ + 𝑁.

// input : So nguyen duong n
// output : Tong tu 1 den n

#include <stdio.h>

int main()
{

    int n, sum = 0;
    printf("Nhap so nguyen duong n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Tong = %d ", sum);

    return 0;
}
