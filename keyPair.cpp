// https://practice.geeksforgeeks.org/problems/key-pair5616/1

bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    sort(arr, arr+size);
    for(int i=0; i<size; i++){
        int big_num=n+arr[i];
        bool found=binary_search(arr+i, arr+size, big_num);
        if(found) return true;
    }
    return false;
	}