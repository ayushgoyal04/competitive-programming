class Solution {
public:
    unordered_map<string,int>mpp;
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int>ans;
        for(int i=0;i<words.size();i++){
            mpp[words[i]]++;
        }
        int wordLength = words[0].length();
        for(int offset=0; offset < wordLength; offset++){
            unordered_map<string,int>visited;
            int count = 0;
            for(int i = offset; i+wordLength <= s.length(); i=i+wordLength){
                string substr = s.substr(i,wordLength);
                if(mpp.find(substr) == mpp.end()){
                    visited.clear();
                    count = 0;
                }
                else{
                    visited[substr]++;
                    count++;

                    while(visited[substr] > mpp[substr]){
                        string temp = s.substr(i-(count-1)*wordLength,wordLength);
                        visited[temp]--;
                        count--;
                    }

                    if(count==words.size()){
                        ans.push_back(i-(count-1)*wordLength);
                    }
                }
            }
        }
        return ans;
    }
};