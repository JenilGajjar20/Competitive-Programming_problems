#include<bits/stdc++.h>
typedef long long ll;    
#define cin(arr,n) for(long long i=0;i<n;i++){cin>>arr[i];}
#define vl vector<long long>
#define vs vector<string>
#define vc vector<char>
#define pb push_back
using namespace std;
#define vps vector<pair<long long,string>>
#define vp vector<pair<long long,long long>>
const int N=1e5+1;
vector<int>g[N];
int vis[N]={0};
int w[N]={0};
int d[N]={0};
void dfs(int x)
{
vis[x]=1;
if(d[x]==1)
{
w[x]+=1;
}
for(int i:g[x])
{
if(vis[i])
{
continue;
}
dfs(i);
w[x]+=w[i];
}
}
void solve()
{
int x,y,n,m,q,c;
ll p=1,k=0;
cin>>n;
vl v;
for(int i=1;i<=n-1;i++)
{
cin>>x>>y>>c;
g[x].pb(y);
g[y].pb(x);
if(c==2)
{
d[x]=1;
d[y]=1;
}
}
dfs(1);
for(int i=1;i<=n;i++)
{
if(w[i]==1 && d[i])
{
v.pb(i);
}
}
cout<<v.size()<<endl;
for(auto it:v)
{
cout<<it<<" ";
}
cout<<"\n";
}

int main()
{
int t;
t=1;
while(t--)
{
solve();
}}