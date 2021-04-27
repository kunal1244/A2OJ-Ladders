#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    string str;
    cin >> str;
    ll arr[str.size()];
    ll a, b, l = 0;
    cin >> a >> b;
    for (int i = 0; i < str.size(); i++){
        l = (l * 10 + (str[i] - '0')) % a;
        arr[i] = l;
    }
    ll div = 0, r = 1;
    for (int i = str.size() - 1; i >= 0; i--){
        div = (div + (str[i] - '0') * r) % b;
        if (!div && !arr[i - 1] && str[i] != '0'){
            cout << "YES" << endl << str.substr(0, i) << endl << str.substr(i);
            return ;
        }
        r = (r * 10) % b;
    }
    cout << "NO" << endl;
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