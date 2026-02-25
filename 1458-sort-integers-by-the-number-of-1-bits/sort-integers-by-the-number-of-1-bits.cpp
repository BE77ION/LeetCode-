class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            for(int j=i;j<arr.size();j++){
                if(__builtin_popcount(arr[j])<__builtin_popcount(arr[i])){
                    swap(arr[i],arr[j]);
                }else if(__builtin_popcount(arr[j])==__builtin_popcount(arr[i])&&arr[i]>arr[j]){
                    swap(arr[i],arr[j]);
                }
            }
        }
        return arr;
    }
};