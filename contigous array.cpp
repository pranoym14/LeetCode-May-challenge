
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map <int,int> m;
        int sum=0;
        int la=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i]==1?1:-1;
            if(sum==0)
                {if(la<i+1)
                    la=i+1;}
            else if(m.find(sum)!=m.end())
               { if(la<i-m[sum])
                    la=i-m[sum];}
            else
                m[sum]=i;
                
        }
        return la;
    }
};