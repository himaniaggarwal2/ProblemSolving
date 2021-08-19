// https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1#
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v; // creating vector to store result 
    stack<pair<int,int>> s; // creating the pair stack
    for (int i=0;i<n;i++)
    {
      if(s.size()==0) // when stack is empty return -1;
      {
        v.push_back(-1);
      }
      else if (s.size()>0 && s.top().first>price[i]) // when there is element in stack and stack top is greater then array element 
      {
        v.push_back(s.top().second); // take stack top in the result vector 
      }
      else if (s.size()>0 && s.top().first<=price[i] ){ // when there is element in stack and that element is less then array element 
        while (s.size()>0 && s.top().first<=price[i] )// upto when there is element and stack top is less then array's element delete the element from stack
        {
          s.pop(); // delete the element from stack
        }
        if(s.size()==0) // when stack became empty return -1
        {
          v.push_back(-1);
        }
        else
        {
          v.push_back(s.top().second); // else push stack top in the vector 
        }
      }
      s.push({price[i],i}); // take price array and index i inside pair stack
    }
    for (int i=0;i<v.size();i++)
    {
       v[i]=i-v[i]; // subtract normal index from the vector index v[i]
    }
    return v;

    //   vector<int> v;
    //   stack<int> st;
    //   for(int i=0;i<n;i++){
    //       if(st.size()<=0) v.push_back(-1);
    //       else if(st.size()>0 and price[st.top()]>=price[i]){
    //           v.push_back(st.top());
    //       }
    //       else if(st.size()>0 and price[st.top()]<price[i]){
    //           while(st.size()>0 and price[st.top()]<price[i]){
    //               st.pop();
    //           }
    //           if(st.size()<=0) v.push_back(-1);
    //           else v.push_back(st.top());
    //       }
    //       st.push(i);
    //   }
    //   for(int i=0;i<n;i++){
    //       v[i]=i-v[i];
    //   }
    //   return v;
    
}