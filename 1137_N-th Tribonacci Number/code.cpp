class Solution {
public:
    int tribonacci(int n) {
        if(n==0) return 0;
        else if(n==1) return 1;
        else if(n==2) return 1;
        int first=0,second=0,three=1;
        for(int i=2;i<=n;++i){
            int t=first+second+three;
            first=second;
            second=three;
            three=t;
        }
        return three;
    }
};
