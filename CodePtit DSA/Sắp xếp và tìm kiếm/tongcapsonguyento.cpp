#include<bits/stdc++.h>
using namespace std;
#define MAX 10000001
vector<bool> snt(MAX+1,true);
void check (){
    snt[0]=snt[1]= false;
    for(int i=2;i<=sqrt(MAX);i++){
        if(snt[i]){
            for(long long j=i*i;j<=MAX;j+=i){
                snt[j]= false;
            }
        }
    }
}
int main(){
    check();
    int t;
    cin >> t;
    while(t--){

    int n;
    cin >> n;
    bool ktr = false;
    for(int i=2;i<=n/2;i++){
        if(snt[i] && snt[n-i]){
            cout << i << " " <<n-i<<'\n';
            ktr=true;
        }
    }
    if(!ktr) cout << "-1" <<'\n';
    }
    return 0;
}