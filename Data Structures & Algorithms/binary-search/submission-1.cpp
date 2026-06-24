class Solution {
public:
    int search(vector<int>& nums, int target) {
        // return binary_search(nums.begin(), nums.end(), target);
        int low = 0, high = nums.size();
        while(low <= high){
            int m = low + (high - low)/2;
            if (nums[m] == target) return m;
            else if (nums[m] > target) high = m - 1;
            else low = m + 1;
        }
        return -1;
    }
};
