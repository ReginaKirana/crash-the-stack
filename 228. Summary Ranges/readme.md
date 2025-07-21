# 228. Summary Ranges

**Difficulty:** Easy

**Link:** [LeetCode Problem](https://leetcode.com/problems/summary-ranges/)

---

## 📝 Problem Statement

You are given a **sorted unique** integer array `nums`.

A range `[a, b]` is the set of all integers from `a` to `b` (inclusive).

Return the **smallest sorted list of ranges** that cover all the numbers in the array **exactly**. That is, each element of `nums` is covered by exactly one of the ranges, and there is no integer `x` such that `x` is in one of the ranges but not in `nums`.

Each range `[a, b]` in the list should be output as:
- `"a->b"` if `a != b`
- `"a"` if `a == b`

---

## 💡 Examples

### Example 1  
Input: nums = [0,1,2,4,5,7]  
Output: ["0->2","4->5","7"]  
Explanation: The ranges are:  
[0,2] → "0->2"  
[4,5] → "4->5"  
[7,7] → "7"  

---

### Example 2  
Input: nums = [0,2,3,4,6,8,9]  
Output: ["0","2->4","6","8->9"]  
Explanation: The ranges are:  
[0,0] → "0"  
[2,4] → "2->4"  
[6,6] → "6"  
[8,9] → "8->9"  

---

## ✅ Constraints

* 0 <= nums.length <= 20  
* -2³¹ <= nums[i] <= 2³¹ - 1  
* All the values of `nums` are **unique**  
* `nums` is **sorted in ascending order**

---

## 🔑 Key Ideas

* Traverse the array and keep track of the **start** of a new range.
* When a number is **not consecutive** from the previous, close the current range and start a new one.
* At the end, don't forget to close the **last range**.
* Edge case: handle empty input.

---

**Note:**  
The clean solution code in C++ and Python is available in this folder for reference and practice. ✨
