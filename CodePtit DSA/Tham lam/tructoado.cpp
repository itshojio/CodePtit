#include<bits/stdc++.h>
using namespace std;
struct ox {
       int s,e;
};
int n;
/*bool ss (ox a , ox b){
    if(a.e==b.e){
        return a.s > b.s;
    }
    return a.e < b.e;
}*/
//void sx (ox a[],int n){
 //   sort (a,a+n,ss);
//}
void solution (){
    cin >> n;
    vector<ox> a(n);
    for(int i=0;i<n;i++) cin >> a[i].s >> a[i].e;
    int dem  =1;
    int located = 0;
    sort(a.begin(),a.end(),[](ox a,ox b){
        if(a.e==b.e)       return a.s > b.s;
    return a.e < b.e;
});
  //  sx(a,n);
    for(int i=1;i<n;i++){
        if(a[i].s >= a[located].e){
            dem++;
            located=i;
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