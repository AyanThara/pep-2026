class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        int n=arr.size()-1;
        for(int i=0;i<n;i++){
            if(arr[i]>arr[i+1]){
                return false;
            }
        }
        return true;
    }
};
