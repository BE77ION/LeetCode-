class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int left=0;
        int right=1;
        int count=0;
        
        sort(nums.begin(),nums.end());
        while(right<nums.size()){
            if(nums[left]==nums[right]){
                nums[left]=0;
                nums[right]=0;
                left+=2;
                right+=2;
                count++;
            }
            else{
                left++;
                right++;
                
            }
        }
        int single=nums.size()-(2*count);
        if(nums.size()<2){
            return {0,1};
    }
        return {count,single};
    }
};