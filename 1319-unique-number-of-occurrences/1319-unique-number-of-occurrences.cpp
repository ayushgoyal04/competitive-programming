class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map <int, int> check;
        for(int a:arr)
        {
            check[a]++;
        }

        unordered_set <int> doubleCheck;
        for(auto a:check)
        {
            doubleCheck.insert(a.second);
        }

        return check.size() == doubleCheck.size();
    }
};