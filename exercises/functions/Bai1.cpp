/*  void: ko trả về, thường dùng để in ra màn hình (ko cần return)
1 == true ; 0 == false*/

#include <stdio.h>
#include <math.h>

// 1. isEven(int n): Kiểm tra n có phải là số chẵn không.
bool laSoChan(int n)
{

    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// 2. isOdd(int n): Kiểm tra n có phải là số lẻ không.
int isOdd(int n)
{

    if (n % 2 != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// 4. isPrime(int n): Kiểm tra n có phải là số nguyên tố không.
int isPrime(int n)
{

    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

// 5. isSquareNumber(int n): Kiểm tra n có phải là số chính phương không.

int isSquareNumber(int n)
{
    int soCuaCanBacHai = sqrt(n);

    return (soCuaCanBacHai * soCuaCanBacHai == n);
    // phép so sánh trả về bằng (true, 1, đúng); ko bằng (0, false)

    // if ((int)sqrt(n) * sqrt(n) == n)
    // {
    //     return 1;
    // }
    // else
    // {
    //     return 0;
    // }
}

// 6. isPerfectNumber(int n): Kiểm tra n có phải là số hoàn hảo không. vidu: 6 = 1 + 2 + 3

int isPerfectNumber(int n)
{

    int sum = 0;

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    // if (sum == n)
    // {
    //     return 1;
    // }
    // else
    // {
    //     return 0;
    // }
    return (sum == n) ? 1 : 0;
}

int main()
{
    int n;
    printf("Nhap vao mot so n: ");
    scanf("%d", &n);

    if (laSoChan(n))
    {
        printf("%d la so chan\n", n);
    }
    else
    {
        printf("%d khong phai la so chan\n", n);
    }

    if (isOdd(n))
    {
        printf("%d la so le\n", n);
    }
    else
    {
        printf("%d khong phai la so le\n", n);
    }

    if (isPrime(n))
    {
        printf("%d la so nguyen to\n", n);
    }
    else
    {
        printf("%d khong phai la so nguyen to\n", n);
    }

    if (isSquareNumber(n))
    {
        printf("%d la so chinh phuong\n", n);
    }
    else
    {
        printf("%d khong phai la so chinh phuong\n", n);
    }

    if (isPerfectNumber(n))
    {
        printf("%d la so hoan hao\n", n);
    }
    else
    {
        printf("%d khong phai la so hoan hao\n", n);
    }

    return 0; // kết thúc chương trình
}
