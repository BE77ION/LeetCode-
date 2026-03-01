class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(auto i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int rem=target-nums[i];
            if(mp.count(rem)&& mp[rem] != i){
                return{mp[rem],i};
            }
        }
        return {};
    }
};