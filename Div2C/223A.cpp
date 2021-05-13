#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    string s, u = "", v = "";
    ll a[200010], l = 0, r = 0;
    stack<ll> st;
    cin >> s;
    for (ll i = 0; i < s.size(); i++){
        if (!st.size()) st.push(i);
        else if (s[st.top()] == '(' && s[i] == ')'){
            a[i] = 1;
            a[st.top()] = 1;
            st.pop();
        }
        else if (s[st.top()] == '[' && s[i] == ']'){
            a[i] = 1;
            a[st.top()] = 2;
            st.pop();
        }
        else st.push(i);
    }
    for (ll i = 0; i < s.size(); i++){
        if (a[i] == 1) u += s[i];
        else if (a[i] == 2) u += s[i], l++;
        else {
            if (l > r) v = u, r = l;
            l = 0, u = "";
        }
    }
    if (l > r) v = u, r = l;
    cout << r << endl << v << endl;
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