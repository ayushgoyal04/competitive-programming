class Solution {
public:

    int bs(vector<int>& v, int low, int high, int target){
        if(low>high) return -1;
        int mid = low + (high - low)/2;
        if(v[mid]==target) return mid;
        else if(v[mid]<target) return bs(v, mid+1, high, target);
        else return bs(v, low, high-1, target);
    }

    int search(vector<int>& nums, int target) {
        int low = 0, high= nums.size()-1;
        int ans = bs(nums, low, high, target);
        return ans;
    }
};