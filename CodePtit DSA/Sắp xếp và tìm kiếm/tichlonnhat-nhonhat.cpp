#include<bits/stdc++.h>
using namespace std;
void merge (int a[],int l,int m,int r){
    vector<int> x(a+l,a+m+1);
    vector<int> y(a+m+1,a+r+1);
    int i=0,j=0;
    while(i < x.size() && j < y.size()){
        if(x[i] <= y[j]){
            a[l]=x[i] ; l++;i++;
        } else {
            a[l]=y[j] ; l++;j++;
        }
    }
    while(i < x.size()){
        a[l]=x[i] ; l++;i++;
    }
    while(j < y.size()){
        a[l]=y[j] ; l++;j++;
    }
}
void mergeSort (int a[],int l,int r){
    if(l >= r) return;
    int m=(l+r)/2;
    mergeSort(a,l,m);
    mergeSort(a,m+1,r);
    merge(a,l,m,r);
}
int main(){
    int t;
    cin >> t;
    while(t--){
    int a,b;
    cin >> a>> b;
    vector<int> x;
    vector<int> y;
    for(int i=0;i<a;i++){
        int c; cin >> c;
        x.push_back(c);
    } 
    for(int i=0;i<b;i++){
        int c; cin >> c;
        y.push_back(c);
    }
    mergeSort(x.data(),0,a-1);
    mergeSort(y.data(),0,b-1);
    cout << x[a-1] * y[0] <<'\n';
    }
    return 0;
}