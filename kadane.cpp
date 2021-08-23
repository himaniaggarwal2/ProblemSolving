// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1/?company[]=Samsung&company[]=Samsung&page=1&query=company[]Samsungpage1company[]Samsung
int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int max_so_far=arr[0];
        int overall_maximum=arr[0];
        for(int i=1;i<n;i++){
            max_so_far=std::max(arr[i],max_so_far+arr[i]);
            overall_maximum=std::max(overall_maximum,max_so_far);
        }
        return overall_maximum;
    }