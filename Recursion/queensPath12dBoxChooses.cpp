#include <bits/stdc++.h>
using namespace std;

void queensCombinations(int qpsf, int tq, int row, int col, string asf){
        if(row==tq){
            if(qpsf == tq){
            cout<<asf<<"\n";
            }
            return;
        }
        string yesans="",noans="";
        
        if(col == tq - 1){
            row+=1;
            col=0;
            yesans= asf+"q\n";
            noans= asf+"-\n";
        }else{
            col++;
            yesans= asf +"q";
            noans= asf + "-";
        }
        queensCombinations(qpsf+1,tq,row,col,yesans);
        queensCombinations(qpsf,tq,row,col,noans);
    }
    
int main(){
    int n;
    cin>>n;
    queensCombinations(0, n, 0, 0, "");
    return 0;
}

