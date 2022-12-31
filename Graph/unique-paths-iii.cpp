// Complexity
// Time complexity: O(4^n), where n is the number of 0s in the grid (the number of paths that can be taken). This is because the method calls itself four times for each position in the grid, and it will do this for every path that can be taken.
// Space complexity: O(n), where n is the number of elements in the grid. This is because the "func" method stores each position in the grid in its call stack as it recursively calls itself.

// Explain:
// The first line initializes a class-level variable called "ans" to 0.
// The second line defines a method called "func" which takes in a 2D vector called "grid", as well as integers "i" and "j" representing the current position in the grid, and an integer "c" representing the number of paths left to take.
// The next line checks if the current position is outside the bounds of the grid (i.e. if "i" or "j" are negative or if "i" or "j" are greater than or equal to the size of the grid). If this is the case, the method returns without doing anything.
// The next line checks if the current position in the grid is -1 (which represents an obstacle that cannot be passed) or if it is 3 (which represents a position that has already been visited). If either of these conditions are true, the method returns without doing anything.
// The next line checks if the current position in the grid is 2 (the ending point) and if the number of paths left to take ("c") is 0. If both of these conditions are true, it increments the "ans" variable by 1 and returns.
// The next line checks if the current position in the grid is 2 (the ending point). If it is, the method returns without doing anything.
// The next line sets the current position in the grid to 3 (a position that has already been visited).
// The final four lines call the "func" method again, with the current position shifted one space in each of the four cardinal directions (up, down, left, right). The number of paths left to take is also decremented by 1.
// The "uniquePathsIII" method then initializes variables "x" and "y" to the position of the starting point (1) in the grid, and a variable "c" to 0. It then loops through the grid and sets "x" and "y" to the position of the starting point, and increments "c" for every 0 it finds in the grid (representing a path that can be taken).
// Finally, it calls the "func" method with the grid, the position of the starting point, and the number of paths left to take (c+1, to account for the starting point). It then returns the value of "ans" as the result.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int ans=0;

    void func(vector<vector<int>> grid,int i,int j,int c){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()){
            return;
        }
        if(grid[i][j]==-1 || grid[i][j]==3){
            return;
        }
        if(grid[i][j]==2 && c==0){
            ans++;
            return;
        }
        if(grid[i][j]==2){
            return;
        }
        grid[i][j]=3;
        func(grid,i,j+1,c-1);
        func(grid,i+1,j,c-1);
        func(grid,i-1,j,c-1);
        func(grid,i,j-1,c-1);
    }

    int uniquePathsIII(vector<vector<int>>& grid) {
        int x,y,c=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    x=i;
                    y=j;
                }
                if(grid[i][j]==0){
                    c++;
                }
            }
        }
        func(grid,x,y,c+1);
        return ans;
    }
};