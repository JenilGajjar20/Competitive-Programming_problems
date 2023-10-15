
class Solution {
public:
    bool fun(vector<vector<int>>&g, vector<int>&vis,queue<int>&q){
        while(!q.empty()){
            int i=q.front();
            q.pop();
            if(vis[i]==1){
                for(auto &j:g[i]){
                   if(vis[j]==1){
                       return false;
                   }
                    if(vis[j]==0){
                    vis[j]=-1;
                    q.push(j);
                    }
                }
            }
            else if(vis[i]==-1){
                for(auto &j:g[i]){
                   if(vis[j]==-1){
                       return false;
                   }
                    if(vis[j]==0){
                    vis[j]=1;
                    q.push(j);
                    }
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& g) {
        vector<int>vis(g.size(),0);
        queue<int>q;
        for(int i=0;i<g.size();i++){
            if(vis[i]==0){
                vis[i]=1;
                for(auto &j:g[i]){
                    q.push(j);
                    vis[j]=-1;
                }
                bool flag=fun(g,vis,q);
                if(!flag)return false;
            }
        }
        return true;
    }
};
