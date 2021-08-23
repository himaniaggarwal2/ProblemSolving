string modify (string s)
    {
        string a;
        for(int i=0;i<s.size();i++){
        if(s[i]!=' ')
            a+=s[i];
        }
        return a;
    }