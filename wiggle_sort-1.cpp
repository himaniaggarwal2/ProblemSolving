// https://www.lintcode.com/problem/508
// https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1

void wiggleSort(vector<int> &nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(i%2==0){
                if(nums[i+1]<=nums[i]) swap(nums[i+1],nums[i]);
            }
            else if(i%2==1){
                if(nums[i+1]>=nums[i]) swap(nums[i+1],nums[i]);
            }
        }
    }