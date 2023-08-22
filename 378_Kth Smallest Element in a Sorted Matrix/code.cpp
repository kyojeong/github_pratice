class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {

        int output;
        for(int t=0;t<k;t++){
            int index=0;
            while(matrix[index].size()<=0) index++;
            for(int i=0;i<matrix.size();i++){
                if(matrix[i].size() <= 0) continue;
                if(matrix[i].front() < matrix[index].front()){
                    index = i;
                }
            }
            output = matrix[index].front();
            matrix[index].erase(matrix[index].begin());
        }
        return output;
    }
};
