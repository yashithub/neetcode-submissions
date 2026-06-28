class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // if (nums.empty()) return 0;
        // sort(nums.begin(), nums.end());
        // int cnt = 1, ans = 1;
        // for(int i = 1; i < nums.size(); i++){
        //     if (nums[i] == nums[i-1]) continue;
        //     else if (nums[i]-nums[i-1] <= 1) cnt++;
        //     else{
        //         ans = max(ans, cnt);
        //         cnt = 1;
        //     }
        // }
        // return max(ans, cnt);

        // using hashset

        unordered_set <int> st(nums.begin(), nums.end());
        int cnt = 0;
        for(int num : nums){
            if (st.find(num - 1) == st.end()) {
                int l = 1;
                while(st.find(num+1) != st.end()){
                    num++;
                    l++;
                }
                cnt = max(cnt, l);
            }
        }
        return cnt;
    }
};
