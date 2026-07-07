/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {

        map<int, int> events;

        for (auto &it : intervals) {
            events[it.start]++;
            events[it.end]--;
        }

        int overlap = 0;
        int maxOverlap = 0;

        for (auto &it : events) {
            overlap += it.second;
            maxOverlap = max(maxOverlap, overlap);
        }

        return maxOverlap;
    }
};
