#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
signed main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
 
        vector<int>actual(n);
        for(int i=0;i<n;i++){
            actual[i]=i+1;
        }
        ll ans=0;
        for(int rev=0;rev<n;rev++){
            vector<int> arr=actual;
            reverse(arr.begin()+rev,arr.end());
            ll curr=0,maxi=0;
 
            for(int i=0;i<n;i++){
                curr+=(i+1)*arr[i];
                maxi=max(maxi,(i+1)*arr[i]);
        }
            ans=max(ans,curr-maxi);
        }
 
        cout<<ans<<"\n";
    }
    return 0;
}