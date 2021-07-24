#include <iostream>
using namespace std;

void calculate(int number) {
    //Finding a random number between 1-10
    int randomNumber;
    randomNumber = rand() % 10 + 1;
  
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
      
        cout << "Guess a number between 1-10: ";
        cin >> number;
        //Calling calculate function to see if the numbers match
        calculate(number);
        
        cout << "Continue? (y / n): ";
        cin >> cont;
        
        if (cont == 'n') {
            break;
        }
    }
}
