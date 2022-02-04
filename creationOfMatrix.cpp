#include <iostream>
#include <random>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter dimetion of matrix (n x m) : ";
    cin >> n;
    cin >> m;

    int matrix [n][m];

    for (int i = 0; i < m; i++)
    {
        cout << " | "
        for (int j = 0; j < m; j++)
        {
            matrix[i][j] = rand() % 200 - 100 ;

            cout << matrix[i][j] << " ";
        }
        cout << " | " << endl;
    }
    
    return 0;
}