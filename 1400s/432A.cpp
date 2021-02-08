#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int max_times(int *vals, int n, int k){
    sort(vals, vals + n);
    int count = 0;
    for(int i = 2; i < n; i += 3){
        if(vals[i] + k <= 5){
            count++;
        }
    }
    return count;
}


int main(){
    int n, k;
    cin >> n >> k;
    int vals[n];
    for(int i = 0; i < n; i++){
        cin >> vals[i];
    }

    cout << max_times(vals, n, k) << endl;
    return 0;
}