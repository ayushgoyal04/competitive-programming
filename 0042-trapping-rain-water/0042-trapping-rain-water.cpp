class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> maxl(height.size());
        vector<int> maxr(height.size());

        maxl[0] = height[0];
        maxr[height.size()-1] = height[height.size()-1];
        // [0,1,0,2,1,0,1,3,2,1,2,1]
    // maxl[0,1,1,2,2,2,2,3,3,3,3,3]
    // maxr[3,3,3,3,3,3,3,3,2,2,2,1] 
    // ans- 0+0+1+0+1+2+1+0+0+1+0+0 = 6




        for(int i = 1; i < height.size(); i++){
            maxl[i] = max(maxl[i-1], height[i]);
        }

        for(int i = height.size()-2; i >= 0; i--){
            maxr[i] = max(maxr[i+1], height[i]);
        }

        int ans = 0;

        for(int i = 0; i < height.size(); i++)
        {
            ans += min(maxl[i], maxr[i]) - height[i];
        }

        return ans;

    }
};