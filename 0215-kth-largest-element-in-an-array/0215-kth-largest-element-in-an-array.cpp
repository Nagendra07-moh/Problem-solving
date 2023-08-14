class Solution {
public:
    int findKthLargest(vector<int>& vec, int k) {
        priority_queue<int> pq;
        int n = vec.size();
        
        for(auto it:vec){
            pq.push(it);
        }
        k--;
        while(k--){
            pq.pop();
        }
        
        return pq.top();
        
    }
};