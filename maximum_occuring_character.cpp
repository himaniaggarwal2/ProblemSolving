char getMaxOccuringChar(string str)
    {
       std::map<int,int> mp;
       int maxi=0;
       int ans=0;
       for(int i=0;i<str.size();i++){
           ++mp[str[i]-'a'];
       }
       for(auto it=mp.begin();it!=mp.end();it++){
           if(maxi<it->second){
           maxi=it->second;
           ans=it->first;
           }
       }
       return ans+'a';
    }