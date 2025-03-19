#include <stdio.h>
#include <ctype.h>      // tolower()
#include "functions.h"

// 1) Data types and type conversion
double calculateAverage(int num1, float num2) {
    // Ép kiểu và tính trung bình
    double average = (double)(num1 + num2) / 2.0;
    return average;
}

// 2) If/else (grade calculation)
char determineGrade(int score) {
    if (score >= 90) {
        return 'A';
    } else if (score >= 80) {
        return 'B';
    } else if (score >= 70) {
        return 'C';
    } else if (score >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

// 3) Loops (factorial)
long calculateFactorial(int n) {
    if (n < 0) {
        return -1; // Error case
    }
    long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// 4) No return function (print pattern)
void printPattern(int rows) {
    if (rows <= 0) {
        printf("Invalid number of rows\n");
        return;
    }
    int i = 1;
    while (i <= rows) {
        int j = 1;
        do {
            printf("* ");
            j++;
        } while (j <= i);
        printf("\n");
        i++;
    }
}

// 5) Array & string manipulation (count vowels)
int countVowels(char *str) {
    if (str == NULL) {
        return -1; // Error case
    }
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
        i++;
    }
    return count;
}
