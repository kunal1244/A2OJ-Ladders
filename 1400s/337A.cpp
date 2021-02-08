#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, m;
    cin >> n >> m;
    int arr[m], min_diff = 1000, temp_diff;
    for(int i = 0; i < m; i++){
        cin >> arr[i];
    }
    sort(arr, arr + m);
    for(int i = 0; i < m - n + 1; i++){
        temp_diff = arr[i + n - 1] - arr[i];
        if(temp_diff < min_diff){
            min_diff = temp_diff;
        }
    }
    
    cout << min_diff << endl;
}