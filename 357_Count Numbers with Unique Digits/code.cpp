class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0) return 1;
        int now = 1;
        int index = 9;
        int sum = 1;
        for(int i=1;i<=n;i++){
            if(i>2){
                index = index - 1;
            }
            now = now * index;
            sum = sum + now;
        }
        return sum;
    }
};
