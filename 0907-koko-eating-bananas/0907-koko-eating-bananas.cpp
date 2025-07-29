class Solution {
public:
    bool caneatbananaintime(vector<int>& piles, int speed, int hours){
        for(int i = 0; i <piles.size(); i++){
            if(piles[i]<=speed) {
                --hours;
            }
            else {
                int temp;
                temp = piles[i] % speed;
                if(temp == 0) {
                    hours -= piles[i]/speed;
                }
                else{
                    hours -= piles[i]/speed + 1;
                }
            }
        }
        if(hours<0){
            return false;
        }
        return true;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1; long long int right = 10e9;
        int mid, ans = INT_MAX;
        while(left <= right) {
            mid = left + (right - left) / 2;

            if(caneatbananaintime(piles, mid, h)){
                ans = min(ans, mid);
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
        return ans;
    }
};