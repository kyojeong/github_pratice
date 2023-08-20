class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size() <= 2) return 0;
        int d1=nums[1]-nums[0],count=2,sum=0;
        for(int i=2;i<nums.size();i++){
            int d2 = nums[i] - nums[i-1];
            if(d1 == d2){
                count++;
            }
            else{
                if(count>=3){
                    int num = (count-1)*(count-2)/2;
                    sum = sum + num;
                }
                
                d1 = d2;
                count = 2;
            }
        }
        if(count>=3){
            int num = (count-1)*(count-2)/2;
            sum = sum + num;
        }
        return sum;

    }
};
