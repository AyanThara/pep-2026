class Solution {
public:
    int findMinDiff(vector<int>& arr, int m) {
        int n = arr.size();
        if(m > n) return -1;
        sort(arr.begin(), arr.end());
        int ans = INT_MAX;
        for(int i = 0; i + m - 1 < n; i++){
            ans = min(ans, arr[i+m-1] - arr[i]);
        }
        return ans;
    }
};
