class Solution {
public:
    int scoreOfString(string s) {
        int i = 0, j = 1, score = 0;
        while(j < s.length()){
            int s1 = s[i++] - 'a', s2 = s[j++] - 'a';
            score = score + abs(s1 - s2);
        }
        return score;
    }
};