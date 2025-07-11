# 26. Remove Duplicates from Sorted Array

**Difficulty:** Easy  
**Link:** [LeetCode Problem](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)

---

## 📝 Problem Statement

Given an integer array `nums` sorted in non-decreasing order, remove the duplicates **in-place** such that each unique element appears only once. The relative order of the elements should be kept the same.

Return the number of unique elements `k` such that the first `k` elements of `nums` contain the unique elements in order.

---

## 💡 Examples

### Example 1
Input: nums = [1,1,2]
Output: 2
Explanation: The first two elements are [1,2].


### Example 2
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5
Explanation: The first five elements are [0,1,2,3,4].

## ✅ Constraints
- 1 <= nums.length <= 3 × 10⁴
- -100 <= nums[i] <= 100
- `nums` is sorted in non-decreasing order.

---

## 🔑 Key Ideas
- Use **two pointers** technique.
- Update the array **in-place** without using extra memory.
- Return the length of the unique portion of the array.

---

**Note:**  
The solution code is available in this folder. ✨