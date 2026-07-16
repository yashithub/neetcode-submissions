class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        bool found = false;
        long long rate = 1;
        while(found == false){
            long long time = 0;
            for(int i : piles){
                if (i%rate != 0) time += i/rate + 1;
                else time += i/rate;
            }
            if (time > h) rate++;
            else {
                found = true;
                break;
            }
        }
        return (int)rate;
    }
};
