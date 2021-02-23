#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
bool card_sort(pair<ll, ll> &a, pair<ll, ll> &b){
    if(a.second == b.second){
        return a.first > b.first;
    }
    return a.second > b.second;
}
 
int main(){
    ll n, a, b;
    cin >> n;
    vector<pair<ll, ll>> cards(n);
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        cards[i] = {a, b};
    }
    sort(cards.begin(), cards.end(), card_sort);
    ll counter = 1, i = 0, points = 0;
    while(counter > 0 && i < n){
        points += cards[i].first;
        counter += cards[i].second - 1;
        i++;
    }
    cout << points << endl;
}