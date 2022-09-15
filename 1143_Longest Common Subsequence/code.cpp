class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size();
        int n=text2.size();
        int d[n+1][m+1];
        text1=" "+text1;
        text2=" "+text2;
        for(int i=0;i<n+1;++i){
            for(int j=0;j<m+1;++j){
                if(i==0 || j==0) {
                    d[i][j]=0;
                    continue;
                }
                if(text2[i]==text1[j]){
                    d[i][j]=d[i-1][j-1]+1;
                }
                else{
                    d[i][j]=max(d[i-1][j],d[i][j-1]);
                }
            }
        }
        return d[n][m];
    }
};
