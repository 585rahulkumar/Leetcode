class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        bool inc,dec;
        auto temp=-99;
        for(auto i=0;i<A.size();i++)
        {
            if(A[i]>=temp){
                inc=true;
                temp=A[i];
            }
                
            else{
                inc=false;
                break;
            }
        }
        
        temp=999;
        for(auto i=0;i<A.size();i++)
        {
            if(A[i]<=temp){
                dec=true;
                temp=A[i];
            }
                
            else{
                dec=false;
                break;
            }
        }
        
        return (inc||dec);
        
    }
};