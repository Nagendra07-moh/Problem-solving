function shuffle(vec: number[], n: number): number[] {

    
    let ans = [];
    
    for(let i=0;i<n;i++){
        ans.push(vec[i]);
        ans.push(vec[i+n]);
    }
    
    return ans;
};