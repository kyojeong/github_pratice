class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()<=1) return;
        while(k>=nums.size()){
            k -= nums.size();
        }
        vector<int> nums2;
        nums2.assign(nums.end()-k,nums.end());
        nums.erase(nums.end()-k,nums.end());
        nums.insert(nums.begin(),nums2.begin(),nums2.end());
    }
};
