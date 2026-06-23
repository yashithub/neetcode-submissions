class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> ans;
        for(auto x : strs){
            string s = x;
            sort(s.begin(), s.end());
            mp[s].push_back(x);
        }
        int i = 0;
        for(auto it : mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
