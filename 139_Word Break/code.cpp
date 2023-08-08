class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int size = s.length();
        vector<bool> dp(size+1,false);
        dp[0] = true;

        for(int i=0;i<size;i++){
            for(int j=0;j<=i;j++){
                string sub = s.substr(j,i-j+1);
                for(int k=0;k<wordDict.size();k++){
                    if(sub==wordDict[k] && dp[j]==true){
                        dp[i+1] = true;
                        break;
                    }
                }
            }   
        }
        return dp.back();
    }
};
