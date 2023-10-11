#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "----------------------------------------" << endl;
    cout << "| Welcome to the Number Guessing Game! |" << endl;
    cout << "----------------------------------------" << endl;
    cout << "A number is selected between 0 to 100, try your luck by guessing it!\n"
         << endl;

    do
    {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber)
        {
            cout << "Too low! Try again." << endl;
        }
        else if (guess > secretNumber)
        {
            cout << "Too high! Try again." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the number " << secretNumber << " in " << attempts << " attempts." << endl;
        }

    } while (guess != secretNumber);

    return 0;
}