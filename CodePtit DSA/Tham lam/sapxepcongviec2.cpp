#include<bits/stdc++.h>
using namespace std;
struct work {
    int stt,deadline,profit;
};
int n;
work jobs[1001];
int ktra[1001],kqua[1001];
bool compare (const work& a, const work& b){
    return a.profit > b.profit;
}
void arrangement (work x[], int a){
    sort (x,x+a,compare);
}
void solution (){
    cin >> n;
    memset(ktra, 0, sizeof(ktra));
    memset(kqua, 0, sizeof(kqua));
    for(int i=0;i<n;i++){
        cin >> jobs[i].stt >> jobs[i].deadline >> jobs[i].profit;
    }
    arrangement(jobs , n);
    for(int i=0;i<n;i++){
       for(int j=min(n , jobs[i].deadline)-1;j>=0;j--){
        if(ktra[j]==0){
            ktra[j]=1;
            kqua[j]=i;
            break;
        }
       }
    }
    int sum=0,total_profit=0;
    for(int i=0;i<n;i++){
        if(ktra[i]==1){
            sum++;
            total_profit+=jobs[kqua[i]].profit;
        }
    }
    cout << sum << " " << total_profit <<'\n';
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solution();
    }
    return 0;
}