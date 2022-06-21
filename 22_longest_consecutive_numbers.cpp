class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    
        unordered_set<int> num_set(nums.begin(), nums.end());
        int max_count = 0, count = 0;

        for (auto n : num_set) {
            if (!num_set.count(n - 1)) {
                count = 0;
                while (num_set.count(n)) {
                    count++;
                    n = n + 1;
                }
                max_count = max(count, max_count);
            }
        }
        return max_count;
        
        
        /*
        if(nums.size() == 0)    return 0;
        sort(nums.begin(), nums.end());
        int longest = 0;
        int count = 1;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1])    continue;
            if(nums[i] == nums[i+1]-1){
                count++;
            }
            else{
                longest = max(longest, count);
                count = 1;
            }
        }
        
        return max(longest, count);
        */
    }
};