#include <iostream>
using namespace std;

int main()
{
    cout << "Assignment 1 \n";

    int tnum;

    cout << "Enter transmission number: ";
    cin >> tnum;

    switch (tnum)
    {
    case 1:
        cout << "1-20 km/h \n";
        break;
    case 2:
        cout << "20-45 km/h \n";        
        break;
    case 3:
        cout << "45-80 km/h \n";        
        break;
    case 4:
        cout << "80-100 km/h \n";        
        break;
    case 5:
        cout << "100-150 km/h \n";        
        break;
    case 6:
        cout << "150-200 km/h \n";        
        break;
    default:
        cout << "Your speed is too big! \n"; 
        break;
    }

    cout << "Assignment 2 \n";

    int dayNum;

    cout << "Enter day number: ";
    cin >> dayNum;

    switch (dayNum)
    {
    case 1:
        cout << "5 days left till weekends \n";
        break;
    case 2:
        cout << "4 days left till weekends \n";
        break;
    case 3:
        cout << "3 days left till weekends \n";
        break;
    case 4:
        cout << "2 days left till weekends \n";
        break;
    case 5:
        cout << "1 day left till weekends \n";
        break;
    default:
        cout << "There are weekends already! Enjoy! :)\n";
        break;
    }

    cout << "Assignment 3 \n";

    int stepnum;
    cout << "Enter step number: ";
    cin >> stepnum;

    switch (tnum)
    {
    case 1:
        cout << "1st step \n";
    case 2:
        cout << "2nd step \n";        
    case 3:
        cout << "3rd step \n";        
    case 4:
        cout << "4th step \n";        
    default:
        cout << "END \n";
        break;
    }

    cout << "Assignment 4";
    
    int dishId, transpType, total;
    bool endOrder;

    do
    {
        cout << " dish_name | cost | id\n";
        cout << " dish #1   | 800  | 1\n";
        cout << " dish #2   | 1200 | 2\n";
        cout << " dish #3   | 600  | 3\n";
        cout << " dish #4   | 1600  | 4\n";
        cout << " dish #5   | 1400 | 5\n";

        cout << "Enter dish id : ";
        cin >> dishId;

        switch (dishId)
        {
        case 1:
            total += 800;
            break;
        case 2:
            total += 1200;
            break;
        case 3:
            total += 600;
            break;
        case 4:
            total += 1600;
            break;
        case 5:
            total += 1400;
            break;
        default:
            cout << "Wrong dish id\n";
            break;
        }

        cout << "End your order (true/false)";
        cin >> endOrder;

    } while (endOrder);

    cout << "Choose type of transportation \n";
    cout << " self transport   | 0   | 1\n";
    cout << " normal transport | 250 | 2\n";
    cout << " fast transport   | 500 | 3\n";

    cin >> transpType;

    switch (transpType)
    {
    case 1:
        break;
    case 2:
    total += 250;
        break;
    case 3:
    total += 500;
        break;
    
    default:
        cout << "Wrong transpotation type \n";
        break;
    }

    cout << "Assignment 5\n";

    int percOfB, cost;

    cout << "Enter num :";
    cin >> percOfB;

    cout << "Enter cost :";
    cin >> cost;

    if( 3 < percOfB <= 5){
        percOfB = 3;
    }
    else if (5 < percOfB <= 10){
        percOfB = 5;
    }
    else{
        percOfB = 10;
    }

    switch (percOfB)
    {
    case 0:
        cout << "no damage\n";
        break;
    case 3:
        cout << "little damage\n";
        cost *= 0.95;
        cout << cost;
        break;
    case 5:
        cout << "has damage\n";
        cost *= 0.9;
        cout << cost;
        break;
    case 10:
        cout << "a lot of damage\n";
        cout << "Good would not be sold";
        break;
    }
    return 0;
}
