# 219. Contains Duplicate II

**Difficulty:** Easy

**Link:** [LeetCode Problem](https://leetcode.com/problems/contains-duplicate-ii/)

---

## 📝 Problem Statement

Given an integer array `nums` and an integer `k`, return `true` if there are **two distinct indices** `i` and `j` in the array such that:

- `nums[i] == nums[j]`, and  
- `abs(i - j) <= k`.

Otherwise, return `false`.

---

## 💡 Examples

### Example 1  
Input: nums = [1,2,3,1], k = 3  
Output: true  

### Example 2  
Input: nums = [1,0,1,1], k = 1  
Output: true  

### Example 3  
Input: nums = [1,2,3,1,2,3], k = 2  
Output: false  

---

## ✅ Constraints

* 1 <= nums.length <= 10⁵  
* -10⁹ <= nums[i] <= 10⁹  
* 0 <= k <= 10⁵  

---

## 🔑 Key Ideas

* Gunakan hash map (`dictionary`) untuk menyimpan nilai dan indeks terakhirnya.
* Untuk setiap elemen:
    * Jika elemen sudah pernah muncul dan selisih indeks saat ini dengan indeks sebelumnya **≤ k**, maka return `True`.
    * Jika tidak, perbarui indeks elemen tersebut di map.
* Waktu: O(n), Space: O(n)

---

**Note:**  
The clean solution code in C++ and Python is available in this folder for reference and practice. ✨
