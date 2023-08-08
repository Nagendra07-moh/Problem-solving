class Solution {
public:
    vector<int> leftRightDifference(vector<int>& vec) {
        
    vector<int>ans;
    int n = vec.size();
    for(int i=0;i<n;i++){
        int Lsum = 0,Rsum= 0;

        for(int j = i+1;j<n;j++){
            Rsum += vec[j];
        }

        for(int j =0;j<i;j++){
            Lsum += vec[j];
        }
        ans.push_back(abs(Rsum - Lsum));
    }
        
        return ans;
        
    }
};