#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll result = 1;
    string input;
    cin >> input;
    ll length = 1;
    for(ll i = 0; i < input.size() - 1; i++){
        ll curr = input[i] - '0', next = input[i + 1] - '0';
        if(curr + next == 9) length++;
        else{
            if(length % 2) result *= (length / 2 + 1);
            length = 1;
        }
    }
	if(length % 2) result *= (length / 2 + 1);
    cout << result << endl;
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