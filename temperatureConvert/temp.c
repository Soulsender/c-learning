#include <stdio.h>

int main() {
    char userInput;
    float temp;
    float finalTemp;

    printf("Would you like to convert to F or C? [F/C]\n/>");
    scanf("%c", &userInput);
    printf("What would you like to convert to %c?\n/>", userInput);
    scanf("%f", &temp);

    if (userInput = 'C') {
        finalTemp = (temp - 32) * 5/9;
        printf("%fF in Celsius is:\n%fC\n", temp, finalTemp);
    } else if (userInput = 'F') {
        finalTemp = temp * 9/5 + 32;
        printf("%fC in Fahrenheit is:\n%fF\n", temp, finalTemp);
    }
    return 0;
}