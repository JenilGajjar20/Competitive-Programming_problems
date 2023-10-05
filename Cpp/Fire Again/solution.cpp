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
#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>>m1={{0,1},{1,0},{-1,0},{0,-1}};
 bool isvalid(int x,int y,int n,int m)
 {
 if(x<n && y<m && x>=0 && y>=0)//checking for validity of coordinate (x,y)
 {
 return true;
 }
 else
 {
 return false;
 }
 }
void solve()
 {
    int k,m,n,x,y;
	cin >>n >>m>>k;
   int vis[2005][2005];
    queue<pair<int,int>>q;
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
    {
    vis[i][j]=0;
    }
    }
    pair<int,int>ans={0,0};
    for(int i=0;i<k;i++)
    {
    cin>>x>>y;
    q.push({x-1,y-1});
    vis[x-1][y-1]=1;
    }
    
    while(!q.empty())
    {
    pair<int,int>p=q.front();
    int x=p.first;
    int y=p.second;
    ans=p;
    q.pop();//Applying BFS to get last burnt tree
    for(auto it:m1)
    {
    int x1=x+it.first;
    int y1=it.second+y;
    if(isvalid(x1,y1,n,m) && vis[x1][y1]==0)
    {
    vis[x1][y1]=1;
    q.push({x1,y1});
    }
    }
    }
    cout<<ans.first+1<<" "<<ans.second+1<<endl;
}
    
	
	
    int main()
    {
  	freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
    int t;
    t=1;
    while(t--)
    {
    solve();
    }}