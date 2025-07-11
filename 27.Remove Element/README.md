# 27. Remove Element

**Difficulty:** Easy
**Link:** [LeetCode Problem](https://leetcode.com/problems/remove-element/)

---

## 📝 Problem Statement

Given an integer array `nums` and an integer `val`, remove all occurrences of `val` in-place. The order of the elements may be changed. Then return the number of elements in `nums` which are not equal to `val`.

Return the number of valid elements `k` such that the first `k` elements of `nums` contain the elements not equal to `val`. The remaining elements are not important.

---

## 💡 Examples

### Example 1
Input: nums = [3,2,2,3], val = 3

Output: 2

Explanation: The first two elements are [2,2].

### Example 2
Input: nums = [0,1,2,2,3,0,4,2], val = 2

Output: 5

Explanation: The first five elements can be [0,1,4,0,3] in any order.

---

## ✅ Constraints

* 0 <= nums.length <= 100
* 0 <= nums\[i] <= 50
* 0 <= val <= 100

---

## 🔑 Key Ideas

* Use **two pointers** to overwrite unwanted values.
* In-place removal without extra space.
* Return the new length of the modified array.

---

**Note:**
The solution code is available in this folder. ✨