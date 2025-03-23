#include <stdio.h>
#include <string.h>   // để dùng strlen
#include "functions.h"

int main() {
    // Bài 1
    printf("=== Bai 1: Tinh diem trung binh 3 mon va xep loai ===\n");
    threeSubjectsGrade();

    // Bài 2
    printf("\n=== Bai 2: Tinh diem trung binh cua n hoc sinh ===\n");
    averageOfNStudents();

    // Bài 3
    printf("\n=== Bai 3: So sanh hai so nguyen ===\n");
    compareTwoIntegers();

    // Bài 4
    printf("\n=== Bai 4: In cac so tu 1 den 100 ===\n");
    print1To100();

    // Bài 5
    printf("\n=== Bai 5: Dem so nguyen am trong chuoi ===\n");
    // Để kiểm thử, ta cho phép người dùng nhập một chuỗi
    char str[100];
    printf("Nhap mot chuoi: ");
    // Xóa bộ đệm trước khi fgets (nếu cần) - tùy trình biên dịch
    fflush(stdin);

    // Đọc chuỗi có khoảng trắng
    if (fgets(str, sizeof(str), stdin) != NULL) {
        // Bỏ ký tự newline ở cuối (nếu có)
        int len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
        }
    }

    int vcount = countVowels(str);
    if (vcount == -1) {
        printf("Loi: Chuoi NULL\n");
    } else {
        printf("So nguyen am trong chuoi: %d\n", vcount);
    }

    return 0;
}
