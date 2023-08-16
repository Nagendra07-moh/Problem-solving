class Solution {
    
    int BS(vector<int>vec,int tar,string op){
        int low = 0,high = vec.size()-1,mid;
        int ans =-1;
        
        
        while(low<=high){
            mid = (high+low)/2;
            
            if(vec[mid] == tar){
                ans = mid;
                if(op == "first"){
                    high = mid - 1;
                }else{
                    low = mid + 1; 
                }
            }else if(vec[mid] > tar){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        
        return ans;
            
            
    }
    
public:
    vector<int> searchRange(vector<int>& vec, int tar) {
    
        return {BS(vec,tar,"first") , BS(vec,tar,"second")};
    }
};