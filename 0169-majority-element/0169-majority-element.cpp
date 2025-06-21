class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int votes = 0, candidate = 0;
        for(int i=0; i<n; i++){
            if(votes==0){
                candidate = nums[i];
                votes++;
            }
            else if(candidate == nums[i]){
                votes++;
            }
            else{
                votes--;
            }
        }
        return candidate;
    }
};