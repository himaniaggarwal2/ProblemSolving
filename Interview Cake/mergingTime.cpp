// https://www.interviewcake.com/question/cpp/merging-ranges?course=fc1&section=sorting-searching-logarithms

bool compareMeetingsByStartTime(
    const Meeting& firstMeeting,
    const Meeting& secondMeeting)
{
    return firstMeeting.getStartTime() < secondMeeting.getStartTime();
}

vector<Meeting> mergeRanges(const vector<Meeting>& meetings)
{
    // sort by start time
    vector<Meeting> sortedMeetings(meetings);
    sort(sortedMeetings.begin(), sortedMeetings.end(), compareMeetingsByStartTime);

    // initialize mergedMeetings with the earliest meeting
    vector<Meeting> mergedMeetings;
    mergedMeetings.push_back(sortedMeetings.front());

    for (const Meeting& currentMeeting : sortedMeetings) {
        Meeting& lastMergedMeeting = mergedMeetings.back();

        if (currentMeeting.getStartTime()
                <= lastMergedMeeting.getEndTime()) {
            // if the current meeting overlaps with the last merged meeting, use the
            // later end time of the two
            lastMergedMeeting.setEndTime(max(lastMergedMeeting.getEndTime(),
                currentMeeting.getEndTime()));
        }
        else {
            // add the current meeting since it doesn't overlap
            mergedMeetings.push_back(currentMeeting);
        }
    }

    return mergedMeetings;
}

// O(nlgn) time and O(n)O(n) space.

// Even though we only walk through our vector of meetings once to merge them, we sort 
// all the meetings first, giving us a runtime of O(n\lg{n})O(nlgn). It's worth 
// noting that if our input were sorted, we could skip the sort and do this in O(n)O(n) 
// time!

// We create a new vector of merged meeting times. In the worst case, none of the 
// meetings overlap, giving us a vector identical to the input vector. Thus we have a 
// worst-case space cost of O(n)O(n).

// I/P::[Meeting(0, 1), Meeting(3, 5), Meeting(4, 8), Meeting(10, 12), Meeting(9, 10)]
// O/P::[Meeting(0, 1), Meeting(3, 8), Meeting(9, 12)]