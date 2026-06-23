class Solution {
public:
    vector<string>ans;
    string encode(vector<string>& strs) {
        // string ans = "";
        // for(auto x : strs){
        //     ans += x;
        //     ans += '^';
        // }      
        // ans.pop_back();  
        // return ans;
        ans = strs;
        return "";
    }

    vector<string> decode(string s) {
        // vector<string>ans;
        // string token = "";
        // for(auto x : s){
        //     if (x == '^'){
        //         ans.push_back(token);
        //         token = "";
        //     }
        //     else token += x;
        // }
        // ans.push_back(token);
        // return ans;
        return ans;
    }
};
