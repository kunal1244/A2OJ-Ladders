#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
    ll o, z;
    cin >> z >> o;
    if(o < z - 1 || o > 2 * z + 2){
        cout << -1 << endl;
    }
    else{
        if(o == z - 1){
            cout << 0;
            for(ll i = 0; i < o; i++){
                cout << 1 << 0;
            }
        }
        else if(o == z){
            for(ll i = 0; i < o; i++){
                cout << 1 << 0;
            }
        }
        else{
            ll count = o % (z + 1);
            if(o == 2 * z + 2) count = z;
            for(int i = 0; i < count; i++){
                cout << 1 << 1 << 0;
            }
            for(int i = 0; i < z - count; i++){
                cout << 1 << 0;
            }
            cout << 1;
            if(o == 2 * z + 2) cout << 1;
            cout << endl;
        }
    }
}