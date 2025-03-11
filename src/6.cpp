#include <cstdlib>
#include <ctime>

int getRandomNumber() {
    srand(time(NULL)); // seed the random number generator with the current time
    return rand() % 6 + 1; // generate a random number between 1 and 6, inclusive
}
