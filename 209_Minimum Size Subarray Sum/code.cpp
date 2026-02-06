class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int res = n+1;
        int left=0,right=0;
        int sum = nums[0];
        while( left <= right && right < n){
            if( sum >= target ){
                res = min( res, right-left+1 );
                left++;
                sum = sum - nums[left-1];
            }
            else if( sum < target ){
                right++;
                if( right < n )
                    sum = sum + nums[right];
            }
        }

        if( res == n+1 )
            return 0;
        else
            return res;
    }
};
