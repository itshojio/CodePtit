#include<bits/stdc++.h>
using namespace std;
void tron (int a[],int t, int g, int p){
    vector<int> x(a+t,a+g+1);
    vector<int> y(a+g+1,a+p+1);
    int i=0,j=0;
    while(i < x.size() && j< y.size()){
        if(x[i] <= y[j]){
            a[t]=x[i] ; t++; i++;
        }
        else {
            a[t]=y[j] ; t++; j++;
        }
    }
    while(i < x.size()){
        a[t] = x[i] ; t++; i++;
    }
    while(j < y.size()){
        a[t] = y[j] ; t++; j++;
    }
}
void sapxeptron (int a[],int t,int p){
    if(t >= p) return ;
    int g= (t+p)/2;
    sapxeptron(a,t,g);
    sapxeptron(a,g+1,p);
    tron(a,t,g,p);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a;
        for(int i=0;i<n;i++){
            int x;cin >> x;
            a.push_back(x);
        }
        sapxeptron(a.data(),0,n-1);
        for(auto x : a) cout << x <<" ";
        cout <<'\n';
    }
    return 0;
}