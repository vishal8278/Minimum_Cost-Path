* Minimum Cost Path in a Matrix
This program calculates the minimum cost path to reach the bottom-right corner of a given matrix starting from the top-left corner. It uses dynamic programming to find the solution efficiently.

Time Complexity
O(rows * cols)
Space Complexity
O(cols)

* How the Program Works
Steps to Calculate Minimum Cost Path:
1.Input Matrix Dimensions: The program first takes the number of rows and columns as input from the user.
2.Validation of Input: It ensures the input dimensions are valid (i.e., greater than zero).
3.Matrix Initialization: The program initializes a 2D vector (matrix) of the given dimensions.
4.Input Matrix Elements: The user is prompted to input the matrix elements.
5.Dynamic Programming Approach: The program calculates the minimum cost path using a dynamic programming array (dp) that stores the minimum cost to reach each cell in the current row.
6.Result: The program outputs the minimum cost to reach the bottom-right corner of the matrix.


* Instructions to Run the Program

1.Compile the Program: Use a C++ compiler to compile the code.
     g++ -o minCostPath minCostPath.cpp

2. ./minCostPath

3.Input: Enter the number of rows and columns followed by the matrix elements as prompted.

4.Output: The program will output the minimum cost to reach the bottom-right corner of the matrix.

Enter number of rows: 3
Enter number of columns: 3
You need to enter 9 elements:

Enter value for 1 row, 1 column: 1
Enter value for 1 row, 2 column: 2
Enter value for 1 row, 3 column: 3
Enter value for 2 row, 1 column: 4
Enter value for 2 row, 2 column: 8
Enter value for 2 row, 3 column: 2
Enter value for 3 row, 1 column: 1
Enter value for 3 row, 2 column: 5
Enter value for 3 row, 3 column: 3

Minimum cost to reach bottom-right corner is: 12

* Notes
Ensure the matrix dimensions and elements are positive integers.
The program handles invalid input by prompting the user to enter valid numbers for rows and columns.

