class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int answer = arr[n-1] - arr[0];
        
        int smallest = arr[0]+k;
        int largest = arr[n-1]-k;
        int currentmin;
        int currentmax;
        for(int i=0;i<n-1;i++)
        {
            int currentmin = min(smallest,arr[i+1]-k);
            int currentmax = max(largest,arr[i]+k);
            if(currentmin<0)
            continue;
            answer = min(answer,(currentmax - currentmin));
        }
        return answer;
    }
};
