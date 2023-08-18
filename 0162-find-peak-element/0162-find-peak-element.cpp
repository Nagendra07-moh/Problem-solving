class Solution {
public:
    int findPeakElement(vector<int>& vec) {
        int n = vec.size();

        int low = 0;
        int high = n-1;
        int mid;
        while(low<= high){
            mid = (low+high)/2;

            if((mid ==0 || vec[mid] >= vec[mid-1])&&(mid == n-1 || vec[mid] >= vec[mid+1])){
                return mid;
            }else if(mid>0 && vec[mid-1] >= vec[mid]){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }

        return  -1;
    }
};