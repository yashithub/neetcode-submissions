class Solution {
public:
    int scoreOfString(string s) {
        int i = 0, j = 1, score = 0;
        while(j < s.length()){
            score += abs(s[i++] - s[j++]);
        }
        return score;
    }
};