class Solution {
public:
    int firstUniqChar(string s) {
        int hash[2048];
        memset(hash,0,sizeof(hash));
        for(char c:s)
            hash[c]++;
        int i=0;
        int f=0;
        //cout<<hash['d'];
        for(char c:s)
        {
            if(hash[c]==1)
                {return i;
                f=1;}
            i++;
                
        }
        //cout<<hash['d'];
        //if(f==0)
        return -1;
        //return 0;
    }
};