class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // sort(nums.begin(), nums.end(), greater<int>());
        // return nums[k-1];
        priority_queue <int> pq(nums.begin(), nums.end());
        while(k > 1){
            pq.pop();
            k--;
        }
        return pq.top();
    }
};
