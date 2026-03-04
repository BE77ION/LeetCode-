class Solution {
public:
    void nextPermutation(vector<int>& n) {
        int idx=-1;
       
        for(int i=n.size()-2;i>=0;i--){
            if(n[i]<n[i+1]){
                idx=i;
                break;
            }
        }
        if(idx==-1){reverse(n.begin(),n.end());return;}
        for(int i=n.size()-1;i>=0;i--){
            if(n[i]>n[idx]){
                swap(n[i],n[idx]);
                break;
            }
        }
        
            reverse(n.begin()+idx+1,n.end());
        

               
     
    }
};