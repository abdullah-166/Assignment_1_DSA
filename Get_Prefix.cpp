#include <bits/stdc++.h>
using namespace std;
void rps(long long int arr[], long long int N)
{
    int long long ps[N];
    ps[0] = arr[0];
    for (int i = 1; i < N; i++) 
    {
        ps[i] = ps[i-1] + arr[i];
    }
    for (int i = N-1; i >= 0; i--) 
    {
        cout << ps[i] << " ";
    }
    cout << endl;
}
int main()
{
    long long int a;
    cin >> a;
    long long int arr[a];
    for (int i = 0; i < a; i++) 
    {
        cin >> arr[i];
    }
    rps(arr, a);
    return 0;
}
