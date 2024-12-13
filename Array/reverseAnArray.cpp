void reverseArray(vector<int> &arr) {
        int n = arr.size();
    
        // Iterate over the first half and for every index i,
        // swap arr[i] with arr[n - i - 1]
        for(int i = 0; i < n/2; i++) {
            swap(arr[i], arr[n - i - 1]);
        }
    }
