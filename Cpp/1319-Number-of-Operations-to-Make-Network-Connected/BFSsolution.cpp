class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& c) {
        int edges = c.size();;
        
        if( edges < n - 1 ){
            return -1;
        }
        
        vector<int> adj[n];
        vector<int> vis(n, 0);
        
        for( int i=0; i < c.size(); i++ ) {
            adj[ c[i][0] ].push_back( c[i][1] );
            adj[ c[i][1] ].push_back( c[i][0] );
        }
        queue<int> q;
        int count = 0;
        
        for(int i = 0; i<n; i++) {
            if( !vis[i] ) {
               count++;
               vis[i] = 1;
                q.push(i);
               while(!q.empty()){  
                int node = q.front();
                q.pop();
                for(auto x : adj[node]) {
                    if( !vis[x] ) {
                        q.push(x);
                        vis[x] = 1;
                    }
                } 
             }
           }
        }
        count--;
        return count;        
    }
};
