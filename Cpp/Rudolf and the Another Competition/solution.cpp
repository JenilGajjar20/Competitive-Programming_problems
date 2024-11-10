#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
         ll n,m,h;
         cin>>n>>m>>h;
         ll Rudolfpenalty=0;
         ll Rudolfcnt=0;
         ll rank=1;
         for(ll i=0;i<n;i++){
            vector<ll>v(m);
            ll hour= h;
            for(ll i=0;i<m;i++){
               cin>>v[i];
            }
            sort(v.begin(),v.end());
            ll curr=0;
            ll cnt=0;
            ll prev=0;
            ll total=0;
            for(ll i=0;i<m;i++){
              curr=v[i]+prev;
              if(curr>hour){
                 break;
              }
              cnt++;
              total+=curr;
              prev+=v[i];
            }
            if(i==0){
               Rudolfpenalty = total;
               Rudolfcnt= cnt;
               continue;
            }
            if(Rudolfcnt<cnt){
               rank++;
            }
            else if(Rudolfcnt==cnt){
                if( Rudolfpenalty > total){
                 rank++;
               }
            }
         }
         cout<<rank<<endl;
    }
    return 0;
}
