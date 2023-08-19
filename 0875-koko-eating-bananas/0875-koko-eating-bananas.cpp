class Solution {
    long long calcH(int hrs,vector<int>&vec){
        long long ans = 0;
        int n = vec.size();
        for(int i=0;i<n;i++){
            ans += ceil((double)vec[i] / (double)hrs);
        }
        return ans;
}

int BSOA(vector<int>vec,int h){
    int low = 1;
    int high = *max_element(vec.begin(),vec.end());
    // int ans = INT_MAX;
    while(low <= high){
        int mid = (low+high)/2;
        long long  total = calcH(mid,vec);
        if(total <= h){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }

    return low;

}
public:
    int minEatingSpeed(vector<int>& vec, int h) {
        
        return BSOA(vec,h);
    }
};