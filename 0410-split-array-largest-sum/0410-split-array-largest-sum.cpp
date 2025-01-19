class Solution {
    bool isPossible(vector<int>& nums, int k, int mid){
    int current_kval = 1;
    int current_sum = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] > mid) return false;
        
        if(current_sum + nums[i] <= mid){
        current_sum += nums[i];
        }
        else{
            current_kval++;
            current_sum = nums[i];
            if(current_kval > k) return false;
        }
    }
    return true;
}

public:
    int splitArray(vector<int>& nums, int k) {
        int minval=nums[0];
    int sum = 0;
    
    for(auto i : nums){
        sum += i;
        minval = min(minval, i);
    }

    int start = minval;
    int end = sum;
    int result = -1;
    int mid;
    while(start <= end){
        mid = start + (end - start)/2;

        if(isPossible(nums, k, mid)){
            result = mid;
            end = mid-1;
        }
        else{
            start = mid + 1;
        }
    }
    return result;
    }
};