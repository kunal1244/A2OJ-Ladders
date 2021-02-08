#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n, r, avg, a, b, sum = 0;
    cin >> n >> r >> avg;
    pair<ll, ll> tally[n];
    for(ll i = 0; i < n; i++){
        cin >> a >> b;
        tally[i] = make_pair(b, a);
        sum += a;
    }
    ll mtg = avg * n - sum;
    if(mtg <= 0){
        cout << 0 << endl;
    }
    else{
        ll count = 0;
        sort(tally, tally + n);
        for(ll i = 0; i < n; i++){
            if(mtg <= 0) break;
            if(r - tally[i].second <= mtg){
                count += (r - tally[i].second) * tally[i].first;
                mtg -= r - tally[i].second;
            }
            else{
                count += mtg * tally[i].first;
                mtg = 0;
            }
        }
        cout << count << endl;
    }

}