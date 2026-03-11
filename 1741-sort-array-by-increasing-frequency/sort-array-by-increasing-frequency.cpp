class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        vector<pair<int,int>>v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),[](auto&a,auto&b){
            if(a.second==b.second){return a.first>b.first;}
           return a.second<b.second;
        });
        vector<int>ans;
        for(auto i:v){
            for(int j=0;j<i.second;j++){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};