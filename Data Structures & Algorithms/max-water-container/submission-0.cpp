class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        // vector<int> lm(n), rm(n);
        // lm[0] = heights[0];
        // for(int i = 1; i < n; i++){
        //     lm[i] = min(lm[i], lm[i-1]);
        // }
        int i = 0, j = n - 1;
        int ans = 0;
        while(i < j){
            int gap = j - i;
            ans = max(ans, gap*min(heights[i], heights[j]));
            if (heights[i] < heights[j]) i++;
            else j--;
        }
        return ans;
    }
};
