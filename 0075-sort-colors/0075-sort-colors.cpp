class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero= 0, one = 0, two=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                one++;
            }
            if(nums[i]==0){
                zero++;
            }
            if(nums[i]==2){
                two++;
            }
        }
        int i=0;
        while(zero>0){
            nums[i]=0;
            i++;
            zero--;
        }
        while(one>0){
            nums[i]=1;
            i++;
            one--;
        }
        while(two>0){
            nums[i]=2;
            i++;
            two--;
        }
    }
};