class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
//          90 = transpose + reverse row
//          180 = reverse row + reverse column
//          270 = transpose + reverse col

        // transpose 
        for(int i = 0; i < matrix.size(); i++){
            for(int j = i+1; j < matrix.size(); j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // reverse rows
        for(int i = 0; i < matrix.size(); i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }

    }
};