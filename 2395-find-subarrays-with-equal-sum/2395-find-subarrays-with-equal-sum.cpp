class Solution {
public:
    bool findSubarrays(vector<int>& vec) {
        
    unordered_set<int>st;

    int i=0,j=0;

    int sum = 0;

    bool ans = false;

    while(j<vec.size()){
        sum += vec[j];
        if((j-i+1)<2){
            j++;
        }else if((j-i+1) == 2){
            if(st.find(sum) != st.end()){
                ans = true;
                break;
            }
            st.insert(sum);
            sum-=vec[i];
            i++;
            j++;
        }
    }

        return ans;
        
    }
};