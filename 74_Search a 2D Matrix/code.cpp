class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();

        for(int i=0;i<m;i++){
            if(target <= matrix[i].back()){
                for(int j=0;j<n;j++){
                    if(target == matrix[i][j]){
                        return true;
                    }
                }
                return false;
            }
        }
        return false;
    }
};
