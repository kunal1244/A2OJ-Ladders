#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, m, d;
 
    cin >> n >> m >> d;
 
    n *= m;
    int arr[n + 5];
 
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int r = arr[0] % d;
 
    for(int i = 0; i < n; i++){ 
        if(r != (arr[i] % d)){ 
            cout << -1 << endl;
            return 0;
        }
    }
 
    int ans = 0;
 
    for(int i = 0; i < n; i++)
    {
        ans+= abs(arr[i] - arr[n / 2]) / d;
    }
 
    cout << ans << endl;
    return 0;
}