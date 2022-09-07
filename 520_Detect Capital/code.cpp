class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word[0]<='Z'&&word[0]>='A'){
            if(word[1]<='Z'&&word[1]>='A'){
                for(int i=2;i<word.length();++i){
                    if(word[i]>='a'&&word[i]<='z'){
                        return false;
                    }
                }
            }
            
            else if(word[1]<='z'&&word[1]>='a'){
                for(int i=2;i<word.length();++i){
                    if(word[i]>='A'&&word[i]<='Z'){
                        return false;
                    }
                }
            }
        }
        
        else if(word[0]<='z'&&word[0]>='a'){
            for(int i=1;i<word.length();++i){
                if(word[i]>='A'&&word[i]<='Z'){
                    return false;
                }
            }
        }
        
        return true;
    }
};
