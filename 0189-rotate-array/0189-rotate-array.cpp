class Solution {
public:
    void rev(vector<int> &v, int start, int end){
        while(start<end){
            swap(v[start], v[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        
        rev(nums, 0, n-k-1);
        rev(nums, n-k,  nums.size()-1);
        rev(nums, 0, nums.size()-1);        
    }
};