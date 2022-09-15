class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int max=INT_MIN;
        
        int left=0;
        for(int i=1;i<values.size();++i){
            int sum=values[left]+values[i]+left-i;
            if(sum>max) max=sum;
            if(values[i]+i > values[left]+left){
                left=i;
            }
        }
        return max;
    }
};
