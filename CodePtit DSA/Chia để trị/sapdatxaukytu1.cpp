#include<bits/stdc++.h>
using namespace std;
int ktra (string &s){
    int n=s.size();
    vector<int> chu (26,0);
    for(auto c : s) chu[c-'a']++;
    int a = *max_element(chu.begin(),chu.end());
    if(a <= (n+1) / 2){
        return 1;
    } else {
        return -1;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
          
    }
}