#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Seed the random number generator with current time

    int toss = rand() % 2; // Generate a random number either 0 or 1

    if (toss == 0) {
        printf("Heads\n");
    } else {
        printf("Tails\n");
    }

    return 0;
}