#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    string name;
    cin >> name;
    int n;
    cin >> n;
    map<string, int> M, S{{"posted", 15}, {"commented", 10}, {"likes", 5}};
    for (string a, b, c, x; cin >> a >> b >> c >> x; M[a], M[c]){
        if (c == "on") c = x, cin >> x;
        c.pop_back();
        c.pop_back();
        if (a == name) M[c] += S[b];
        if (c == name) M[a] += S[b];
    }
    vector<pair<int, string>> V;
    for (auto p : M) V.push_back({-p.second, p.first});
    sort(V.begin(), V.end());
    for (auto p : V) if (p.second != name) cout << p.second << '\n';
}

int main(){
    std::ios_base::sync_with_stdio(NULL);
	cin.tie(NULL); 
    cout.tie(NULL);
    ll t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}