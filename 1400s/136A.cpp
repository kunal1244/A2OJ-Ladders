#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
    unordered_map<int, int> friends;
    int n, temp;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> temp;
        friends[temp] = i;
    }
    for(int i = 1; i <=n; i++){
        cout << friends[i] << " ";
    }
    cout << endl;
}