#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "functions.h"

// Bài 1: Tính điểm trung bình 3 môn rồi xếp loại
void threeSubjectsGrade() {
    float toan, ly, hoa, diemTB;

    printf("Nhap diem Toan: ");
    scanf("%f", &toan);
    printf("Nhap diem Ly: ");
    scanf("%f", &ly);
    printf("Nhap diem Hoa: ");
    scanf("%f", &hoa);

    diemTB = (toan + ly + hoa) / 3.0f;
    printf("Diem trung binh: %.2f\n", diemTB);

    if (diemTB >= 8.0) {
        printf("Xep loai: Gioi\n");
    } else if (diemTB >= 6.5) {
        printf("Xep loai: Kha\n");
    } else if (diemTB >= 5.0) {
        printf("Xep loai: Trung binh\n");
    } else {
        printf("Xep loai: Yeu\n");
    }
}

// Bài 2: Tính điểm trung bình của n học sinh
void averageOfNStudents() {
    int n;
    float sum = 0, average;

    printf("Nhap so luong hoc sinh: ");
    scanf("%d", &n);

    float scores[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap diem hoc sinh thu %d: ", i + 1);
        scanf("%f", &scores[i]);
        sum += scores[i];
    }
    
    average = sum / n;
    printf("Diem trung binh cua lop la: %.2f\n", average);
}

// Bài 3: So sánh hai số nguyên
void compareTwoIntegers() {
    int a, b;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &b);

    if (a > b) {
        printf("%d lon hon %d\n", a, b);
    } else if (a < b) {
        printf("%d nho hon %d\n", a, b);
    } else {
        printf("%d bang %d\n", a, b);
    }
}

// Bài 4: In các số từ 1 đến 100 theo dạng 10 số trên 1 hàng
void print1To100() {
    for (int i = 1; i <= 100; i++) {
        printf("%d ", i);
        if (i % 10 == 0)
            printf("\n");
    }
}

// Bài 5: Đếm số nguyên âm trong chuỗi
int countVowels(const char *str) {
    if (str == NULL) {
        return -1; // Nếu chuỗi NULL, trả về -1
    }
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        char c = (char)tolower((unsigned char)str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
        i++;
    }
    return count;
}