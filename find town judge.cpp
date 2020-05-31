class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector <int>trust_count(n+1,0);
        for(vector <int> t:trust)
        {
            trust_count[t[0]]--;
            trust_count[t[1]]++;
        }
        int res=-1;
        for(int i=1;i<n+1;i++)
        {
            if(trust_count[i]==n-1)
                return i;
        }
        return res;
    }
};