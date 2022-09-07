class Solution {
public:
    vector<vector<string>> phone={{"","",""},{"","",""},{"a","b","c"},{"d","e","f"},
                                  {"g","h","i"},{"j","k","l"},{"m","n","o"},{"p","q","r","s"}
                                 ,{"t","u","v"},{"w","x","y","z"}};
    vector<string> ans;
    vector<string> letterCombinations(string digits) {
        if(digits=="") return ans;
        add("",-1,-1,digits);    
        return ans;
    }
    void add(string s,int num,int pos,string digits){
        if(num>=0){
            int k=digits[num]-'0';
            s=s+phone[k][pos];
        }
        if(s.length()>=digits.length()){
            ans.push_back(s);
            return;
        }
        
        char c=digits[num+1];
        int next=c-'0';
        int size=phone[next].size();
        for(int i=0;i<size;++i){
            add(s,num+1,i,digits);
        }
    }
};
