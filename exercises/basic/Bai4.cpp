// Bài 4: Viết chương trình nhập vào một tháng (số nguyên từ 1 đến 12) và một năm (số nguyên).
// In ra số ngày của tháng đó.
// • Cần dùng switch-case cho các tháng và dùng if để kiểm tra năm nhuận cho trường hợp
// tháng 2.

// input: thang va nam
// output: so ngay cua thang do

#include <stdio.h>

int main()
{

    int thang, ngay;
    int nam;

    printf("Nhap thang : ");
    scanf("%d", &thang);

    printf("Nhap nam : ");
    scanf("%d", &nam);

    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:

        ngay = 31;
        break;

    case 2:
        if (nam % 4 == 0 && nam % 100 != 0)
        {
            ngay = 29;
        }
        else
        {
            ngay = 28;
        }
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        ngay = 30;
        break;

    default:
        printf("Thang khong hop le ");
        break;
    }

    printf("Thang %d cua nam %d co : %d ngay", thang, nam, ngay);

    return 0;
}
