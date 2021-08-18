#include <stdc++.h>
using namespace std;

int main(){
    vector<long long> arr={1 ,3, 2, 4};
    int n=4;
    vector<long long> v;
        stack<long long> st;
        for(int i=n-1;i>=0;i++){
            if(st.size()==0){
                v.push_back(-1);
            }
            else if(st.size() > 0 && st.top()>arr[i]){    
                v.push_back(st.top());
            }
            else if(st.size()>0 && st.top()<=arr[i]){
                while(st.size()>0 && st.top()<=arr[i]){
                    st.pop();
                }
                if(st.size()==0){
                    v.push_back(-1);
                }
                else{
                    v.push_back(st.top());
                }
            }
            st.push(arr[i]);
        }
        std::reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            cout<<" "<<v[i]<<endl;
        }
}