#include <iostream>
#include <string>
using namespace std;

int main(){

    string str;
    int num;

    cout << "1. TV" << endl;
    cout << "2. Microware" << endl;
    cout << "3. Iron" << endl;
    cout << "4. Refrigirator" << endl;

    cin >> str;

    cout << "You choosed " << str << "0 - turn off, 1 - turn on | Enter: ";
    cin >> num;

    switch (expression)
    {
    case 0:
        cout << "Turned OFF";
        break;
    case 1:
        cout << "Turned ON";
        break;
    
    default:
        break;
    }
}