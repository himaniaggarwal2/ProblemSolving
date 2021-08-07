//https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1#

int findPlatform(int arr[], int dep[], int n)
    {
    
        std::sort(arr,arr+n);
        std::sort(dep,dep+n);
        if(n==1) return 1;
        int i=0;
        int j=0;
    	int cplat=0;
    	int overall=INT_MIN;
    	while(i<n and j<n){
    	    if(arr[i]<=dep[j]){
                cplat++;
                overall=std::max(cplat,overall);
                i++;
    	    }
    	    if(dep[j]<arr[i]){
    	        cplat--;
    	        j++;
    	    }
    	    
    	}
    	
    	return overall;
    }