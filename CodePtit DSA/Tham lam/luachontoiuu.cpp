#include<bits/stdc++.h>
using namespace std;
struct work {
       int s,f;
};
int n;
work a[1001];
bool ss (work a , work b){
    return a.f < b.f;
}
void sx (work a[],int n){
    sort (a,a+n,ss);
}
void solution (){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i].s >> a[i].f;
    }
    sx(a,n);
    int dem=1;
    int toado =0;
    for(int i=1;i<n;i++){
        if(a[i].s >= a[toado].f){
            dem++;
            toado=i;
        }
    }
    cout << dem <<'\n';
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solution();
    }
    return 0;
}