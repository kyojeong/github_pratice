class Solution {
public:
    string reverseWords(string s) {
        string p="",ans="";
        for(int i=0;i<s.length();++i){
            if(s[i]!=' '){
                p=s[i]+p;
            }
            else{
                ans=ans+p+" ";
                p="";
            }
        }
        ans=ans+p;
        return ans;
    }
};
