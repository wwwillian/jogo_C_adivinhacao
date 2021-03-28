#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    printf("\n\n");
    printf("          P  /_\\  P                                 \n");
    printf("         /_\\_|_|_/_\\                               \n");
    printf("     n_n | ||. .|| | n_n            Welcome to       \n");
    printf("     |_|_|nnnn nnnn|_|_|       the guessing game!    \n");
    printf("    |\" \"  |  |_|  |\"  \" |                        \n");
    printf("    |_____| ' _ ' |_____|                            \n");
    printf("          \\__|_|__/                                 \n");
    printf("\n\n");
    
    printf("*********************************\n");
    printf("* Welcome to the guessing game! *\n");
    printf("*********************************\n");

    int sec = time(0);
    srand(sec);

    int bignumber = rand();
    int secretNumber = bignumber % 100;
    int lucky;
    int attempts = 0;
    double point = 1000;

    while(1) {
        attempts++;

        printf("Attempts %d\n", attempts);
        printf("Whats is your lucky number?\n");

        scanf("%d", &lucky);
        printf("Your lucky number is %d\n", lucky);

        if(lucky < 0) {
            printf("You cannot kick negative numbers!\n");
            attempts--;
            continue;
        }

        int right = (lucky == secretNumber);
        int bigger = lucky > secretNumber;

        if (right) {
            printf("             OOOOOOOOOOO               \n");
            printf("         OOOOOOOOOOOOOOOOOOO           \n");
            printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
            printf("    OOOOOO      OOOOO      OOOOOO      \n");
            printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
            printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
            printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
            printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
            printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
            printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
            printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
            printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
            printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
            printf("         OOOOOO         OOOOOO         \n");
            printf("             OOOOOOOOOOOO              \n");
            printf("\n");
            printf("Congratulations! You're right!\n");
            printf("Play again, you are a good player!\n\n");
            break;
        }  else if (bigger) {
            printf("       \\|/ ____ \\|/    \n");
            printf("        @~/ ,. \\~@      \n");
            printf("       /_( \\__/ )_\\    \n");
            printf("          \\__U_/        \n");
            printf("\n");
            printf("Your kick was bigger than the secret number!\n\n");
        } else  {
            printf("       \\|/ ____ \\|/    \n");
            printf("        @~/ ,. \\~@      \n");
            printf("       /_( \\__/ )_\\    \n");
            printf("          \\__U_/        \n");
            printf("\n");
            printf("His kick was less than the secret number!\n\n");
        }

        double lostPoints = abs(lucky - secretNumber) / (double)2;
        point = point - lostPoints;
    }
    printf("Game Over!\n");
    printf("You got it right with %d attempts!\n\n", attempts);
    printf("Total of points: %.1f\n\n", point);
}