string findSubString(string str)
    {
        int i=0;
        int j=0;
        int window_len=0;
        int max_window_len=0;
        int start_window=1;
        unordered_map<char,int> mp;
        while(j<str.length()){
            int ch=str[j]-'A';
            // cout<<ch<<endl;
            if(mp.count(ch) and mp[ch]>=i){
                i=mp[ch]+1;
                window_len=j-i;
            }
            mp[ch]=j;
            window_len++;
            j++;
            if(window_len > max_window_len){
                max_window_len=window_len;
                start_window=i;
            }
        }
        // cout<<start_window<<"      "<<max_window_len<<endl;
        return str.substr(start_window,max_window_len);
        
    }