#include <stdio.h>
#include <string.h>

int main() {
    char string1[] = "Soul";
    char string2[] = "sender";

    // convert to lowercase
    strlwr(string1);

    // convert to uppercase
    strupr(string1);

    // append string1 to string2
    strcat(string1, string2);

    // append n chars from string2 to string1
    strncat(string1, string2, 1);

    // copy string2 to string1
    strcpy(string1, string2);

    // copy n chars from string2 to string1
    strncpy(string1, string2, 1);

    // set all chars to given char
    strset(string1, '?');

    // sets n char to given char
    strnset(string1, 'x', 1); 

    // reverse string
    strrev(string1);

    // returns length of string
    int result = strlen(string1);

    // compare chars
    int result = strcmp(string1, string2);

    // compare n chars
    int result = strncmp(string1, string2, 1);

    // compare all (case insensitive)
    int result = strcmpi(string1, string2);

    // compare all n (case insensitive)
    int result = strncmpi(string1, string2, 1);

}