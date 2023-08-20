class Solution {
    int findN(vector<int>&vec,int k,int n,int num){
        
        int main_cnt = 0;
        int count = 0;

        for(auto it:vec){
            if(it > num){
                main_cnt += count/k;
                count = 0;
                continue;
            }
            count++;
        }
        if(count){
            main_cnt += count/k;
        }

        return main_cnt;

    }

    
    int MNODMB(vector<int>&vec,int k, int m ){
        long long val = m* 1LL * k * 1LL;
         if(vec.size() < val){
            return -1;
        }
        int ans = INT_MAX;

        int low = *min_element(vec.begin(),vec.end());
        int high = *max_element(vec.begin(),vec.end());

        while(low<=high){
            int mid = (low+high)/2;

            if(findN(vec,k,m,mid) >= m){
                ans = min(ans,mid);
                high = mid-1;
            }else{
                low = mid+1;
            }
        }

        return ans;
}
public:
    int minDays(vector<int>& vec, int m, int k) {
        
        return MNODMB(vec,k,m);
        
    }
};