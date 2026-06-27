class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int>res;
        for(int i = 0; i < t.size(); i++){
            int len = 0;
            for(int j = i; j < t.size(); j++){
                if (t[j] > t[i]){
                    len = j - i;
                    break;
                }
            }
            res.push_back(len);
        }
        return res;
    }
};
