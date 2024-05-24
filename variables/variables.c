#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

int age = 18;                           // %d
char name[] = "Soul";                   // %s
short money = 123123;                   // %d
unsigned int x = 2796969785;            // %u
long long int y =7345734753485734583;   // %lld / %llu (depending on signed/unsigned)
bool z = true;                          // %d (value is 1 or 0)
float a = 3.14;                         // %f
double b = 3.123123;                    // %lf

    printf("I am %s and I am %i\n", name, age);

    return 0;
}