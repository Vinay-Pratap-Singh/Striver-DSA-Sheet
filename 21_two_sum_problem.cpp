// leetcode solution
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int n= nums.size();
        
        for(int i=0; i<n; i++){
            if (mp.find(target-nums[i]) != mp.end()) //if(mp.count(target-nums[i]))
                return {mp[target-nums[i]],i};
            
            mp[nums[i]]=i;
        }
        return {};
    }
};

// codestudio solution
vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>>ans;
    vector<int>temp;
    for(int i=0; i<arr.size()-1; i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i] + arr[j] == s){
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                sort(temp.begin(), temp.end());
                ans.push_back(temp);
                temp.clear();
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}
