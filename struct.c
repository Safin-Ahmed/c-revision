#include<stdio.h>
#include<string.h>
struct Player 
{
    char name[12];
    int score;
};
int main() {
    // Struct = Collection of related members ("variables")
    //          They can be of different data types
    //          Listed under one name in a block of memory
    //          Very Similar To Classes in other language (No Methods)

    struct Player player1;
    struct Player player2;
    strcpy(player1.name, "Safin");
    player1.score = 5;
    strcpy(player2.name, "Alfa");
    player2.score = 3;

    printf("Player1 Name: %s\n", player1.name);
    printf("Player1 Score: %d\n", player1.score);

    printf("Player2 Name: %s\n", player2.name);
    printf("Player2 Score: %d\n", player2.score);

    return 0;
}