class Solution {
public:
    bool isPerfectSquare(int n) {
        int start=0,end=n;
    while(start<=end)
    {
        long long int mid=end-(end-start)/2;
        if(mid*mid==n)
            return true;
        else if(mid*mid<n)
            start=mid+1;
        else
            end=mid-1;
    }
    return false;
    }
};