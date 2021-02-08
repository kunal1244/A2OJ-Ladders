#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
    int n, temp;
    cin >> n;
    vector <int> neg(0), pos(0), zeroes(0);
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp > 0){
            pos.push_back(temp);
        }
        else if(temp == 0){
            zeroes.push_back(temp);
        }
        else{
            neg.push_back(temp);
        }
    }
    
    if(!pos.size()){
        pos.push_back(neg[neg.size() - 1]);
        neg.pop_back();
        pos.push_back(neg[neg.size() - 1]);
        neg.pop_back();
    }
    if(!(neg.size() % 2)){
        zeroes.push_back(neg[neg.size() - 1]);
        neg.pop_back();
    }
    cout << neg.size() << " ";
    for(int i = 0; i < neg.size(); i++){
        cout << neg[i] << " ";
    }
    cout << endl;
    cout << pos.size() << " ";
    for(int i = 0; i < pos.size(); i++){
        cout << pos[i] << " ";
    }
    cout << endl;
    cout << zeroes.size() << " ";
    for(int i = 0; i < zeroes.size(); i++){
        cout << zeroes[i] << " ";
    }
    cout << endl;
}