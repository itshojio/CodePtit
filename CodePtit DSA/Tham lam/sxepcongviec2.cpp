#include<bits/stdc++.h>
using namespace std;
long long n;
struct work {
	int s,f;
};
work a[100005];
bool sapxep (work a,work b){
	return a.f > b.f;
}
void baitoan (){
	cin >> n;
	int res =0;
	for(int i=0;i<n;i++){
		cin >> a[i].s >> a[i].f;
		res = max(res , a[i].s);
	} 
	sort (a,a+n,sapxep);
	vector < int > used (res +1,0);
	long long total =0;
	for(int i=0;i<n;i++){
		for(int j=a[i].s; j >=1; j--){
			if(!used [j]){
				used[j]=1;
				total += a[i].f;
				break;
			}
		}
	}
	cout <<total <<'\n';
}
int main(){
	int t;
	cin >> t;
	while(t--){
		baitoan();
	}
		return 0;
}
