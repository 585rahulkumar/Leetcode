class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index=0;
        int size=nums.size();
        for(int i=0;i<size;i++){
            if(nums[i]!=val)
                nums[index++]=nums[i];
        }
        return index;
    }
};