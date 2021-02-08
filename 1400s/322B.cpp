#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    if(a[0] == 0){
        cout << a[0] / 3 + a[1] / 3 + a[2] / 3 << endl;
        return 0;   
    }
    else{
        int c = 0;
        for(int i = 0; i < 3; i++){
            if(a[i] % 3 != 0) c++;
        }
        if(((a[0] + a[1] + a[2]) % 3 == 0) && c == 2){
            cout << (a[0] + a[1] + a[2]) / 3 - 1 << endl;
        }
        else{
            cout << (a[0] + a[1] + a[2]) / 3 << endl;
        }
    }
}