// https://practice.geeksforgeeks.org/problems/sum-of-subarrays2229/1#

class Solution{   
public:
    long long subarraySum(long long arr[], long long n)
    {
        long long result=0;
        int m=1e9+7;
        for(int i=0;i<n;i++){
            result+=((arr[i]%m)*(i+1)%m*(n-i)%m);
        }
        return result%m;
    }
};