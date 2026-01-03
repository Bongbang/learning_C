// Bài 1: Viết chương trình nhập vào chiều dài và chiều rộng của một hình chữ nhật (kiểu số
// thực). Tính toán và in ra màn hình chu vi và diện tích của hình chữ nhật đó.

#include <stdio.h>

int main()
{
    float chieuDai, chieuRong, chuVi, dienTich;

    printf("Nhap chieu rong: ");
    scanf("%f", &chieuRong);

    printf("Nhap chieu dai: ");
    scanf("%f", &chieuDai);

    printf("Chieu dai: %.2f, Chieu rong: %.2f\n", chieuDai, chieuRong);

    chuVi = (chieuDai + chieuRong) * 2;

    dienTich = chieuDai * chieuRong;

    printf("Chu vi = %.2f\n", chuVi);

    printf("Dien tich = %.2f", dienTich);

    return 0;
}