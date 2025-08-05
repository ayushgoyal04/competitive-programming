class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int count = 0;
        for(int i = 0; i < fruits.size(); i++){
            int temp = fruits[i];
            for(int j = 0;  j < baskets.size(); j++){
                if(temp <= baskets[j]){
                    baskets[j] = -1;    
                    count++;  
                    break;              
                }
            }
        }
        return (fruits.size() - count);
    }
};