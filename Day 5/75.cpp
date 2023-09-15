// 75. Sort Colors
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0, m=0, e = nums.size() - 1;
        while(m<=e){
            if(nums[m] == 0){
                swap(nums[l], nums[m]);
                l++;
                m++;
            }
            else if(nums[m] == 2){
                swap(nums[e], nums[m]);
                e--;
            }
            else{
                m++;
            }
        }
    }
};