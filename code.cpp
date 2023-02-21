#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int guess, number, attempts = 0;
    srand(time(0)); // seed random number generator
    number = rand() % 100 + 1; // generate random number between 1 and 100

    cout << "Guess a number between 1 and 100." << endl;

    do
    {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if(guess > number)
        {
            cout << "Too high! Try again." << endl;
        }
        else if(guess < number)
        {
            cout << "Too low! Try again." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }
    } while(guess != number);

    return 0;
}
