class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<1){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int longest=1;
        int lastsamll=nums[0];
        int count=1;

        for(int i=1;i<nums.size();i++){
            if(nums[i]-1==lastsamll){
                count++;
                lastsamll=nums[i];
            }
            else if(nums[i]==lastsamll){
                continue;
            }else{
                count=1;
                lastsamll=nums[i];
            }
            longest=max(longest,count);
        }
        return longest;
    }
};