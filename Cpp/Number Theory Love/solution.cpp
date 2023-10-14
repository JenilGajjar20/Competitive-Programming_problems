#include<bits/stdc++.h>
using namespace std;
int main() {
	
    int T; cin >> T;
    while(T--) {
        int N, X; cin >> N >> X;
        int F = N+1, L = -1;
        int S = 0;
        for(int i=0;i<N;i++) {
            int cur; cin >> cur;
            S += cur; S %= X;
            if (cur % X != 0) {
                F = min(F, i); L = max(L, i);
            }
        }
        if (S % X != 0) {
            cout << N << "\n";
        } else if (L == -1) {
            cout << -1 << "\n";
        } else {
            cout << max(N-F-1, L) << "\n";
        }
    }
	
	return 0;
}