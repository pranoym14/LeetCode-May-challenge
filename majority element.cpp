class Solution {
public:
    int majorityElement(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        unordered_map <int,int> m;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int x;
        x=n/2;
        for(int i:nums)
        {
            if(m[i]>x)
                return i;
        }
        return -1;
    }
};