class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int count=0,n=arr.size();
        
        for(int i=0; i<n; i++){
            if(arr[i]!=0) arr[count++]=arr[i];
        }
        
        for(int i=count; i<n; i++) arr[i]=0;
        
        /*vector<int> temp;
        int n = arr.size();
        
        for(int i=0; i<n; i++) 
            if(arr[i]!=0) temp.push_back(arr[i]);
            
        int zeros = n-temp.size();
        
        while(zeros--){
            temp.push_back(0);
        }
        
        arr.clear();
        
        for(auto x: temp) arr.push_back(x);*/
    }
};
