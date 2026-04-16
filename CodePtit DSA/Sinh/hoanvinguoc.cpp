#include<bits/stdc++.h>
using namespace std;
int n,check=1;
vector <int> x;
void init (void){
    cin >> n;
    x.assign(n+1,0);
	for(int i=1;i<=n;i++){
		x[i]=n-i+1;
	}
}
void result (void){
	for(int i=1;i<=n;i++){
		cout <<x[i];
	}
	cout <<" ";
}
void next_permutation (void) {
	int j=n-1;
	while(j>0 && x[j] < x[j+1]) j--;
	if(j > 0) {
		int  k = n;
		while(x[j] < x[k]) k--;
		int t=x[j];
		 x[j]=x[k];
		 x[k]=t;
		 int r=j+1,s=n;
		 while(r < s){
		 	t=x[r] ;
		 	x[r]=x[s];
		 	x[s]=t;
		 	r++;
		 	s--;
		 }
	} else {
		check =0;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		init ();
		check=1;
		while(check){
	result();
	next_permutation();
}
cout <<'\n';
	}	
return 0;	
}
