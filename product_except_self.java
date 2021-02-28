public int[] productExceptSelf(int[] nums) {
    int size = nums.length; 
    int[] prefix = new int[size]; // creating 2 arrays namely prefix and suffix of same size as nums
    int[] suffix = new int[size];
    prefix[0] = nums[0];//assigning zeroth element
    suffix[size - 1] = nums[size - 1]; //assigning last element of nums
    for(int i = 1,j = size - 2; i < size && j >=0 ; i++ , j--){
        prefix[i] = nums[i]*prefix[i-1];//multiplying from back to front and front to back
        suffix[j] = nums[j]*suffix[j+1];
    }
    int[] output = new int[size];
    // handle corner cases for output array
    output[0] = suffix[1];
    output[size - 1] = prefix[size - 2];
    for(int i = 1; i < size - 1; i++){
        output[i] = prefix[i-1]* suffix[i+1];
    }
    return output;
}