#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
signed main(){
    int t;
    cin>>t;
    while(t--){
        ll n,r;
        cin >> n >> r;
        ll ans=0;
        if(r>=n)
            ans=n*(n-1)/2+1;
        else
            ans=r*(r+1)/2;
        cout<<ans<<"\n";
    }
    return 0;
}
