class Solution {
public:
    bool fun(int a[],int b[])
{
    for(int i=0;i<256;i++)
    {
        if(a[i]!=b[i])
            return false;
    }
    return true;
}
    vector<int> findAnagrams(string s, string p) {
        
    int a[256]={0};
    int b[256]={0};
    vector <int> res;
        if(s.length()<p.length())
            return res;
        
    int left,right;
    for(char c:p)
        a[c]++;
    for(int i=0;i<p.length();i++)
    {
        //cout<<
        b[s[i]]++;
        
    }
        
    if(fun(a,b))
        res.push_back(0);
    int begin=0,end=p.length();
    while(end<s.length())
    {
        b[s[begin]]--;
        b[s[end]]++;
        if(fun(a,b))
            res.push_back(begin+1);
        end++;begin++;
    }
    return res;
    

    }
};