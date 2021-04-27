class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int temp;
        for(auto i=0;i<k;i++)
        k %= nums.size();
        vector<int> result(nums.end()-k,nums.end());
        result.insert(result.end(),nums.begin(),nums.end()-k);
        nums = result;
    }
};