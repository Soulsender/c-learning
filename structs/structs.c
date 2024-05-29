#include <stdio.h>

struct Player {
    char name[12];
    int score;

};

int main() {
    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Soul");
    player1.score = 4;

    strcpy(player2.name, "Cosmo");
    player2.score = 3;

    printf("%s: %d\n", player1.name, player1.score);
    printf("%s: %d\n", player2.name, player2.score);
    
}