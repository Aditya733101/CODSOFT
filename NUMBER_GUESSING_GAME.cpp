#include <iostream>
#include <ctime>
#include <cstdlib>  
using namespace std;
int main() {   


    srand(static_cast<unsigned int>(time(nullptr)));
    
    int secretNumber = rand() % 100 + 1; 
    int guess;
    int attempts = 0;
    bool hasGuessed = false;
    
    cout << "Welcome to the Number Guessing Game!\n\n" <<endl;
    cout << "I'm thinking of a number between 1 and 100.\n" <<endl;

    while (!hasGuessed) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Too low! Try again." <<endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." <<endl;
        } else {
            cout << "Congratulations! You guessed the number in " <<attempts<< " attempts." <<endl;
            hasGuessed = true;
        }
    }

    return 0;
}