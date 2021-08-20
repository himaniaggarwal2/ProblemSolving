vector<int> NSL(vector<int> heights){
        vector<int> left;
        stack<pair<int,int>> st;
        int pseudo_index=-1;
        for(int i=0;i<heights.size();i++){
            if(st.size()==0)    
                left.push_back(pseudo_index);
            else if(st.size()>0 && st.top().first<heights[i]){
                left.push_back(st.top().second);
            }
            else{
                while(st.size()>0 && st.top().first>=heights[i]){
                    st.pop();
                }
                if(st.size()==0) 
                    left.push_back(-1);
                else    
                    left.push_back(st.top().second);
            }
            st.push({heights[i],i});
        }
        return left;
    }
    
    vector<int> NSR(vector<int> heights){
        vector<int> right;
        stack<pair<int,int>> st;
        int pseudo_index=heights.size();
        for(int i=heights.size()-1;i>=0;i--){
            if(st.size()==0) 
                right.push_back(pseudo_index);
            else if(st.size()>0 && st.top().first<heights[i]){
                right.push_back(st.top().second);
            }
            else{
                while(st.size()>0 && st.top().first>=heights[i]){
                    st.pop();
                }
                if(st.size()==0) 
                    right.push_back(-1);
                else    
                    right.push_back(st.top().second);
            }
            st.push({heights[i],i});
        }
        std::reverse(right.begin(),right.end());
        return right;
    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int> left=NSL(heights);
        vector<int> right=NSR(heights);
        int n=heights.size();
        int ans=0;
        for(int i=0;i<n;i++){
        ans=std::max(ans,(right[i]-left[i]-1)*heights[i]);
        }
        return ans;
    }

    
    