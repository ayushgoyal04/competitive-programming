class Solution {
public:

    int iskpos(vector<int>& arr, int pred, int k){
        int count = 0;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i]<=pred){
                count++;
            }
            else{
                break;
            }
        }
        int temp = pred-count;
        // cout<<pred<<"****"<<temp<<endl;
        if(temp == k) return pred;
        else if(temp > k) return -1;
        return -2;
    }

    int findKthPositive(vector<int>& arr, int k) {
        // 5,6 7 8 9 10 11 12 13 14 15 16 
        int left = 0; 
        int right = k + arr[arr.size()-1];
        int mid;
        int ans = INT_MAX;
        int var;
        while(left <= right){
            mid = left + (right - left) /2;
            
            var = iskpos(arr, mid, k);
            if(var > 0){
                ans = min(ans, mid);     
                right = mid - 1;           
            }
            else if(var == -1){
                // we get greater than k
                right = mid -1 ;
            }
            else{
                left = mid + 1;
            }
        }
        return ans;
    }
};