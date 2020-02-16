/*
Given a m * n matrix grid which is sorted in non-increasing order both row-wise and column-wise.

Return the number of negative numbers in grid.



Example 1:

Input: grid = [[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]
Output: 8
Explanation: There are 8 negatives number in the matrix.
Example 2:

Input: grid = [[3,2],[1,0]]
Output: 0
Example 3:

Input: grid = [[1,-1],[-1,-1]]
Output: 3
Example 4:

Input: grid = [[-1]]
Output: 1
*/
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size();
        int c=0;
        int n=grid[0].size();
        if(m==0)
            return 0;

        for(int i=0;i<m;){
            if(grid[i][n-1]>=0)
                i++;
            else{
                for(int j=n-1;j>=0;j--){
                if(grid[i][j]<0){
                    c++;
                }

            }
                i++;

            }

        }
        return c;
    }
};