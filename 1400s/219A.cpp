#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int gcd(int a, int b) { 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 


int main(){
    unordered_map<char, int> occs(26);
    string res = "", res1 = "";
    for(int i = 97; i < 123; i++){
        occs[(char) i] = 0;
    }
    int k;
    cin >> k;
    string temp;
    cin >> temp;
    for(int i = 0; i < temp.size(); i++){
        occs[temp[i]]++;
        int pres_flag = 0;
        for(int j = 0; j < res.size(); j++){
            if(res[j] == temp[i]){
                pres_flag = 1;
            }
        }
        if(!pres_flag){
            res += temp[i];
        }
    }
    int flag = 0;

    for(int i = 0; i < res.size(); i++){
        if(occs[res[i]] % k){
            flag = 1;
            break;
        }
    }    
    if(flag){
        cout << -1 << endl;
    }
    else{

        int result = occs[res[0]]; 
        for (int i = 1; i < res.size(); i++) 
        { 
            result = gcd(occs[res[i]], result); 
    
            if(result == 1) { 
                break; 
            } 
        }
        
        result = min(result, k);
        for(int i = 0; i < res.size(); i++){
            string temp(occs[res[i]] / result, res[i]);
            res1 += temp;
        }
        res = res1;
        for(int i = 1; i < result; i++){
            res1 += res;
        }
        cout << res1 << endl;
    }

}