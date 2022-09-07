class Solution {
public:
    bool isThree(int n) {
        if(n==1) return false;
        int p=sqrt(n);
        if(p*p!=n) return false;
        
        int size=sqrt(p);
        for(int i=2;i<=size;++i){
            if(p%i==0){
                return false;
            }
        }
        
        return true;
    }
};
