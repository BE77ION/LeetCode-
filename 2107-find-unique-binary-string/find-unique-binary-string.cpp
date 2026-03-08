class Solution {
public:
void generatestring(int ind,int n,vector<string>&v,string s){
    if(ind>=n){
        v.push_back(s);
        return;
    }
    
    generatestring(ind+1,n,v,s+'0');
    generatestring(ind+1,n,v,s+'1');

}
    string findDifferentBinaryString(vector<string>& nums) {
        vector<string>v;
        string s;
        generatestring(0,nums.size(),v,s);
        
        for(int i=0;i<v.size();i++){
            bool found=false;
            for(int j=0;j<nums.size();j++){
                if(v[i]==nums[j]){
                    found=true;
                    break;
                }
            }
            if(!found) return v[i];
        }
    return "";
    }
};