class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int left=0,right=tokens.size()-1;
        int maxscore=0;
        int score=0;
        
        while(left<=right){
            if(power>=tokens[left]){
                power=power-tokens[left];
                ++score;
                ++left;
            }
            else if(power<tokens[left] && score>0){
                power=power+tokens[right];
                --score;
                --right;
            }
            else{
                break;
            }
            if(score>maxscore) maxscore=score;
        }
        return maxscore;
    }
};
