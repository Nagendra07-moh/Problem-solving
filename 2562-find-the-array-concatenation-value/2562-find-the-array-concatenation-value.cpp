class Solution {
public:
    long long findTheArrayConcVal(vector<int>& vec) {
        
        int n  = vec.size();

        int i = 0;
        int j = n-1;
        long long  tot = 0;

        while(i<j){
            string first = to_string(vec[i]);
            string second = to_string(vec[j]);

            string concat = first+second;

            tot += stoi(concat);
            i++;
            j--;
        }

        if(i == j){
            tot += vec[i];
        }
        
        return tot;
    }
};