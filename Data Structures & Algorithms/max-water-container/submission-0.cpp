class Solution {
public:
    int maxArea(vector<int>& heights) {
        int  i=0;
        int j =heights.size()-1;
        int maxarea=0;

        while(i<j){
            int minheight = min(heights[i],heights[j]);
            int len = j-i;
            int area = minheight*len;

            maxarea = max(area,maxarea);
            if(heights[i]>heights[j]){
                j--;
            }
            else i++;
        }
        return maxarea;

    }
};
