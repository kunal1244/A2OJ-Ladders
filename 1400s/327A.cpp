#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int n;
    cin >> n;
    int origs[n], count0[n], count1[n];
    count0[0] = 0; count1[0] = 0;
    for(int i = 0; i < n; i++){
        cin >> origs[i];
        if(!origs[i]) count0[0]++;
        else count1[0]++;
    }
    if(count1[0] == n){
        cout << count1[0] - 1 << endl;
    }
    else{
        for(int i = 1; i < n; i++){
            count0[i] = count0[i - 1];
            count1[i] = count1[i - 1];
            if(!origs[i - 1]) count0[i]--;
            else count1[i]--;
        }
        int max_count = count1[0], temp_count;
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                if(j != i){
                    temp_count = count0[i] - count0[j] - (count1[i] - count1[j]) + count1[0];
                    if(origs[i] && origs[j]){
                        temp_count--;
                    }
                    else if(origs[i] && !origs[j]){
                        temp_count++;
                    }
                    else if(!origs[i] && origs[j]){
                        temp_count--;
                    }
                    else{
                        temp_count++;
                    }
                    if(temp_count > max_count) max_count = temp_count;
                }
                else{
                    if(!origs[i]){
                        if(count1[0] + 1 > max_count) max_count = count1[0] + 1;
                    }
                }
            }
        }
        cout << max_count << endl;
    }
}