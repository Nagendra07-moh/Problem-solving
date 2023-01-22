class Solution {
public:
    int countKDifference(vector<int>& vec, int k) {

        int count = 0;


        int n = vec.size();


        for(int i =0;i<n;i++){

            for(int j = i+1;j<n;j++){
                if(abs(vec[i] - vec[j]) == k){
                    count++;
                }
            }
        }
        
        return count;
        
    }
};