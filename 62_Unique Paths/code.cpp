class Solution {
public:
    int uniquePaths(int m, int n) {
        int map[m][n];
        map[0][0]=1;
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(i==0&&j==0) continue;
                int a,b;
                if(i==0) a=0;
                else a=map[i-1][j];
                
                if(j==0) b=0;
                else b=map[i][j-1];
                
                map[i][j]=a+b;
            }
        }
        return map[m-1][n-1];
    }
    
};
