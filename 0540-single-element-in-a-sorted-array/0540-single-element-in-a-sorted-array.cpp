class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        if (arr.size() == 1) return arr[0];
        if(arr[0] != arr[1]) return arr[0];
        if(arr[arr.size()-1] != arr[arr.size()-2]) return arr[arr.size()-1];
        
        int left = 1, right = arr.size()-2;
        int mid;
        
        while(left <= right) {
            mid = left + (right - left) / 2;

            if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]) return arr[mid];
            // now wlwminate one part where the leement is not there
            int pos = mid % 2;
            if(pos == 0) {
                if(arr[mid] != arr[mid-1]) {
                    // go to right half
                    left = mid + 1;
                }
                else {
                    right = mid -1;
                }
            }
            else{
                if(arr[mid] == arr[mid-1]) {
                    left = mid + 1;
                }
                else {
                    right = mid - 1;
                }
            }
        }
        return arr[mid];
    }
};