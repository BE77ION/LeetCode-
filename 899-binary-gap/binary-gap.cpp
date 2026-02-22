class Solution {
public:
    int binaryGap(int n) {
        string toBi;
        while (n) {
            int b = n % 2;
            toBi += b + '0';
            n = n / 2;
        }
        reverse(toBi.begin(), toBi.end());

        int maxi = 0;
        for (int i = 0; i < toBi.size(); i++) {
            if (toBi[i] == '1') {
                int right = i + 1;
                while (right < toBi.length() && toBi[right] != '1') {
                    right++;
                }
                if(right<toBi.size())
                maxi = max(maxi, right - i);
            }
        }

        return maxi;
    }
};