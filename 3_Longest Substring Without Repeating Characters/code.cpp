class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max=0;
        int left=0,right=0;
        
        while(right<s.length()){        
            if(left==right) ++right;
            else{
                int check=0;
                for(int i=left;i<right;++i){
                    if(s[i]==s[right]){
                        check=1;
                        left=i+1;
                        break;
                    }
                }
                if(check==0){
                    ++right;
                }
            }
            
            int len=right-left;
            if(len>max) max=len;
        }
        
        return max;
    }
};
