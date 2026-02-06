class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort( nums.begin(), nums.end() );
        int length = nums.size();
        int res = 0;
        int left = 0, right;

        for( right = 0; right < length; right++ )
        {
            while( left <= right &&
                (long long) nums[right] > (long long) nums[left] * (long long) k)
            {
                left++;
            }
            res = max( res, right - left + 1 );
        }
        return length - res;
    }
};
