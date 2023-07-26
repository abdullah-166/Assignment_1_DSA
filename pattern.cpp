#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int a;
    cin >> a;
    int mid = a / 2;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++) 
        {
            if (i == j && i == mid) 
            {
                cout << "X";
            } else if (i == j) 
            {
                cout << "\\";
            } else if (i + j == a - 1) 
            {
                cout << "/";
            } else 
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
