class Solution {
public:
    int minSwap(vector<int>& arr, int k) {
        int n = arr.size();
        int good = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] <= k)
                good++;
        }
        int bad = 0;
        for (int i = 0; i < good; i++) {
            if (arr[i] > k)
                bad++;
        }

        int ans = bad;
        int i = 0, j = good;
        while (j < n) {
            if (arr[i] > k)
                bad--;
            if (arr[j] > k)
                bad++;

            ans = min(ans, bad);
            i++;
            j++;
        }
        return ans;
    }
};class Solution {
public:
    int minSwap(vector<int>& arr, int k) {
        int n = arr.size();
        int good = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] <= k)
                good++;
        }
        int bad = 0;
        for (int i = 0; i < good; i++) {
            if (arr[i] > k)
                bad++;
        }

        int ans = bad;
        int i = 0, j = good;
        while (j < n) {
            if (arr[i] > k)
                bad--;
            if (arr[j] > k)
                bad++;

            ans = min(ans, bad);
            i++;
            j++;
        }
        return ans;
    }
};
