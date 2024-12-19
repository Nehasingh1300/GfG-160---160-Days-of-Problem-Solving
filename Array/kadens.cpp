int maxSubarraySum(vector<int> &arr) {
        int n = arr.size();
        int meh=0;
        int msf=INT_MIN;
        
        for(int i=0; i<n; i++){
            meh+=arr[i];
            if(meh<0) meh=0;
            if(msf<meh) msf=meh;
        }
        
        if(msf==0){
            sort(arr.begin(), arr.end());
            return arr[n-1];
        }
        
        return msf;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.maxSubarraySum(arr) << endl;
    }
}
// } Driver Code Ends
