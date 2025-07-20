# 136. Single Number

**Difficulty:** Easy

**Link:** [LeetCode Problem](https://leetcode.com/problems/single-number/)

---

## 📝 Problem Statement

Given a **non-empty** array of integers `nums`, every element appears **twice** except for one. Find that single one.

You must implement a solution with a **linear runtime complexity** and use only **constant extra space**.

---

## 💡 Examples

### Example 1  
Input: nums = [2,2,1]  
Output: 1  

### Example 2  
Input: nums = [4,1,2,1,2]  
Output: 4  

### Example 3  
Input: nums = [1]  
Output: 1  

---

## ✅ Constraints

* 1 <= nums.length <= 3 * 10⁴  
* -3 * 10⁴ <= nums[i] <= 3 * 10⁴  
* Each element in the array appears twice except for one element which appears only once.

---

## 🔑 Key Ideas

* Use **bitwise XOR** operation to cancel out duplicates:
    * `a ^ a = 0`
    * `a ^ 0 = a`
* XOR-ing all elements will cancel out the ones that appear twice and leave the unique one.

* This approach guarantees:
    * **Time complexity:** O(n)
    * **Space complexity:** O(1)

---

**Note:**  
The clean solution code in C++ and Python is available in this folder for reference and practice. ✨
