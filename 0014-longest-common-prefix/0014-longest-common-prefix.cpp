class Solution {
public:
    string longestCommonPrefix(vector<string>& vec) {
        
        int n = vec.size();

string ans = "";

int min_size = INT_MAX;



for(int i = 0;i<vec.size();i++){
	int size = vec[i].size();
	min_size = min(min_size , size);
}


for(int i=0;i<min_size;i++){

	char ch = vec[0][i];
	int count = 0;

	for(int j=0;j<n;j++){
		if(vec[j][i] == ch){
			count++;
		}
	}

	if(count == n){
		ans.push_back(ch);
	}else{
        return ans;
    }

}

        return ans;
        
    }
};