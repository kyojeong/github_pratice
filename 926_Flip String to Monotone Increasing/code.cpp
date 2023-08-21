class Solution {
public:
    int minFlipsMonoIncr(string s) {
        vector<int> zero(s.length()+1,0),one(s.length()+1,0);

        for(int i=1;i<=s.length();i++){
            if(s[i-1] == '0'){
                zero[i] = zero[i-1];
            }
            else{
                zero[i] = zero[i-1] + 1;
            }
        }
        for(int i=s.length()-1;i>=0;i--){
            if(s[i] == '1'){
                one[i] = one[i+1];
            }
            else{
                one[i] = one[i+1] + 1;
            }
        }

        int output = zero[0] + one[0];
        for(int i=1;i<=s.length();i++){
            output = min(output, zero[i]+one[i]);
        } 
        return output;
    }
};
