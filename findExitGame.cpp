#include <iostream>
using namespace std;

int main()
{
    int choise;
    bool have_a_key = false, can_go_out = false, open_box = false;

    cout << "You are in the room, try go out.\n" ;

    cout << "You look around and notice ....\n";

    while (have_a_key == false && can_go_out == false && open_box == false){
        cout << "::";
        cin >> choise;

        switch (choise)
        {
            case 1:
                cout << "1:";
                cin >> choise;

                switch (choise)
                {
                case 1:
                    cout << "1/";
                    break;
                case 2:
                    cout << "2/";
                    break;
                case 3:
                    cout << "3|";
                    can_go_out = true;
                    break;
                }
                break;

            case 2:
                cout << "2:";
                cin >> choise;

                switch (choise)
                {
                case 1:
                    cout << "1|";
                    open_box = true;
                    break;
                case 2:
                    cout << "2|";
                    open_box = true;
                    break;
                case 3:
                    cout << "3/";
                    break;
                }
                break;

            case 3:
                cout << "3:";
                cin >> choise;

                switch (choise)
                {
                case 1:
                    cout << "1|";
                    have_a_key = true;
                    break;
                case 2:
                    cout << "2/";
                    break;
                }
                break;
        }
    }
}