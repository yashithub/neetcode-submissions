class KthLargest {
public:
    vector<int>arr;
    int K;
    KthLargest(int k, vector<int>& nums) {
        for(auto x : nums) arr.push_back(x);
        K = k;
    }
    int add(int val) {
        arr.push_back(val);
        sort(arr.begin(), arr.end(), greater<int>());
        return arr[K-1];        
    }
};
