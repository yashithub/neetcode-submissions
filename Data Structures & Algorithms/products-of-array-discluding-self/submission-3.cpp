class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1, c = 0;
        bool z = false;
        for(int i : nums){
            if (i == 0){
                z = true;
                c++;
                continue;
            }
            prod *= i;
        }
        if (c > 1) {
            vector<int>ans(nums.size(),0);
            return ans;
        }
        for(int i = 0; i < nums.size(); i++){
            if (!z ) nums[i] = prod / nums[i];
            else {
                if (nums[i] != 0) nums[i] = 0;
                else nums[i] = prod;
            }
        }
        return nums;
    }
};
