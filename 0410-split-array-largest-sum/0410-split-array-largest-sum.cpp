class Solution {
    int solve(vector<int>&vec,int x){
        int tot =1;
        int sum = 0;

        for(auto it:vec){
            if((sum+it)<=x){
                sum +=it;
            }else{
                tot++;
                sum = it;
            }
        }
        return tot;
    }


int SALS(vector<int>&vec,int k){
        if(vec.size() < k){
            return -1;
        }

        if(vec.size()== k){
            return *max_element(vec.begin(),vec.end());
        }

        int low = *max_element(vec.begin(),vec.end());

        int high =0;
        high =  accumulate(vec.begin(),vec.end(),high);

        while(low <= high){
            int mid = (low+high)/2;
            if(solve(vec,mid) <= k){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }

    return low;
}
public:
    int splitArray(vector<int>&vec , int k) {
        return SALS(vec,k);
    }
};