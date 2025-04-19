// https://www.naukri.com/code360/problems/print-like-a-wave_893268?leftPanelTabValue=PROBLEM
#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for(int j=0;j<mCols;j++){
        // col is odd
        // goes bottom to top
        if(j&1){
            for(int i=nRows-1;i>=0;i--){
                // cout<<arr[i][j];
                ans.push_back(arr[i][j]);
            }
        }
        // goes top to bottom
        else{
            for(int i=0;i<nRows;i++){
                // cout<<arr[i][j];
                ans.push_back(arr[i][j]);
            }
        }
    }
    return ans;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> arr(N, vector<int>(M));
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                cin >> arr[i][j];
            }
        }
        vector<int> result = wavePrint(arr, N, M);
        for (int val : result) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}