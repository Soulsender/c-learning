#include <stdio.h>
#include <stdlib.h>

int main() {

    // strings are arrays of chars
    char name[] = "John";
    int age = 38;

    // %s means a string
    printf("There was a man named %s.\n", name);

    // %d means an int
    printf("The man was %d years old.", age);

    printf("\n");
    return 0;
}