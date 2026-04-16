#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	long long k;
	cin >> n>>k;
	vector<long long> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	int n1=n/2,n2=n-n1;
	vector<pair<long long,int>> L,R;
	for(int m=0;m<(1<<n1);m++){
		long long s=0; int len =0;
		for(int i=0;i<n1;i++) if(m & (1<<i)){ s+=v[i]; len ++;}
		L.push_back({s,len});
	}
	for(int m=0;m<(1<<n2);m++){
		long long s=0; int len=0;
		for(int i=0;i<n2;i++) if(m & (1<<i)) {s+=v[n1+i]; len++; }
		R.push_back({s,len});
	}
	sort(R.begin(), R.end());
	long long res=LLONG_MAX;
	for(auto p : L){
		long long t=k-p.first;
		auto range=equal_range(R.begin(),R.end(),make_pair(t,0LL)),
		[](const pair<longlong,int > &a,const pair <long long,int> &b) { return a.first<b.first; });
		for(auto it = range.first;it!=range.second;i++)
		res=min(res,p.second+it->second);
		}
		if(res ==LLONG_MAX ) cout <<-1;
		else cout << res;
	}
