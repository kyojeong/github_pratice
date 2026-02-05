class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int length = nums.size();
        vector<int> ans;

        for( int i = 0; i < length; i++ )
        {
            int step = nums[i];
            if( step > 0 )
            {
                int pos = ( i + step ) % length;
                ans.push_back( nums[pos] );
            }
            else if( step < 0 )
            {
                int pos = ( ( ( i + step ) % length ) + length ) % length;
                ans.push_back( nums[pos] );
            }
            else if( step == 0 )
            {
                ans.push_back( nums[i] );
            }
        }
        return ans;
    }
};
