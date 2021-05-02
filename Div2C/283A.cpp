#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, size, flag, a, x, k, arr[200200];
    double prefix[200200], sum;
    size = 1;
    sum = 0;
    cin >> n;
    while (n--){
        cin >> flag;;
        if (flag == 1){
            cin >> a >> x;
            prefix[a] += x;
            sum += double(a) * x;
        }
        else if (flag == 2){
            cin >> k;
            arr[++size] = k;
            prefix[size] = 0;
            sum += k;
        }
        else{
            prefix[size - 1] += prefix[size];
            sum -= arr[size];
            sum -= prefix[size--];
        }
        cout << fixed << setprecision(8) <<  sum / size << endl;
    }
}

int main(){
    std::ios_base::sync_with_stdio(NULL);
	cin.tie(NULL); 
    cout.tie(NULL);
    ll flag = 1;
    // cin >> flag;
    while(flag--){
        solve();
    }
    return 0;
}