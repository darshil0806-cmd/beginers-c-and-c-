#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with current time
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int gussed;


    //printf("Random number between 1 and 100: %d\n", randomNumber);
    do {
        printf("guess the number (between 1 and 100): ");
        scanf("%d", &gussed);
        if (gussed < randomNumber) {
        printf("you gussed too low\n");
    } else if (gussed > randomNumber) {
        printf("you gussed too high\n");
    } else {
        printf("you gussed it right in %d attempts\n", no_of_guesses);
    }
    no_of_guesses++;
    } while (gussed != randomNumber);
    

  

    return 0;
}


