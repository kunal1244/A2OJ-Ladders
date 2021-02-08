#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int n, min_val1 = INT_MAX, min_ind1, max_val2 = INT_MIN, max_ind2;
    cin >> n;
    vector <pair<int, int>> segs;
    for(int i = 0; i < n; i++){
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        segs.push_back(make_pair(tmp1, tmp2));
        if(tmp1 < min_val1){
            min_val1 = tmp1;
            min_ind1 = i;
        }
        if(tmp2 > max_val2){
            max_val2 = tmp2;
            max_ind2 = i;
        }

    }
    if(min_ind1 == max_ind2){
        cout << min_ind1 + 1 << endl;
    }
    else{
        int flag = 0;
        for(int i = 0; i < n; i++){
            if(segs[i].first == min_val1){
                if(segs[i].second == max_val2){
                    cout << i + 1 << endl;
                    flag = 1;
                    break;
                }
            }
            else if(segs[i].second == max_val2){
                if(segs[i].first == min_val1){
                    cout << i + 1 << endl;
                    flag = 1;
                    break;
                }
            }
        }
        if(!flag){
            cout << -1 << endl;
        }
    }
}