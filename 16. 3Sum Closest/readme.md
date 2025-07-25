# 16. 3Sum Closest

**Difficulty:** Medium

**Link:** [LeetCode Problem](https://leetcode.com/problems/3sum-closest/)

---

## 📝 Problem Statement

Given an integer array `nums` of length `n` and an integer `target`, find **three integers in nums such that the sum is closest to target**.

Return the **sum of the three integers**.

You may assume that **each input would have exactly one solution**.

---

## 💡 Examples

### Example 1  
Input: nums = [-1,2,1,-4], target = 1  
Output: 2  
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2)

---

### Example 2  
Input: nums = [0,0,0], target = 1  
Output: 0  
Explanation: The sum that is closest to the target is 0.

---

## ✅ Constraints

* 3 <= nums.length <= 500  
* -1000 <= nums[i] <= 1000  
* -10⁴ <= target <= 10⁴

---

## 🔑 Key Ideas

* Sort the array first.
* Fix one element and use two pointers (`left`, `right`) to find the best combination.
* Track the closest sum by comparing `abs(curr_sum - target)` with the best one so far.
* Return early if exact match is found (`curr_sum == target`).

---

**Note:**  
The clean solution code in C++ and Python is available in this folder for reference and practice. ✨
