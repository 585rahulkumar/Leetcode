class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.insert(nums1.begin()+m,nums2.begin(),nums2.end());
        for(int i=0;i<n;i++)
            nums1.pop_back();
        sort(nums1.begin(),nums1.end());
    }
};