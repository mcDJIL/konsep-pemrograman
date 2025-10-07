#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char you, char computer) {
    if (you == computer) {
        return -1;
    }

    if (you == 's' && computer == 'p') {
        return 0;
    } else if (you == 'p' && computer == 's') {
        return 1;
    } else if (you == 'p' && computer == 'z') {
        return 0;
    } else if (you == 'z' && computer == 'p') {
        return 1;
    } else if (you == 'z' && computer == 's') {
        return 0;
    } else if (you == 's' && computer == 'z') {
        return 1;
    }
}

char getComputerChoice(int n) {
    char choice;
    
    if (n < 33) {
        choice = 's';
        return choice;
    } else if (n > 33 && n < 66) {
        choice = 'p';
        return choice;
    } else {
        choice = 'z';
        return choice;
    }
}

char getUserChoice() {
    char choice;
    
    printf("\n\n\n\t\t\t\tEnter s for STONE, p for PAPER, z for SCISSOR\n\t\t\t\t\t\t\t");
    
    while (1) {
        scanf(" %c", &choice);

        if (choice == 's' || choice == 'p' || choice == 'z') {
            return choice;
        } else {
            printf("\t\t\t\tYou should choose one of them (s, p, z)\n\t\t\t\t\t\t\t");
        }
    }
}

void checkGame(int result) {
    if (result == -1) {
        printf("\t\t\t\tGame Draw!\n");
    } else if (result == 1) {
        printf("\t\t\t\tWow, you won the game\n");
    } else {
        printf("\t\t\t\tWow, you lost the game\n");
    }
}

int main()
{
    int result, n;
    char you, computer;
    
    srand(time(NULL));
    
    n = rand() % 100;
    
    computer = getComputerChoice(n);
    you = getUserChoice();
    
    result = game(you, computer);
    
    checkGame(result);

    printf("\t\t\t\tYou choose: %c and Computer choose: %c \n", you, computer);

    system("pause");

    return 0;
}
