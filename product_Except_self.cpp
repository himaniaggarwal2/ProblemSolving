//https://leetcode.com/problems/product-of-array-except-self/

class Solution {
    public int[] productExceptSelf(int[] nums) {
        int p=1;
        int count=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=0) p= p*nums[i];
            else count++;
        }//product of whole nums array except the point when it is zero
        // zero should be edge case
        for(int i=0;i<nums.length;i++){
            if(count>=2) nums[i]=0; //more than 2 zeros in array nums
            //it means that even if we don't include self vaala zero there is gonna be zero somewhere else
            //and that would lead to automatic zero of the whole array
            else{
                if(nums[i]==0) nums[i]=p;
                else{
                    if(count>0) nums[i]=0;
                    else nums[i]=p/nums[i];
                    }
                }     
        }
        return nums;
    }
}