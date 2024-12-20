class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        map<int,int> mp;
        int i=1;
        
        for(auto x: arr) mp[x]++;
        
        for(int i=1; i<500004; i++){
            if(mp.find(i)==mp.end()) return i;
        }
        return -1;
    }
};
