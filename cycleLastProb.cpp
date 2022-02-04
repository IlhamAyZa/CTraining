#include <iostream>
using namespace std;

int main(){

    int ans, temp1, temp2;
    bool cont = true;

    while (cont)
    {    
    
    int rand1 = 1 + rand()%100, rand2 = 1 + rand()%100, randSign = 1 + rand()%4;
    
    switch (randSign)
        {
        case 1:
            //Sign = "+";
            temp1 = rand1;
            temp2 = rand2;
            cout << temp1 << " + " << temp2 << " = ";
            cin >> ans;
            if (ans != temp1 + temp2)
            {
                cont = false;
                break;
            }
            break;
        case 2:
            //Sign = "-";
            temp1 = rand1;
            temp2 = rand2;
            cout << temp1 << " - " << temp2 << " = ";
            cin >> ans;
            if (ans != temp1 - temp2)
            {
                cont = false;
                break;
            }
            break;
        case 3:
            //Sign = "*";
            temp1 = rand1;
            temp2 = rand2;
            cout << temp1 << " * " << temp2 << " = ";
            cin >> ans;
            if (ans != temp1 * temp2)
            {
                cont = false;
                break;
            }
            break;
        case 4:
            //Sign = "/";
            temp1 = rand1;
            temp2 = rand2;
            cout << temp1 << " / " << temp2 << " = ";
            cin >> ans;
            if (ans != temp1 / temp2)
            {
                cont = false;
                break;
            }
            break;
        }
    }

    return 0;
}