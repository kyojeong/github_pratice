class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int size = nums.size();
        int l=0,r=size-1;

        while(l<=r){
            int m = l + (r-l)/2;
            if(m!=0 && nums[m] == nums[m-1]){
                int num_r = r-m;
                if(num_r%2 == 1){
                    l = m+1;
                }
                else{
                    r = m-2;
                }
            }
            else if(m!=size-1 && nums[m] == nums[m+1]){
                int num_l = m-l;
                if(num_l%2 == 1){
                    r = m-1;
                }
                else{
                    l = m+2;
                }
            }
            else{
                return nums[m];
            }
        } 
        return -1;    
    }
   
};
