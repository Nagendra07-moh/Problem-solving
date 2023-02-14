class Solution {
public:
    string addBinary(string a, string b) {
        string carry = "0";
string result;

while(a.size() < b.size()){
    a.insert(a.begin(),'0');
}

 while(a.size() > b.size()){
    b.insert(b.begin(),'0');
}

for(int i=a.size()-1;i>=0;i--){
    if(carry == "1"){
        if(a[i]=='1' and b[i]=='1'){
            result.insert(result.begin(),'1');
                carry = "1";
        }else if(a[i]=='1' or b[i]=='1'){
            carry = "1";
            result.insert(result.begin(),'0');
        }else{
            result.insert(result.begin(),'1');
            carry = "0";
        }
    }else if(carry=="0"){
        if(a[i]== '1' and b[i]=='1'){
           result.insert(result.begin(),'0');
            carry = "1";
        }else if(a[i]=='1' or b[i]=='1'){
             result.insert(result.begin(),'1');
                carry = "0";
        }else{
            result.insert(result.begin(),'0');
            carry = "0";
        }
    }
}
if(carry=="1")
    result.insert(result.begin(),'1');

        return result;
    }
};