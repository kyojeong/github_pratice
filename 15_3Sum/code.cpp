class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int length = nums.size();

        for(int i=0; i<length; ++i)
        {
            if(i>0 && nums[i]==nums[i-1]) 
                continue;

            int l=i+1;
            int r=length-1;
            while( l<r )
            {
                int sum = nums[i] + nums[l] + nums[r];
                if(sum == 0)
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[l]);
                    temp.push_back(nums[r]);
                    ans.push_back(temp);
                    while(l<r && nums[l]==nums[l+1]) l++;
                    while(l<r && nums[r]==nums[r-1]) r--;
                    l++;
                    r--;
                }
                else if(sum < 0)
                    l++;
                else if(sum > 0)
                    r--;
            }
        }
        return ans;
    }
};
