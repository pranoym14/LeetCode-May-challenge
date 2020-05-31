class Solution {
public:
    int minDistance(string w1, string w2) {
        
        int n1=w1.length();
        int n2=w2.length();
        
        vector<vector<int>> dp(n1+1,vector<int>(n2+1,0));
        
        for(int i=1;i<=n2;i++)//w1 empty
            dp[0][i]=i;
        
        for(int j=1;j<=n1;j++)//w2 empty
            dp[j][0]=j;
        
        for(int i=1;i<=n1;i++)
        {
            for(int j=1;j<=n2;j++)
            {
                if(w1[i-1]==w2[j-1])
                    dp[i][j]=dp[i-1][j-1];
                else
                    dp[i][j]=min(min(1+dp[i-1][j-1],1+dp[i-1][j]),1+dp[i][j-1]);
                                 // replace          del              insert
            }
        }
        return dp[n1][n2];     
    }
};