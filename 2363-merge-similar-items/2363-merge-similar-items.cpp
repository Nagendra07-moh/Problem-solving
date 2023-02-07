class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& vec, vector<vector<int>>& val) {
        map<int,int>mp;

for(int i=0;i<vec.size();i++){
	int value = vec[i][0];
	int weight = vec[i][1];

	if(mp.count(value) > 0){
		mp[value]+=weight;
	}else{
		mp[value] = weight;
	}
}

for(int i=0;i<val.size();i++){
	int value = val[i][0];
	int weight = val[i][1];
	if(mp.count(value) > 0){
		mp[value] += weight;
	}else{
		mp[value] = weight;
	}
}
        
        vec.clear();
        
        for(auto it:mp){
            vector<int>temp;
            temp.push_back(it.first);
            temp.push_back(it.second);
            vec.push_back(temp);

        }
        
        return vec;
    }
};