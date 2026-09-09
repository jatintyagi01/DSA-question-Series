class Solution {
public:
    int maxArea(vector<int>& height) {
        int width = height.size() - 1;
        int s = 0;
        int e = height.size() - 1;
        int maxArea = 0;

        while(s < e){
            int area = width * min(height[s],height[e]);
            
            if(height[s] < height[e]){
                s++;
            }
            else{
                e--;
            }
            width--;
            maxArea =  max(maxArea, area);
        }
        return maxArea;
    }
};