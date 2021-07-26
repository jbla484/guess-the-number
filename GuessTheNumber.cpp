#include <iostream>
using namespace std;

void calculate(int number) {
    //Finding a random number between 1-10 using the rand() function call
    int randomNumber;
    randomNumber = rand() % 10 + 1;
    //Testing if the numbers match
    if (randomNumber == number) {
        cout << "Congrats, you guessed the right number!" << endl;
    }
    else {
        cout << "Nice try!" << endl;
    }
}

int main()
{
    while (true) {
        //Seeding rand() for a true random number
        srand(time(NULL));
      
        float number;
        char cont;
        //Asking the user for a number
        cout << "Guess a number between 1-10: ";
        cin >> number;
        //Calling calculate function
        calculate(number);
        //Asking user if they want to continue
        cout << "Continue? (y / n): ";
        cin >> cont;
        //Break loop if user enters 'n'
        if (cont == 'n') {
            break;
        }
    }
}
