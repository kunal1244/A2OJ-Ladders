#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll n, k, tmp1, tmp2, tmpf;
    cin >> n >> k;
    ll max_val = INT_MIN;
    for(ll i = 0; i < n; i++){
        cin >> tmp1 >> tmp2;
        if(tmp2 > k){
            tmpf = tmp1 - (tmp2 - k);
        }
        else{
            tmpf = tmp1;
        }
        max_val = max(max_val, tmpf);
    }
    cout << max_val << endl;

}