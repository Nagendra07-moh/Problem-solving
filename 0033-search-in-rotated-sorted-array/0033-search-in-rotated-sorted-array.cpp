class Solution {
    int BS(vector<int>&vec,int low,int high,int target){
	int mid;
	while(low<=high){
		mid = low +(high-low)/2;
		if(vec[mid] == target){
			return mid;
		}else if(vec[mid] > target){
			high = mid-1;
		}else{
			low = mid+1;
		}
	}

	return -1;
 }

public:
    int search(vector<int>& vec, int target) {
        
        int low= 0;
        int high = vec.size()-1;
        int mid ;
        while(low<=high){
            mid = low + (high-low)/2;
            if(vec[mid] == vec[high]){
                high--;
            }else if(vec[mid] > vec[high]){
                low = mid+1;
            }else{
                high = mid;
            }
        }

        // cout<<vec[mid];
        int i = BS(vec,0,mid-1,target);
        int j = BS(vec,mid,vec.size()-1,target);
        
        return max(i,j);

        
    }
};