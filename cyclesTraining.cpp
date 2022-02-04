#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a;

    while (a < 10){
        cout << a << " ";
        a++;
    }
    
    do{
        a += 190;
        cout << a << " :::: ";
    }while (a <= 200);
    
    for (int i = 0; i < 10; i++){
        cout << i;
    }

    cout << "Example\n";
    int count, total = 0, n =1;
    // string num;

    // cout << "Enter number: ";
    // cin >> num;

    // while(num / 10 != 0){
    //     if (num % 10 == 3){
    //         count++;
    //     }
    //     num /= 10;
    // }
    // cout << count;
    // cout << "\n"

    do
    {
        total = total + n;
        n +=2;
    } while (n < 100);
    cout << total;
    cout << "\n"

    for (int i = 100; i <= 300; i++)
    {
        total += i ;
    }
    cout << total;

    return 0;
}
