#include <stdio.h>
#include <string.h>

int main() {

    double prices[] = {5.0, 10.0, 15.0, 30.0, 60.0, 7.0, 1.0};
    char name[] = "Soul";

    // access element in array
    printf("$%.2lf\n", prices[0]);

    // iterate through all elements in array
    for (int i=0; i < sizeof(prices)/sizeof(prices[0]); i++) {
        printf("$%.2lf\n", prices[i]);
    }

    // 2D array
    int numbers[][3] = {{1, 2, 3},{4, 5, 6}};

    // create empty 2D array
    int moreNumbers[2][3];

    // set elements
    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;

    for (int x=0; x<2; x++) {
        for (int y=0; y<0; y++) {
            printf("%d\n", numbers[x][y]);
        }
    }

    // create array of strings
    char cars[][10] = {"Mustang", "Corvette", "Camaro"};

    // change element in array
    strcpy(cars[0], "Tesla");

    for (int v=0; v < sizeof(cars)/sizeof(cars[0]); v++) {
        printf("%s\n", cars[v]);
    }

}