#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    int n ;
    cin >> n; // taking number of inputs
    vector<pair<int,int>> v(n); 
    for(int i = 0 ; i < n ; i++) cin >> v[i].first >> v[i].second; // taking input of the data in the form of vector of pairs

    int best = 0; // the best date for the end
    sort(v.begin(),v.end()); // sorted the dates so that the first i.e. actual dates always remain in the ascending order
    for(int i = 0 ; i < n ; i++){
        if(v[i].second < best){
            best = v[i].first; // if best is greater this means some less days can be spent therefore we replaced best with minimum value
        }
        else best = v[i].second; // similarly we replace best with v[i].second as bi < ai for all i 
    }
    cout << best <<endl; // printed the best answer

}
int main(){
    // this is used to increase the compilation speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1LL;
    while(t--){
        solve();
    }
    return 0;
}