class Solution {
public:
   
   vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& red_edges, vector<vector<int>>& blue_edges) {
     
      vector<vector<pair<int,int>>>adj(n);
      
      for(int i=0;i<red_edges.size();i++)
      {
        adj[red_edges[i][0]].push_back({red_edges[i][1],1});
      }
       
      for(int i=0;i<blue_edges.size();i++)
      {
        adj[blue_edges[i][0]].push_back({blue_edges[i][1],0});
      }
      queue<pair<int,pair<int,int>>>q;
      q.push({0,{-1,0}});
      vector<int>dist(n,INT_MAX);
      dist[0]=0;
      map<pair<int,int>,int>vis;
      
      
      while(!q.empty())
      {
       
        int sz=q.size();
        for(int i=0;i<sz;i++)
        {
          pair<int,pair<int,int>>p=q.front();
          int node=p.first;
          int clr=p.second.first;
          int distance=p.second.second;
          q.pop();
          vis[{node,clr}]=1;
          for(auto x:adj[node])
          {
          
            if( vis[{x.first,x.second}]!=1&& (((x.second==1-clr || clr==-1))))
            {
              
              dist[x.first]= min(1+distance,dist[x.first]);
            
              q.push({x.first,{x.second,1+distance}});
            }
          }
        
          
        }
        
      }
      for(auto &x :dist)
      {
        if(x==INT_MAX)
        {
          x=-1;
        }
      }
      return dist;
      
    }  
};
