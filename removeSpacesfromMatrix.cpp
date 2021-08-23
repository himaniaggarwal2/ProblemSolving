#include <stdc++.h>
using namespace std;

int main(){
    vector<vector<char> > ans(3,vector<char>(5,' '));

    ans[0][0]='N';
    ans[0][1]='A';
    ans[0][3]='V';
    ans[0][4]='T';
    ans[1][1]='G';
    ans[1][2]='U';
    ans[1][4]='P';
    ans[2][0]='T';
    ans[2][3]='A';

    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            cout<<ans[i][j]<<" ";
        }cout<<"\n";
    }

    vector<vector<char> > res(3,vector<char>(5,' '));
    int k=0;
    for(int i=0;i<3;i++){
        k=0;
        for(int j=0;j<5;j++){
            if(ans[i][j]!=' '){
                res[i][k]=ans[i][j];
                k++;
            }
        }
        
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            cout<<res[i][j]<<" ";
        }cout<<"\n";
    }
}