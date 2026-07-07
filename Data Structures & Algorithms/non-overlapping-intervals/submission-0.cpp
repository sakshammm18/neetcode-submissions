class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        int count = 0;
        int i = 0;

        while (i < intervals.size() - 1) {

            // If overlapping
            if (intervals[i][1] > intervals[i + 1][0]) {

                // Remove the interval with the larger ending time
                if (intervals[i][1] > intervals[i + 1][1]) {
                    intervals.erase(intervals.begin() + i);
                } else {
                    intervals.erase(intervals.begin() + i + 1);
                }

                count++;
            }
            else {
                i++;
            }
        }

        return count;
    }
};