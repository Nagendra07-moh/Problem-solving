class Solution {
public:
    double average(vector<int>& vec) {
        double ans;
        sort(vec.begin(),vec.end());


        int count = 0;
        for(int i=1;i<vec.size()-1;i++){
            ans += vec[i];
            count++;
        }

        return ans/count;

        
    }
};