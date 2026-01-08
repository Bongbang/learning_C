// Bài 8: Viết chương trình nhập vào một số nguyên dương 𝑁 (𝑁 ≥ 2). Kiểm tra xem 𝑁 có phải
// là số nguyên tố hay không và in ra kết luận.

// • 𝑁 là số nguyên tố nếu nó chỉ chia hết cho 1 và chính nó.

// Chỉ cần kiểm tra phép chia hết
// cho các số từ 2 đến √𝑛 hoặc n/2 "

// input : So nguyen duong n (n >= 2)
// output : Ket luan n co phai la so nguyen to khong

#include <stdio.h>

int main()
{

    int n;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Gia tri khong hop le");
        return 0;
    }

    bool laSoNguyenTo = 1; // mặc định nó là số nguyên tố

    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            laSoNguyenTo = 0;
        }
    }

    if (laSoNguyenTo)
    {
        printf("n = %d la so nguyen to", n);
    }
    else
    {
        printf("n = %d khong phai la so nguyen to", n);
    }

    return 0;
}
