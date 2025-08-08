class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int len = 0, maxlen = 0;
        int zeroindexpointer = 0;
        vector<int> zeroindex;
        int zerocount = 0;
        int left = 0, right = 0;
        while(right < nums.size()){
            if(nums[right] == 1){
                len = right - left + 1;
                maxlen = max(len, maxlen);
                right++;
            }
            else{
                zerocount++;
                zeroindex.push_back(right);
                if(zerocount > k){
                    zerocount--;
                    left = zeroindex[zeroindexpointer]+1;
                    zeroindexpointer++;
                    // len = right - left + 1;
                    // maxlen = max(len, maxlen);
                }else{
                len = right - left + 1;
                maxlen = max(len, maxlen);
                }
                right++;
            }
        }
        return maxlen;
    }
};