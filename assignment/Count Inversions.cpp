class Solution {
public:
    long long mergeAndCount(vector<int>& arr, int l, int mid, int r){
        vector<int> temp;
        int i=l, j=mid+1;
        long long inv=0;
        while(i<=mid && j<=r){
            if(arr[i] <= arr[j]){
                temp.push_back(arr[i++]);
            } else {
                temp.push_back(arr[j++]);
                inv += (mid - i + 1);
            }
        }
        while(i<=mid) temp.push_back(arr[i++]);
        while(j<=r) temp.push_back(arr[j++]);

        for(int k=l; k<=r; k++)
            arr[k] = temp[k-l];

        return inv;
    }
    long long mergeSort(vector<int>& arr, int l, int r){
        if(l>=r) return 0;
        int mid=(l+r)/2;
        long long inv=0;
        inv+=mergeSort(arr,l,mid);
        inv+=mergeSort(arr,mid+1,r);
        inv+=mergeAndCount(arr,l,mid,r);
        return inv;
    }
    long long inversionCount(vector<int> &arr){
        return mergeSort(arr,0,arr.size()-1);
    }
};
