class Solution {
    int solve(vector<int>&vec){
	int n = vec.size();

	sort(vec.begin(),vec.end());



	int i=0;
	int j =  vec.size()-1;
	int total = 0;
	while(i<j){
		int me = j-1;
		total += vec[me];
		i++;
		j-=2;
	}	

	return total;
}

    
public:
    int maxCoins(vector<int>& piles) {
        return solve(piles); 
    }
};