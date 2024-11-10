#include <bits/stdc++.h>
 
#define ll long long
#define ull unsigned long long
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
const long long mod9 =1e9+7;
 
using namespace std;
using namespace std::chrono;
 
auto start = high_resolution_clock::now();
 
void answer(vector<ll> a, int n){
    ll count = 0;
    sort(a.begin(), a.end());
    int j = 1, i = 1;
 
    while(j<=n && a[j] == 0) j++;
 
    if(j!=1){
        
        if(!(j-1>=a[j]) && j!=n+1){
            count++;
        }
        i = j;
    }
    else count++;
    
    for( ;i<=n-1; i++){  
        
        if(i>a[i]){
            
            if(a[i+1]>i) count++;
        }
        
    }
    cout<<count+1<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int x;
    cin>>x;
    while(x--){
        int n;
        cin>>n;
        vector<ll> a(n+1);
 
        for(int i = 1; i<=n; i++) cin>>a[i];
        a[0] = 0;
        answer(a,n);
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    //cout<<duration.count()<<endl;
    return 0;
}
