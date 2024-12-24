// https://leetcode.com/problems/search-a-2d-matrix/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int start = 0;
        int end = rows * cols - 1;
        
        while (start <= end) {
            int mid = start + (end - start) / 2;
            int element = matrix[mid / cols][mid % cols];
            
            if (element == target) {
                return true;
            }
            else if (element < target) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        
        return false;
    }
};

int main() {
    Solution solution;
    int rows, cols, target;
    
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << "Enter the target value: ";
    cin >> target;

    bool result = solution.searchMatrix(matrix, target);
    if (result) {
        cout << "Target " << target << " found in the matrix." << endl;
    } else {
        cout << "Target " << target << " not found in the matrix." << endl;
    }

    return 0;
}
