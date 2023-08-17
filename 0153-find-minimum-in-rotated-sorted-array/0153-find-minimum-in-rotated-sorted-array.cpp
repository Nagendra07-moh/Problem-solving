class Solution {
public:
    int findMin(vector<int>&vec ) {
        int n = vec.size();
        int low = 0;
        int high = vec.size()-1;

        if(vec[low] < vec[high]){
            return vec[0];
        }

        int mid;

        while(low<=high){
            mid = (low+high)/2;
            if(vec[mid] == vec[high]){
                high--;
            }else if(vec[mid] > vec[high]){
                low = mid+1;
            }else{
                high = mid;
            }
        }

        return vec[mid];
        
    }
};