#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll b = 0, s = 0, c = 0, nb, ns, nc, pb, ps, pc, r;

ll f(ll x){
    return max(0LL, b * x - nb) * pb + max(0LL, s * x - ns) * ps + max(0LL, c * x - nc) * pc;
}

void solve(){
    string recipe;
    cin >> recipe;
    cin >> nb >> ns >> nc >> pb >> ps >> pc >> r;
    for(ll i = 0; i < recipe.size(); i++){
        if(recipe[i] == 'B') b++;
        if(recipe[i] == 'S') s++;
        if(recipe[i] == 'C') c++;
    }
    ll start = 0, end = INT64_MAX, result = 0;
    if(b) end = min(end, (nb + r / pb) / b);
    if(s) end = min(end, (ns + r / ps) / s);
    if(c) end = min(end, (nc + r / pc) / c);
    while(start <= end){
        ll mid = start + (end - start) / 2;
        if(f(mid) <= r){
            result = mid;
            start = mid + 1;
        }
        else end = mid - 1;
    }
    cout << result << endl;
}

int main(){
    std::ios_base::sync_with_stdio(NULL);
	cin.tie(NULL); 
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}