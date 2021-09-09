// https://www.lintcode.com/problem/920/
/**
 * Definition of Interval:
 * classs Interval {
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    /**
     * @param intervals: an array of meeting time intervals
     * @return: if a person could attend all meetings
     */
    bool canAttendMeetings(vector<Interval> &intervals) {
        std::sort(intervals.begin(),intervals.end(),[&](Interval &a,Interval &b){
            return a.end<b.end;
        });
        vector<Interval> res;
       for(auto &interval:intervals){
           if(res.empty()) res.push_back(interval);
           else{
                if(res.back().end> interval.start){
                    return false;
                }
                else{
                    res.push_back(interval);
                }
           }
       }
       return true;
    }
};