// codestudio solution
string fourSum(vector<int> nums, int target, int n) {
        sort(nums.begin(), nums.end());
        string ans = "";
        if(nums.size() < 4){
            return ans;
        }
        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int x=j+1, y=n-1;
                long long findSum = target - (long)nums[i] - (long)nums[j];
                
                while(x<y){
                    long long sum = nums[x] + nums[y];
                    if(sum > findSum)   y--;
                    else if(sum < findSum)  x++;
                    else{
                        ans = ans + "Yes";
                        return ans;
                    }
                }
            }
        }
        ans = ans + "No";
        return ans;
}


// leetcode solution after 5 TLE
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        set<vector<int>>myList;
        sort(nums.begin(), nums.end());
        if(nums.size() < 4){
            return ans;
        }
        
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                int x=j+1, y=nums.size()-1;
                long long findSum = target - (long)nums[i] - (long)nums[j];
                
                while(x<y){
                    long long sum = nums[x] + nums[y];
                    if(sum > findSum)   y--;
                    else if(sum < findSum)  x++;
                    else{
                        myList.insert({nums[i], nums[j], nums[x], nums[y]});
                        x++;
                        y--;
                    }
                }
            }
        }
        
        for(auto x: myList){
            ans.push_back(x);
        }
        return ans;
    }
};