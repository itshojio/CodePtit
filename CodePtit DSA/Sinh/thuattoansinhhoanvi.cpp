#include<bits/stdc++.h>
using namespace std;
int n;
int x[1001];
bool ktra = true;
int dem=0;
void dulieuvao (void){
    cin >> n;
    for(int i=1;i<=n;i++){
        x[i]=i;
    }
}
void ketqua (void){
    cout << "\n hoan vi thu " <<  ++dem << " \t : ";
    for(int i=1;i<=n;i++){
        cout <<x[i]<<" ";
    }
}
void hamsinhhoanvi (void){
int j=n-1;
while(j>0 && x[j] > x[j+1]) j--;
if(j>0){
    int k=n;
    while(x[j]>x[k]) k--;
    int t=x[j];
     x[j]=x[k];
     x[k]=t;
    int r=j+1;
    int s=n;
    while(r<=s){
           t=x[r];
        x[r]=x[s];
        x[s]=t;
        r++;
        s--;
    }
} else {
    ktra = false;
}
}
int main(){
dulieuvao();
while(ktra){
    ketqua();
    hamsinhhoanvi();
}
return 0;
}