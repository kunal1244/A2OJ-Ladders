#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector<vector<pair<ll, ll>>> points;
vector<pair<ll, ll>> arr;
bool squareFormed = false;
ll minRotations = INT_MAX, rotations = 0;

ll dist(pair<ll, ll> p, pair<ll, ll> q){
    return (p.first - q.first) * (p.first - q.first) + (p.second - q.second) * (p.second - q.second);
}

void checkSquare(){
    ll d2 = dist(arr[0], arr[1]), d3 = dist(arr[0], arr[2]), d4 = dist(arr[0], arr[3]);
    if (!d2 || !d3 || !d4) return ;
    if (d2 == d3 && 2 * d2 == d4 && 2 * dist(arr[1], arr[3]) == dist(arr[1], arr[2])) squareFormed = true, minRotations = min(minRotations, rotations);
    if (d3 == d4 && 2 * d3 == d2 && 2 * dist(arr[2], arr[1]) == dist(arr[2], arr[3])) squareFormed = true, minRotations = min(minRotations, rotations);
    if (d2 == d4 && 2 * d2 == d3 && 2 * dist(arr[1], arr[2]) == dist(arr[1], arr[3])) squareFormed = true, minRotations = min(minRotations, rotations);
}

void backtrack(){
    if(arr.size() == 4) {
        checkSquare();
        return;
    }
    for(ll i = 0; i < 4; i++){
        arr.push_back(points[arr.size()][i]);
        rotations += i;
        backtrack();
        rotations -= i;
        arr.pop_back();
    }
}

void solve(){
    arr.clear();
    points.clear();
    minRotations = INT_MAX;
    rotations = 0;
    squareFormed = false;
    for(ll i = 0; i < 4; i++){
        ll first, second, a, b;
        cin >> first >> second >> a >> b;
        vector<pair<ll, ll>> temp(4);
        temp[0] = {first, second};
        for(ll j = 1; j < 4; j++) temp[j] = {a + b - temp[j - 1].second, temp[j - 1].first + b - a};
        points.push_back(temp);
    }
    backtrack();
    if(squareFormed) cout << minRotations << endl;
    else cout << -1 << endl;
}

int main(){
    std::ios_base::sync_with_stdio(NULL);
	cin.tie(NULL); 
    cout.tie(NULL);
    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}