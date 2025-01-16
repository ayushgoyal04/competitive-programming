class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            int temp=nums[i];
            for(int j=0; j<nums.size();j++){
                if(j!=i){
                    if(temp+nums[j]==target){
                        ans.push_back(i);
                        ans.push_back(j);
                        goto adk;
                    }
                }
            }
        }
        adk:
        return ans;
    }
};