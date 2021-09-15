// https://practice.geeksforgeeks.org/problems/check-arithmetic-progression1842/1#
#include <stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    std::sort(arr,arr+n);
    // for(int i=0; i<n; i++){
    //     cout<<arr[i];
    // }
    int d=arr[1]-arr[0];
    for(int i=1; i<n-1; i++){
        if(arr[i+1]-arr[i]!=d){
            cout<<"false";
            break;
        }
    }
    
    if(arr[n-1]!=(arr[0]+(n-1)*d)) cout<< "false";
    else cout<<"true";
}

bool checkIsAP(int arr[], int n)
    {
        std::sort(arr,arr+n);
        int d=arr[1]-arr[0];
        for(int i=1; i<n-1; i++){
            if(arr[i+1]-arr[i]!=d){
                return false;
            }
        }
        
        if(arr[n-1]!=(arr[0]+(n-1)*d)) return false;
        else return true;
    }
