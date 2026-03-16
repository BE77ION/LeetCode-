class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>store;
        for(auto i:strs){
            string word=i;
            sort(word.begin(),word.end());
            store[word].push_back(i);
        }
        vector<vector<string>>ans;
        for(auto i:store){
            ans.push_back(i.second);
        }
        return ans;
    }
};