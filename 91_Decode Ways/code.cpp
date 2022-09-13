class Solution {
public:
    int numDecodings(string s) {
        s=" "+s;
        int d[s.length()];
        d[0]=1;
        
        for(int i=1;i<s.length();++i){
            if(s[i]=='0'){
                if(s[i-1]!='1' && s[i-1]!='2') return 0;
                else{
                    d[i]=d[i-2];
                }
            }
            else if(i>1 && (s[i-1]=='1' || (s[i-1]=='2' && s[i]<='6'))){
                d[i]=d[i-1]+d[i-2];
            }
            else{
                d[i]=d[i-1];
            }   
        }
        return d[s.length()-1];
    }
};
