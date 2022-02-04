#include <iostream>
#include <random>
using namespace std;

int main()
{
    cout << "Assignment 1\n";
    int number, total;

    for (int i = 0; i < 3; i++){
        number = rand(1, 10);

        cout << number << "\n";

        if(number < 6){
            cout << "You got 2 points";
            total += 2;
        }
        else if (numer < 9){
            cout << "You got 4 points";
            total += 4;
        }
        else{
            cout << "You got 7 points";
            total += 7;
        }
    }

    cout << "Points earned: " << total << "\n";

    cout << "Assignment 2\n";

    char a = 'a';

    for (int i=0; i<26; i++){
        a++;
        cout << a << "\n";
    }

    return 0;
}
