class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int i=low; i<=high; i++){
            string temp = to_string(i);
            int l = temp.length();
            if(l%2==0){
            int sum1=0;
            int sum2=0;
            for(int j = 0; j<l/2; j++){
                int t = temp[j]-'0';
                sum1 += t;
                }
           for(int k = (l/2); k<l; k++){
                int t2 = temp[k]-'0';
                sum2 += t2;
                }
            if(sum1==sum2) count++;
            }
        }
        return count;
    }
};