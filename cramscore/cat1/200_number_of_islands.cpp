/*
Premises
Given an m x n 2D binary grid which represents a map of '1's and '0's, return the number of islands 
island: is surrounded by water and formed by connecting adjacent lands horizontally or vertically 
all four edges of the grid are surrounded by water 
*/

/*
Attempt 2: passed
Runtime: 12 ms, faster than 94.02% of C++ online submissions for Number of Islands.
Memory Usage: 9.4 MB, less than 86.40% of C++ online submissions for Number of Islands.

Notes 
I realized there is no need to keep track of the visted map, it costs too much memory and involves ugly allcoation. 
Instead, whenever I am traversing the grid and run into 1, change that to 0 and run dfs recursively again to each neighbors 
when I return from every dfs call, then increment the counter. Since I am modifying the grid as I traverse, I only need to 
search for non '1' cells. 
*/

class Solution
{
public:
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    int numIslands(vector<vector<char>> &grid)
    {
        int m = grid.size();
        if (grid.empty())
        {
            return 0;
        }

        int n = grid[0].size();
        int x = 0;
        int y = 0;

        int count = 0;
        for (x = 0; x < m; x++)
        {
            for (y = 0; y < n; y++)
            {
                if (grid[x][y] == '1')
                {
                    dfs(grid, x, y, m, n);
                    count++;
                }
            }
        }
        return count;
    }

    void dfs(vector<vector<char>> &grid, int x, int y, int m, int n)
    {
        if ((x == m || y == n || x < 0 || y < 0 || grid[x][y] != '1'))
        {
            return;
        }

        grid[x][y] = 0;
        for (int i = 0; i < 4; ++i)
        {
            dfs(grid, x + dx[i], y + dy[i], m, n);
        }
    }
};




/*
Attempt 1 
I can treat the map as a graph, and then run breadth or depth first search on every cell until I cannot 
find 1 in the adjacent 4 tiles. I will keep an extra "marker" map with the same dimension to make sure I only search for next ocean tile 

1. extract the number of rows and columns from the given grid 
- num_row = grid.length, num_col = grid[0].length 

2. create a new matrix with the same dimensions, but this is only booleans 


3. Now do the traversal... this is going to be DFS or BFS, but I don't remember how to do it lmao 


*/

/*

#include <stdio.h>
using namespace std;

class Solution
{
public:
    int dir_x[4] = {-1, 0, 1, 0};
    int dir_y[4] = {0, 1, 0, -1};
    size_t num_row, num_col = 0;

    int numIslands(vector<vector<char>> &grid)
    {
        int num_islands = 0;

        num_row = grid.size();
        num_col = grid[0].size();

        int *visited[num_row];
        for (i = 0; i < num_row; ++i)
        {
            visited[i] = (int *)calloc(num_col, sizeof(int));
        }

        for (int i = 0; i < num_row; ++i)
        {
            for (int j = 0; j < num_col++ j)
            {
                if (visited[i][j] == 0)
                {
                    bfs(i, j, grid, num_islands, visited);
                }
            }
        }

        for (i = 0; i < num_row; ++i)
        {
            free(visited[i]);
        }

        return num_islands;
    }

    void bfs(int x, int y, vector<vector<char>> &grid, int &counter, int *visited[])
    {
        queue<pair<int, int>> q;
        q.push(make_pair(x, y));

        while (!q.empty())
        {
            x = q.front().first;
            y = q.front().second;
            q.pop();

            for (int i = 0; i < 4; ++i)
            {
                int nx = x + dir_x[i];
                int ny = y + dir_y[i];
                if (nx < 1 || nx > num_row || ny < 1 || ny > num_col)
                {
                    continue;
                }

                visited[nx][ny] = 1;

                if (grid[nx][ny] == 1)
                {
                    q.push(make_pair(nx, ny));
                }
            }
        }

        counter++;
    }
};
*/
