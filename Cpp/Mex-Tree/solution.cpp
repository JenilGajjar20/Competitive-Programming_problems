// Explanation of the code:

// 1.The code solves a problem related to coloring a tree with two colors (0 and 1) in a way that maximizes the value of certain paths in the tree.

// 2.It uses dynamic programming and tree traversal to calculate the maximum possible value of any coloring of the tree.

// 3.The merge function combines information from children nodes into the current node to calculate the maximum value.

// 4.The dfs function performs a depth-first search to process the tree and calculate the values.

// 5.The solve function reads input, processes the tree, and calculates the answer for each test case.

// 6.The main function reads the number of test cases and calls the solve function for each test case.

// 7.This code effectively calculates the maximum possible value of any coloring of the given tree.





#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define per(i,a,b) for(int i=(a);i>=(b);i--)
#define op(x) ((x&1)?x+1:x-1)
#define odd(x) (x&1)
#define even(x) (!odd(x))
#define lc(x) (x<<1)
#define rc(x) (lc(x)|1)
#define lowbit(x) (x&-x)
#define mp(x,y) make_pair(x,y)
typedef long long ll;
typedef unsigned long long ull;
typedef double db;
using namespace std;
const int MAXN = 2e5+10,INF = 1e9;

int B;

// Helper functions to minimize and maximize values
void tomin(int& x, int y) { x = min(x, y); }
void tomax(int& x, int y) { x = max(x, y); }

int T, n;
ll ans;

typedef vector<int> vec;

vec e[MAXN], dp[MAXN][2];
int f[MAXN][2];

int tmp[2][MAXN];

// Helper function to clear a vector
void clr(vec& v){
    v.clear();
    v.shrink_to_fit();
}

// Function to merge information from children nodes into the current node
void merge(int u, int v){
    int su = dp[u][0].size()-1, sv = dp[v][0].size()-1;
    int sz = min(B, su + sv);

    // Initialize temporary arrays with INF
    rep(i, 0, 1) fill(tmp[i]+1, tmp[i]+sz+1, INF);
    rep(i, 0, 1){
        rep(a, 1, su){
            tomin(tmp[i][a], dp[u][i][a] + f[v][i^1]);

            rep(b, 1, sv){
                if(a + b > sz) break;
                tomin(tmp[i][a+b], dp[u][i][a] + dp[v][i][b]);
            }
        }
    }

    // Copy the merged values back to the current node
    rep(i, 0, 1){
        dp[u][i].resize(sz+1);
        rep(j, 1, sz) dp[u][i][j] = tmp[i][j];
    }
}

// Depth-first search to process the tree
void dfs(int u, int fa){
    dp[u][0].resize(2, INF);
    dp[u][1].resize(2, INF);
    dp[u][0][1] = dp[u][1][1] = 0;

    for(auto v : e[u]){
        if(v != fa){
            dfs(v, u);
            merge(u, v);
            clr(dp[v][0]);
            clr(dp[v][1]);
        }
    }

    f[u][0] = f[u][1] = INF;
    rep(i, 0, 1){
        int sz = dp[u][i].size();
        rep(j, 1, sz-1){
            tomin(f[u][i], dp[u][i][j] + j * (j+1) / 2 * (1+i));
        }
    }
}

// Function to solve each test case
void solve(){
    cin >> n;
    ans = 1ll * n * (n + 1);

    B = max(5LL, (ll)(2 * sqrt(n)));

    rep(i, 1, n){
        e[i].clear();
    }

    rep(i, 1, n-1){
        int u, v; cin >> u >> v;
        e[u].push_back(v); e[v].push_back(u);
    }

    dfs(1, 0);

    int ret = INF;

    rep(i, 0, 1){
        int sz = dp[1][i].size();
        rep(j, 1, sz-1){
            tomin(ret, dp[1][i][j] + j * (j+1) / 2 * (1+i));
        }
    }

    clr(dp[1][0]);
    clr(dp[1][1]);

    ans -= ret;
    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin >> T;
    while(T--) solve();

    return 0;
}
