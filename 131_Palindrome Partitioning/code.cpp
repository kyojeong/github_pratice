class Solution {
public:
    vector<vector<string>> ans;
    vector<vector<string>> partition(string s) {
        int size = s.length();
        vector<vector<bool>> dp(size,vector<bool>(size,false));

        for(int i=0;i<size;i++){
            for(int j=0;j<=i;j++){
                if(s[i]==s[j] && ((i-j<=2)||(dp[j+1][i-1]==true))){
                    dp[j][i] = true;
                }
            }
        }

        vector<string>temp;
        DFS(temp,0,dp,s);
        return ans;
    }

    void DFS(vector<string> out,int begin,vector<vector<bool>> dp, string s){
        if(begin>=s.length()){
            ans.push_back(out);
            return;
        }
        for(int i=begin;i<s.length();i++){
            if(dp[begin][i]==true){
                string sub=s.substr(begin,i-begin+1);
                vector<string>temp=out;
                temp.push_back(sub);
                DFS(temp,i+1,dp,s);
            }
        }
        return;
    }
    
};
