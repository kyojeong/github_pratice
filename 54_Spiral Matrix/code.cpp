class Solution {
public:
    //direction 0:right 1:down 2:left 3:up
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int x=0,y=0;
        int d=0;
        vector<int> ans;
        while(ans.size()<m*n){
            ans.push_back(matrix[x][y]);
            matrix[x][y]=-101;
    
            if(d==0){
                if((y+1)>=n){
                    d=1;
                    x=x+1;
                }
                else if(matrix[x][y+1]==-101){
                    d=1;
                    x=x+1;
                }
                else{
                    y=y+1;
                }
            }
            else if(d==1){
                if((x+1)>=m){
                    d=2;
                    y=y-1;
                }
                else if(matrix[x+1][y]==-101){
                    d=2;
                    y=y-1;
                }
                else{
                    x=x+1;
                }
            }
            else if(d==2){
                if((y-1)<0){
                    d=3;
                    x=x-1;
                }
                else if(matrix[x][y-1]==-101){
                    d=3;
                    x=x-1;
                }
                else{
                    y=y-1;
                }
            }
            else if(d==3){
                if((x-1)<0){
                    d=0;
                    y=y+1;
                }
                else if(matrix[x-1][y]==-101){
                    d=0;
                    y=y+1;
                }
                else{
                    x=x-1;
                }
            }    
        }
        return ans;
    }
};
