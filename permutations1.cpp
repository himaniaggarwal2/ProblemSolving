#include <bits/stdc++.h>
using namespace std;
// #define FOR(i,0,n) for(int i=0;i<n;i++)
#define FOR(i,0,n) for(int i=0;i<n;i++)
#define FORD(i,0,n) for(int i=n-1;i>=0;i--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void permutations(int boxes[],int currentIndex,int totalIndex,int n){
  if(currentIndex > totalIndex){
      FOR(i,0,n){
        cout<<boxes[i];
      }
      cout<<endl;
      return;
  }  
  
  FOR(i,0,n){
      if(boxes[i] == 0){
          boxes[i]=currentIndex;
          permutations(boxes,currentIndex+1,totalIndex,n);
          boxes[i]=0;
      }
  }
}

int main(){
    fast;
    int nboxes,ritems;
    cin>>nboxes>>ritems;
    int arr[10+5]={0};          
    permutations(arr,1,ritems,nboxes);
    return 0;
}