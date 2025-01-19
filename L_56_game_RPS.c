//    Purpose: Rock Paper Scissors Game  


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void displayMenu() {
    printf("\nRock-Paper-Scissors Game\n");
    printf("Choose an option:\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
}

const char* getChoiceName(int choice) {
    switch (choice) {
        case 1: return "Rock";
        case 2: return "Paper";
        case 3: return "Scissors";
        default: return "Invalid";
    }
}

int main() {
    int userChoice, computerChoice;
    char playAgain;

    // Initialize random number generator
    srand(time(0));

    do {
        displayMenu();
        scanf("%d", &userChoice);

        if (userChoice == 4) {
            printf("Exiting the game. Goodbye!\n");
            break;
        }

        if (userChoice < 1 || userChoice > 3) {
            printf("Invalid choice! Please try again.\n");
            continue;
        }

        // Generate computer's choice (1: Rock, 2: Paper, 3: Scissors)
        computerChoice = (rand() % 3) + 1;

        printf("You chose: %s\n", getChoiceName(userChoice));
        printf("Computer chose: %s\n", getChoiceName(computerChoice));

        // Determine the winner
        if (userChoice == computerChoice) {
            printf("It's a draw!\n");
        } else if ((userChoice == 1 && computerChoice == 3) ||
                   (userChoice == 2 && computerChoice == 1) ||
                   (userChoice == 3 && computerChoice == 2)) {
            printf("You win!\n");
        } else {
            printf("Computer wins!\n");
        }

        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &playAgain);
    } while (playAgain == 'y' || playAgain == 'Y');

    printf("\nThank you for playing!\n");
    return 0;
}