class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid[0][0]==1) return 0;
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        
        vector<vector<int>> map(m,vector<int>(n,0));
        map[0][0]=1;
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(i==0 && j==0) continue;
                if(obstacleGrid[i][j]==1){
                    map[i][j]=0;
                    continue;
                }
                
                if(i==0) map[i][j]=map[i][j-1];
                else if(j==0) map[i][j]=map[i-1][j];
                else map[i][j]=map[i-1][j]+map[i][j-1];
            }
        }
        return map[m-1][n-1];
    }
};
