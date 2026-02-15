class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,-1);
        for(int j=0;j<nums.size();j++){
            for(int i=1;i<nums.size();i++){
                int ind=(j+i)%n;
                if(nums[ind]>nums[j]){
                    ans[j]=nums[ind];
                    break;
                }
                
            }
        }
        return ans;
    }
};