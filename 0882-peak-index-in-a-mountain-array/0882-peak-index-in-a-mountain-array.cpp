class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       int peak = 0;
       for(int i=0; i<arr.size()-1; i++){
         if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
             peak = i;
         }
       }
       return peak;  
    }
};