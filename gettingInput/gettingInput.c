#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[25];
    int age;

    printf("What is your name? \n");
    fgets(name, 25, stdin);
    printf("Your name is %s \n", name);

    printf("How old are you? \n");
    scanf("%d", &age);
    printf("You are %d years old \n", age);
    
    return 0;
}