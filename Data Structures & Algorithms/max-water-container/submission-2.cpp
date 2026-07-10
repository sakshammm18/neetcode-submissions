class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i =0;
        int j =heights.size()-1;
            int maxarea=0;
            int area=0;
            int height=0;
        while(i<=j){
           // int height =0;
            height=min(heights[i],heights[j]);
            int len=j-i;

             area = height*len;
             maxarea = max(maxarea,area);

            if(heights[i]>heights[j]){
                j--;
            }
            else i++;


        }
        return maxarea;
    }
};
