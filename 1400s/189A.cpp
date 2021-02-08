#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int n, a, b, c, cind = 0;
    cin >> n >> a >> b >> c;
    int init_n = n;
    int max_value = 0;
    while(n >= 0){
        for (int i = 0; i * a <= n; i++) {
            if ((n - (i * a)) % b == 0) { 
                int temp_value = i + (n - (i * a)) / b + cind;
                max_value = max(max_value, temp_value); 
            } 
        } 
        n -= c;
        cind++;
    }
    if(!max_value){
        if(!(init_n % c)){
            cout << init_n / c << endl;
        }
    } 
    else{
        cout << max_value << endl;
    }
}