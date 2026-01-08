// Bài 9: Viết chương trình yêu cầu người dùng nhập vào các số nguyên. Chương trình sẽ cộng
// dồn các số này lại. Nếu người dùng nhập số 0, chương trình dừng lại và in ra tổng của tất cả
// các số đã nhập (không bao gồm số 0).

// input : So nguyen n
// Output: Tong cac so da nhap tru so 0

#include <stdio.h>

int main()
{

    int n;
    int sum = 0;

    do
    {
        printf("Nhap so nguyen n :");
        scanf("%d", &n);

        sum = sum + n;
    } while (n != 0);

    printf("Tong cac so da nhap la: %d", sum);

    return 0;
}