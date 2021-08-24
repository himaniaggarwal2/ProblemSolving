// https://practice.geeksforgeeks.org/problems/key-pair5616/1

bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    set<int> st;
	    
	    for(int i=0;i<n;i++){
	        if(st.find(x-arr[i])!=st.end()){
	        return true;
	            
	        }
	        st.insert(arr[i]);
	    }
	    return false;
	}