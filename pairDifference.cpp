#include <stdc++.h>
using namespace std;

bool findPair(int arr[], int n, int x){
    set<int> st;

	for(int i=0;i<n;i++){
	    if(st.find(arr[i] - x)!=st.end()){
	        return true;
	       }
	        st.insert(arr[i]);
	    }
	return false;
}

int main(){
    int n;
    int x;
    int arr[100000];
    cin>>n>>x;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<findPair(arr,n,x);
}