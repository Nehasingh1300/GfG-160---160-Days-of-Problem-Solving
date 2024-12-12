
// optimized solution
// TC: O(N)
// SC: O(1OB)

class Solution {
  public:
  
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        int i, first, second;

        if (n < 2) {
            return -1;
        }

        first = second = INT_MIN;
        for (i = 0; i < n; i++) {
            if (arr[i] > first) {
                second = first;
                first = arr[i];
            }

            else if (arr[i] > second && arr[i] != first) {
                second = arr[i];
            }
        }
        if (second == INT_MIN)
            return -1;
        else
            return second;
    }
};


/* My Solution
TC: O(log N)
SC: O(N)

// User function template for C++
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        set<int> s;
        
        for(int i=0; i<arr.size(); i++) s.insert(arr[i]);
        if(s.size()==1) return -1;
        
        priority_queue <int, vector<int>, greater<int> > pq;        
        
        for(auto itr=s.begin(); itr!=s.end(); itr++){
            pq.push(*itr);
            if(pq.size()>2) pq.pop();
        }
        
        return pq.top();
    }
};


*/
