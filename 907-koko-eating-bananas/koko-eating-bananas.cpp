class Solution {
public:
    long long f(vector<int>& nums,int k){
        long long ans=0;
        for(auto i:nums){
            ans+=ceil((double)i/k);
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=*max_element(piles.begin(),piles.end());
        int left=1;
        int right=maxi;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(f(piles,mid)<=h){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return left;
    }
};