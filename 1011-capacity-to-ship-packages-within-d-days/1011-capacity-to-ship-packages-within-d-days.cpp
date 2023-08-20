class Solution {
    int helper2(vector<int>&vec,int mid){
        int TOT = 1;
        int sum  = 0;
        for(auto it:vec){
            sum += it;
            if(sum>mid){
                TOT++;
                sum = it;
            }
        }

        return TOT;

}


int CTSPWDD(vector<int>&vec,int days){

    int low = *max_element(vec.begin(),vec.end());
        int high = 0;
        for(auto it:vec){
            high+=it;
        }

        int ans = high;

        while(low<=high){
            int mid = (low+high)/2;
            if(helper2(vec,mid)<=days){
                // ans = min(ans,mid);
                high = mid-1;
            }else{
                low = mid+1;
            }
        }

    return low;
}
public:
    int shipWithinDays(vector<int>& vec, int days) {
        return CTSPWDD(vec,days);
        
    }
};