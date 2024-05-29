#include <stdio.h>

// function prototypes
// useful for debugging, and will prevent compilation if insufficent arguments are provided
void birthday(char[], int);
double square(double);

int main() {
    char name[] = "Soul";
    int age = 18;
    
    // call birthday function
    birthday(name, age);

    double x = square(age);
    printf("Your age squared is: %lf\n", x);

    return 0;
}

void birthday(char name[], int age) {
    printf("Happy birthday %s!\n", name);
    printf("You are %d\n", age);
}

// declare function as type it is returning
double square(double x) {
    return x * x;
}