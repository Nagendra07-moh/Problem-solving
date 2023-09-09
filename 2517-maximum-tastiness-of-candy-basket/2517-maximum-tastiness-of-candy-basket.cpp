class Solution {
   bool help(vector<int>&vec,int tar,int k ){
	int n =vec.size();
	int count = 1;
	int prev = vec[0];

	for(int i=1;i<n;i++){
		if(vec[i] - prev >= tar){
			count++;
			prev = vec[i];
		}
	}

	if(count < k){
		return false;
	}
	return true;
}

public:
    int maximumTastiness(vector<int>& vec, int k) {
        int n = vec.size();
        int low =0;
        sort(vec.begin(),vec.end());
        int high = vec[n-1] - vec[0];
        
        int ans = INT_MIN;
        while(low <= high){
            int mid = (low+high)/2;
            
            if(help(vec,mid,k)){
                ans = max(ans,mid);
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return ans;
    }
};