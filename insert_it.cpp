#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c,i;
    cin >> a;
    vector<int> A(a);
    for (i = 0; i < a; i++) 
    {
        cin >> A[i];
    }
    cin >> b;
    vector<int> B(b);
    for (i = 0; i < b; i++) 
    {
        cin >> B[i];
    }
    cin >> c;
    A.insert(A.begin() + c, B.begin(), B.end());
    for (i = 0; i < A.size(); i++) 
    {
        cout << A[i] << " ";
    }
    return 0;
}
