class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        vector<int> ans;
        int size = expression.length();
        for(int i=0;i<size;i++){
            if(expression[i] == '+' || expression[i] == '-' || expression[i] == '*'){
                vector<int> left = diffWaysToCompute(expression.substr(0,i));
                vector<int> right = diffWaysToCompute(expression.substr(i+1));
                for(int l=0;l<left.size();l++){
                    for(int r=0;r<right.size();r++){
                        if(expression[i]=='+'){
                            ans.push_back(left[l]+right[r]);
                        }
                        else if(expression[i]=='-'){
                            ans.push_back(left[l]-right[r]);
                        }
                        else{
                            ans.push_back(left[l]*right[r]);
                        }
                    }
                }
            }
        }
        if(ans.empty()) ans.push_back(stoi(expression));
        return ans;
    }
};
