  vector<int> nsl(vector<int>& heights){
        stack<pair<int,int>> s;
        vector<int> left;
        
        for(int i=0;i<heights.size();i++){
            if(s.empty()){
                left.push_back(-1);
            }
            else if(s.size()>0 && s.top().first<heights[i]){
                left.push_back(s.top().second);
            }
            else if(!s.empty() && s.top().first>=heights[i]){
                while(!s.empty() && s.top().first>=heights[i]){
                    s.pop();
                }
                if(s.empty()){
                    left.push_back(-1);
                }
                else{
                    left.push_back(s.top().second);
                }
            }
            s.push({heights[i],i});
        }
        
        return left;
    }
    
    vector<int> nsr(vector<int>& heights){
        stack<pair<int,int>> s;
        vector<int> right;
        
        for(int i=heights.size()-1;i>=0;i--){
            if(s.empty()){
                right.push_back(heights.size());
            }
            else if(!s.empty() && s.top().first<heights[i]){
                right.push_back(s.top().second);
            }
            else if(!s.empty() && s.top().first>=heights[i]){
                while(!s.empty() && s.top().first>=heights[i]){
                    s.pop();
                }
                if(s.empty()){
                    right.push_back(heights.size());
                }
                else{
                    right.push_back(s.top().second);
                }
            }
            s.push({heights[i],i});
        }
        reverse(right.begin(),right.end());
        return right;
    }
    
    int largestRectangleArea(vector<int>& heights) {
        
        vector<int> r;
        vector<int> l;
        
        r=nsr(heights);
        l=nsl(heights);
        
        vector<int> w;
        int ans=0;
        for(int i=0;i<l.size();i++){
            w.push_back(r[i]-l[i]-1);
        }
        
        for(int i=0;i<heights.size();i++){
            ans=max(ans,heights[i]*w[i]);
        }
        
        return ans;
    }
};

    
    