#include <stdio.h>
#include "functions.h"

int main() {
    // 1) Data types
    int num1 = 10;
    float num2 = 15.5;
    double avg = calculateAverage(num1, num2);
    printf("1. Average of %d and %.1f is: %.2f\n", num1, num2, avg);

    // 2) If/else
    int score = 85;
    char grade = determineGrade(score);
    printf("2. Grade for score %d is: %c\n", score, grade);

    // 3) Loops
    int num = 5;
    long factorial = calculateFactorial(num);
    printf("3. Factorial of %d is: %ld\n", num, factorial);

    // 4) No return function
    printf("4. Pattern with 4 rows:\n");
    printPattern(4);

    // 5) Array and string
    char str[] = "Hello World";
    int vowels = countVowels(str);
    printf("5. Number of vowels in '%s': %d\n", str, vowels);

    return 0;
}
