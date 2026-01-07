// Bài 3: Viết chương trình nhập vào 3 hệ số 𝑎, 𝑏, 𝑐 của phương trình bậc hai 𝑎𝑥^2 + 𝑏𝑥 + 𝑐 = 0.
// Biện luận và in ra kết quả (vô nghiệm, nghiệm kép, hoặc 2 nghiệm phân biệt).
// • Cần include thư viện math.h để dùng hàm sqrt().

// input: a, b , c
// output: in ra kết quả (vô nghiệm, nghiệm kép, hoặc 2 nghiệm phân biệt)

#include <stdio.h>
#include <math.h>

int main()
{

    int a, b, c;

    printf("Nhap vao ba so a, b, c :");
    scanf("%d %d %d", &a, &b, &c);

    printf("In ra ba so :%d %d %d\n", a, b, c);

    int delta = b * b - 4 * a * c;

    printf("Delta = %d\n", delta);

    if (delta < 0)
    {
        printf("Phuong trinh vo nghiem");
    }
    else if (delta == 0)
    {
        printf("Phuong trinh co nghiem kep : %.2f ", -b / 2 * a);
    }
    else
    {
        printf("Phuong trinh co 2 nghiem phan biet. x1 = %.2f; x2 = %.2f", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));
    }

    return 0;
}
