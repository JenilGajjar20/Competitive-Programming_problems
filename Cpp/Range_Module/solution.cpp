class RangeModule {
private:
    // Nested class to represent an interval with start and end values.
    class Interval {
        public:
            int start;
            int end;
            // Constructor to initialize an interval with given start and end.
            Interval (int left, int right) {
                start = left;
                end = right;
            }
    };
    // Vector to store all intervals.
    vector<Interval> intervals;
    
public:
    // Constructor for RangeModule.
    RangeModule() {}
    
    // Add a new range [left, right), merging overlapping intervals.
    void addRange(int left, int right) {
        vector<Interval> newIntervals;
        int i = 0, n = intervals.size();
        // Traverse intervals and merge with the new range if overlapping.
        while (i < n) {
            if (left > intervals[i].end) { // No overlap, add current interval.
                newIntervals.push_back(intervals[i]);
            } else if (intervals[i].start > right) { // No further overlap, insert new range.
                newIntervals.push_back(Interval(left, right));
                break;
            } else { // Overlap, merge intervals.
                left = min(left, intervals[i].start);
                right = max(right, intervals[i].end);
            }
            i++;
        }
        // If all intervals have been processed, add the merged range.
        if (i == n) {
            newIntervals.push_back(Interval(left, right));
        }
        // Add remaining non-overlapping intervals.
        while (i < n) {
            newIntervals.push_back(intervals[i]);
            i++;
        }
        intervals = newIntervals;
    }
    
    // Query if the entire range [left, right) is completely covered.
    bool queryRange(int left, int right) {
        int low = 0, high = intervals.size()-1;
        // Binary search to find the interval that may cover [left, right).
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (intervals[mid].end <= left) { // Move right if current interval ends before the range.
                low = mid + 1;
            } else if (right <= intervals[mid].start) { // Move left if current interval starts after the range.
                high = mid - 1;
            } else { // Check if the range is fully covered by the current interval.
                if (left >= intervals[mid].start && right <= intervals[mid].end) {
                    return true;
                } else {
                    return false;
                }
            }
        }
        return false;
    }
    
    // Remove the range [left, right), splitting intervals if necessary.
    void removeRange(int left, int right) {
        vector<Interval> newIntervals;
        int i = 0, n = intervals.size();
        // Traverse intervals and adjust the intervals based on the removal range.
        while (i < n) {
            if (left >= intervals[i].end) { // No overlap, add current interval.
                newIntervals.push_back(intervals[i]);
            } else if (intervals[i].start >= right) { // No further overlap, add remaining intervals.
                newIntervals.push_back(intervals[i]);
            } else { // Overlap, split the interval if necessary.
                if (intervals[i].start < left) {
                    newIntervals.push_back(Interval(intervals[i].start, left)); // Left part remains.
                }
                if (intervals[i].end > right) {
                    newIntervals.push_back(Interval(right, intervals[i].end)); // Right part remains.
                }
            }
            i++;
        }
        intervals = newIntervals;
    }
};

/**
 * Your RangeModule object will be instantiated and called as such:
 * RangeModule* obj = new RangeModule();
 * obj->addRange(left,right);
 * bool param_2 = obj->queryRange(left,right);
 * obj->removeRange(left,right);
 */
