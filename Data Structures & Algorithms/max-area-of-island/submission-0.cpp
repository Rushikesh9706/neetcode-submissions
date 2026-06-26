class Solution {
    int directions[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) { // Changed to int
        int ROWS = grid.size(), COLS = grid[0].size();
        int maxArea = 0;

        for (int r = 0; r < ROWS; r++) {
            for (int c = 0; c < COLS; c++) {
                if (grid[r][c] == 1) { // Changed '1' to 1
                    int currentArea = bfs(grid, r, c);
                    maxArea = max(maxArea, currentArea); 
                }
            }
        }
        return maxArea;
    }

    int bfs(vector<vector<int>>& grid, int r, int c) { // Changed to int
        queue<pair<int, int>> q;
        grid[r][c] = 0; // Changed '0' to 0
        q.push({r, c});
        int area = 1;

        while (!q.empty()) {
            auto node = q.front(); q.pop();
            int row = node.first, col = node.second;
            for (int i = 0; i < 4; i++) {
                int nr = row + directions[i][0];
                int nc = col + directions[i][1];
                if (nr >= 0 && nc >= 0 && nr < grid.size() &&
                    nc < grid[0].size() && grid[nr][nc] == 1) { // Changed '1' to 1
                    q.push({nr, nc});
                    area++;
                    grid[nr][nc] = 0; // Changed '0' to 0
                }
            }
        }
        return area;
    }
};