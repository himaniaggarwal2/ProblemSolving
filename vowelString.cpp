#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    string result;
    for(int i=0;i<str.size();i++){
        if(str[i]=='a' or str[i]=='e' or str[i]=='i' or str[i]=='o' or str[i]=='u' or str[i]=='A'  or str[i]=='E' or str[i]=='I' or str[i]=='O' or str[i]=='U') continue;
        else result+=str[i];
    }
    cout<<result;
}