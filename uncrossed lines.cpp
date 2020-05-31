#define loop(x,k,n) for(int x = k; x < n; x++)
class Solution {
public:
    
    int fun(vector<int> x,vector<int> y,int m,int n)
    {
        int dp[m + 1][n + 1];
        loop(i, 0, m + 1)
        dp[i][0] = 0;
        loop(i, 0, n + 1)
        dp[0][i] = 0;
        loop(i, 1, m + 1)
        {
        loop(j, 1, n + 1)
        {
            if (x[i - 1] == y[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
        }
        }
        return dp[m][n];
    }
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        return fun(A,B,A.size(),B.size());
    }
};