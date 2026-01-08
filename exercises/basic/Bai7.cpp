// Bài 7: Viết chương trình nhập vào một số nguyên dương 𝑁. Tìm và in ra số đảo ngược của 𝑁.
// • Ví dụ: Nhập 12345, in ra 54321.

// input : So nguyen duong N
// output: So dao nguoc cua N

#include <stdio.h>

int main()
{
    int N;
    int revN = 0;

    printf("Nhap vao so nguyen duong n :");
    scanf("%d", &N);

    while (N > 0)
    {
        revN = revN * 10 + N % 10;

        N = N / 10;
    }
    printf("So dao nguoc cua N la : %d", revN);

    return 0;
}
