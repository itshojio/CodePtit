#include<bits/stdc++.h>
using namespace std;
struct phanso {
       long long t,m;
};
phanso v;
phanso tru2phanso (const phanso& a ,const phanso& b){
    phanso c;
    c.t = a.t * b.m - a.m * b.t;
    c.m = a.m * b.m;
    long long d =  __gcd(c.t,c.m);
    c.t /= d;
    c.m /= d;
    return c;
}
void solution (){
     cin >> v.t >> v.m;
     while(v.t != 0){
        int g = __gcd(v.t, v.m);
        v.t /= g;
        v.m /= g;
        if(v.t == 1) {
            cout <<"1/"<<v.m;
            break;
            }
        long long k=(v.m / v.t) +1;
        cout << "1/" <<k<< " + ";
        phanso l;
        l.t=1;
        l.m=k;
        v = tru2phanso (v,l);
     } 
     cout <<'\n';
}
int main(){
    int x; cin >> x;
    while(x--){
        solution();
    }
    return 0;
}