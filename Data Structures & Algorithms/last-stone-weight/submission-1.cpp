class Solution {
   public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue <int> mx;
        for(int i : stones) mx.push(i);
        while(mx.size() > 1){
            int a = mx.top();
            mx.pop();
            int b = mx.top();
            mx.pop();
            if (a != b) mx.push(a - b);
        }
        return mx.size() == 0 ? 0 : mx.top();
    };
};
