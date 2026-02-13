class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans(nums.size(),-1);
        
        for(int i=0;i<nums.size();i++){
            int currele=nums[i];
            for(int j=1;j<nums.size();j++){
                int ind=(i+j)%nums.size();
                if(nums[ind]>currele){
                    ans[i]=nums[ind];
                    break;
                }
            }
        }
        return ans;
    }
};