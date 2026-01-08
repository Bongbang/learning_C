// Bài 12: Viết chương trình nhập vào điểm trung bình của một sinh viên (thang điểm 10). Dựa
// vào điểm số, phân loại và in ra học lực:
// • 0.0 ≤ đ𝑖ể𝑚 < 5.0: Yếu
// • 5.0 ≤ đ𝑖ể𝑚 < 6.5: Trung bình
// • 6.5 ≤ đ𝑖ể𝑚 < 8.0: Khá
// • 8.0 ≤ đ𝑖ể𝑚 ≤ 10.0: Giỏi

// Input : Diem trung binh
// Output: Hoc luc

#include <stdio.h>

int main()
{
    float diem;

    printf("Nhap diem trung binh của sinh vien: ");
    scanf("%f", &diem);

    if (diem < 0 || diem > 10)
    {
        printf("Diem khong hop le! Vui long nhap trong khoang 0 den 10.\n");
    }
    else
    {

        if (diem >= 8.0)
        {
            printf("Hoc luc: Gioi\n");
        }
        else if (diem >= 6.5)
        {
            printf("Hoc luc: Kha\n");
        }
        else if (diem >= 5.0)
        {
            printf("Hoc luc: Trung binh\n");
        }
        else
        {
            printf("Hoc luc: Yeu\n");
        }
    }

    return 0;
}