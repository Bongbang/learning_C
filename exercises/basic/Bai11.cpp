// Bài 11: Viết chương trình nhập vào một số nguyên 𝑁 và kiểm tra xem 𝑁 là số chẵn hay số lẻ.
// In kết quả ra màn hình.

// Input: So nguyen N
// Output: N la so chan hay le

#include <stdio.h>

int main()
{
    int N;

    printf("Nhap so nguyen N :");
    scanf("%d", &N);

    if (N % 2 == 0)
    {
        printf("%d La So chan", N);
    }
    else
    {
        printf("%d La so le", N);
    }

    return 0;
}
