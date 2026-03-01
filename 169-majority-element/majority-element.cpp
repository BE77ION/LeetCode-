class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele=0;
        int count=0;
        for(auto i:nums){
            if(count==0){
                ele=i;
            }
            count+=(i==ele)?1:-1;
        }
        return ele;
    }
};