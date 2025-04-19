// https://leetcode.com/problems/spiral-matrix/description/
// complexity O(m*n)
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        int rows = matrix.size();
        int cols = matrix[0].size();
        
        int count = 0;
        int total = rows * cols;
        
        int startRow = 0, endRow = rows - 1;
        int startCol = 0, endCol = cols - 1;
        
        while(count < total) {
            // print starting row
            for(int index = startCol; count < total && index <= endCol; index++) {
                ans.push_back(matrix[startRow][index]);
                count++;
            }
            startRow++;
            // print ending column
            for(int index = startRow; count < total && index <= endRow; index++) {
                ans.push_back(matrix[index][endCol]);
                count++;
            }
            endCol--;
            // printing ending row
            for(int index = endCol; count < total && index >= startCol; index--) {
                ans.push_back(matrix[endRow][index]);
                count++;
            }
            endRow--;
            // printing starting column
            for(int index = endRow; count < total && index >= startRow; index--) { // corrected condition
                ans.push_back(matrix[index][startCol]);
                count++;
            }
            startCol++;
        }
        return ans;
    }
};

int main() {
    // Driver code to test the spiralOrder function
    Solution solution;

    // Example 1
    vector<vector<int>> matrix1 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> result1 = solution.spiralOrder(matrix1);
    cout << "Spiral Order of matrix1: ";
    for (int num : result1) {
        cout << num << " ";
    }
    cout << endl;

    // Example 2
    vector<vector<int>> matrix2 = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    vector<int> result2 = solution.spiralOrder(matrix2);
    cout << "Spiral Order of matrix2: ";
    for (int num : result2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
