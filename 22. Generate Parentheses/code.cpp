class Solution {
public:
    vector<string> ans;
    vector<string> generateParenthesis(int n) {
        generate("",0,0,n);
        return ans;
    }
    
    void generate(string str,int left,int right,int n){
        if(left==n && right==n){
            ans.push_back(str);
            return;
        }
        
        if(left<=right){
            generate(str+"(",left+1,right,n);
        }
        else if(right<n && left==n){
            generate(str+")",left,right+1,n);
        }
        else{
            generate(str+"(",left+1,right,n);
            generate(str+")",left,right+1,n);
        }
    }
};
