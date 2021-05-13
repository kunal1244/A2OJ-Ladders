#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool flag = false;
string s, b;

void dfs(){
    if (cin >> s){
        b += s;
        if (s == "pair") b.push_back('<'), dfs(), b.push_back(','), dfs(), b.push_back('>');
    }
    else flag = true;
}

void solve(){
    ll n;
    cin >> n;
    dfs();
    if (flag || cin >> s) cout << "Error occurred" << endl;
    else cout << b << endl;
}

int main(){
    std::ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    ll flag = 1;
    // cin >> flag;
    while (flag--)
    {
        solve();
    }
    return 0;
}