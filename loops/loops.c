#include <stdio.h>
#include <string.h>

int main() {

    for (int i = 1; i <= 10; i++) {
        printf("Hello %d\n", i);
    }

    char name[25];
    printf("What is your name?\n");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0) {
        printf("INVALID NAME\n");
        printf("What is your name?\n");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s", name);

}