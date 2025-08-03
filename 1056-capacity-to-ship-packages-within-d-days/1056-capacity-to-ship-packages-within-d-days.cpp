class Solution {
public:

    bool test(vector<int>& weights, int capacity, int days){
        
        // [1,2,3,4,5,6,7,8,9,10] 10 5
        int dayssum = 0;
        for(int i = 0; i < weights.size(); i++){
            if(dayssum+weights[i] <= capacity){
                dayssum += weights[i]; // 5
            }
            else{
                days--; // 4 3
                if(days<=0){
                    return false;
                }
                i--;
                dayssum = 0;
            }
        }
        return true;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(), weights.end());
        int right = accumulate(weights.begin(), weights.end(), 0);
        int mid;
        int ans = INT_MAX;

        while(left <= right){
            mid = left + (right - left) / 2;

            if(test(weights, mid, days)){
                ans = min(ans, mid);
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        return ans;
    }
};