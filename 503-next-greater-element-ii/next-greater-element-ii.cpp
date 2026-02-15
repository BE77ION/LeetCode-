class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,-1);
        stack<int>s;
        for(int j=2*nums.size()-1;j>=0;j--){
            while(!s.empty()&&s.top()<=nums[j%n]){
                s.pop();
            }
            if(j<n){
                ans[j]=s.empty()?-1:s.top();
            }
            s.push(nums[j%n]);
        }
        return ans;
    }
};