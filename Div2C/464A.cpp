#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, p;
    string str;
    cin >> n >> p >> str;
    str[n - 1]++;
    ll i = n - 1;
    while (i >= 0 && i < n){
        if (str[i] > char(p + 'a' - 1)){ str[i] = 'a', str[--i]++; continue; }
        if ((i && str[i] == str[i - 1]) || (i > 1 && str[i] == str[i - 2])){ str[i]++; continue; }
        i++;
    }
    if (i <= 0) cout << "NO" << endl;
    else cout << str << endl;
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