#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "string", s;
    cout << str << ", " << endl;
    cout << str.substr(1, 3) << endl;    

    cout << "1 : ";
    cin >> s;

    if(s.substr(1, 3) == "Hel"){
        cout << " :) " << endl;
    }
    else if(s.substr(1, 3) == "Bye"){
        cout << " :( " << endl;
    }

    cout << "2 : ";
    cin >> s;

    cout << s.substr(0, s.length()/2) << endl;

    cout << "3 : ";
    cin >> s;

    cout << s.substr(s.length()/2);
    cout << s.substr(0, s.length()/2) << endl;

    str = "red car";
    str.replace(4, 3, "hat");
    cout << str << endl;

    str = "Run away from the Dragon";
    str.replace(18, 6, "me");
    cout << str << endl;

    str = "Keep calm and learn Python";
    str.replace(20, 6, "C++");
    cout << str << endl;

    cin >> s;

    s.replace(0, s.length() / 2, "bla-bla-bla-bla");

    cout << s;

    cin >> s;

    s.replace(0,3,"0_o");
    s.replace(s.length()-3, 3, "0_o");

    cout << s;

    cin >> s;

    if(s.length() > 20){
        s.clear();
    }

    cout << s;

    cin >> s;

    if(s.empty()){
        cout << "string is empty";
    }

    cout << s;

    cin >> s;

    s.erase(0, 3);

    cout << s;

    cin >> s;

    s.insert(1, "ooooooopppppp");

    cout << s;

    cin >> s;

    if(s.length() < 5){
        s.append("$");
    }
    else{
        s.append("$$");
    }

    cout << s;

    cin >> s;
    str = "parol";

    if(s == str){
        cout << "Access accepted";
    }
    else{
        cout << "Access denied";
    }

    str = "string to compare";
    cin >> s;

    cout << str.compare(s);
    
    str = "I don't like coding, I love coding!";
    cout << str.find("coding") << '\n';
    cout << str.rfind("coding\n");

    cout << ": ";
    cin >> s;

    cout << s.find("coding") << '\n';
    
    int num1, num2;
    cout << ": ";
    cin >> s;
    
    num1 = s.find("cat");
    num2 = s.rfind("cat");

    if (num1 == -1){
        cout << "Where are the cats?";
    }
    else if(num1 != num2){
        cout << "You love cats, right? :)";
    }

    return 0;
}