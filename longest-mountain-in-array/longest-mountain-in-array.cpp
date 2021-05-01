class Solution {
public:
    int longestMountain(vector<int>& arr) {
        if(arr.size()<3) return 0;
        int result=0;
        int i=0;
        bool peak=false, valley=false;
        while(i<arr.size()-1){
            if(arr[i]<arr[i+1]){
                int start=i;
                while(i<arr.size()-1 and arr[i]<arr[i+1] ){
                    peak=true;
                    i++;
                }
                while(i<arr.size()-1 and arr[i]>arr[i+1] ){
                    valley=true;
                    i++;
                }
                if(peak==true and valley==true){
                    result=max(result,i-start+1);
                    peak=false;
                    valley=false;
                }
                    
                
                
                
            }
            else{
                i++;
            }
        }
        return result;
        
    }
};