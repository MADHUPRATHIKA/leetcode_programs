void dfs(char** grid, int m, int n, int i, int j)
{
    if(i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == '0')
        return;

    grid[i][j] = '0';

    dfs(grid, m, n, i+1, j);
    dfs(grid, m, n, i-1, j);
    dfs(grid, m, n, i, j+1);
    dfs(grid, m, n, i, j-1);
}

int numIslands(char** grid, int gridSize, int* gridColSize)
{
    int count = 0;

    for(int i = 0; i < gridSize; i++)
    {
        for(int j = 0; j < gridColSize[0]; j++)
        {
            if(grid[i][j] == '1')
            {
                count++;
                dfs(grid, gridSize, gridColSize[0], i, j);
            }
        }
    }

    return count;
}