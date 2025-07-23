# 56. Merge Intervals

**Difficulty:** Medium

**Link:** [LeetCode Problem](https://leetcode.com/problems/merge-intervals/)

---

## 📝 Problem Statement

Given an array of intervals where `intervals[i] = [start_i, end_i]`, merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

---

## 💡 Examples

### Example 1  
**Input:** `intervals = [[1,3],[2,6],[8,10],[15,18]]`  
**Output:** `[[1,6],[8,10],[15,18]]`  
**Explanation:** Intervals [1,3] and [2,6] overlap, so they are merged into [1,6].

---

### Example 2  
**Input:** `intervals = [[1,4],[4,5]]`  
**Output:** `[[1,5]]`  
**Explanation:** Intervals [1,4] and [4,5] are considered overlapping.

---

## ✅ Constraints

- `1 <= intervals.length <= 10⁴`  
- `intervals[i].length == 2`  
- `0 <= start_i <= end_i <= 10⁴`

---

## 🔑 Key Ideas

- Sort the intervals by their starting point.
- Use a result list to store merged intervals.
- Iterate through each interval:
  - If it overlaps with the last interval in the result, merge them by updating the end.
  - If not, add it as a new interval.
- Time Complexity: **O(n log n)** (due to sorting)  
- Space Complexity: **O(n)**

---

**Note:**  
Clean solution code in C++ and Python is provided in this folder for better understanding and practice. ✨
