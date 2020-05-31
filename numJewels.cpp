class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int co=0;
        for(char c:S)
        {
            for(char d:J)
            {
                if(c==d)
                    co++;
            }
        }
        return co;
    }
};