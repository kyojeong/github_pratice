class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int l=0,r=nums.size()-1,m;
        while(l<=r){
            m = l + (r-l)/2;
            if(m==0) {
                if(nums[m]<nums.back()){
                    return nums[m];
                }
            }
            else if(nums[m]<nums[m-1]) return nums[m];

            if(nums[m]<=nums[r]){
                r = m-1;
            }
            else{
                l = m+1;
            }
        }
        return -1;
    }
};
