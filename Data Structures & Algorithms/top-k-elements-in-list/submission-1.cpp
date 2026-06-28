class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue <pair<int,int>> pq;
        unordered_map<int,int>mp;
        for(int i : nums) mp[i]++;
        for(auto it : mp){
            pq.push({it.second, it.first});
        }
        vector<int>ans;
        while(!pq.empty() && k > 0){
            auto it = pq.top();
            ans.push_back(it.second);
            pq.pop();
            k--;
        }
        return ans;
    }
};
