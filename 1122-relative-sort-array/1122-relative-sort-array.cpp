class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> mp;
        int n = arr1.size();
        int m = arr2.size();
        for( int i = 0; i < n; i++) {
            mp[arr1[i]]++;
            for(int j = 0; j < m; j++)
            {
                if(arr1[i]==arr2[j])
                arr1[i] = -1;
            }
        }
        vector<int> ans;
        for( auto it : arr2){
            int len = mp[it];
            int val = it;
            for(int i = 0; i < len; i++)
            {
                ans.push_back(val);
            }
        }
        vector<int> temp;
        for(auto num : arr1){
            if(num != -1){
                temp.push_back(num);
            }
        }
        sort(temp.begin(), temp.end());
        for(auto i : temp){
            ans.push_back(i);
        }               
        return ans;
    }
};