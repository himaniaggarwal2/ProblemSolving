#include <iostream>
#include <vector>
using namespace std;

vector<string> gss(string s){
    // write your code here
    if(s.size()==0){
        vector<string> base_result={""};
        return base_result;
    }
    
    char ch=s[0];
    string rest_of_string = s.substr(1);
    vector<string> recursion_result = gss(rest_of_string);
    
    vector<string> myresult;
    for(string string_recursion : recursion_result){
        myresult.push_back(""+string_recursion);
    }
    for(string string_recursion : recursion_result){
        myresult.push_back(ch+string_recursion);
    }
    return myresult;
}

int main(){
    string s;
    cin >> s;
    vector<string> ans = gss(s);
    int cnt = 0;

    cout << '[';
    for (string str : ans){
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}