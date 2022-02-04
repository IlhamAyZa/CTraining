#include <iostream>
using namespace std;

main(){

    int num1, num2;
    char op;
    cout << "Enter 1st number : ";
    cin >> num1;

    cout << "Enter 2nd number : ";
    cin >> num2;

    cout << "Enter operation : ";
    cin >> op;

    switch(op){
        case '+':
            cout << num1+num2;
            break;
        case '-':
            cout << num1-num2;
            break;
        case '*':
            cout << num1*num2;
            break;
        case '/':
            cout << num1/num2;
            break;
        default:
            cout << "You entered wrong operation";
            break;
    }

    return 0;
}