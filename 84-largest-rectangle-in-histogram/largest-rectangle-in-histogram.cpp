class Solution {
public:
    vector<int>nse(vector<int>& h){
        stack<int>s;
        vector<int>res(h.size());
        for(int i=h.size()-1;i>=0;i--){
            while(!s.empty()&&h[s.top()]>=h[i]){
                s.pop();
            }
            res[i]=s.empty()?h.size():s.top();
            s.push(i);
        }
        return res;
    }
    vector<int>pse(vector<int>& h){
        stack<int>s;
        vector<int>res(h.size());
        for(int i=0;i<h.size();i++){
            while(!s.empty()&&h[s.top()]>=h[i]){
                s.pop();
            }
            res[i]=s.empty()?-1:s.top();
            s.push(i);
        }
        return res;
    }
    int largestRectangleArea(vector<int>& h) {
        vector<int>next=nse(h);
        vector<int>prev=pse(h);
        int maxi=0;
        for(int i=0;i<h.size();i++){
            maxi=max(maxi,h[i]*(next[i]-prev[i]-1));
        }
        return maxi;
    }
};