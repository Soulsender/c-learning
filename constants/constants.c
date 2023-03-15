#include <stdio.h>
#include <stdlib.h>
 
int main() {

    // num can be modified
    int num = 5;
    print("%d", num);
    num = 8;
    printf("%d", num);

    // consts are usually CAPITALS
    const int NUM2 = 13;
    // this won't work
    NUM2 = 123;

    // also a constant
    printf("asdasd");

    // also a constant
    printf("%d", 90); 

}