class Solution {
    bool find(vector<vector<int>>&vec,int tar){
	int n = vec.size();
	int m = vec[0].size();

	int i = 0;
	int j = m-1;

	while((i>=0 && i<n)&&(j>=0 && j<m)){
		if(vec[i][j] == tar){
			return true;
		}else if(vec[i][j] > tar){
			j--;
		}else{
			i++;
		}
	}

	return false;
}
public:
    bool searchMatrix(vector<vector<int>>& vec, int tar) {
         return find(vec,tar);
    }
};