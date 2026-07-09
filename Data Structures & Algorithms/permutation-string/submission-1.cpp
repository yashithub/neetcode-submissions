class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) return false;

        vector<int> f1(26, 0), f2(26, 0);

        for (char c : s1) f1[c - 'a']++;
        for (int i = 0; i < s1.length(); i++)
            f2[s2[i] - 'a']++;

        int matches = 0;
        for (int i = 0; i < 26; i++) {
            if (f1[i] == f2[i]) matches++;
        }

        int l = 0;
        for (int r = s1.length(); r < s2.length(); r++) {
            if (matches == 26) return true;

            // Add new character
            int idx = s2[r] - 'a';
            f2[idx]++;
            if (f2[idx] == f1[idx])
                matches++;
            else if (f2[idx] == f1[idx] + 1)
                matches--;

            // Remove left character
            idx = s2[l] - 'a';
            f2[idx]--;
            if (f2[idx] == f1[idx])
                matches++;
            else if (f2[idx] == f1[idx] - 1)
                matches--;

            l++;
        }

        return matches == 26;
    }
};