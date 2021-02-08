#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool isPalindrome(char str[]){
    int l = 0; 
    int h = strlen(str) - 1;
    while (h > l){ 
        if (str[l++] != str[h--]){
            return false;; 
        } 
    } 
    return true;
}

int main(){
    string str;
    cin >> str;
    vector<int> chars(26, 0);
    for(ll i = 0; i < str.size(); i++){
        chars[str[i] - 'a']++;
    }
    ll count = 0;
    for(int i = 0; i < 26; i++){
        count += (chars[i] % 2 == 1);
    }
    if(count % 2 || count == 0){
        cout << "First" << endl;
    }
    else{
        cout << "Second" << endl;
    }
}