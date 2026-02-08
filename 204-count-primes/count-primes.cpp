class Solution {
public:
    int countPrimes(int n) {
        if(n<2){
            return 0;
        }
        vector<bool>arr(n,true);
        arr[0]=false;
        arr[1]=false;
        int count=0;
        for(int i=2;i<n;i++){
            if(arr[i]){
                count++;
                int j=i*2;
                while(j<n){
                    arr[j]=false;
                    j=j+i;
                }
            }
        }
        return count;
    }
};