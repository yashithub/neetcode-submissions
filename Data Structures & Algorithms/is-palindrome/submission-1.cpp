// class Solution {
// public:
//     bool isPalindrome(string s) {
//         string sx = "";
//         for(char c : s){
//             if (isalpha(c)) sx += tolower(c);
//         }
//         int i = 0, j = sx.size() - 1;
//         while(i < j){
//             if (sx[i++] != sx[j--]) return false;
//         }
//         return true;
//     }
// };
class Solution {
public:
    bool isPalindrome(string s) {
        string sx = "";
        for (char c : s) {
            if (isalnum(c))
                sx += tolower(c);
        }

        int i = 0, j = sx.size() - 1;
        while (i < j) {
            if (sx[i++] != sx[j--])
                return false;
        }
        return true;
    }
};