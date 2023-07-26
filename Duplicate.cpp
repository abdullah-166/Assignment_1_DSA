#include <bits/stdc++.h>
using namespace std;
string CD(int arr[], int N) 
{
    unordered_set<int> set;
    for (int i = 0; i < N; i++) 
    {
        if (set.find(arr[i]) != set.end()) 
        {
            return "YES";
        }
        set.insert(arr[i]);
    }
    return "NO";
}
int main() 
{
    int a;
    cin >> a;
    
    int arr[a];
    for (int i = 0; i < a; i++) 
    {
        cin >> arr[i];
    }
    string result = CD(arr, a);
    cout << result << endl;
    return 0;
}
