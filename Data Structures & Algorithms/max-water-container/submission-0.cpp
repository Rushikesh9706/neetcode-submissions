class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int x = 0;
        int y = n-1;
        int area = 0;

        while(y>x){
            int h = min(heights[x],heights[y]);
            int w = y-x;
            area = max(area,h*w);
            if(heights[x]<heights[y]){
                x++;
            }
            else {
                y--;
            }


        }
        return area;
    }
};
