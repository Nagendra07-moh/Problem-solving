class Solution {
    int helper(vector<int>&vec,int mid){
        int tot = 0;

        for(auto it:vec){
           tot+=it/mid;

           if(it%mid != 0){
            tot++;
           }
        }

        return tot;
}


int FSDGT(vector<int>&vec,int th){
   

    int low = 1;
    int high = *max_element(vec.begin(),vec.end());
     int ans = high;

    while(low<=high){
        int mid = (low+high)/2;

        if(helper(vec,mid)<=th){
            // ans = min(ans,mid);
            ans = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }

    return ans;
}
public:
    int smallestDivisor(vector<int>& vec, int th) {
        return FSDGT(vec,th);
    }
};