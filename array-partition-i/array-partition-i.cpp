class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0,n=nums.size();
        for(int i=0;i<n-1;i+=2)
            sum=sum+min(nums[i],nums[i+1]);
        return sum;
    }
};