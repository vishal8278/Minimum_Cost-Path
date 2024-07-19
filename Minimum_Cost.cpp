// TIME complexity O(row*col)
// SPACE complexity O(col)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the minimum cost path in a matrix
int minCostPath(const vector<vector<int>>& cost) {
    int rows = cost.size();    // Number of rows in the matrix
    int cols = cost[0].size(); // Number of columns in the matrix

    // DP array to store the minimum cost to reach each cell in the current row
    vector<int> dp(cols, 0);

    // Initialize the first cell
    dp[0] = cost[0][0];

    // Initialize the first row (can only come from the left)
    for (int j = 1; j < cols; ++j) {
        dp[j] = dp[j - 1] + cost[0][j];
    }

    // Temporary array to store the minimum cost for the previous row
    vector<int> prev(cols, 0);

    // Fill the rest of the DP array
    for (int i = 1; i < rows; ++i) {
        // Swap the dp and prev arrays
        swap(dp, prev);

        // Initialize the first column of the current row
        dp[0] = prev[0] + cost[i][0];

        // Fill the rest of the current row
        for (int j = 1; j < cols; ++j) {
            dp[j] = cost[i][j] + min(prev[j], dp[j - 1]);
        }
    }

    return dp[cols - 1];
}

int main() {
     int rows, cols;

    // Input number of rows and columns
    cout << "Enter number of rows : ";
    cin >> rows;
    cout << "Enter number columns : ";
    cin >> cols;

// condtion if user give invalid input
   if(rows<=0 || cols<=0){
  cout<<"please enter valid number";
 return 0;
   }

    // Declare a 2D vector with the given dimensions
    vector<vector<int>> cost(rows, vector<int>(cols));

    // Input matrix element
    cout <<"YOU NEED to ENTER  " <<rows*cols<< " ELEMENTS :" << endl<<endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
          cout<<"WRITE FOR "<<i+1<<" ROWS ,"<<j+1<<" COLUMNS :";
            cin >> cost[i][j];
        }
    }

    cout << "Minimum cost to reach bottom-right corner is: " << minCostPath(cost) << endl;

    return 0;
}