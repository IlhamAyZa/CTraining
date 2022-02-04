#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "Problem 1" << endl;

    cin >> s;
    cout << "New string: " << removeDigits(s) << endl;

    cout << "Problem 2" << endl;

    int count = 0;
    cin >> s;

    //2
    if (s.length() %2 == 0)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (isdigit(s[i]))
            {
                count++;
            }
            
        }

        cout << ": " << count;
    
    }

    cout << "Problem 3" << endl;

    s = "lightbringer"

    if(s.find("light") != -1){
        cout << "There is a word " << s << " inside of the text";
    }
        
    cout << "Problem 4" << endl;

    string temp_s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        temp_s = s[s.length()-i];
    }

    cout << temp_s;

    cout << "Problem 5" << endl;

    cin >> s;
    cin >> temp_s;

    temp_s.replace(1, temp_s.legth()/2, s.substr(1, s.length()/2) );
}

string removeDigits(string st){
    // 1
    for(int i = 0; i < st.length(); i++){
        if(isdigit(st[i])){
            st.erase(i, 1);
            i--;
        }
    }

    return s;
}