class Solution {
public:
    bool check(vector<int>& arr){
        for(int i : arr) {
            if (i != 0) return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;
        vector <int> fr(26, 0);
        for(auto c : s1) fr[c - 'a']++;
        int start = 0, end = s1.length() - 1;
        vector<int> frr;
        while(end < s2.length()){
            frr = fr;
            for(int i = start; i <= end; i++) frr[s2[i] - 'a']--;
            if (check(frr)) return true;
            start++;
            end++;
        }
        return false;
    }
};
