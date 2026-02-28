class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        f(0,ans,temp,nums);
        return ans;
    }
    void f(int ind,vector<vector<int>>&ans,vector<int>&temp,vector<int>& nums){

        if(ind==nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[ind]);
        f(ind+1,ans,temp,nums);
        temp.pop_back();
        f(ind+1,ans,temp,nums);
        
    }
    
};