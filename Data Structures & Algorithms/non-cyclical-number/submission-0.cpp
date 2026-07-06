class Solution {
public:
    bool isHappy(int n) {
        set <int> st;
        int ans = 0;
        while(n != 1){
            ans = 0;
            while(n > 0){
                int d = n%10;
                ans += d*d;
                n/=10;
            }
            if (ans == 1) return true;
            if (st.find(ans) != st.end()) return false;
            st.insert(ans);
            n = ans;
        }
        return true;
    }
};
