class Solution {
public:
    int count;
    int countSubstrings(string s) {
        for(int i=0;i<s.length();++i){
            finding(i,i,s);
            finding(i,i+1,s);
        }
        return count;
    }
    void finding(int left,int right,string s){
        while(left>=0 && right<s.length() && s[left]==s[right]){
            ++count;
            --left;
            ++right;
        }
    }
};
