//    Purpose: Coding - (Rock, Paper, Scissors) in C.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to determine the winner
void determine_winner(char player, char computer) {
    if (player == computer) {
        printf("It's a tie!\n");
    } else if ((player == 'r' && computer == 's') ||
               (player == 'p' && computer == 'r') ||
               (player == 's' && computer == 'p')) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }
}

int main() {
    char player_choice, computer_choice;
    char choices[] = {'r', 'p', 's'}; // r: Rock, p: Paper, s: Scissors

    // Seed the random number generator
    srand(time(0));

    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("Enter your choice (r for Rock, p for Paper, s for Scissors): ");
    scanf(" %c", &player_choice);

    // Validate user input
    if (player_choice != 'r' && player_choice != 'p' && player_choice != 's') {
        printf("Invalid input. Please enter 'r', 'p', or 's'.\n");
        return 1;
    }

    // Generate computer's choice
    computer_choice = choices[rand() % 3];

    // Display choices
    printf("You chose: %c\n", player_choice);
    printf("Computer chose: %c\n", computer_choice);

    // Determine the winner
    determine_winner(player_choice, computer_choice);

    return 0;
}