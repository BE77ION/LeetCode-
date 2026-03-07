class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0;
        int count2=0;
        int ele1=0;
        int ele2=0;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(count1==0&&nums[i]!=ele2){
                count1++;
                ele1=nums[i];
            }
            else if(count2==0&&nums[i]!=ele1){
                count2++;
                ele2=nums[i];
            }
            else if(ele1==nums[i])count1++;
            else if(ele2==nums[i])count2++;
            else{
                count1--;
                count2--;
            }

        }
        count1=0;
        count2=0;
        for(int i=0;i<nums.size();i++){
            if(ele1==nums[i])count1++;
            if(ele2==nums[i])count2++;
        }
        int mini=(nums.size()/3)+1;
        if(count1>=mini)ans.push_back(ele1);
        if(count2>=mini&&ele1!=ele2)ans.push_back(ele2);
        return ans;
    }
};