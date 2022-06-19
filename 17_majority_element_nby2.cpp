// leetcode solution

// first approach
sort(nums.begin(), nums.end());
return nums[nums.size()/2];

// second approach
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            if(count == 0){
                candidate = nums[i];
                count++;
            }
            else if(candidate == nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        return candidate;
    }
};

// codestudio solution
#include <bits/stdc++.h>
#include<unordered_map>
int findMajorityElement(int arr[], int n) {
	unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto x:mp){
        if(x.second>n/2)
            return x.first;
    }
    return -1;
}