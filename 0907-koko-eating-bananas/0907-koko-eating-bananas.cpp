class Solution {
public:
    int findmax(vector<int>& piles){
        int maxi = INT_MIN;
        for(int i = 0; i < piles.size(); i++){
            maxi = max(maxi, piles[i]);
        }
        return maxi;
    }

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
        int left = 1; int right = findmax(piles);
        int mid;
        while(left <= right) {
            mid = left + (right - left) / 2;

            if(caneatbananaintime(piles, mid, h)){
                // ans = min(ans, mid);
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
        return left;
    }
};