class Solution {
public:
    vector<int> asteroidCollision(vector<int>& as) {

        stack<int> s;

        for (auto i : as) {
            if (i > 0) {
                s.push(i);
            } else {
                while (!s.empty() && s.top() > 0 && s.top() < -i) {
                    s.pop();
                }
                if (s.empty() || s.top() < 0) {
                    s.push(i);
                }
                if (!s.empty() && s.top() == -i) {
                    s.pop();
                }
            }
        }
        vector<int>ans(s.size());
        int i=s.size()-1;
        while(!s.empty()){
            ans[i--]=s.top();
            s.pop();
    
    }
    return ans;
    }

};