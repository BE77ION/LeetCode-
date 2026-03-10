class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prefix=1;
        int suffix=1;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(prefix==0){
                prefix=1;   
            }
            prefix*=nums[i];
            maxi=max(prefix,maxi);
        }    
        for(int i=nums.size()-1;i>=0;i--){
            if(suffix==0){
                suffix=1;  
            }
            suffix*=nums[i];
            maxi=max(suffix,maxi);
        }  
        return maxi;
        }
};