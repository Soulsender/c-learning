#include <stdio.h>

int main() {
    char grade;

    printf("Enter a grade: \n");
    scanf("%c", &grade);

    switch (grade) {
        case 'A':
            printf("Perfect\n");
            break;
        case 'B':
            printf("Good\n");
            break;
        case 'C':
            printf("Okay\n");
            break;
        case 'D':
            printf("bruh\n");
            break;
        default:
            printf("Enter only valid grades\n");
    }
}