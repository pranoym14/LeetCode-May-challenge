// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int FirstOccurence(int n)
{

    int start = 1;
    int end = n ;
    int res = -1;
    while (start <= end)
    {
        int mid = end+(start-end)/2;
        if (isBadVersion(mid)==true)
        {
            res = mid;
            end = mid - 1;
        }
        else

        {start = mid + 1;}
        
    }
    return res;
}
    int firstBadVersion(int n) {
        // if(n==1)
        //     return n;
        int r= FirstOccurence(n);
        if(r==-1)
            return 0;
        else
            return r;
    }
};