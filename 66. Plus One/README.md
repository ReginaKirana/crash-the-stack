# 66. Plus One

**Difficulty:** Easy

**Link:** [LeetCode Problem](https://leetcode.com/problems/plus-one/)

---

## 📝 Problem Statement

You are given a large integer represented as an integer array `digits`, where each `digits[i]` is the i-th digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

---

## 💡 Examples

### Example 1
Input: digits = [1,2,3]

Output: [1,2,4]  

Explanation: The array represents the integer 123. Incrementing by one gives 124.

### Example 2
Input: digits = [4,3,2,1]  

Output: [4,3,2,2]  

Explanation: The array represents the integer 4321. Incrementing by one gives 4322.

### Example 3
Input: digits = [9]  

Output: [1,0]  

Explanation: The array represents the integer 9. Incrementing by one gives 10.

---

## ✅ Constraints

* 1 <= digits.length <= 100
* 0 <= digits[i] <= 9
* `digits` does not contain any leading 0's

---

## 🔑 Key Ideas

* Traverse from the last digit to the first:
    * If the current digit is less than 9, increment it and return immediately.
    * If the current digit is 9, set it to 0 and continue to the next digit (carry over).
* If all digits are 9, prepend `1` at the beginning of the array.

---

**Note:**  
The clean solution code in C++ and Python is available in this folder for reference and practice. ✨