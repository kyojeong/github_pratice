class Solution {
public:
    int count=0;
    int climbStairs(int n) {
        if(n==1) return 1;
        else if(n==2) return 2;
    
        int first=1;
        int second=2;
        
        for(int i=3;i<=n;++i){
            int now=first+second;
            first=second;
            second=now;
        }
        return second;
    }
    
};
