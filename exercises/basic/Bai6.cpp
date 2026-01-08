// Bài 6: Viết chương trình nhập vào một số nguyên không âm 𝑁! (𝑁 > 0). Tính và in ra 𝑁!
// • Quy ước: 0! = 1.

// input : So nguyen N khong am
// Output : In ra N!
// vi du: n = 3 -> Tich =  Tich (=1) * 1 * 2 * 3

#include <stdio.h>

int main()
{

    int N;
    long Tich = 1;

    printf("Nhap vao so nguyen N khong am: ");
    scanf("%d", &N);

    if (N < 0)
    {
        printf("Gia tri khong hop le");
        return 0;
    }

    printf("So N = %d\n", N);

    for (int i = 1; i <= N; i++)
    {
        //  Tich =  Tich (=1) * 1 * 2 * 3
        Tich = Tich * i;
    }

    printf("N! = %d", Tich);

    return 0;
}
