#include <bits/stdc++.h>
using namespace std;

int cs(int arr[], int n){
    vector<int> dp(n+1);
    dp[n]=1;
    for(int i=n-1;i>=0;i--){
        // cout<<i<<" ";
        for(int j=1;j<=arr[i] and i+j < dp.size();j++){
            dp[i]+=dp[i+j];
            // cout<<dp[i]<<" ";
        }
        // cout<<"\n";
    }
    
    return dp[0];
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ;i++){
        cin>>arr[i];
    }
    cout<<cs(arr,n)<<endl;
}