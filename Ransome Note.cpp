#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
class Solution {
public:
    bool canConstruct(string r, string m) {
        FIO
        int hash[2048];
        memset(hash,0,sizeof(hash));
        for(char c:r)
        {
            hash[(int)c]++;
        }
        for(char d:m)
        {
            hash[(int)d]--;
            
        }
        for(char c:r)
        {
            if(hash[(int)c]>0)
                return false;
        }
        return true;
    }
};