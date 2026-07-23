class Solution {
public:
    int calTime(vector<int>&piles, int rate){
        int r = 0;
        for(int i : piles){
            r += ceil((double)i/rate);
        }
        return r;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int i = 1, j = *max_element(piles.begin(), piles.end()), ans = 0;
        while(i <= j){
            int mid = (i + j)/2;
            int time = calTime(piles, mid);
            if (time <= h){
                ans = mid;
                j = mid - 1;
            } else {
                i = mid + 1;
            }
        }
        return ans;
    }
};
