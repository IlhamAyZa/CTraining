#include <iostream>
#include <string>
using namespace std;

int main(){

    string cipher = "$765H76%8676&%&(487678998A65^&^^%67PP89Y^7&8^&&&6784S33657896U56&&^%$%^&MM89765^&(&&76687567897542E32$%#$)(7656787^%$&R^((";

    for (int i = 0; i < cipher.length(); i++){

        if(isalpha(cipher[i]) == false){
            cipher.replace(i,1,"");
            i--;
        }

    }

    cout << cipher;

    return 0;
}