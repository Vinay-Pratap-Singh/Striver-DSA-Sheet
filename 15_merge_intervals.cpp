vector<vector<int>> merge(vector<vector<int>>& m) {
        if(m.size() < 2){
            return m;
        }
        vector<vector<int>>ans; 
        sort(m.begin(), m.end());
        ans.push_back(m[0]);        
        
        for(int i=1; i<m.size(); i++){
            if(ans.back()[1] >= m[i][0]){
                ans.back()[1] = max(ans.back()[1], m[i][1]);
            }
            else{
                ans.push_back(m[i]);
            }
        }
        return ans;        
    }