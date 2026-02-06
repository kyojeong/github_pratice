class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res( n, 0 );
        int product = 1;
        int zero = 0;

        for( int i = 0; i < n; i++ )
        {
            if( nums[i] == 0 )
                zero++;
            else
                product = product * (long long) nums[i];
        }

        for( int i = 0; i < n; i++ )
        {
            if( zero > 1 )
            {
                //當陣列出現2個以上的0,則都會出現0
                res[i] = 0;
            }
            else if( zero == 1 )
            {
                //若遇到陣列裡面只出現一次0
                if( nums[i] == 0 )
                    res[i] = product;
                else
                    res[i] = 0;
            }
            else
            {
                res[i] = product / nums[i];
            }
        }

        return res;
    }
};
