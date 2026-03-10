class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxsofar=nums[0];
        int minsofar=nums[0];
        int ans=nums[0];

        for(int i=1;i<nums.size();i++){
            int tempmax=max({nums[i],minsofar*nums[i],nums[i]*maxsofar});
            int tempmin=min({nums[i],minsofar*nums[i],nums[i]*maxsofar});

            maxsofar=tempmax;
            minsofar=tempmin;
            ans=max(ans,maxsofar);
        }
        return ans;
    }
};