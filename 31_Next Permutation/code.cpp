class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // 先由後找出下降的數字(A)
        // 再由後找出第一個大於此數的數字(B)
        // 交換這兩個數字(A,B),並且將A後面的數由小到大排序
        int length = nums.size();
        int point = -1;
        for( int i = length-2; i >= 0; i-- )
        {
            if(nums[i] < nums[i+1] )
            {
                point = i;
                break;
            }
        }

        if( point == -1 )
        {
            sort( nums.begin(), nums.end() );
            return;
        }
        else
        {
            int change = length-1;
            while( nums[point] >= nums[change] )
                change--;

            swap( nums[point], nums[change] );
            sort( nums.begin()+point+1, nums.end() );
        }
    }
};
