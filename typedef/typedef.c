#include <stdio.h>

typedef struct User {
    char name[25];
    char password[25];
    int id;
} User;

int main() {
    // typedef gives keyword nickname for datatype

    User user1 = {"Soul", "password123", 123456789};
    User user2 = {"Cosmo", "password321", 987654321};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);
}