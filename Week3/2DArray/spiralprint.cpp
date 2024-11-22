#include <iostream>
#include <vector>
using namespace std;

void printSpiral(const vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int top = 0, bot = row - 1;
        int left = 0, right = col - 1;

    while(top <= bot && left <= right){

        // printf("values of top: %d, bottom: %d, left: %d and right:%d \n ", top, bot, left, right);
        
        for (int i = left; i <= right; i++) {
                cout << matrix[top][i]<< " ";
            }
            top++;

            for (int i = top; i <= bot; i++) {
                cout << matrix[i][right] << " ";
            }
            right--;
        
        for(int i = right; i >= left; i--){
            cout << matrix[bot][i] << " " ;
        }
        bot--;
        
        for(int i = bot; i >= top; i--){
            cout << matrix[i][left] << " " ;
        }
        left++;
    }
}



    // vector<int> spiralOrder(vector<vector<int>>& matrix) {
    //     int row = matrix.size();
    //     int col = matrix[0].size();
    //     int top = 0, bot = row - 1;
    //     int left = 0, right = col - 1;

    //     while (top <= bot && left <= right) {
    //         for (int i = left; i <= right; i++) {
    //             cout << matrix[top][i] << " ";
    //         }
    //         top++;

    //         for (int i = top; i <= bot; i++) {
    //             cout << matrix[i][right] << " ";
    //         }
    //         right--;

    //         if (top <= bot) {
    //             for (int i = right; i >= left; i--) {
    //                 cout << matrix[bot][i] << " ";
    //             }
    //             bot--;
    //         }

    //         if (left <= right) {
    //             for (int i = bot; i >= top; i--) {
    //                 cout << matrix[i][left] << " ";
    //             }
    //             left++;
    //         }
    //     }

        
    // }


int main() {
    // Example 2D array
    vector<vector<int>> matrix = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    cout << "Spiral order: ";
    printSpiral(matrix);
    cout << endl;
    // spiralOrder(matrix);
    cout << endl;

    return 0;
}
