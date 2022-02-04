#include <iostream>
using namespace std;

int main()
{

    for (int i = 0 ; i < 20; i+=2){
        cout << i << " ";
    }

    cout << "\n";

    for (int i = 0; i < 20; i++){

        if(i % 2 == 1){
            continue;
        }

        cout << i << " ";
    }
}