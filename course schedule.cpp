class Solution {
public:
    bool detectcycle(vector<int>*adj,vector<int>&visited,int i)
    {
        if(visited[i]==1)                         //marking all grey
            return true;
       
        if(visited[i]==0)
        {
          visited[i]=1;
            for(auto node:adj[i])
            {
               if(detectcycle(adj,visited,node))
                   return true;
            }
        }
        visited[i]=2;                                 //finished dfs for one node so marked black
        return false;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& pre) {
       vector<int>visited(numCourses,0);          //marking all white
       
        vector<int>adj[numCourses];              //using adjacency list

    for(int i=0;i<pre.size();i++)
        {
        adj[pre[i][0]].push_back(pre[i][1]);    
        }
        for(int i=0;i<numCourses;i++)
        {
           if(detectcycle(adj,visited,i))
               return false;
        }
        return true;
    }
};