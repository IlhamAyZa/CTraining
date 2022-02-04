#include <iostream>
using namespace std;

int main(){

    float y = 213.23;
    double z = 122.900233;
    bool l = true;

    int upgd_y = (int) y ;
    double upgd_X = (double) x2/x1 ;

    cout << "Задания\n";
    int x1 = 12;
    int x2 = 60;

    cout << "1 : ";
    cout << x1 + x2 << endl;
    
    cout << "2 : ";
    char i = 'i', t ='t', g = 'g', e = 'e', n = 'n', o = 'o';
    cout << 'i' << 't'<< 'g' << 'e' << 'n'<< 'i' << 'o' << endl;
    
    
    cout << "3 : ";
    int day = 24, mounth = 12, year = 2002;
    cout << day << "/" << mounth << "/" << year << endl;
    
    cout << "4 : ";
    int n1, n2;
    cout << "Enter numbers to sum them up:" << endl;
    std::cin >> n1;
    std::cin >> n2;
    
    cout << "sum : " << n1 + n2 << endl;
    
    char a = 'a', b = 'c';
    cout << "5 : ";
    cout << a + b << endl;
    cout << a + 1;
    
    return 0;
}