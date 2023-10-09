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
vector<int>vis(101,0);
int par[101][101];
vector<int>g[101];
int find(int v,int c)
{
if(par[v][c]==v)
{
return v;
}
return par[v][c]=find(par[v][c],c);
}
void unite(int x,int y ,int c)
{
x=find(x,c);
y=find(y,c);
par[y][c]=x;
}
void solve()
{
int x,y,n,m,q,c;
int k=0;
cin>>n>>m;
for(int i=1;i<=n;i++)
{
for(int j=1;j<=m;j++)
{
par[i][j]=i;
}
}
for(int i=1;i<=m;i++)
{
cin>>x>>y>>c;
unite(x,y,c);
}
cin>>q;
for(int i=1;i<=q;i++)
{
cin>>x>>y;
for(int i=1;i<=m;i++)
{
if(find(x,i)==find(y,i))
{
k++;
}
}
cout<<k<<endl;
k=0;
}
}
int main()
{
int t;
t=1;
while(t--)
{
solve();
}}