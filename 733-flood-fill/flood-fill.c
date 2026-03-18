/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
void dfs(int** image, int imageSize, int* imageColSize, int r, int c, int oldColor, int newColor)
{
    if(r < 0 || r >= imageSize || c < 0 || c >= imageColSize[0] || image[r][c] != oldColor)
        return;

    image[r][c] = newColor;

    dfs(image, imageSize, imageColSize, r+1, c, oldColor, newColor);
    dfs(image, imageSize, imageColSize, r-1, c, oldColor, newColor);
    dfs(image, imageSize, imageColSize, r, c+1, oldColor, newColor);
    dfs(image, imageSize, imageColSize, r, c-1, oldColor, newColor);
}

int** floodFill(int** image, int imageSize, int* imageColSize, int sr, int sc, int color, int* returnSize, int** returnColumnSizes)
{
    int oldColor = image[sr][sc];

    *returnSize = imageSize;
    *returnColumnSizes = imageColSize;

    if(oldColor == color)
        return image;

    dfs(image, imageSize, imageColSize, sr, sc, oldColor, color);

    return image;
}