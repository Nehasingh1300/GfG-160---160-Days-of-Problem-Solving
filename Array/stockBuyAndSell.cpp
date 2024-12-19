class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // TC: O(nlogn) SC: O(n)
        int n = arr.size();
        map<int,int> mp;
        vector<int> res;
        
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        
        for(auto x: mp){
            if(x.second>(n/3)) res.push_back(x.first);
        }
        return res;
    }
};
