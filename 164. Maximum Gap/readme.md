# 164. Maximum Gap

**Difficulty:** Medium

**Link:** [LeetCode Problem](https://leetcode.com/problems/maximum-gap/)

---

## 📝 Problem Statement

Given an integer array `nums`, return the **maximum difference between two successive elements** in its **sorted form**.

If the array contains fewer than two elements, return `0`.

You **must write an algorithm that runs in linear time and uses linear extra space**.

---

## 💡 Examples

### Example 1  
Input: nums = [3,6,9,1]  
Output: 3  
Explanation: The sorted form is [1,3,6,9]. The maximum difference is max(3-1, 6-3, 9-6) = 3.

---

### Example 2  
Input: nums = [10]  
Output: 0  
Explanation: The array contains fewer than 2 elements.

---

## ✅ Constraints

* 1 <= nums.length <= 10⁵  
* 0 <= nums[i] <= 10⁹  

---

## 🔑 Key Ideas

* A brute-force solution using full sorting has O(n log n) time complexity.
* To achieve **O(n)** time, use **bucket sort** (based on the pigeonhole principle).
* Divide the number range into `n - 1` buckets.
* The maximum gap **will not** be within a bucket, but **between** buckets:
  - So we only track min and max in each bucket.
  - Skip empty buckets and compare min of current bucket with max of previous non-empty one.
* Time: O(n), Space: O(n)

---

**Note:**  
The clean solution code in C++ and Python is available in this folder for reference and practice. ✨
