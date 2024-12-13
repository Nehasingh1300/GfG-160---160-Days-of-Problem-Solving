class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        int idx=-1, n = arr.size();
        
        for(int i = n-1; i>0; i--){ // find first drop from back
            if(arr[i]>arr[i-1]) {
                idx = i-1;
                break;
            }
        }
        
        if(idx==-1) { // if no drop, reverse the arr
            reverse(arr.begin(), arr.end());
            return;
        }
        
        for(int i=n-1; i>idx; i--){ // find next greater elem
            if(arr[idx]<arr[i]) { // swap next greater elem and first drop
                swap(arr[idx], arr[i]);
                break;
            }
        }
        
        // sort after idx
        sort(arr.begin()+idx+1, arr.end());
    }
};
