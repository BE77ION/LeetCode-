class Solution {
public:
    int concatenatedBinary(int n) {
        int mod=1e9+7;
        int bits=0;
        long long ans=0;

        for(int i=1;i<=n;i++){
            bits=log2(i)+1;
            ans=((ans<<bits)%mod+i)%mod;
            
        }

        return ans;
    }
};