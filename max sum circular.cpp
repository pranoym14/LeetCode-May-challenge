#define loop(x,k,n) for(int x = k; x < n; x++)
class Solution {
public:
    int kadane(vector<int> arr,int n)
{
    int ans=arr[0],sum=0;
    loop(i,1,n)
    {
        sum=max(arr[i],sum+arr[i]);
        ans=max(sum,ans);
    }
    return ans;
}
int  maxSubarraySumCircular(vector <int> &a)  
{  
    // Case 1: get the maximum sum using standard kadane'  
    // s algorithm  
    int n=a.size();
    if(n==1)
        return a[0];
    int max_kadane = kadane(a, n);  
      
    // Case 2: Now find the maximum sum that includes  
    // corner elements.  
    int max_wrap = 0, i;  
    for (i = 0; i < n; i++)  
    {  
            max_wrap += a[i]; // Calculate array-sum  
            a[i] = -a[i]; // invert the array (change sign)  
    }  
      
    int s=max_wrap;
    max_wrap = max_wrap + kadane(a, n);  
      
    // The maximum circular sum will be maximum of two sums 
    max_kadane=max(max_kadane,s);  
      
    // The maximum circular sum will be maximum of two sums  
    return (max_wrap > max_kadane)? max_wrap: max_kadane;  
} 
    
};