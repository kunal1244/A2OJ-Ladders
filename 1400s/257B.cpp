#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    long long arr[2];
    cin>>arr[0]>>arr[1];
    sort(arr,arr+2);
 
    cout<<arr[1]-1<<" "<<arr[0];
    return 0;
}