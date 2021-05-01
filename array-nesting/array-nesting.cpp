class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int res=-1, n=nums.size();
        
        for(int i=0;i<n;i++){
            if(nums[i]==-1) continue;
            int start=nums[i], idx=i, x=nums[i], count=0;
            do{
                idx=x;
                x=nums[idx];
                count++;
                nums[idx]=-1;
            }while(x!=start);
            res=max(res,count);
        }
        return res;
    }
};