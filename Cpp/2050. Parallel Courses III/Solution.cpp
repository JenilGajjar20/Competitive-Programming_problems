class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
      vector<int> adj[n];
      vector<int> deg(n,0);
for(int i=0;i<relations.size();i++){
    adj[relations[i][0]-1].push_back(relations[i][1]-1);
    deg[relations[i][1]-1]++;
            }  
vector<int> ans(n,0);
queue<int> q;

for(int i=0;i<n;i++){
    if(deg[i]==0){q.push(i);}
}
int final=0;

while(q.size()){
    int t=q.front();
    q.pop();
    for(auto x:adj[t]){
        ans[x]=max(ans[x],ans[t]+time[t]);
        deg[x]--;
        final=max(final , ans[x]+time[x]);
        if(deg[x]==0){q.push(x);}

    }
    if(adj[t].size()==0){final = max(final,time[t]);}
}
    return final;
    }
};
