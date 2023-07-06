class Solution {
public:
    vector<int> twoSum(vector<int>& vec, int target) {
        
    int n = vec.size();    
    vector<int>ans;

    // we need to return the indexies of 2 elements

    for(int i=0;i<n;i++){

        int num1 = vec[i];

        for(int j=i+1;j<n;j++){
            int num2 = vec[j];
            if((num1+num2) == target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }

    }


return ans;
        
    }
};