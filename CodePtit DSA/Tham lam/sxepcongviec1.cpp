#include<bits/stdc++.h>
using namespace std;
struct work
{
    /* data */
    int start,finish;
};
int n;
work x[1001];
bool compare (const work& a , const work& b){
    return a.finish < b.finish;
}
void arrangement (work x[],int n){
    sort (x,x+n,compare);
}
void solution (){
    cin >> n;
    int located = 0;
    int sum =1;
    for(int i = 0 ;i < n;i++) cin >> x[i].start;
    for(int i = 0 ;i < n;i++) cin >> x[i].finish;
	arrangement (x ,n);
    for(int i = 1 ;i < n;i++){
        if(x[i].start >= x[located].finish){
            sum++;
            located=i;
        }
    }
    cout << sum <<'\n';
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solution();
    }
    return 0;
}
 