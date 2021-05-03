class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> temp;
        int size=nums.size();
        int index=0;
        for(int i=0;i<size;i++){
            temp.push_back(nums[i]);
            if(count(temp.begin(),temp.end(),nums[i])<3)
                nums[index++]=nums[i];
        }
        return index;
    }
};