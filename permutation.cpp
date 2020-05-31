class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector <int> res;
        if(s.length()<p.length())
            return res;
        int end=0,begin=0,len=INT_MAX;
        unordered_map<char,int> um;
        for(char c:p)
            um[c]++;
        int counter=um.size();
        while(end<s.length())
        {
            char c=s[end];
            if(um.find(c)!=um.end())
            {
                um[c]--;
                
                if(um[c]==0)
                    counter--;
            }
            end++;
            
            while(counter==0)
            {
                char tempc=s[begin];
                if(um.find(tempc)!=um.end())
                {
                    um[tempc]++;
                    if(um[tempc]>0)
                        counter++;
                }
                
                if(end-begin==p.length())
                    res.push_back(begin);
                begin++;
            }
        }
        return res;
    }
bool checkInclusion(string s1, string s2) {
    return !findAnagrams(s2,s1).size()==0;
    }
};