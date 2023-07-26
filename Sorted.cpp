#include <bits/stdc++.h>
using namespace std;
string s(const vector<int>& arr) 
{
    int n = arr.size();
    
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] < arr[i - 1])
        return "NO";
    }
    return "YES";
}
int main() 
{
    int x;
    cin >> x;
    while (x--) 
    {
        int a;
        cin >> a;
        vector<int> arr(a);
        for (int i = 0; i < a; i++) 
        {
            cin >> arr[i];
        }
        cout << s(arr) << endl;
    }
    return 0;
}
