#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool sort_vec(const pair<int,int> &a, const pair<int,int> &b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    return a.first > b.first;
}

int main(){
    int n, k, s, t;
    cin >> n >> k;
    vector <pair<int, int>> score_time;
    for(int i = 0; i < n; i++){
        cin >> s >> t;
        score_time.push_back(make_pair(s, t));
    }
    sort(score_time.begin(), score_time.end(), sort_vec);
    int count = 1;
    k--;
    if(k == 0){
        while(score_time[k].first == score_time[k + 1].first && score_time[k].second == score_time[k + 1].second && k < n){
            count++;
            k++;
        }
    }
    else{
        int k1 = k;
        while(score_time[k].first == score_time[k - 1].first && score_time[k].second == score_time[k - 1].second && k){
            count++;
            k--;
        }
        k = k1;
        while(score_time[k].first == score_time[k + 1].first && score_time[k].second == score_time[k + 1].second && k < n){
            count++;
            k++;
        }
    }
    cout << count << endl;
}