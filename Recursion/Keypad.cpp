#include <bits/stdc++.h>
using namespace std;

static vector<string> codes ={",;","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
vector<string> kpc(string str){
    if(str.size()==0){
        vector<string> base_result={""};
        return base_result;
    }
    int ch = str[0] - '0';
    string rest_of_string = str.substr(1);
    vector<string> result_recursion = kpc(rest_of_string);
    vector<string> myresult;
    
    string code= codes[ch];
    for(int i=0;i<code.size();i++){
        for(string recursive_string : result_recursion){
            myresult.push_back(code[i] + recursive_string);
            
        }
    }
    return myresult;
}
int main(){
    string s;
    cin >> s;
    vector<string> ans = kpc(s);
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

//yaha par yeh dikkat aa rhi hai ki codes ki ch value vaala ka saari characters ko pair up karna hai result_recursion ka saath vaali values ke saath
//toh according to my code triple lag jaayega loop joh ki case nhi tha sumit sir ka codes ka saath so i missed out onto something 