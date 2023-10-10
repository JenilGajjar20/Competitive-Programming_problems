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
    const int N=2e5+1;
    int arr[N];
    int k=0;
    vector<int>g[N];
    void dfs(int x,int p)
    {
    if(p!=-1 && arr[x-1]!=arr[p-1])
    {
    k++;
    }
    for(int i:g[x])
    {
    if(i!=p)
    {
    dfs(i,x);
    }
    }
    }
   void solve()
   {
    int n,x,y;
    int a=0,b=0;
    cin>>n;
    for(int i=1;i<=n-1;i++)
    {
    cin>>x>>y;
    g[x].pb(y);
    g[y].pb(x);
    }
    cin(arr,n);
    vector<int>v(n+1,0);
    for(int i=1;i<=n;i++)
    {
     vl v1;
    for(int j:g[i])
    {
    if(arr[i-1]!=arr[j-1])
    {
    v1.pb(j);
    }}
    v[i]=v1.size();
    }
    dfs(1,-1);
    for(int i=1;i<=n;i++)
    {
    if(k==v[i])
    {
    cout<<"YES"<<endl;
    cout<<i<<endl;
    return;
    }
    }
    cout<<"NO"<<endl;
   }
    int main()
    {
    int t;
    t=1;
    while(t--)
    {
    solve();
    }}