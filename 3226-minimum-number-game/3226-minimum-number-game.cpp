class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> v;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i+=2){
            int temp = i + 1;
            v.push_back(nums[temp]);
            temp--;
            v.push_back(nums[temp]);
        }
        return v;
    }
};