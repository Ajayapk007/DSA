class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int top = 0, bot = row - 1;
        int left = 0, right = col - 1;
        vector<int> ans;

        while (top <= bot && left <= right) {
            for (int i = left; i <= right; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++;

            for (int i = top; i <= bot; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;

            
                for (int i = right; i >= left; i--) {
                    ans.push_back(matrix[bot][i]);
                }
                bot--;
            

           
                for (int i = bot; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            
        }

        return ans;
    }
};