#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // Seed the random number generator with the current time

    int lowerBound = 1;
    int upperBound = 100;
    int numberToGuess = rand() % (upperBound - lowerBound + 1) + lowerBound;
    int numberOfAttempts = 0;
    int playerGuess;

    std::cout << "Welcome to the Guess the Number game!" << std::endl;
    std::cout << "I'm thinking of a number between " << lowerBound << " and " << upperBound << ". Can you guess it?" << std::endl;

    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> playerGuess;
        numberOfAttempts++;

        if (playerGuess < lowerBound || playerGuess > upperBound) {
            std::cout << "Invalid guess. Please enter a number between " << lowerBound << " and " << upperBound << "." << std::endl;
            continue;
        }

        if (playerGuess < numberToGuess) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (playerGuess > numberToGuess) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::printf ("Congratulations! You guessed the number " ) numberToGuess << " in " << numberOfAttempts << " attempts." << std::endl;
            break;
        }
    }

    return 0;
}
