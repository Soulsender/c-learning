#include <stdio.h>

int main() {
    int age;
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are valid");
    }
    else if (age < 0) {
        printf("Invalid age");
    }
    else {
        printf("You are not 18");
    }
    
    return 0;
}