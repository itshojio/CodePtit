#include <bits/stdc++.h>
using namespace std;

char findChar(int n, long long k){
    if(n == 1) return 'A'; // bước 1, chỉ có A
    long long len = (1LL << n) - 1; // chiều dài chuỗi = 2^n -1
    long long mid = len/2 + 1;      // vị trí giữa
    if(k == mid) return 'A' + n - 1;
    else if(k < mid) return findChar(n-1, k);
    else return findChar(n-1, k - mid);
}

int main(){
    int t;
    cin >> t;
    while(t--){
    int N;
    long long K;
    cin >> N >> K;
    cout << findChar(N, K) << '\n';    
    }
    return 0;
}
//https://en.wikipedia.org/wiki/ABACABA_pattern?utm_source=chatgpt.com
//https://www.reddit.com/r/dailyprogrammer/comments/njxq95/20210524_challenge_391_easy_the_abacaba_sequence/?utm_source=chatgpt.com