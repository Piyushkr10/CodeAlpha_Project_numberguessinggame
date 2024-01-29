#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

class game
{
    int value, guess, vgusess = 1;

public:
    void disp()
    {
        srand(time(0));
        value = rand() % 100 + 1;
        do
        {
            cout << "Guess the number between 1 to 100" << endl;
            cin >> guess;
            if (guess > value)
            {
                cout << "Lower number please!" << endl;
            }
            else if (guess < value)
            {
                cout << "Higher number please!" << endl;
            }
            else
            {
                cout << "you guessed it in " << guess;
            }
            vgusess++;
        } while (guess != value);
    }
};
int main()
{
    game g;
    g.disp();
    return 0;
}