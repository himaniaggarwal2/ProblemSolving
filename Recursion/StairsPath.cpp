#include <bits/stdc++.h>
using namespace std;

vector<string> getStair(int n){
    if(n == 0){
        vector<string> baseresult={""};
        return baseresult;
    }
    else if(n < 0){
        vector<string> baseresult;
        return baseresult;
    }
    vector<string> paths1 = getStair(n-1);
    vector<string> paths2 = getStair(n-2);
    vector<string> paths3 = getStair(n-3);
    vector<string> myresult;
    
    for(string path:paths1){
        myresult.push_back('1'+path);
    }
    for(string path:paths2){
        myresult.push_back('2'+path);
    }
    for(string path:paths3){
        myresult.push_back('3'+path);
    }
    
    return myresult;
 }
 int main(){
    int n;
    cin>>n;
    vector<string> finalresult=getStair(n);
    cout<<"[";
    int cnt=0;
    
    for(string str: finalresult){
        if (cnt != finalresult.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout<<"]";
    return 0;
    
 }