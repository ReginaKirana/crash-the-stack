# 10. Regular Expression Matching

**Difficulty:** Hard

**Link:** [LeetCode Problem](https://leetcode.com/problems/regular-expression-matching/)

---

## 📝 Problem Statement

Given an input string `s` and a pattern `p`, implement regular expression matching with support for:
- `.` (dot) which matches any single character, and
- `*` (asterisk) which matches zero or more of the preceding element.

The matching should cover the entire input string (not partial).

---

## 💡 Examples

### Example 1  
Input: s = "aa", p = "a"  
Output: false  
Explanation: "a" does not match the entire string "aa".

---

### Example 2  
Input: s = "aa", p = "a*"  
Output: true  
Explanation: '*' means zero or more of the preceding element, 'a'. Therefore, by repeating 'a' once, it becomes "aa".

---

### Example 3  
Input: s = "ab", p = ".*"  
Output: true  
Explanation: ".*" means "zero or more (*) of any character (.)".

---

## ✅ Constraints

* 1 <= s.length <= 20  
* 1 <= p.length <= 20  
* s contains only lowercase English letters.  
* p contains only lowercase English letters, '.', and '*'.  
* It is guaranteed for each appearance of the character '*', there will be a previous valid character to match.

---

## 🔑 Key Ideas

* **Dynamic Programming** is used to build a solution from smaller subproblems.
* Use a 2D table `dp[i][j]` where `i` is the length of string `s` and `j` is the length of pattern `p`.  
  `dp[i][j]` represents if the substring `s[0..i-1]` matches with the pattern `p[0..j-1]`.
* Base Case: `dp[0][0] = true`, an empty string matches an empty pattern.
* For `*`, it can either match 0 characters (skip the last two pattern characters) or match one or more characters if the preceding character matches the current string character.
* Time complexity: **O(m * n)** where `m` is the length of string `s` and `n` is the length of pattern `p`.
* Space complexity: **O(m * n)** due to the 2D DP table.

---

**Note:**  
The clean solution code in C++ and Python is available in this folder for reference and practice. ✨
