#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while(T--) {
        int N; cin >> N;
        vector<long long> A(N);
        for(int i=0;i<N;i++) cin >> A[i];

        vector<long long> max_left(N), min_right(N);

        // Tính max_left
        max_left[0] = A[0];
        for(int i=1;i<N;i++){
            max_left[i] = max(max_left[i-1], A[i]);
        }

        // Tính min_right
        min_right[N-1] = A[N-1];
        for(int i=N-2;i>=0;i--){
            min_right[i] = min(min_right[i+1], A[i]);
        }

        vector<int> res;
        for(int M=1; M<N; M++){
            if(max_left[M-1] <= min_right[M]) res.push_back(M);
        }

        // Output
        cout << res.size() << "\n";
        for(int i=0;i<res.size();i++){
            cout << res[i] << (i+1<res.size()?" ":"");
        }
        cout << "\n";
    }
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        vector<long long> l(n);
        vector<long long> r(n);
        l[0] = a[0];
        for(int i = 1; i < n; i++)
            l[i] = max(l[i-1], a[i]);
        r[n-1] = a[n-1];
        for(int i = n-2; i >= 0; i--)
            r[i] = min(r[i+1], a[i]);
        vector<int> v;
        for(int i = 1; i < n; i++)
            if(l[i-1] <= r[i])
                v.push_back(i);
        cout << v.size() << "\n";
        for(int i = 0; i < v.size(); i++)
            cout << v[i] << (i+1 < v.size() ? " " : "");
        cout << "\n";
    }
    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        vector<long long> l(n), r(n);

        l[0] = a[0];
        for(int i=1;i<n;i++) l[i] = max(l[i-1], a[i]);

        r[n-1] = a[n-1];
        for(int i=n-2;i>=0;i--) r[i] = min(r[i+1], a[i]);

        vector<int> res;
        for(int i=1;i<n;i++)
            if(l[i-1] <= r[i]) res.push_back(i);

        cout << res.size() << "\n";
        for(int i=0;i<res.size();i++)
            cout << res[i] << (i+1<res.size()?" ":"");
        cout << "\n";
    }
}*/