// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long int low=1,mid,high=n;
        while(low<=high){
            mid=(low+high)/2;
            if(isBadVersion(mid))
                high=mid-1;
            else
                low=mid+1;
        }
        return low;
    }
};