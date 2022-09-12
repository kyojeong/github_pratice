class Solution {
public:

    string str="";
    string longestPalindrome(string s) {
        for(int i=0;i<s.length();++i){
            finding(i,i,s);
            finding(i,i+1,s);
        }
        return str;
    }
    void finding(int left,int right,string s){
        while(left>=0&&right<s.length()&&s[left]==s[right]){
            if((right-left+1)>str.length()){
                str=s.substr(left,right-left+1);
            }
            --left; ++right;
        }
    }
};
